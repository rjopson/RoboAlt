/* Generated code for Python module 'scipy.optimize._trustregion_constr.tr_interior_point'
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

/* The "_module_scipy$optimize$_trustregion_constr$tr_interior_point" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_trustregion_constr$tr_interior_point;
PyDictObject *moduledict_scipy$optimize$_trustregion_constr$tr_interior_point;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_scaling;
static PyObject *const_str_plain_get_slack;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_tuple_str_plain_s_i_tuple;
static PyObject *const_str_digest_56456595d608b182204bbaf8564dd88d;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_32d9ad0dfe486b1c5890d5c661c1418a;
extern PyObject *const_str_plain___name__;
static PyObject *const_tuple_58de573b77a8e99da9e6056acb3af4fa_tuple;
static PyObject *const_str_digest_08e58937c577423daa7b15fb7e3a0bb0;
static PyObject *const_str_digest_3ca425fc2a1ac218dddc5c722ff26f77;
static PyObject *const_str_digest_d42ae27d5a80d6ad74d4236844440be5;
extern PyObject *const_str_plain_ones;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain_terminate;
static PyObject *const_str_plain_BarrierSubproblem;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_inf;
extern PyObject *const_str_plain___file__;
static PyObject *const_float_minus_0_995;
extern PyObject *const_str_plain_sum;
static PyObject *const_str_digest_4dd7d2ffdb5698ddf2d7ee044f2ea0a5;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_bool;
static PyObject *const_tuple_995ddd2320196c4ab97239db53e10e95_tuple;
extern PyObject *const_str_plain_empty;
extern PyObject *const_float_minus_1_5;
static PyObject *const_str_digest_bb4fd4f69e5f3ce80e76facc7c974cb6;
extern PyObject *const_str_plain_jac;
static PyObject *const_str_plain_gradient_and_jacobian;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_fun0;
static PyObject *const_str_digest_45e05aa76513ae162c4c455c5effcf03;
extern PyObject *const_str_plain_where;
static PyObject *const_str_plain_primal_dual;
static PyObject *const_str_digest_33447fab4f89975dc60ca57bf6f5d536;
extern PyObject *const_tuple_str_plain_equality_constrained_sqp_tuple;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_indptr;
extern PyObject *const_str_plain_constr;
extern PyObject *const_str_plain_toarray;
extern PyObject *const_str_plain_equality_constrained_sqp;
extern PyObject *const_str_plain_new_data;
extern PyObject *const_str_plain_cg_info;
extern PyObject *const_str_plain_n_ineq;
extern PyObject *const_str_plain_optimality;
static PyObject *const_str_plain_J_aux;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_full;
static PyObject *const_str_plain_S_Hs_S;
extern PyObject *const_str_plain_hstack;
static PyObject *const_str_plain_jac0;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_block;
static PyObject *const_str_digest_87dde4f28003efc55d36f8bbb862786d;
extern PyObject *const_dict_6ccf1996a79e7bc95b345c0d39aef510;
static PyObject *const_str_plain__compute_jacobian;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_v_ineq;
extern PyObject *const_str_plain_diag;
extern PyObject *const_str_plain_data;
static PyObject *const_str_digest_22c741513c60e1271b03ce1a6dfc3b19;
static PyObject *const_str_plain__assemble_sparse_jacobian;
extern PyObject *const_str_plain_s;
static PyObject *const_str_plain_log_s;
extern PyObject *const_str_plain_n_vars;
static PyObject *const_str_plain_primal;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_tolerance;
static PyObject *const_str_digest_1d88147663a9538d4de25ab0bac15927;
static PyObject *const_str_plain_J_ineq;
static PyObject *const_str_plain_get_variables;
extern PyObject *const_str_plain_J;
static PyObject *const_str_plain_c_ineq;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_g;
extern PyObject *const_str_plain_last_iteration_failed;
static PyObject *const_str_digest_e7e083070964387380dfadc8ed8aae91;
extern PyObject *const_str_plain_constr_violation;
extern PyObject *const_str_plain_x0;
static PyObject *const_tuple_008871c5e2e9dcdb99bb3793c139285e_tuple;
extern PyObject *const_str_plain_indices;
static PyObject *const_str_plain_function_and_constraints;
extern PyObject *const_str_plain_arange;
static PyObject *const_str_digest_43002d28627b3a306b90b51e48c0224e;
extern PyObject *const_str_plain_mask;
extern PyObject *const_str_plain_tr_radius;
extern PyObject *const_str_plain_xtol;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_fun;
static PyObject *const_str_plain_g_cond;
static PyObject *const_tuple_2d117db03d7f26e1142196282f958b44_tuple;
static PyObject *const_str_plain_enforce_feasibility;
static PyObject *const_tuple_41e3c09175f46f5c28896f6e9e4eb2e9_tuple;
static PyObject *const_str_digest_53f0ac0f301422935c92504893227d58;
static PyObject *const_str_digest_be4ac83c9dc1679919b425d0d45982c9;
extern PyObject *const_str_plain_matvec;
static PyObject *const_str_digest_e83bbc3984817188c3f8c1a76fe7188b;
static PyObject *const_tuple_e3935596e0be5dfe9df19e1be829931f_tuple;
extern PyObject *const_str_plain_vec;
static PyObject *const_tuple_638cb4dfc2bfe593b96ff71fb310be1c_tuple;
extern PyObject *const_str_plain_issparse;
static PyObject *const_str_digest_435f210bc86392fd589abd76dc56c2e8;
static PyObject *const_tuple_str_plain_self_str_plain_c_ineq_str_plain_c_eq_str_plain_s_tuple;
static PyObject *const_str_plain_lagrangian_hessian_s;
extern PyObject *const_str_plain_sps;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_c7b85778a6e1a775c7a04ee2611017bd;
static PyObject *const_str_digest_ce490fc60fea635a090c3bdd2939e674;
extern PyObject *const_str_digest_8783708b6421c71a0892a844e756fb02;
extern PyObject *const_str_plain___all__;
static PyObject *const_tuple_db4f8147ce1dcd876304c2ef6638a063_tuple;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_vstack;
extern PyObject *const_str_plain_c_eq;
static PyObject *const_str_digest_8ec8af548357aafbeb3ec45aae989c4f;
extern PyObject *const_str_plain_grad;
extern PyObject *const_int_0;
static PyObject *const_str_plain_lagr_hess;
static PyObject *const_str_plain_global_stop_criteria;
static PyObject *const_str_digest_fa06ac6707865c6dbe7380bb4a871dbc;
static PyObject *const_tuple_ebbee314c4ef5db94d736a71d5e58a04_tuple;
static PyObject *const_str_plain__compute_constr;
static PyObject *const_str_plain__compute_gradient;
static PyObject *const_str_digest_890fd2644d421361e0f0ef5277c08337;
extern PyObject *const_tuple_str_plain_self_str_plain_z_tuple;
static PyObject *const_tuple_e6730bd9bb1a1e8a5cb7b4a99527fc82_tuple;
static PyObject *const_tuple_81a0f752c6a4b48d3f050192667b3801_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_v_eq;
extern PyObject *const_float_0_2;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_plain_vec_x;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_sparse;
extern PyObject *const_str_plain_J_eq;
static PyObject *const_str_digest_19de05c359c9bab80b1f0f65ff52990e;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_trust_radius;
static PyObject *const_str_plain_new_indices;
static PyObject *const_str_plain_Hx;
extern PyObject *const_str_plain_n_eq;
static PyObject *const_str_digest_6b2891a47117001bc25c868eeae3fd15;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_print_function;
static PyObject *const_tuple_d6379254c22f798b5da58e00bfd12869_tuple;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_vec_s;
static PyObject *const_tuple_0040e1930c9d33100e2f4bf3c3b5bda5_tuple;
static PyObject *const_str_plain_diag_elements;
static PyObject *const_tuple_str_plain_BarrierSubproblem_tuple_empty_tuple;
extern PyObject *const_str_plain_barrier_parameter;
static PyObject *const_str_digest_e7290e4657743ba93ad69cf9a4218182;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_dot;
static PyObject *const_list_str_plain_tr_interior_point_list;
extern PyObject *const_str_plain_S;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_stop_criteria;
static PyObject *const_tuple_str_plain_self_str_plain_g_tuple;
extern PyObject *const_str_plain_z;
static PyObject *const_str_plain_new_indptr;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple;
extern PyObject *const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
static PyObject *const_str_plain_grad0;
extern PyObject *const_str_plain_LinearOperator;
extern PyObject *const_tuple_str_plain_LinearOperator_tuple;
static PyObject *const_str_digest_7bf329292949eaaa4d84d7bf12508abb;
static PyObject *const_str_digest_6df350394cff8fb676ad13e394fdabba;
static PyObject *const_tuple_str_plain_vec_str_plain_diag_elements_tuple;
static PyObject *const_str_plain_s_i;
static PyObject *const_str_digest_832bd0feb8c6b1c05888df5fb9be806c;
extern PyObject *const_str_plain_maximum;
extern PyObject *const_str_plain_state;
static PyObject *const_str_digest_7459c0e72e4c9599d4c8ae956a84b23c;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_plain_constr0;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_tr_interior_point;
static PyObject *const_str_plain_lagrangian_hessian;
static PyObject *const_str_plain_x_cond;
extern PyObject *const_str_plain_csr_matrix;
extern PyObject *const_str_plain_csr;
extern PyObject *const_str_plain_s0;
static PyObject *const_str_plain__compute_function;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_64e1b4f5baac1e58a41b5203b2b51b92;
static PyObject *const_str_digest_bfb32d47cb00c840ca6822c9a61069f3;
static PyObject *const_str_plain_lagrangian_hessian_x;
extern PyObject *const_str_plain_penalty;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_get_slack = UNSTREAM_STRING_ASCII( &constant_bin[ 5107191 ], 9, 1 );
    const_tuple_str_plain_s_i_tuple = PyTuple_New( 1 );
    const_str_plain_s_i = UNSTREAM_STRING_ASCII( &constant_bin[ 18340 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_i_tuple, 0, const_str_plain_s_i ); Py_INCREF( const_str_plain_s_i );
    const_str_digest_56456595d608b182204bbaf8564dd88d = UNSTREAM_STRING_ASCII( &constant_bin[ 5107200 ], 33, 0 );
    const_str_digest_32d9ad0dfe486b1c5890d5c661c1418a = UNSTREAM_STRING_ASCII( &constant_bin[ 5107233 ], 38, 0 );
    const_tuple_58de573b77a8e99da9e6056acb3af4fa_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_58de573b77a8e99da9e6056acb3af4fa_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_58de573b77a8e99da9e6056acb3af4fa_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_58de573b77a8e99da9e6056acb3af4fa_tuple, 2, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_str_plain_diag_elements = UNSTREAM_STRING_ASCII( &constant_bin[ 5107271 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_58de573b77a8e99da9e6056acb3af4fa_tuple, 3, const_str_plain_diag_elements ); Py_INCREF( const_str_plain_diag_elements );
    PyTuple_SET_ITEM( const_tuple_58de573b77a8e99da9e6056acb3af4fa_tuple, 4, const_str_plain_matvec ); Py_INCREF( const_str_plain_matvec );
    const_str_digest_08e58937c577423daa7b15fb7e3a0bb0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5107284 ], 31, 0 );
    const_str_digest_3ca425fc2a1ac218dddc5c722ff26f77 = UNSTREAM_STRING_ASCII( &constant_bin[ 5107315 ], 39, 0 );
    const_str_digest_d42ae27d5a80d6ad74d4236844440be5 = UNSTREAM_STRING_ASCII( &constant_bin[ 5107354 ], 52, 0 );
    const_str_plain_BarrierSubproblem = UNSTREAM_STRING_ASCII( &constant_bin[ 5107233 ], 17, 1 );
    const_float_minus_0_995 = UNSTREAM_FLOAT( &constant_bin[ 5107406 ] );
    const_str_digest_4dd7d2ffdb5698ddf2d7ee044f2ea0a5 = UNSTREAM_STRING_ASCII( &constant_bin[ 5107414 ], 395, 0 );
    const_tuple_995ddd2320196c4ab97239db53e10e95_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_995ddd2320196c4ab97239db53e10e95_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_995ddd2320196c4ab97239db53e10e95_tuple, 1, const_str_plain_J_eq ); Py_INCREF( const_str_plain_J_eq );
    const_str_plain_J_ineq = UNSTREAM_STRING_ASCII( &constant_bin[ 5074275 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_995ddd2320196c4ab97239db53e10e95_tuple, 2, const_str_plain_J_ineq ); Py_INCREF( const_str_plain_J_ineq );
    PyTuple_SET_ITEM( const_tuple_995ddd2320196c4ab97239db53e10e95_tuple, 3, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_995ddd2320196c4ab97239db53e10e95_tuple, 4, const_str_plain_S ); Py_INCREF( const_str_plain_S );
    PyTuple_SET_ITEM( const_tuple_995ddd2320196c4ab97239db53e10e95_tuple, 5, const_str_plain_zeros ); Py_INCREF( const_str_plain_zeros );
    const_str_digest_bb4fd4f69e5f3ce80e76facc7c974cb6 = UNSTREAM_STRING_ASCII( &constant_bin[ 5107809 ], 35, 0 );
    const_str_plain_gradient_and_jacobian = UNSTREAM_STRING_ASCII( &constant_bin[ 5107333 ], 21, 1 );
    const_str_plain_fun0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5078367 ], 4, 1 );
    const_str_digest_45e05aa76513ae162c4c455c5effcf03 = UNSTREAM_STRING_ASCII( &constant_bin[ 5107844 ], 42, 0 );
    const_str_plain_primal_dual = UNSTREAM_STRING_ASCII( &constant_bin[ 5107886 ], 11, 1 );
    const_str_digest_33447fab4f89975dc60ca57bf6f5d536 = UNSTREAM_STRING_ASCII( &constant_bin[ 5107897 ], 53, 0 );
    const_str_plain_J_aux = UNSTREAM_STRING_ASCII( &constant_bin[ 5107950 ], 5, 1 );
    const_str_plain_S_Hs_S = UNSTREAM_STRING_ASCII( &constant_bin[ 5107955 ], 6, 1 );
    const_str_plain_jac0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5078389 ], 4, 1 );
    const_str_digest_87dde4f28003efc55d36f8bbb862786d = UNSTREAM_STRING_ASCII( &constant_bin[ 5107961 ], 135, 0 );
    const_str_plain__compute_jacobian = UNSTREAM_STRING_ASCII( &constant_bin[ 5108096 ], 17, 1 );
    const_str_digest_22c741513c60e1271b03ce1a6dfc3b19 = UNSTREAM_STRING_ASCII( &constant_bin[ 5108113 ], 43, 0 );
    const_str_plain__assemble_sparse_jacobian = UNSTREAM_STRING_ASCII( &constant_bin[ 5108131 ], 25, 1 );
    const_str_plain_log_s = UNSTREAM_STRING_ASCII( &constant_bin[ 2636630 ], 5, 1 );
    const_str_plain_primal = UNSTREAM_STRING_ASCII( &constant_bin[ 4800404 ], 6, 1 );
    const_str_digest_1d88147663a9538d4de25ab0bac15927 = UNSTREAM_STRING_ASCII( &constant_bin[ 5108156 ], 61, 0 );
    const_str_plain_get_variables = UNSTREAM_STRING_ASCII( &constant_bin[ 5107302 ], 13, 1 );
    const_str_plain_c_ineq = UNSTREAM_STRING_ASCII( &constant_bin[ 5074261 ], 6, 1 );
    const_str_digest_e7e083070964387380dfadc8ed8aae91 = UNSTREAM_STRING_ASCII( &constant_bin[ 5108217 ], 24, 0 );
    const_tuple_008871c5e2e9dcdb99bb3793c139285e_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5108241 ], 211 );
    const_str_plain_function_and_constraints = UNSTREAM_STRING_ASCII( &constant_bin[ 5107862 ], 24, 1 );
    const_str_digest_43002d28627b3a306b90b51e48c0224e = UNSTREAM_STRING_ASCII( &constant_bin[ 5108452 ], 27, 0 );
    const_str_plain_g_cond = UNSTREAM_STRING_ASCII( &constant_bin[ 5108479 ], 6, 1 );
    const_tuple_2d117db03d7f26e1142196282f958b44_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_2d117db03d7f26e1142196282f958b44_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_2d117db03d7f26e1142196282f958b44_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_2d117db03d7f26e1142196282f958b44_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_2d117db03d7f26e1142196282f958b44_tuple, 3, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_2d117db03d7f26e1142196282f958b44_tuple, 4, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_2d117db03d7f26e1142196282f958b44_tuple, 5, const_str_plain_c_eq ); Py_INCREF( const_str_plain_c_eq );
    PyTuple_SET_ITEM( const_tuple_2d117db03d7f26e1142196282f958b44_tuple, 6, const_str_plain_c_ineq ); Py_INCREF( const_str_plain_c_ineq );
    const_str_plain_enforce_feasibility = UNSTREAM_STRING_ASCII( &constant_bin[ 5108346 ], 19, 1 );
    const_tuple_41e3c09175f46f5c28896f6e9e4eb2e9_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_41e3c09175f46f5c28896f6e9e4eb2e9_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_41e3c09175f46f5c28896f6e9e4eb2e9_tuple, 1, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_41e3c09175f46f5c28896f6e9e4eb2e9_tuple, 2, const_str_plain_c_ineq ); Py_INCREF( const_str_plain_c_ineq );
    PyTuple_SET_ITEM( const_tuple_41e3c09175f46f5c28896f6e9e4eb2e9_tuple, 3, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_41e3c09175f46f5c28896f6e9e4eb2e9_tuple, 4, const_str_plain_log_s ); Py_INCREF( const_str_plain_log_s );
    const_str_digest_53f0ac0f301422935c92504893227d58 = UNSTREAM_STRING_ASCII( &constant_bin[ 5108485 ], 55, 0 );
    const_str_digest_be4ac83c9dc1679919b425d0d45982c9 = UNSTREAM_STRING_ASCII( &constant_bin[ 5108540 ], 26, 0 );
    const_str_digest_e83bbc3984817188c3f8c1a76fe7188b = UNSTREAM_STRING_ASCII( &constant_bin[ 5108566 ], 31, 0 );
    const_tuple_e3935596e0be5dfe9df19e1be829931f_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_e3935596e0be5dfe9df19e1be829931f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e3935596e0be5dfe9df19e1be829931f_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_e3935596e0be5dfe9df19e1be829931f_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_e3935596e0be5dfe9df19e1be829931f_tuple, 3, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_e3935596e0be5dfe9df19e1be829931f_tuple, 4, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    PyTuple_SET_ITEM( const_tuple_e3935596e0be5dfe9df19e1be829931f_tuple, 5, const_str_plain_J_eq ); Py_INCREF( const_str_plain_J_eq );
    PyTuple_SET_ITEM( const_tuple_e3935596e0be5dfe9df19e1be829931f_tuple, 6, const_str_plain_J_ineq ); Py_INCREF( const_str_plain_J_ineq );
    const_tuple_638cb4dfc2bfe593b96ff71fb310be1c_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_638cb4dfc2bfe593b96ff71fb310be1c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_638cb4dfc2bfe593b96ff71fb310be1c_tuple, 1, const_str_plain_state ); Py_INCREF( const_str_plain_state );
    PyTuple_SET_ITEM( const_tuple_638cb4dfc2bfe593b96ff71fb310be1c_tuple, 2, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_638cb4dfc2bfe593b96ff71fb310be1c_tuple, 3, const_str_plain_last_iteration_failed ); Py_INCREF( const_str_plain_last_iteration_failed );
    PyTuple_SET_ITEM( const_tuple_638cb4dfc2bfe593b96ff71fb310be1c_tuple, 4, const_str_plain_optimality ); Py_INCREF( const_str_plain_optimality );
    PyTuple_SET_ITEM( const_tuple_638cb4dfc2bfe593b96ff71fb310be1c_tuple, 5, const_str_plain_constr_violation ); Py_INCREF( const_str_plain_constr_violation );
    PyTuple_SET_ITEM( const_tuple_638cb4dfc2bfe593b96ff71fb310be1c_tuple, 6, const_str_plain_trust_radius ); Py_INCREF( const_str_plain_trust_radius );
    PyTuple_SET_ITEM( const_tuple_638cb4dfc2bfe593b96ff71fb310be1c_tuple, 7, const_str_plain_penalty ); Py_INCREF( const_str_plain_penalty );
    PyTuple_SET_ITEM( const_tuple_638cb4dfc2bfe593b96ff71fb310be1c_tuple, 8, const_str_plain_cg_info ); Py_INCREF( const_str_plain_cg_info );
    PyTuple_SET_ITEM( const_tuple_638cb4dfc2bfe593b96ff71fb310be1c_tuple, 9, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_638cb4dfc2bfe593b96ff71fb310be1c_tuple, 10, const_str_plain_g_cond ); Py_INCREF( const_str_plain_g_cond );
    const_str_plain_x_cond = UNSTREAM_STRING_ASCII( &constant_bin[ 5108597 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_638cb4dfc2bfe593b96ff71fb310be1c_tuple, 11, const_str_plain_x_cond ); Py_INCREF( const_str_plain_x_cond );
    const_str_digest_435f210bc86392fd589abd76dc56c2e8 = UNSTREAM_STRING_ASCII( &constant_bin[ 5108603 ], 35, 0 );
    const_tuple_str_plain_self_str_plain_c_ineq_str_plain_c_eq_str_plain_s_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_c_ineq_str_plain_c_eq_str_plain_s_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_c_ineq_str_plain_c_eq_str_plain_s_tuple, 1, const_str_plain_c_ineq ); Py_INCREF( const_str_plain_c_ineq );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_c_ineq_str_plain_c_eq_str_plain_s_tuple, 2, const_str_plain_c_eq ); Py_INCREF( const_str_plain_c_eq );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_c_ineq_str_plain_c_eq_str_plain_s_tuple, 3, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_str_plain_lagrangian_hessian_s = UNSTREAM_STRING_ASCII( &constant_bin[ 5108638 ], 20, 1 );
    const_str_digest_c7b85778a6e1a775c7a04ee2611017bd = UNSTREAM_STRING_ASCII( &constant_bin[ 5107233 ], 36, 0 );
    const_str_digest_ce490fc60fea635a090c3bdd2939e674 = UNSTREAM_STRING_ASCII( &constant_bin[ 5108658 ], 543, 0 );
    const_tuple_db4f8147ce1dcd876304c2ef6638a063_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_db4f8147ce1dcd876304c2ef6638a063_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_db4f8147ce1dcd876304c2ef6638a063_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_db4f8147ce1dcd876304c2ef6638a063_tuple, 2, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_db4f8147ce1dcd876304c2ef6638a063_tuple, 3, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_db4f8147ce1dcd876304c2ef6638a063_tuple, 4, const_str_plain_v_eq ); Py_INCREF( const_str_plain_v_eq );
    PyTuple_SET_ITEM( const_tuple_db4f8147ce1dcd876304c2ef6638a063_tuple, 5, const_str_plain_v_ineq ); Py_INCREF( const_str_plain_v_ineq );
    const_str_plain_lagr_hess = UNSTREAM_STRING_ASCII( &constant_bin[ 5078352 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_db4f8147ce1dcd876304c2ef6638a063_tuple, 6, const_str_plain_lagr_hess ); Py_INCREF( const_str_plain_lagr_hess );
    const_str_digest_8ec8af548357aafbeb3ec45aae989c4f = UNSTREAM_STRING_ASCII( &constant_bin[ 5109201 ], 319, 0 );
    const_str_plain_global_stop_criteria = UNSTREAM_STRING_ASCII( &constant_bin[ 5108367 ], 20, 1 );
    const_str_digest_fa06ac6707865c6dbe7380bb4a871dbc = UNSTREAM_STRING_ASCII( &constant_bin[ 5109520 ], 90, 0 );
    const_tuple_ebbee314c4ef5db94d736a71d5e58a04_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5109610 ], 481 );
    const_str_plain__compute_constr = UNSTREAM_STRING_ASCII( &constant_bin[ 5110091 ], 15, 1 );
    const_str_plain__compute_gradient = UNSTREAM_STRING_ASCII( &constant_bin[ 5107827 ], 17, 1 );
    const_str_digest_890fd2644d421361e0f0ef5277c08337 = UNSTREAM_STRING_ASCII( &constant_bin[ 5110106 ], 374, 0 );
    const_tuple_e6730bd9bb1a1e8a5cb7b4a99527fc82_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_e6730bd9bb1a1e8a5cb7b4a99527fc82_tuple, 0, const_str_plain_vec ); Py_INCREF( const_str_plain_vec );
    const_str_plain_vec_x = UNSTREAM_STRING_ASCII( &constant_bin[ 5110480 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_e6730bd9bb1a1e8a5cb7b4a99527fc82_tuple, 1, const_str_plain_vec_x ); Py_INCREF( const_str_plain_vec_x );
    const_str_plain_vec_s = UNSTREAM_STRING_ASCII( &constant_bin[ 2679903 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_e6730bd9bb1a1e8a5cb7b4a99527fc82_tuple, 2, const_str_plain_vec_s ); Py_INCREF( const_str_plain_vec_s );
    PyTuple_SET_ITEM( const_tuple_e6730bd9bb1a1e8a5cb7b4a99527fc82_tuple, 3, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_Hx = UNSTREAM_STRING_ASCII( &constant_bin[ 5107948 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_e6730bd9bb1a1e8a5cb7b4a99527fc82_tuple, 4, const_str_plain_Hx ); Py_INCREF( const_str_plain_Hx );
    PyTuple_SET_ITEM( const_tuple_e6730bd9bb1a1e8a5cb7b4a99527fc82_tuple, 5, const_str_plain_S_Hs_S ); Py_INCREF( const_str_plain_S_Hs_S );
    const_tuple_81a0f752c6a4b48d3f050192667b3801_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_81a0f752c6a4b48d3f050192667b3801_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_81a0f752c6a4b48d3f050192667b3801_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_81a0f752c6a4b48d3f050192667b3801_tuple, 2, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_81a0f752c6a4b48d3f050192667b3801_tuple, 3, const_str_plain_Hx ); Py_INCREF( const_str_plain_Hx );
    PyTuple_SET_ITEM( const_tuple_81a0f752c6a4b48d3f050192667b3801_tuple, 4, const_str_plain_S_Hs_S ); Py_INCREF( const_str_plain_S_Hs_S );
    PyTuple_SET_ITEM( const_tuple_81a0f752c6a4b48d3f050192667b3801_tuple, 5, const_str_plain_matvec ); Py_INCREF( const_str_plain_matvec );
    const_str_digest_19de05c359c9bab80b1f0f65ff52990e = UNSTREAM_STRING_ASCII( &constant_bin[ 5110485 ], 226, 0 );
    const_str_plain_new_indices = UNSTREAM_STRING_ASCII( &constant_bin[ 4409721 ], 11, 1 );
    const_str_digest_6b2891a47117001bc25c868eeae3fd15 = UNSTREAM_STRING_ASCII( &constant_bin[ 5110711 ], 177, 0 );
    const_tuple_d6379254c22f798b5da58e00bfd12869_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_d6379254c22f798b5da58e00bfd12869_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d6379254c22f798b5da58e00bfd12869_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_d6379254c22f798b5da58e00bfd12869_tuple, 2, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_d6379254c22f798b5da58e00bfd12869_tuple, 3, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_d6379254c22f798b5da58e00bfd12869_tuple, 4, const_str_plain_primal ); Py_INCREF( const_str_plain_primal );
    PyTuple_SET_ITEM( const_tuple_d6379254c22f798b5da58e00bfd12869_tuple, 5, const_str_plain_primal_dual ); Py_INCREF( const_str_plain_primal_dual );
    const_tuple_0040e1930c9d33100e2f4bf3c3b5bda5_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_0040e1930c9d33100e2f4bf3c3b5bda5_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0040e1930c9d33100e2f4bf3c3b5bda5_tuple, 1, const_str_plain_barrier_parameter ); Py_INCREF( const_str_plain_barrier_parameter );
    PyTuple_SET_ITEM( const_tuple_0040e1930c9d33100e2f4bf3c3b5bda5_tuple, 2, const_str_plain_tolerance ); Py_INCREF( const_str_plain_tolerance );
    const_tuple_str_plain_BarrierSubproblem_tuple_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_BarrierSubproblem_tuple_empty_tuple, 0, const_str_plain_BarrierSubproblem ); Py_INCREF( const_str_plain_BarrierSubproblem );
    PyTuple_SET_ITEM( const_tuple_str_plain_BarrierSubproblem_tuple_empty_tuple, 1, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    const_str_digest_e7290e4657743ba93ad69cf9a4218182 = UNSTREAM_STRING_ASCII( &constant_bin[ 5110888 ], 25, 0 );
    const_list_str_plain_tr_interior_point_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_tr_interior_point_list, 0, const_str_plain_tr_interior_point ); Py_INCREF( const_str_plain_tr_interior_point );
    const_tuple_str_plain_self_str_plain_g_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_g_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_g_tuple, 1, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    const_str_plain_new_indptr = UNSTREAM_STRING_ASCII( &constant_bin[ 5110913 ], 10, 1 );
    const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple, 1, const_str_plain_J_eq ); Py_INCREF( const_str_plain_J_eq );
    PyTuple_SET_ITEM( const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple, 2, const_str_plain_J_ineq ); Py_INCREF( const_str_plain_J_ineq );
    PyTuple_SET_ITEM( const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple, 3, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple, 4, const_str_plain_n_vars ); Py_INCREF( const_str_plain_n_vars );
    PyTuple_SET_ITEM( const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple, 5, const_str_plain_n_ineq ); Py_INCREF( const_str_plain_n_ineq );
    PyTuple_SET_ITEM( const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple, 6, const_str_plain_n_eq ); Py_INCREF( const_str_plain_n_eq );
    PyTuple_SET_ITEM( const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple, 7, const_str_plain_J_aux ); Py_INCREF( const_str_plain_J_aux );
    PyTuple_SET_ITEM( const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple, 8, const_str_plain_indptr ); Py_INCREF( const_str_plain_indptr );
    PyTuple_SET_ITEM( const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple, 9, const_str_plain_indices ); Py_INCREF( const_str_plain_indices );
    PyTuple_SET_ITEM( const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple, 10, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple, 11, const_str_plain_new_indptr ); Py_INCREF( const_str_plain_new_indptr );
    PyTuple_SET_ITEM( const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple, 12, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple, 13, const_str_plain_new_indices ); Py_INCREF( const_str_plain_new_indices );
    PyTuple_SET_ITEM( const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple, 14, const_str_plain_new_data ); Py_INCREF( const_str_plain_new_data );
    PyTuple_SET_ITEM( const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple, 15, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple, 16, const_str_plain_J ); Py_INCREF( const_str_plain_J );
    const_str_plain_grad0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5078373 ], 5, 1 );
    const_str_digest_7bf329292949eaaa4d84d7bf12508abb = UNSTREAM_STRING_ASCII( &constant_bin[ 5110923 ], 38, 0 );
    const_str_digest_6df350394cff8fb676ad13e394fdabba = UNSTREAM_STRING_ASCII( &constant_bin[ 5110961 ], 63, 0 );
    const_tuple_str_plain_vec_str_plain_diag_elements_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_vec_str_plain_diag_elements_tuple, 0, const_str_plain_vec ); Py_INCREF( const_str_plain_vec );
    PyTuple_SET_ITEM( const_tuple_str_plain_vec_str_plain_diag_elements_tuple, 1, const_str_plain_diag_elements ); Py_INCREF( const_str_plain_diag_elements );
    const_str_digest_832bd0feb8c6b1c05888df5fb9be806c = UNSTREAM_STRING_ASCII( &constant_bin[ 5111024 ], 33, 0 );
    const_str_digest_7459c0e72e4c9599d4c8ae956a84b23c = UNSTREAM_STRING_ASCII( &constant_bin[ 5111057 ], 35, 0 );
    const_str_plain_constr0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5078380 ], 7, 1 );
    const_str_plain_lagrangian_hessian = UNSTREAM_STRING_ASCII( &constant_bin[ 5107251 ], 18, 1 );
    const_str_plain__compute_function = UNSTREAM_STRING_ASCII( &constant_bin[ 5108621 ], 17, 1 );
    const_str_digest_64e1b4f5baac1e58a41b5203b2b51b92 = UNSTREAM_STRING_ASCII( &constant_bin[ 5111092 ], 52, 0 );
    const_str_digest_bfb32d47cb00c840ca6822c9a61069f3 = UNSTREAM_STRING_ASCII( &constant_bin[ 5111144 ], 41, 0 );
    const_str_plain_lagrangian_hessian_x = UNSTREAM_STRING_ASCII( &constant_bin[ 5107251 ], 20, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_trustregion_constr$tr_interior_point( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b95cbeb864cd75374dcdf177a4ed103d;
static PyCodeObject *codeobj_63a984cc39880e2778cff02c06e74a62;
static PyCodeObject *codeobj_d55f5e43bed988747520c68822fb5788;
static PyCodeObject *codeobj_6baa37e9df8edd3a7cd0e01dc6a23a3f;
static PyCodeObject *codeobj_4a34defbb110d2b91eb90529a6db8412;
static PyCodeObject *codeobj_b2c41e654c2bc37da42117d37ef4ba9b;
static PyCodeObject *codeobj_206a0af41086a4af98d16e3536dee304;
static PyCodeObject *codeobj_f22505c6ac7593a30d60e89ac32e5024;
static PyCodeObject *codeobj_6529abe17d6dd757a87ecc0e8a006650;
static PyCodeObject *codeobj_ebde815d7f717717ac1e7873606b1118;
static PyCodeObject *codeobj_55e69a156dbb4f698ed05a9b9e994686;
static PyCodeObject *codeobj_e6b7d6a111070034eb4eadc95a2f4a92;
static PyCodeObject *codeobj_3fd3ff5e0a4c221d8370cf3eb8d007d5;
static PyCodeObject *codeobj_628817ac497dd4007ede80c848e38ad7;
static PyCodeObject *codeobj_5b51d1d949e4b38e9523fda44bc83dc8;
static PyCodeObject *codeobj_ba298ba7e65bb8dd19022013ff630c69;
static PyCodeObject *codeobj_488a9b467667430433278618cc6bef55;
static PyCodeObject *codeobj_c757c859f1b5660de638e5ed81bc69cc;
static PyCodeObject *codeobj_191ac557a863c1bb3d8881c519c68a70;
static PyCodeObject *codeobj_7f99421692640978fa851751ec310e0a;
static PyCodeObject *codeobj_287f5c12a962e3c7bf6b0e55263bc282;
static PyCodeObject *codeobj_18058d24643f7563c8990dfa63e44864;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_53f0ac0f301422935c92504893227d58 );
    codeobj_b95cbeb864cd75374dcdf177a4ed103d = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 94, const_tuple_str_plain_s_i_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_63a984cc39880e2778cff02c06e74a62 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1d88147663a9538d4de25ab0bac15927, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_d55f5e43bed988747520c68822fb5788 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_BarrierSubproblem, 24, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_6baa37e9df8edd3a7cd0e01dc6a23a3f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 32, const_tuple_008871c5e2e9dcdb99bb3793c139285e_tuple, 22, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4a34defbb110d2b91eb90529a6db8412 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__assemble_sparse_jacobian, 166, const_tuple_589ece53341993e6a6c7f94e49b3b356_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b2c41e654c2bc37da42117d37ef4ba9b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__compute_constr, 98, const_tuple_str_plain_self_str_plain_c_ineq_str_plain_c_eq_str_plain_s_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_206a0af41086a4af98d16e3536dee304 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__compute_function, 89, const_tuple_41e3c09175f46f5c28896f6e9e4eb2e9_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f22505c6ac7593a30d60e89ac32e5024 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__compute_gradient, 139, const_tuple_str_plain_self_str_plain_g_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6529abe17d6dd757a87ecc0e8a006650 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__compute_jacobian, 142, const_tuple_995ddd2320196c4ab97239db53e10e95_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ebde815d7f717717ac1e7873606b1118 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_function_and_constraints, 69, const_tuple_2d117db03d7f26e1142196282f958b44_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_55e69a156dbb4f698ed05a9b9e994686 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_slack, 63, const_tuple_str_plain_self_str_plain_z_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e6b7d6a111070034eb4eadc95a2f4a92 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_variables, 66, const_tuple_str_plain_self_str_plain_z_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3fd3ff5e0a4c221d8370cf3eb8d007d5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_gradient_and_jacobian, 118, const_tuple_e3935596e0be5dfe9df19e1be829931f_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_628817ac497dd4007ede80c848e38ad7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_lagrangian_hessian, 223, const_tuple_81a0f752c6a4b48d3f050192667b3801_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5b51d1d949e4b38e9523fda44bc83dc8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_lagrangian_hessian_s, 207, const_tuple_d6379254c22f798b5da58e00bfd12869_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ba298ba7e65bb8dd19022013ff630c69 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_lagrangian_hessian_x, 197, const_tuple_db4f8147ce1dcd876304c2ef6638a063_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_488a9b467667430433278618cc6bef55 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_matvec, 112, const_tuple_str_plain_vec_str_plain_diag_elements_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_c757c859f1b5660de638e5ed81bc69cc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_matvec, 233, const_tuple_e6730bd9bb1a1e8a5cb7b4a99527fc82_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_191ac557a863c1bb3d8881c519c68a70 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_scaling, 103, const_tuple_58de573b77a8e99da9e6056acb3af4fa_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7f99421692640978fa851751ec310e0a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_stop_criteria, 244, const_tuple_638cb4dfc2bfe593b96ff71fb310be1c_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_287f5c12a962e3c7bf6b0e55263bc282 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tr_interior_point, 267, const_tuple_ebbee314c4ef5db94d736a71d5e58a04_tuple, 24, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_18058d24643f7563c8990dfa63e44864 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_update, 59, const_tuple_0040e1930c9d33100e2f4bf3c3b5bda5_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_10__compute_gradient(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_11__compute_jacobian(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_12__assemble_sparse_jacobian(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_13_lagrangian_hessian_x(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_14_lagrangian_hessian_s(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_15_lagrangian_hessian(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_15_lagrangian_hessian$$$function_1_matvec(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_16_stop_criteria(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_17_tr_interior_point(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_2_update(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_3_get_slack(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_4_get_variables(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_5_function_and_constraints(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_6__compute_function(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_7__compute_constr(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_8_scaling(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_8_scaling$$$function_1_matvec(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_9_gradient_and_jacobian(  );


// The module function definitions.
static PyObject *impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_x0 = python_pars[ 1 ];
    PyObject *par_s0 = python_pars[ 2 ];
    PyObject *par_fun = python_pars[ 3 ];
    PyObject *par_grad = python_pars[ 4 ];
    PyObject *par_lagr_hess = python_pars[ 5 ];
    PyObject *par_n_vars = python_pars[ 6 ];
    PyObject *par_n_ineq = python_pars[ 7 ];
    PyObject *par_n_eq = python_pars[ 8 ];
    PyObject *par_constr = python_pars[ 9 ];
    PyObject *par_jac = python_pars[ 10 ];
    PyObject *par_barrier_parameter = python_pars[ 11 ];
    PyObject *par_tolerance = python_pars[ 12 ];
    PyObject *par_enforce_feasibility = python_pars[ 13 ];
    PyObject *par_global_stop_criteria = python_pars[ 14 ];
    PyObject *par_xtol = python_pars[ 15 ];
    PyObject *par_fun0 = python_pars[ 16 ];
    PyObject *par_grad0 = python_pars[ 17 ];
    PyObject *par_constr_ineq0 = python_pars[ 18 ];
    PyObject *par_jac_ineq0 = python_pars[ 19 ];
    PyObject *par_constr_eq0 = python_pars[ 20 ];
    PyObject *par_jac_eq0 = python_pars[ 21 ];
    struct Nuitka_FrameObject *frame_6baa37e9df8edd3a7cd0e01dc6a23a3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6baa37e9df8edd3a7cd0e01dc6a23a3f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6baa37e9df8edd3a7cd0e01dc6a23a3f, codeobj_6baa37e9df8edd3a7cd0e01dc6a23a3f, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6baa37e9df8edd3a7cd0e01dc6a23a3f = cache_frame_6baa37e9df8edd3a7cd0e01dc6a23a3f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6baa37e9df8edd3a7cd0e01dc6a23a3f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6baa37e9df8edd3a7cd0e01dc6a23a3f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_n_vars );
        tmp_assattr_name_1 = par_n_vars;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_n_vars, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_x0 );
        tmp_assattr_name_2 = par_x0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_x0, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_s0 );
        tmp_assattr_name_3 = par_s0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_s0, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_fun );
        tmp_assattr_name_4 = par_fun;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_fun, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_grad );
        tmp_assattr_name_5 = par_grad;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_grad, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( par_lagr_hess );
        tmp_assattr_name_6 = par_lagr_hess;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_lagr_hess, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT( par_constr );
        tmp_assattr_name_7 = par_constr;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_constr, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT( par_jac );
        tmp_assattr_name_8 = par_jac;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_jac, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT( par_barrier_parameter );
        tmp_assattr_name_9 = par_barrier_parameter;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_barrier_parameter, tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT( par_tolerance );
        tmp_assattr_name_10 = par_tolerance;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_tolerance, tmp_assattr_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT( par_n_eq );
        tmp_assattr_name_11 = par_n_eq;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_n_eq, tmp_assattr_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT( par_n_ineq );
        tmp_assattr_name_12 = par_n_ineq;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_n_ineq, tmp_assattr_name_12 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT( par_enforce_feasibility );
        tmp_assattr_name_13 = par_enforce_feasibility;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_enforce_feasibility, tmp_assattr_name_13 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT( par_global_stop_criteria );
        tmp_assattr_name_14 = par_global_stop_criteria;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_global_stop_criteria, tmp_assattr_name_14 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_15;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT( par_xtol );
        tmp_assattr_name_15 = par_xtol;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_xtol, tmp_assattr_name_15 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_16;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_assattr_target_16;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_fun0 );
        tmp_args_element_name_1 = par_fun0;
        CHECK_OBJECT( par_constr_ineq0 );
        tmp_args_element_name_2 = par_constr_ineq0;
        CHECK_OBJECT( par_s0 );
        tmp_args_element_name_3 = par_s0;
        frame_6baa37e9df8edd3a7cd0e01dc6a23a3f->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assattr_name_16 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain__compute_function, call_args );
        }

        if ( tmp_assattr_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_fun0, tmp_assattr_name_16 );
        Py_DECREF( tmp_assattr_name_16 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_17;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_assattr_target_17;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( par_grad0 );
        tmp_args_element_name_4 = par_grad0;
        frame_6baa37e9df8edd3a7cd0e01dc6a23a3f->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assattr_name_17 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__compute_gradient, call_args );
        }

        if ( tmp_assattr_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_grad0, tmp_assattr_name_17 );
        Py_DECREF( tmp_assattr_name_17 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_18;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_assattr_target_18;
        CHECK_OBJECT( par_self );
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT( par_constr_ineq0 );
        tmp_args_element_name_5 = par_constr_ineq0;
        CHECK_OBJECT( par_constr_eq0 );
        tmp_args_element_name_6 = par_constr_eq0;
        CHECK_OBJECT( par_s0 );
        tmp_args_element_name_7 = par_s0;
        frame_6baa37e9df8edd3a7cd0e01dc6a23a3f->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assattr_name_18 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_3, const_str_plain__compute_constr, call_args );
        }

        if ( tmp_assattr_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_18 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_18, const_str_plain_constr0, tmp_assattr_name_18 );
        Py_DECREF( tmp_assattr_name_18 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_19;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_assattr_target_19;
        CHECK_OBJECT( par_self );
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT( par_jac_eq0 );
        tmp_args_element_name_8 = par_jac_eq0;
        CHECK_OBJECT( par_jac_ineq0 );
        tmp_args_element_name_9 = par_jac_ineq0;
        CHECK_OBJECT( par_s0 );
        tmp_args_element_name_10 = par_s0;
        frame_6baa37e9df8edd3a7cd0e01dc6a23a3f->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_assattr_name_19 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_4, const_str_plain__compute_jacobian, call_args );
        }

        if ( tmp_assattr_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_19 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_19, const_str_plain_jac0, tmp_assattr_name_19 );
        Py_DECREF( tmp_assattr_name_19 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_20;
        PyObject *tmp_assattr_target_20;
        tmp_assattr_name_20 = Py_False;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_20 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_20, const_str_plain_terminate, tmp_assattr_name_20 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6baa37e9df8edd3a7cd0e01dc6a23a3f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6baa37e9df8edd3a7cd0e01dc6a23a3f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6baa37e9df8edd3a7cd0e01dc6a23a3f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6baa37e9df8edd3a7cd0e01dc6a23a3f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6baa37e9df8edd3a7cd0e01dc6a23a3f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6baa37e9df8edd3a7cd0e01dc6a23a3f,
        type_description_1,
        par_self,
        par_x0,
        par_s0,
        par_fun,
        par_grad,
        par_lagr_hess,
        par_n_vars,
        par_n_ineq,
        par_n_eq,
        par_constr,
        par_jac,
        par_barrier_parameter,
        par_tolerance,
        par_enforce_feasibility,
        par_global_stop_criteria,
        par_xtol,
        par_fun0,
        par_grad0,
        par_constr_ineq0,
        par_jac_ineq0,
        par_constr_eq0,
        par_jac_eq0
    );


    // Release cached frame.
    if ( frame_6baa37e9df8edd3a7cd0e01dc6a23a3f == cache_frame_6baa37e9df8edd3a7cd0e01dc6a23a3f )
    {
        Py_DECREF( frame_6baa37e9df8edd3a7cd0e01dc6a23a3f );
    }
    cache_frame_6baa37e9df8edd3a7cd0e01dc6a23a3f = NULL;

    assertFrameObject( frame_6baa37e9df8edd3a7cd0e01dc6a23a3f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_s0 );
    Py_DECREF( par_s0 );
    par_s0 = NULL;

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_grad );
    Py_DECREF( par_grad );
    par_grad = NULL;

    CHECK_OBJECT( (PyObject *)par_lagr_hess );
    Py_DECREF( par_lagr_hess );
    par_lagr_hess = NULL;

    CHECK_OBJECT( (PyObject *)par_n_vars );
    Py_DECREF( par_n_vars );
    par_n_vars = NULL;

    CHECK_OBJECT( (PyObject *)par_n_ineq );
    Py_DECREF( par_n_ineq );
    par_n_ineq = NULL;

    CHECK_OBJECT( (PyObject *)par_n_eq );
    Py_DECREF( par_n_eq );
    par_n_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_constr );
    Py_DECREF( par_constr );
    par_constr = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_barrier_parameter );
    Py_DECREF( par_barrier_parameter );
    par_barrier_parameter = NULL;

    CHECK_OBJECT( (PyObject *)par_tolerance );
    Py_DECREF( par_tolerance );
    par_tolerance = NULL;

    CHECK_OBJECT( (PyObject *)par_enforce_feasibility );
    Py_DECREF( par_enforce_feasibility );
    par_enforce_feasibility = NULL;

    CHECK_OBJECT( (PyObject *)par_global_stop_criteria );
    Py_DECREF( par_global_stop_criteria );
    par_global_stop_criteria = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_fun0 );
    Py_DECREF( par_fun0 );
    par_fun0 = NULL;

    CHECK_OBJECT( (PyObject *)par_grad0 );
    Py_DECREF( par_grad0 );
    par_grad0 = NULL;

    CHECK_OBJECT( (PyObject *)par_constr_ineq0 );
    Py_DECREF( par_constr_ineq0 );
    par_constr_ineq0 = NULL;

    CHECK_OBJECT( (PyObject *)par_jac_ineq0 );
    Py_DECREF( par_jac_ineq0 );
    par_jac_ineq0 = NULL;

    CHECK_OBJECT( (PyObject *)par_constr_eq0 );
    Py_DECREF( par_constr_eq0 );
    par_constr_eq0 = NULL;

    CHECK_OBJECT( (PyObject *)par_jac_eq0 );
    Py_DECREF( par_jac_eq0 );
    par_jac_eq0 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_s0 );
    Py_DECREF( par_s0 );
    par_s0 = NULL;

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_grad );
    Py_DECREF( par_grad );
    par_grad = NULL;

    CHECK_OBJECT( (PyObject *)par_lagr_hess );
    Py_DECREF( par_lagr_hess );
    par_lagr_hess = NULL;

    CHECK_OBJECT( (PyObject *)par_n_vars );
    Py_DECREF( par_n_vars );
    par_n_vars = NULL;

    CHECK_OBJECT( (PyObject *)par_n_ineq );
    Py_DECREF( par_n_ineq );
    par_n_ineq = NULL;

    CHECK_OBJECT( (PyObject *)par_n_eq );
    Py_DECREF( par_n_eq );
    par_n_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_constr );
    Py_DECREF( par_constr );
    par_constr = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_barrier_parameter );
    Py_DECREF( par_barrier_parameter );
    par_barrier_parameter = NULL;

    CHECK_OBJECT( (PyObject *)par_tolerance );
    Py_DECREF( par_tolerance );
    par_tolerance = NULL;

    CHECK_OBJECT( (PyObject *)par_enforce_feasibility );
    Py_DECREF( par_enforce_feasibility );
    par_enforce_feasibility = NULL;

    CHECK_OBJECT( (PyObject *)par_global_stop_criteria );
    Py_DECREF( par_global_stop_criteria );
    par_global_stop_criteria = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_fun0 );
    Py_DECREF( par_fun0 );
    par_fun0 = NULL;

    CHECK_OBJECT( (PyObject *)par_grad0 );
    Py_DECREF( par_grad0 );
    par_grad0 = NULL;

    CHECK_OBJECT( (PyObject *)par_constr_ineq0 );
    Py_DECREF( par_constr_ineq0 );
    par_constr_ineq0 = NULL;

    CHECK_OBJECT( (PyObject *)par_jac_ineq0 );
    Py_DECREF( par_jac_ineq0 );
    par_jac_ineq0 = NULL;

    CHECK_OBJECT( (PyObject *)par_constr_eq0 );
    Py_DECREF( par_constr_eq0 );
    par_constr_eq0 = NULL;

    CHECK_OBJECT( (PyObject *)par_jac_eq0 );
    Py_DECREF( par_jac_eq0 );
    par_jac_eq0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_1___init__ );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_2_update( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_barrier_parameter = python_pars[ 1 ];
    PyObject *par_tolerance = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_18058d24643f7563c8990dfa63e44864;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_18058d24643f7563c8990dfa63e44864 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_18058d24643f7563c8990dfa63e44864, codeobj_18058d24643f7563c8990dfa63e44864, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_18058d24643f7563c8990dfa63e44864 = cache_frame_18058d24643f7563c8990dfa63e44864;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_18058d24643f7563c8990dfa63e44864 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_18058d24643f7563c8990dfa63e44864 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_barrier_parameter );
        tmp_assattr_name_1 = par_barrier_parameter;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_barrier_parameter, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_tolerance );
        tmp_assattr_name_2 = par_tolerance;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_tolerance, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_18058d24643f7563c8990dfa63e44864 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_18058d24643f7563c8990dfa63e44864 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_18058d24643f7563c8990dfa63e44864, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_18058d24643f7563c8990dfa63e44864->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_18058d24643f7563c8990dfa63e44864, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_18058d24643f7563c8990dfa63e44864,
        type_description_1,
        par_self,
        par_barrier_parameter,
        par_tolerance
    );


    // Release cached frame.
    if ( frame_18058d24643f7563c8990dfa63e44864 == cache_frame_18058d24643f7563c8990dfa63e44864 )
    {
        Py_DECREF( frame_18058d24643f7563c8990dfa63e44864 );
    }
    cache_frame_18058d24643f7563c8990dfa63e44864 = NULL;

    assertFrameObject( frame_18058d24643f7563c8990dfa63e44864 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_2_update );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_barrier_parameter );
    Py_DECREF( par_barrier_parameter );
    par_barrier_parameter = NULL;

    CHECK_OBJECT( (PyObject *)par_tolerance );
    Py_DECREF( par_tolerance );
    par_tolerance = NULL;

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

    CHECK_OBJECT( (PyObject *)par_barrier_parameter );
    Py_DECREF( par_barrier_parameter );
    par_barrier_parameter = NULL;

    CHECK_OBJECT( (PyObject *)par_tolerance );
    Py_DECREF( par_tolerance );
    par_tolerance = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_2_update );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_3_get_slack( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_55e69a156dbb4f698ed05a9b9e994686;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_55e69a156dbb4f698ed05a9b9e994686 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_55e69a156dbb4f698ed05a9b9e994686, codeobj_55e69a156dbb4f698ed05a9b9e994686, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *)+sizeof(void *) );
    frame_55e69a156dbb4f698ed05a9b9e994686 = cache_frame_55e69a156dbb4f698ed05a9b9e994686;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_55e69a156dbb4f698ed05a9b9e994686 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_55e69a156dbb4f698ed05a9b9e994686 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( par_z );
        tmp_subscribed_name_1 = par_z;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_start_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_n_vars );
        if ( tmp_start_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_n_vars );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_start_name_1 );

            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_n_ineq );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_start_name_1 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_start_name_1 );

            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_start_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_55e69a156dbb4f698ed05a9b9e994686 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_55e69a156dbb4f698ed05a9b9e994686 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_55e69a156dbb4f698ed05a9b9e994686 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_55e69a156dbb4f698ed05a9b9e994686, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_55e69a156dbb4f698ed05a9b9e994686->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_55e69a156dbb4f698ed05a9b9e994686, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_55e69a156dbb4f698ed05a9b9e994686,
        type_description_1,
        par_self,
        par_z
    );


    // Release cached frame.
    if ( frame_55e69a156dbb4f698ed05a9b9e994686 == cache_frame_55e69a156dbb4f698ed05a9b9e994686 )
    {
        Py_DECREF( frame_55e69a156dbb4f698ed05a9b9e994686 );
    }
    cache_frame_55e69a156dbb4f698ed05a9b9e994686 = NULL;

    assertFrameObject( frame_55e69a156dbb4f698ed05a9b9e994686 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_3_get_slack );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_3_get_slack );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_4_get_variables( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_e6b7d6a111070034eb4eadc95a2f4a92;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e6b7d6a111070034eb4eadc95a2f4a92 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e6b7d6a111070034eb4eadc95a2f4a92, codeobj_e6b7d6a111070034eb4eadc95a2f4a92, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *)+sizeof(void *) );
    frame_e6b7d6a111070034eb4eadc95a2f4a92 = cache_frame_e6b7d6a111070034eb4eadc95a2f4a92;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e6b7d6a111070034eb4eadc95a2f4a92 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e6b7d6a111070034eb4eadc95a2f4a92 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( par_z );
        tmp_subscribed_name_1 = par_z;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_stop_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_n_vars );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6b7d6a111070034eb4eadc95a2f4a92 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6b7d6a111070034eb4eadc95a2f4a92 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6b7d6a111070034eb4eadc95a2f4a92 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e6b7d6a111070034eb4eadc95a2f4a92, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e6b7d6a111070034eb4eadc95a2f4a92->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e6b7d6a111070034eb4eadc95a2f4a92, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e6b7d6a111070034eb4eadc95a2f4a92,
        type_description_1,
        par_self,
        par_z
    );


    // Release cached frame.
    if ( frame_e6b7d6a111070034eb4eadc95a2f4a92 == cache_frame_e6b7d6a111070034eb4eadc95a2f4a92 )
    {
        Py_DECREF( frame_e6b7d6a111070034eb4eadc95a2f4a92 );
    }
    cache_frame_e6b7d6a111070034eb4eadc95a2f4a92 = NULL;

    assertFrameObject( frame_e6b7d6a111070034eb4eadc95a2f4a92 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_4_get_variables );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_4_get_variables );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_5_function_and_constraints( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *var_x = NULL;
    PyObject *var_s = NULL;
    PyObject *var_f = NULL;
    PyObject *var_c_eq = NULL;
    PyObject *var_c_ineq = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_ebde815d7f717717ac1e7873606b1118;
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
    static struct Nuitka_FrameObject *cache_frame_ebde815d7f717717ac1e7873606b1118 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ebde815d7f717717ac1e7873606b1118, codeobj_ebde815d7f717717ac1e7873606b1118, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ebde815d7f717717ac1e7873606b1118 = cache_frame_ebde815d7f717717ac1e7873606b1118;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ebde815d7f717717ac1e7873606b1118 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ebde815d7f717717ac1e7873606b1118 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_ebde815d7f717717ac1e7873606b1118->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_variables, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_2 = par_z;
        frame_ebde815d7f717717ac1e7873606b1118->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get_slack, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_s == NULL );
        var_s = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_3 = var_x;
        frame_ebde815d7f717717ac1e7873606b1118->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_fun, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_f == NULL );
        var_f = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_self );
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_4 = var_x;
        frame_ebde815d7f717717ac1e7873606b1118->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_constr, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "ooooooo";
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


            type_description_1 = "ooooooo";
            exception_lineno = 84;
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


            type_description_1 = "ooooooo";
            exception_lineno = 84;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 84;
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
            exception_lineno = 84;
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
        assert( var_c_eq == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_c_eq = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert( var_c_ineq == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_c_ineq = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        CHECK_OBJECT( par_self );
        tmp_called_instance_5 = par_self;
        CHECK_OBJECT( var_f );
        tmp_args_element_name_5 = var_f;
        CHECK_OBJECT( var_c_ineq );
        tmp_args_element_name_6 = var_c_ineq;
        CHECK_OBJECT( var_s );
        tmp_args_element_name_7 = var_s;
        frame_ebde815d7f717717ac1e7873606b1118->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_5, const_str_plain__compute_function, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT( var_c_ineq );
        tmp_args_element_name_8 = var_c_ineq;
        CHECK_OBJECT( var_c_eq );
        tmp_args_element_name_9 = var_c_eq;
        CHECK_OBJECT( var_s );
        tmp_args_element_name_10 = var_s;
        frame_ebde815d7f717717ac1e7873606b1118->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_6, const_str_plain__compute_constr, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 87;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ebde815d7f717717ac1e7873606b1118 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ebde815d7f717717ac1e7873606b1118 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ebde815d7f717717ac1e7873606b1118 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ebde815d7f717717ac1e7873606b1118, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ebde815d7f717717ac1e7873606b1118->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ebde815d7f717717ac1e7873606b1118, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ebde815d7f717717ac1e7873606b1118,
        type_description_1,
        par_self,
        par_z,
        var_x,
        var_s,
        var_f,
        var_c_eq,
        var_c_ineq
    );


    // Release cached frame.
    if ( frame_ebde815d7f717717ac1e7873606b1118 == cache_frame_ebde815d7f717717ac1e7873606b1118 )
    {
        Py_DECREF( frame_ebde815d7f717717ac1e7873606b1118 );
    }
    cache_frame_ebde815d7f717717ac1e7873606b1118 = NULL;

    assertFrameObject( frame_ebde815d7f717717ac1e7873606b1118 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_5_function_and_constraints );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

    CHECK_OBJECT( (PyObject *)var_c_eq );
    Py_DECREF( var_c_eq );
    var_c_eq = NULL;

    CHECK_OBJECT( (PyObject *)var_c_ineq );
    Py_DECREF( var_c_ineq );
    var_c_ineq = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_c_eq );
    var_c_eq = NULL;

    Py_XDECREF( var_c_ineq );
    var_c_ineq = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_5_function_and_constraints );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_6__compute_function( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_f = python_pars[ 1 ];
    PyObject *par_c_ineq = python_pars[ 2 ];
    PyObject *par_s = python_pars[ 3 ];
    PyObject *var_log_s = NULL;
    PyObject *outline_0_var_s_i = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_206a0af41086a4af98d16e3536dee304;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_FrameObject *frame_b95cbeb864cd75374dcdf177a4ed103d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_b95cbeb864cd75374dcdf177a4ed103d_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_206a0af41086a4af98d16e3536dee304 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_206a0af41086a4af98d16e3536dee304, codeobj_206a0af41086a4af98d16e3536dee304, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_206a0af41086a4af98d16e3536dee304 = cache_frame_206a0af41086a4af98d16e3536dee304;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_206a0af41086a4af98d16e3536dee304 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_206a0af41086a4af98d16e3536dee304 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_c_ineq );
        tmp_subscribed_name_1 = par_c_ineq;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_enforce_feasibility );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_s );
        tmp_ass_subscribed_1 = par_s;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_enforce_feasibility );
        if ( tmp_ass_subscript_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_s );
            tmp_iter_arg_1 = par_s;
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
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
        MAKE_OR_REUSE_FRAME( cache_frame_b95cbeb864cd75374dcdf177a4ed103d_2, codeobj_b95cbeb864cd75374dcdf177a4ed103d, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *) );
        frame_b95cbeb864cd75374dcdf177a4ed103d_2 = cache_frame_b95cbeb864cd75374dcdf177a4ed103d_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_b95cbeb864cd75374dcdf177a4ed103d_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_b95cbeb864cd75374dcdf177a4ed103d_2 ) == 2 ); // Frame stack

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
                    type_description_2 = "o";
                    exception_lineno = 94;
                    goto try_except_handler_3;
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
                PyObject *old = outline_0_var_s_i;
                outline_0_var_s_i = tmp_assign_source_5;
                Py_INCREF( outline_0_var_s_i );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT( outline_0_var_s_i );
            tmp_compexpr_left_1 = outline_0_var_s_i;
            tmp_compexpr_right_1 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_2 = "o";
                goto try_except_handler_3;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 94;
                type_description_2 = "o";
                goto try_except_handler_3;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT( outline_0_var_s_i );
            tmp_args_element_name_1 = outline_0_var_s_i;
            frame_b95cbeb864cd75374dcdf177a4ed103d_2->m_frame.f_lineno = 94;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_log, call_args );
            }

            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 94;
                type_description_2 = "o";
                goto try_except_handler_3;
            }

            tmp_source_name_3 = tmp_mvar_value_2;
            tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_inf );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_append_value_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            condexpr_end_1:;
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_assign_source_1 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_6__compute_function );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
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
        try_except_handler_3:;
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
        RESTORE_FRAME_EXCEPTION( frame_b95cbeb864cd75374dcdf177a4ed103d_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_b95cbeb864cd75374dcdf177a4ed103d_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_b95cbeb864cd75374dcdf177a4ed103d_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_b95cbeb864cd75374dcdf177a4ed103d_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_b95cbeb864cd75374dcdf177a4ed103d_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_b95cbeb864cd75374dcdf177a4ed103d_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_b95cbeb864cd75374dcdf177a4ed103d_2,
            type_description_2,
            outline_0_var_s_i
        );


        // Release cached frame.
        if ( frame_b95cbeb864cd75374dcdf177a4ed103d_2 == cache_frame_b95cbeb864cd75374dcdf177a4ed103d_2 )
        {
            Py_DECREF( frame_b95cbeb864cd75374dcdf177a4ed103d_2 );
        }
        cache_frame_b95cbeb864cd75374dcdf177a4ed103d_2 = NULL;

        assertFrameObject( frame_b95cbeb864cd75374dcdf177a4ed103d_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_6__compute_function );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_s_i );
        outline_0_var_s_i = NULL;

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

        Py_XDECREF( outline_0_var_s_i );
        outline_0_var_s_i = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_6__compute_function );
        return NULL;
        outline_exception_1:;
        exception_lineno = 94;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert( var_log_s == NULL );
        var_log_s = tmp_assign_source_1;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_f );
        tmp_left_name_1 = par_f;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_barrier_parameter );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 96;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_log_s );
        tmp_args_element_name_2 = var_log_s;
        frame_206a0af41086a4af98d16e3536dee304->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_right_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_sum, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 96;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_206a0af41086a4af98d16e3536dee304 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_206a0af41086a4af98d16e3536dee304 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_206a0af41086a4af98d16e3536dee304 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_206a0af41086a4af98d16e3536dee304, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_206a0af41086a4af98d16e3536dee304->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_206a0af41086a4af98d16e3536dee304, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_206a0af41086a4af98d16e3536dee304,
        type_description_1,
        par_self,
        par_f,
        par_c_ineq,
        par_s,
        var_log_s
    );


    // Release cached frame.
    if ( frame_206a0af41086a4af98d16e3536dee304 == cache_frame_206a0af41086a4af98d16e3536dee304 )
    {
        Py_DECREF( frame_206a0af41086a4af98d16e3536dee304 );
    }
    cache_frame_206a0af41086a4af98d16e3536dee304 = NULL;

    assertFrameObject( frame_206a0af41086a4af98d16e3536dee304 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_6__compute_function );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    CHECK_OBJECT( (PyObject *)par_c_ineq );
    Py_DECREF( par_c_ineq );
    par_c_ineq = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)var_log_s );
    Py_DECREF( var_log_s );
    var_log_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    CHECK_OBJECT( (PyObject *)par_c_ineq );
    Py_DECREF( par_c_ineq );
    par_c_ineq = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    Py_XDECREF( var_log_s );
    var_log_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_6__compute_function );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_7__compute_constr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_c_ineq = python_pars[ 1 ];
    PyObject *par_c_eq = python_pars[ 2 ];
    PyObject *par_s = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_b2c41e654c2bc37da42117d37ef4ba9b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b2c41e654c2bc37da42117d37ef4ba9b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b2c41e654c2bc37da42117d37ef4ba9b, codeobj_b2c41e654c2bc37da42117d37ef4ba9b, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b2c41e654c2bc37da42117d37ef4ba9b = cache_frame_b2c41e654c2bc37da42117d37ef4ba9b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b2c41e654c2bc37da42117d37ef4ba9b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b2c41e654c2bc37da42117d37ef4ba9b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 100;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hstack );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_c_eq );
        tmp_tuple_element_1 = par_c_eq;
        tmp_args_element_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_c_ineq );
        tmp_left_name_1 = par_c_ineq;
        CHECK_OBJECT( par_s );
        tmp_right_name_1 = par_s;
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 101;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
        frame_b2c41e654c2bc37da42117d37ef4ba9b->m_frame.f_lineno = 100;
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


            exception_lineno = 100;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2c41e654c2bc37da42117d37ef4ba9b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2c41e654c2bc37da42117d37ef4ba9b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2c41e654c2bc37da42117d37ef4ba9b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b2c41e654c2bc37da42117d37ef4ba9b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b2c41e654c2bc37da42117d37ef4ba9b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b2c41e654c2bc37da42117d37ef4ba9b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b2c41e654c2bc37da42117d37ef4ba9b,
        type_description_1,
        par_self,
        par_c_ineq,
        par_c_eq,
        par_s
    );


    // Release cached frame.
    if ( frame_b2c41e654c2bc37da42117d37ef4ba9b == cache_frame_b2c41e654c2bc37da42117d37ef4ba9b )
    {
        Py_DECREF( frame_b2c41e654c2bc37da42117d37ef4ba9b );
    }
    cache_frame_b2c41e654c2bc37da42117d37ef4ba9b = NULL;

    assertFrameObject( frame_b2c41e654c2bc37da42117d37ef4ba9b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_7__compute_constr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_c_ineq );
    Py_DECREF( par_c_ineq );
    par_c_ineq = NULL;

    CHECK_OBJECT( (PyObject *)par_c_eq );
    Py_DECREF( par_c_eq );
    par_c_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c_ineq );
    Py_DECREF( par_c_ineq );
    par_c_ineq = NULL;

    CHECK_OBJECT( (PyObject *)par_c_eq );
    Py_DECREF( par_c_eq );
    par_c_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_7__compute_constr );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_8_scaling( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *var_s = NULL;
    struct Nuitka_CellObject *var_diag_elements = PyCell_EMPTY();
    PyObject *var_matvec = NULL;
    struct Nuitka_FrameObject *frame_191ac557a863c1bb3d8881c519c68a70;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_191ac557a863c1bb3d8881c519c68a70 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_191ac557a863c1bb3d8881c519c68a70, codeobj_191ac557a863c1bb3d8881c519c68a70, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_191ac557a863c1bb3d8881c519c68a70 = cache_frame_191ac557a863c1bb3d8881c519c68a70;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_191ac557a863c1bb3d8881c519c68a70 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_191ac557a863c1bb3d8881c519c68a70 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_191ac557a863c1bb3d8881c519c68a70->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_slack, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        assert( var_s == NULL );
        var_s = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 109;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hstack );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 109;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ones );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 109;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_n_vars );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 109;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        frame_191ac557a863c1bb3d8881c519c68a70->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 109;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_s );
        tmp_tuple_element_1 = var_s;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_1 );
        frame_191ac557a863c1bb3d8881c519c68a70->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_diag_elements ) == NULL );
        PyCell_SET( var_diag_elements, tmp_assign_source_2 );

    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_8_scaling$$$function_1_matvec(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] = var_diag_elements;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] );


        assert( var_matvec == NULL );
        var_matvec = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_LinearOperator );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinearOperator );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinearOperator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 114;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_n_vars );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_n_ineq );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 114;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_element_name_4, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_n_vars );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 115;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_n_ineq );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 115;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 115;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_4, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( var_matvec );
        tmp_args_element_name_5 = var_matvec;
        frame_191ac557a863c1bb3d8881c519c68a70->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_191ac557a863c1bb3d8881c519c68a70 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_191ac557a863c1bb3d8881c519c68a70 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_191ac557a863c1bb3d8881c519c68a70 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_191ac557a863c1bb3d8881c519c68a70, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_191ac557a863c1bb3d8881c519c68a70->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_191ac557a863c1bb3d8881c519c68a70, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_191ac557a863c1bb3d8881c519c68a70,
        type_description_1,
        par_self,
        par_z,
        var_s,
        var_diag_elements,
        var_matvec
    );


    // Release cached frame.
    if ( frame_191ac557a863c1bb3d8881c519c68a70 == cache_frame_191ac557a863c1bb3d8881c519c68a70 )
    {
        Py_DECREF( frame_191ac557a863c1bb3d8881c519c68a70 );
    }
    cache_frame_191ac557a863c1bb3d8881c519c68a70 = NULL;

    assertFrameObject( frame_191ac557a863c1bb3d8881c519c68a70 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_8_scaling );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

    CHECK_OBJECT( (PyObject *)var_diag_elements );
    Py_DECREF( var_diag_elements );
    var_diag_elements = NULL;

    CHECK_OBJECT( (PyObject *)var_matvec );
    Py_DECREF( var_matvec );
    var_matvec = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    CHECK_OBJECT( (PyObject *)var_diag_elements );
    Py_DECREF( var_diag_elements );
    var_diag_elements = NULL;

    Py_XDECREF( var_matvec );
    var_matvec = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_8_scaling );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_8_scaling$$$function_1_matvec( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_vec = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_488a9b467667430433278618cc6bef55;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_488a9b467667430433278618cc6bef55 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_488a9b467667430433278618cc6bef55, codeobj_488a9b467667430433278618cc6bef55, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *)+sizeof(void *) );
    frame_488a9b467667430433278618cc6bef55 = cache_frame_488a9b467667430433278618cc6bef55;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_488a9b467667430433278618cc6bef55 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_488a9b467667430433278618cc6bef55 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "diag_elements" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 113;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_vec );
        tmp_right_name_1 = par_vec;
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_488a9b467667430433278618cc6bef55 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_488a9b467667430433278618cc6bef55 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_488a9b467667430433278618cc6bef55 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_488a9b467667430433278618cc6bef55, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_488a9b467667430433278618cc6bef55->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_488a9b467667430433278618cc6bef55, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_488a9b467667430433278618cc6bef55,
        type_description_1,
        par_vec,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_488a9b467667430433278618cc6bef55 == cache_frame_488a9b467667430433278618cc6bef55 )
    {
        Py_DECREF( frame_488a9b467667430433278618cc6bef55 );
    }
    cache_frame_488a9b467667430433278618cc6bef55 = NULL;

    assertFrameObject( frame_488a9b467667430433278618cc6bef55 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_8_scaling$$$function_1_matvec );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_vec );
    Py_DECREF( par_vec );
    par_vec = NULL;

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

    CHECK_OBJECT( (PyObject *)par_vec );
    Py_DECREF( par_vec );
    par_vec = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_8_scaling$$$function_1_matvec );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_9_gradient_and_jacobian( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *var_x = NULL;
    PyObject *var_s = NULL;
    PyObject *var_g = NULL;
    PyObject *var_J_eq = NULL;
    PyObject *var_J_ineq = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3fd3ff5e0a4c221d8370cf3eb8d007d5;
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
    static struct Nuitka_FrameObject *cache_frame_3fd3ff5e0a4c221d8370cf3eb8d007d5 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3fd3ff5e0a4c221d8370cf3eb8d007d5, codeobj_3fd3ff5e0a4c221d8370cf3eb8d007d5, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3fd3ff5e0a4c221d8370cf3eb8d007d5 = cache_frame_3fd3ff5e0a4c221d8370cf3eb8d007d5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3fd3ff5e0a4c221d8370cf3eb8d007d5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3fd3ff5e0a4c221d8370cf3eb8d007d5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_3fd3ff5e0a4c221d8370cf3eb8d007d5->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_variables, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_2 = par_z;
        frame_3fd3ff5e0a4c221d8370cf3eb8d007d5->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get_slack, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_s == NULL );
        var_s = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_3 = var_x;
        frame_3fd3ff5e0a4c221d8370cf3eb8d007d5->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_grad, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_g == NULL );
        var_g = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_self );
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_4 = var_x;
        frame_3fd3ff5e0a4c221d8370cf3eb8d007d5->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_jac, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooooooo";
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


            type_description_1 = "ooooooo";
            exception_lineno = 134;
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


            type_description_1 = "ooooooo";
            exception_lineno = 134;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 134;
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
            exception_lineno = 134;
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
        assert( var_J_eq == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_J_eq = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert( var_J_ineq == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_J_ineq = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( par_self );
        tmp_called_instance_5 = par_self;
        CHECK_OBJECT( var_g );
        tmp_args_element_name_5 = var_g;
        frame_3fd3ff5e0a4c221d8370cf3eb8d007d5->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain__compute_gradient, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT( var_J_eq );
        tmp_args_element_name_6 = var_J_eq;
        CHECK_OBJECT( var_J_ineq );
        tmp_args_element_name_7 = var_J_ineq;
        CHECK_OBJECT( var_s );
        tmp_args_element_name_8 = var_s;
        frame_3fd3ff5e0a4c221d8370cf3eb8d007d5->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_6, const_str_plain__compute_jacobian, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 137;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fd3ff5e0a4c221d8370cf3eb8d007d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fd3ff5e0a4c221d8370cf3eb8d007d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fd3ff5e0a4c221d8370cf3eb8d007d5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3fd3ff5e0a4c221d8370cf3eb8d007d5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3fd3ff5e0a4c221d8370cf3eb8d007d5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3fd3ff5e0a4c221d8370cf3eb8d007d5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3fd3ff5e0a4c221d8370cf3eb8d007d5,
        type_description_1,
        par_self,
        par_z,
        var_x,
        var_s,
        var_g,
        var_J_eq,
        var_J_ineq
    );


    // Release cached frame.
    if ( frame_3fd3ff5e0a4c221d8370cf3eb8d007d5 == cache_frame_3fd3ff5e0a4c221d8370cf3eb8d007d5 )
    {
        Py_DECREF( frame_3fd3ff5e0a4c221d8370cf3eb8d007d5 );
    }
    cache_frame_3fd3ff5e0a4c221d8370cf3eb8d007d5 = NULL;

    assertFrameObject( frame_3fd3ff5e0a4c221d8370cf3eb8d007d5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_9_gradient_and_jacobian );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

    CHECK_OBJECT( (PyObject *)var_g );
    Py_DECREF( var_g );
    var_g = NULL;

    CHECK_OBJECT( (PyObject *)var_J_eq );
    Py_DECREF( var_J_eq );
    var_J_eq = NULL;

    CHECK_OBJECT( (PyObject *)var_J_ineq );
    Py_DECREF( var_J_ineq );
    var_J_ineq = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_J_eq );
    var_J_eq = NULL;

    Py_XDECREF( var_J_ineq );
    var_J_ineq = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_9_gradient_and_jacobian );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_10__compute_gradient( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_g = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_f22505c6ac7593a30d60e89ac32e5024;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f22505c6ac7593a30d60e89ac32e5024 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f22505c6ac7593a30d60e89ac32e5024, codeobj_f22505c6ac7593a30d60e89ac32e5024, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *)+sizeof(void *) );
    frame_f22505c6ac7593a30d60e89ac32e5024 = cache_frame_f22505c6ac7593a30d60e89ac32e5024;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f22505c6ac7593a30d60e89ac32e5024 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f22505c6ac7593a30d60e89ac32e5024 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hstack );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_g );
        tmp_tuple_element_1 = par_g;
        tmp_args_element_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_barrier_parameter );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ones );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_n_ineq );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f22505c6ac7593a30d60e89ac32e5024->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
        frame_f22505c6ac7593a30d60e89ac32e5024->m_frame.f_lineno = 140;
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


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f22505c6ac7593a30d60e89ac32e5024 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f22505c6ac7593a30d60e89ac32e5024 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f22505c6ac7593a30d60e89ac32e5024 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f22505c6ac7593a30d60e89ac32e5024, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f22505c6ac7593a30d60e89ac32e5024->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f22505c6ac7593a30d60e89ac32e5024, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f22505c6ac7593a30d60e89ac32e5024,
        type_description_1,
        par_self,
        par_g
    );


    // Release cached frame.
    if ( frame_f22505c6ac7593a30d60e89ac32e5024 == cache_frame_f22505c6ac7593a30d60e89ac32e5024 )
    {
        Py_DECREF( frame_f22505c6ac7593a30d60e89ac32e5024 );
    }
    cache_frame_f22505c6ac7593a30d60e89ac32e5024 = NULL;

    assertFrameObject( frame_f22505c6ac7593a30d60e89ac32e5024 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_10__compute_gradient );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

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

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_10__compute_gradient );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_11__compute_jacobian( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_J_eq = python_pars[ 1 ];
    PyObject *par_J_ineq = python_pars[ 2 ];
    PyObject *par_s = python_pars[ 3 ];
    PyObject *var_S = NULL;
    PyObject *var_zeros = NULL;
    struct Nuitka_FrameObject *frame_6529abe17d6dd757a87ecc0e8a006650;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6529abe17d6dd757a87ecc0e8a006650 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6529abe17d6dd757a87ecc0e8a006650, codeobj_6529abe17d6dd757a87ecc0e8a006650, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6529abe17d6dd757a87ecc0e8a006650 = cache_frame_6529abe17d6dd757a87ecc0e8a006650;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6529abe17d6dd757a87ecc0e8a006650 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6529abe17d6dd757a87ecc0e8a006650 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_n_ineq );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
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
        CHECK_OBJECT( par_J_eq );
        tmp_return_value = par_J_eq;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            int tmp_truth_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_2;
            int tmp_truth_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_sps );

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

                exception_lineno = 146;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_J_eq );
            tmp_args_element_name_1 = par_J_eq;
            frame_6529abe17d6dd757a87ecc0e8a006650->m_frame.f_lineno = 146;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_issparse, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_1 );

                exception_lineno = 146;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_1 );
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
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_sps );

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

                exception_lineno = 146;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_J_ineq );
            tmp_args_element_name_2 = par_J_ineq;
            frame_6529abe17d6dd757a87ecc0e8a006650->m_frame.f_lineno = 146;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_issparse, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 146;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
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
                PyObject *tmp_assign_source_1;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_3;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_sps );

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

                    exception_lineno = 151;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_3 = tmp_mvar_value_3;
                CHECK_OBJECT( par_J_eq );
                tmp_args_element_name_3 = par_J_eq;
                frame_6529abe17d6dd757a87ecc0e8a006650->m_frame.f_lineno = 151;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_csr_matrix, call_args );
                }

                if ( tmp_assign_source_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 151;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_J_eq;
                    assert( old != NULL );
                    par_J_eq = tmp_assign_source_1;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_4;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_sps );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 152;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_4 = tmp_mvar_value_4;
                CHECK_OBJECT( par_J_ineq );
                tmp_args_element_name_4 = par_J_ineq;
                frame_6529abe17d6dd757a87ecc0e8a006650->m_frame.f_lineno = 152;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_csr_matrix, call_args );
                }

                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 152;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_J_ineq;
                    assert( old != NULL );
                    par_J_ineq = tmp_assign_source_2;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_called_instance_5;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_args_element_name_7;
                CHECK_OBJECT( par_self );
                tmp_called_instance_5 = par_self;
                CHECK_OBJECT( par_J_eq );
                tmp_args_element_name_5 = par_J_eq;
                CHECK_OBJECT( par_J_ineq );
                tmp_args_element_name_6 = par_J_ineq;
                CHECK_OBJECT( par_s );
                tmp_args_element_name_7 = par_s;
                frame_6529abe17d6dd757a87ecc0e8a006650->m_frame.f_lineno = 153;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                    tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_5, const_str_plain__assemble_sparse_jacobian, call_args );
                }

                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 153;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_called_instance_6;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_element_name_8;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 155;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_6 = tmp_mvar_value_5;
                CHECK_OBJECT( par_s );
                tmp_args_element_name_8 = par_s;
                frame_6529abe17d6dd757a87ecc0e8a006650->m_frame.f_lineno = 155;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8 };
                    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_diag, call_args );
                }

                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 155;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_S == NULL );
                var_S = tmp_assign_source_3;
            }
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_2;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_args_element_name_9;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_source_name_3;
                PyObject *tmp_source_name_4;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 156;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_2 = tmp_mvar_value_6;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_zeros );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 156;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_3 = par_self;
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_n_eq );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 156;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_9 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_args_element_name_9, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( par_self );
                tmp_source_name_4 = par_self;
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_n_ineq );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );
                    Py_DECREF( tmp_args_element_name_9 );

                    exception_lineno = 156;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_args_element_name_9, 1, tmp_tuple_element_1 );
                frame_6529abe17d6dd757a87ecc0e8a006650->m_frame.f_lineno = 156;
                {
                    PyObject *call_args[] = { tmp_args_element_name_9 };
                    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_9 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 156;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_zeros == NULL );
                var_zeros = tmp_assign_source_4;
            }
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_called_instance_7;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_10;
                int tmp_truth_name_3;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_sps );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 158;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_7 = tmp_mvar_value_7;
                CHECK_OBJECT( par_J_ineq );
                tmp_args_element_name_10 = par_J_ineq;
                frame_6529abe17d6dd757a87ecc0e8a006650->m_frame.f_lineno = 158;
                {
                    PyObject *call_args[] = { tmp_args_element_name_10 };
                    tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_issparse, call_args );
                }

                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 158;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_3 );
                if ( tmp_truth_name_3 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_3 );

                    exception_lineno = 158;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_3 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_3 );
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
                    PyObject *tmp_assign_source_5;
                    PyObject *tmp_called_instance_8;
                    CHECK_OBJECT( par_J_ineq );
                    tmp_called_instance_8 = par_J_ineq;
                    frame_6529abe17d6dd757a87ecc0e8a006650->m_frame.f_lineno = 159;
                    tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_toarray );
                    if ( tmp_assign_source_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 159;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_J_ineq;
                        assert( old != NULL );
                        par_J_ineq = tmp_assign_source_5;
                        Py_DECREF( old );
                    }

                }
                branch_no_3:;
            }
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_called_instance_9;
                PyObject *tmp_mvar_value_8;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_11;
                int tmp_truth_name_4;
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_sps );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
                }

                if ( tmp_mvar_value_8 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 160;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_9 = tmp_mvar_value_8;
                CHECK_OBJECT( par_J_eq );
                tmp_args_element_name_11 = par_J_eq;
                frame_6529abe17d6dd757a87ecc0e8a006650->m_frame.f_lineno = 160;
                {
                    PyObject *call_args[] = { tmp_args_element_name_11 };
                    tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_issparse, call_args );
                }

                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 160;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_4 );
                if ( tmp_truth_name_4 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_4 );

                    exception_lineno = 160;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_4 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_4 );
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
                    PyObject *tmp_called_instance_10;
                    CHECK_OBJECT( par_J_eq );
                    tmp_called_instance_10 = par_J_eq;
                    frame_6529abe17d6dd757a87ecc0e8a006650->m_frame.f_lineno = 161;
                    tmp_assign_source_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_10, const_str_plain_toarray );
                    if ( tmp_assign_source_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 161;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_J_eq;
                        assert( old != NULL );
                        par_J_eq = tmp_assign_source_6;
                        Py_DECREF( old );
                    }

                }
                branch_no_4:;
            }
            {
                PyObject *tmp_called_instance_11;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_list_element_1;
                PyObject *tmp_list_element_2;
                PyObject *tmp_list_element_3;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 163;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_11 = tmp_mvar_value_9;
                CHECK_OBJECT( par_J_eq );
                tmp_list_element_2 = par_J_eq;
                tmp_list_element_1 = PyList_New( 2 );
                Py_INCREF( tmp_list_element_2 );
                PyList_SET_ITEM( tmp_list_element_1, 0, tmp_list_element_2 );
                CHECK_OBJECT( var_zeros );
                tmp_list_element_2 = var_zeros;
                Py_INCREF( tmp_list_element_2 );
                PyList_SET_ITEM( tmp_list_element_1, 1, tmp_list_element_2 );
                tmp_args_element_name_12 = PyList_New( 2 );
                PyList_SET_ITEM( tmp_args_element_name_12, 0, tmp_list_element_1 );
                CHECK_OBJECT( par_J_ineq );
                tmp_list_element_3 = par_J_ineq;
                tmp_list_element_1 = PyList_New( 2 );
                Py_INCREF( tmp_list_element_3 );
                PyList_SET_ITEM( tmp_list_element_1, 0, tmp_list_element_3 );
                CHECK_OBJECT( var_S );
                tmp_list_element_3 = var_S;
                Py_INCREF( tmp_list_element_3 );
                PyList_SET_ITEM( tmp_list_element_1, 1, tmp_list_element_3 );
                PyList_SET_ITEM( tmp_args_element_name_12, 1, tmp_list_element_1 );
                frame_6529abe17d6dd757a87ecc0e8a006650->m_frame.f_lineno = 163;
                {
                    PyObject *call_args[] = { tmp_args_element_name_12 };
                    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_block, call_args );
                }

                Py_DECREF( tmp_args_element_name_12 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 163;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6529abe17d6dd757a87ecc0e8a006650 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6529abe17d6dd757a87ecc0e8a006650 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6529abe17d6dd757a87ecc0e8a006650 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6529abe17d6dd757a87ecc0e8a006650, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6529abe17d6dd757a87ecc0e8a006650->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6529abe17d6dd757a87ecc0e8a006650, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6529abe17d6dd757a87ecc0e8a006650,
        type_description_1,
        par_self,
        par_J_eq,
        par_J_ineq,
        par_s,
        var_S,
        var_zeros
    );


    // Release cached frame.
    if ( frame_6529abe17d6dd757a87ecc0e8a006650 == cache_frame_6529abe17d6dd757a87ecc0e8a006650 )
    {
        Py_DECREF( frame_6529abe17d6dd757a87ecc0e8a006650 );
    }
    cache_frame_6529abe17d6dd757a87ecc0e8a006650 = NULL;

    assertFrameObject( frame_6529abe17d6dd757a87ecc0e8a006650 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_11__compute_jacobian );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_J_eq );
    par_J_eq = NULL;

    Py_XDECREF( par_J_ineq );
    par_J_ineq = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    Py_XDECREF( var_S );
    var_S = NULL;

    Py_XDECREF( var_zeros );
    var_zeros = NULL;

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

    Py_XDECREF( par_J_eq );
    par_J_eq = NULL;

    Py_XDECREF( par_J_ineq );
    par_J_ineq = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    Py_XDECREF( var_S );
    var_S = NULL;

    Py_XDECREF( var_zeros );
    var_zeros = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_11__compute_jacobian );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_12__assemble_sparse_jacobian( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_J_eq = python_pars[ 1 ];
    PyObject *par_J_ineq = python_pars[ 2 ];
    PyObject *par_s = python_pars[ 3 ];
    PyObject *var_n_vars = NULL;
    PyObject *var_n_ineq = NULL;
    PyObject *var_n_eq = NULL;
    PyObject *var_J_aux = NULL;
    PyObject *var_indptr = NULL;
    PyObject *var_indices = NULL;
    PyObject *var_data = NULL;
    PyObject *var_new_indptr = NULL;
    PyObject *var_size = NULL;
    PyObject *var_new_indices = NULL;
    PyObject *var_new_data = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_J = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4a34defbb110d2b91eb90529a6db8412;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4a34defbb110d2b91eb90529a6db8412 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4a34defbb110d2b91eb90529a6db8412, codeobj_4a34defbb110d2b91eb90529a6db8412, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4a34defbb110d2b91eb90529a6db8412 = cache_frame_4a34defbb110d2b91eb90529a6db8412;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4a34defbb110d2b91eb90529a6db8412 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4a34defbb110d2b91eb90529a6db8412 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_n_vars );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_n_ineq );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_1 );

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_n_eq );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_1 );

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_1, 2, tmp_tuple_element_1 );
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 179;
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 179;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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
            exception_lineno = 179;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
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
        assert( var_n_vars == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_n_vars = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_n_ineq == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_n_ineq = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert( var_n_eq == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_n_eq = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_sps );

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

            exception_lineno = 180;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_J_eq );
        tmp_list_element_1 = par_J_eq;
        tmp_args_element_name_1 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        CHECK_OBJECT( par_J_ineq );
        tmp_list_element_1 = par_J_ineq;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
        tmp_args_element_name_2 = const_str_plain_csr;
        frame_4a34defbb110d2b91eb90529a6db8412->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_8 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_vstack, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_J_aux == NULL );
        var_J_aux = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( var_J_aux );
        tmp_source_name_4 = var_J_aux;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_indptr );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_iter_arg_2 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_J_aux );
        tmp_source_name_5 = var_J_aux;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_indices );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_2 );

            exception_lineno = 181;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( var_J_aux );
        tmp_source_name_6 = var_J_aux;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_data );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_2 );

            exception_lineno = 181;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_2, 2, tmp_tuple_element_2 );
        tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_4, 0, 3 );
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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 181;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_5, 1, 3 );
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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 181;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_6, 2, 3 );
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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 181;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_3 == NULL );
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_12;
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
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
        assert( var_indptr == NULL );
        Py_INCREF( tmp_assign_source_13 );
        var_indptr = tmp_assign_source_13;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
        assert( var_indices == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_indices = tmp_assign_source_14;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_3;
        assert( var_data == NULL );
        Py_INCREF( tmp_assign_source_15 );
        var_data = tmp_assign_source_15;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_kw_name_2;
        CHECK_OBJECT( var_indptr );
        tmp_left_name_1 = var_indptr;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_hstack );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_zeros );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n_eq );
        tmp_tuple_element_4 = var_n_eq;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_4 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_6ccf1996a79e7bc95b345c0d39aef510 );
        frame_4a34defbb110d2b91eb90529a6db8412->m_frame.f_lineno = 182;
        tmp_tuple_element_3 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_3 );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_arange );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n_ineq );
        tmp_left_name_2 = var_n_ineq;
        tmp_right_name_2 = const_int_pos_1;
        tmp_tuple_element_5 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_5 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_6ccf1996a79e7bc95b345c0d39aef510 );
        frame_4a34defbb110d2b91eb90529a6db8412->m_frame.f_lineno = 183;
        tmp_tuple_element_3 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_3 );
        frame_4a34defbb110d2b91eb90529a6db8412->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_new_indptr == NULL );
        var_new_indptr = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_10;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_indices );
        tmp_source_name_10 = var_indices;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_size );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n_ineq );
        tmp_right_name_3 = var_n_ineq;
        tmp_assign_source_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_size == NULL );
        var_size = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_5;
        CHECK_OBJECT( var_size );
        tmp_args_element_name_4 = var_size;
        frame_4a34defbb110d2b91eb90529a6db8412->m_frame.f_lineno = 185;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_empty, call_args );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_new_indices == NULL );
        var_new_indices = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_6;
        CHECK_OBJECT( var_size );
        tmp_args_element_name_5 = var_size;
        frame_4a34defbb110d2b91eb90529a6db8412->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_19 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_empty, call_args );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_new_data == NULL );
        var_new_data = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_7;
        CHECK_OBJECT( var_size );
        tmp_args_element_name_6 = var_size;
        tmp_args_element_name_7 = Py_False;
        tmp_args_element_name_8 = (PyObject *)&PyBool_Type;
        frame_4a34defbb110d2b91eb90529a6db8412->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_assign_source_20 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_4, const_str_plain_full, call_args );
        }

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mask == NULL );
        var_mask = tmp_assign_source_20;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_right_name_4;
        tmp_ass_subvalue_1 = Py_True;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscribed_1 = var_mask;
        CHECK_OBJECT( var_new_indptr );
        tmp_subscribed_name_1 = var_new_indptr;
        CHECK_OBJECT( var_n_ineq );
        tmp_operand_name_1 = var_n_ineq;
        tmp_start_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        if ( tmp_start_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_1 = Py_None;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_start_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_left_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_int_pos_1;
        tmp_ass_subscript_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_ass_subscript_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( var_n_vars );
        tmp_left_name_5 = var_n_vars;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_8;
        CHECK_OBJECT( var_n_ineq );
        tmp_args_element_name_9 = var_n_ineq;
        frame_4a34defbb110d2b91eb90529a6db8412->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_right_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_arange, call_args );
        }

        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_new_indices );
        tmp_ass_subscribed_2 = var_new_indices;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_2 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( var_indices );
        tmp_ass_subvalue_3 = var_indices;
        CHECK_OBJECT( var_new_indices );
        tmp_ass_subscribed_3 = var_new_indices;
        CHECK_OBJECT( var_mask );
        tmp_operand_name_2 = var_mask;
        tmp_ass_subscript_3 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_2 );
        if ( tmp_ass_subscript_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subscript_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT( par_s );
        tmp_ass_subvalue_4 = par_s;
        CHECK_OBJECT( var_new_data );
        tmp_ass_subscribed_4 = var_new_data;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_4 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        PyObject *tmp_operand_name_3;
        CHECK_OBJECT( var_data );
        tmp_ass_subvalue_5 = var_data;
        CHECK_OBJECT( var_new_data );
        tmp_ass_subscribed_5 = var_new_data;
        CHECK_OBJECT( var_mask );
        tmp_operand_name_3 = var_mask;
        tmp_ass_subscript_5 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_3 );
        if ( tmp_ass_subscript_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
        Py_DECREF( tmp_ass_subscript_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_sps );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_9;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_csr_matrix );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_new_data );
        tmp_tuple_element_6 = var_new_data;
        tmp_args_element_name_10 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_element_name_10, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( var_new_indices );
        tmp_tuple_element_6 = var_new_indices;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_element_name_10, 1, tmp_tuple_element_6 );
        CHECK_OBJECT( var_new_indptr );
        tmp_tuple_element_6 = var_new_indptr;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_element_name_10, 2, tmp_tuple_element_6 );
        CHECK_OBJECT( var_n_eq );
        tmp_left_name_6 = var_n_eq;
        CHECK_OBJECT( var_n_ineq );
        tmp_right_name_6 = var_n_ineq;
        tmp_tuple_element_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_tuple_element_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 194;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_11 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_element_name_11, 0, tmp_tuple_element_7 );
        CHECK_OBJECT( var_n_vars );
        tmp_left_name_7 = var_n_vars;
        CHECK_OBJECT( var_n_ineq );
        tmp_right_name_7 = var_n_ineq;
        tmp_tuple_element_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_tuple_element_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_args_element_name_11 );

            exception_lineno = 194;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_11, 1, tmp_tuple_element_7 );
        frame_4a34defbb110d2b91eb90529a6db8412->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_J == NULL );
        var_J = tmp_assign_source_21;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a34defbb110d2b91eb90529a6db8412 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a34defbb110d2b91eb90529a6db8412 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4a34defbb110d2b91eb90529a6db8412, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4a34defbb110d2b91eb90529a6db8412->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4a34defbb110d2b91eb90529a6db8412, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4a34defbb110d2b91eb90529a6db8412,
        type_description_1,
        par_self,
        par_J_eq,
        par_J_ineq,
        par_s,
        var_n_vars,
        var_n_ineq,
        var_n_eq,
        var_J_aux,
        var_indptr,
        var_indices,
        var_data,
        var_new_indptr,
        var_size,
        var_new_indices,
        var_new_data,
        var_mask,
        var_J
    );


    // Release cached frame.
    if ( frame_4a34defbb110d2b91eb90529a6db8412 == cache_frame_4a34defbb110d2b91eb90529a6db8412 )
    {
        Py_DECREF( frame_4a34defbb110d2b91eb90529a6db8412 );
    }
    cache_frame_4a34defbb110d2b91eb90529a6db8412 = NULL;

    assertFrameObject( frame_4a34defbb110d2b91eb90529a6db8412 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_J );
    tmp_return_value = var_J;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_12__assemble_sparse_jacobian );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_J_eq );
    Py_DECREF( par_J_eq );
    par_J_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_J_ineq );
    Py_DECREF( par_J_ineq );
    par_J_ineq = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)var_n_vars );
    Py_DECREF( var_n_vars );
    var_n_vars = NULL;

    CHECK_OBJECT( (PyObject *)var_n_ineq );
    Py_DECREF( var_n_ineq );
    var_n_ineq = NULL;

    CHECK_OBJECT( (PyObject *)var_n_eq );
    Py_DECREF( var_n_eq );
    var_n_eq = NULL;

    CHECK_OBJECT( (PyObject *)var_J_aux );
    Py_DECREF( var_J_aux );
    var_J_aux = NULL;

    CHECK_OBJECT( (PyObject *)var_indptr );
    Py_DECREF( var_indptr );
    var_indptr = NULL;

    CHECK_OBJECT( (PyObject *)var_indices );
    Py_DECREF( var_indices );
    var_indices = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
    var_data = NULL;

    CHECK_OBJECT( (PyObject *)var_new_indptr );
    Py_DECREF( var_new_indptr );
    var_new_indptr = NULL;

    CHECK_OBJECT( (PyObject *)var_size );
    Py_DECREF( var_size );
    var_size = NULL;

    CHECK_OBJECT( (PyObject *)var_new_indices );
    Py_DECREF( var_new_indices );
    var_new_indices = NULL;

    CHECK_OBJECT( (PyObject *)var_new_data );
    Py_DECREF( var_new_data );
    var_new_data = NULL;

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_J_eq );
    Py_DECREF( par_J_eq );
    par_J_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_J_ineq );
    Py_DECREF( par_J_ineq );
    par_J_ineq = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    Py_XDECREF( var_n_vars );
    var_n_vars = NULL;

    Py_XDECREF( var_n_ineq );
    var_n_ineq = NULL;

    Py_XDECREF( var_n_eq );
    var_n_eq = NULL;

    Py_XDECREF( var_J_aux );
    var_J_aux = NULL;

    Py_XDECREF( var_indptr );
    var_indptr = NULL;

    Py_XDECREF( var_indices );
    var_indices = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_new_indptr );
    var_new_indptr = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_new_indices );
    var_new_indices = NULL;

    Py_XDECREF( var_new_data );
    var_new_data = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_12__assemble_sparse_jacobian );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_13_lagrangian_hessian_x( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *par_v = python_pars[ 2 ];
    PyObject *var_x = NULL;
    PyObject *var_v_eq = NULL;
    PyObject *var_v_ineq = NULL;
    PyObject *var_lagr_hess = NULL;
    struct Nuitka_FrameObject *frame_ba298ba7e65bb8dd19022013ff630c69;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ba298ba7e65bb8dd19022013ff630c69 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ba298ba7e65bb8dd19022013ff630c69, codeobj_ba298ba7e65bb8dd19022013ff630c69, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ba298ba7e65bb8dd19022013ff630c69 = cache_frame_ba298ba7e65bb8dd19022013ff630c69;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ba298ba7e65bb8dd19022013ff630c69 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ba298ba7e65bb8dd19022013ff630c69 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_ba298ba7e65bb8dd19022013ff630c69->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_variables, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( par_v );
        tmp_subscribed_name_1 = par_v;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_stop_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_n_eq );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_v_eq == NULL );
        var_v_eq = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( par_v );
        tmp_subscribed_name_2 = par_v;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_start_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_n_eq );
        if ( tmp_start_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_n_eq );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_start_name_2 );

            exception_lineno = 203;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_n_ineq );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_start_name_2 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 203;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_stop_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_start_name_2 );

            exception_lineno = 203;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_start_name_2 );
        Py_DECREF( tmp_stop_name_2 );
        assert( !(tmp_subscript_name_2 == NULL) );
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_v_ineq == NULL );
        var_v_ineq = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_lagr_hess );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lagr_hess == NULL );
        var_lagr_hess = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( var_lagr_hess );
        tmp_called_name_1 = var_lagr_hess;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_2 = var_x;
        CHECK_OBJECT( var_v_eq );
        tmp_args_element_name_3 = var_v_eq;
        CHECK_OBJECT( var_v_ineq );
        tmp_args_element_name_4 = var_v_ineq;
        frame_ba298ba7e65bb8dd19022013ff630c69->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba298ba7e65bb8dd19022013ff630c69 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba298ba7e65bb8dd19022013ff630c69 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba298ba7e65bb8dd19022013ff630c69 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ba298ba7e65bb8dd19022013ff630c69, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ba298ba7e65bb8dd19022013ff630c69->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ba298ba7e65bb8dd19022013ff630c69, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ba298ba7e65bb8dd19022013ff630c69,
        type_description_1,
        par_self,
        par_z,
        par_v,
        var_x,
        var_v_eq,
        var_v_ineq,
        var_lagr_hess
    );


    // Release cached frame.
    if ( frame_ba298ba7e65bb8dd19022013ff630c69 == cache_frame_ba298ba7e65bb8dd19022013ff630c69 )
    {
        Py_DECREF( frame_ba298ba7e65bb8dd19022013ff630c69 );
    }
    cache_frame_ba298ba7e65bb8dd19022013ff630c69 = NULL;

    assertFrameObject( frame_ba298ba7e65bb8dd19022013ff630c69 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_13_lagrangian_hessian_x );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_v_eq );
    Py_DECREF( var_v_eq );
    var_v_eq = NULL;

    CHECK_OBJECT( (PyObject *)var_v_ineq );
    Py_DECREF( var_v_ineq );
    var_v_ineq = NULL;

    CHECK_OBJECT( (PyObject *)var_lagr_hess );
    Py_DECREF( var_lagr_hess );
    var_lagr_hess = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_v_eq );
    var_v_eq = NULL;

    Py_XDECREF( var_v_ineq );
    var_v_ineq = NULL;

    Py_XDECREF( var_lagr_hess );
    var_lagr_hess = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_13_lagrangian_hessian_x );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_14_lagrangian_hessian_s( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *par_v = python_pars[ 2 ];
    PyObject *var_s = NULL;
    PyObject *var_primal = NULL;
    PyObject *var_primal_dual = NULL;
    struct Nuitka_FrameObject *frame_5b51d1d949e4b38e9523fda44bc83dc8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5b51d1d949e4b38e9523fda44bc83dc8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5b51d1d949e4b38e9523fda44bc83dc8, codeobj_5b51d1d949e4b38e9523fda44bc83dc8, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5b51d1d949e4b38e9523fda44bc83dc8 = cache_frame_5b51d1d949e4b38e9523fda44bc83dc8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5b51d1d949e4b38e9523fda44bc83dc8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5b51d1d949e4b38e9523fda44bc83dc8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_5b51d1d949e4b38e9523fda44bc83dc8->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_slack, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_s == NULL );
        var_s = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_barrier_parameter );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_primal == NULL );
        var_primal = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_v );
        tmp_subscribed_name_1 = par_v;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_n_ineq );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_start_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_start_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_1 = Py_None;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_start_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_s );
        tmp_right_name_1 = var_s;
        tmp_assign_source_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_primal_dual == NULL );
        var_primal_dual = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 221;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_where );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_v );
        tmp_subscribed_name_2 = par_v;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_n_ineq );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 221;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_start_name_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_start_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 221;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_2 = Py_None;
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_start_name_2 );
        assert( !(tmp_subscript_name_2 == NULL) );
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 221;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_args_element_name_2 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 221;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_primal_dual );
        tmp_args_element_name_3 = var_primal_dual;
        CHECK_OBJECT( var_primal );
        tmp_args_element_name_4 = var_primal;
        frame_5b51d1d949e4b38e9523fda44bc83dc8->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b51d1d949e4b38e9523fda44bc83dc8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b51d1d949e4b38e9523fda44bc83dc8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b51d1d949e4b38e9523fda44bc83dc8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5b51d1d949e4b38e9523fda44bc83dc8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5b51d1d949e4b38e9523fda44bc83dc8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5b51d1d949e4b38e9523fda44bc83dc8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5b51d1d949e4b38e9523fda44bc83dc8,
        type_description_1,
        par_self,
        par_z,
        par_v,
        var_s,
        var_primal,
        var_primal_dual
    );


    // Release cached frame.
    if ( frame_5b51d1d949e4b38e9523fda44bc83dc8 == cache_frame_5b51d1d949e4b38e9523fda44bc83dc8 )
    {
        Py_DECREF( frame_5b51d1d949e4b38e9523fda44bc83dc8 );
    }
    cache_frame_5b51d1d949e4b38e9523fda44bc83dc8 = NULL;

    assertFrameObject( frame_5b51d1d949e4b38e9523fda44bc83dc8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_14_lagrangian_hessian_s );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

    CHECK_OBJECT( (PyObject *)var_primal );
    Py_DECREF( var_primal );
    var_primal = NULL;

    CHECK_OBJECT( (PyObject *)var_primal_dual );
    Py_DECREF( var_primal_dual );
    var_primal_dual = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_primal );
    var_primal = NULL;

    Py_XDECREF( var_primal_dual );
    var_primal_dual = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_14_lagrangian_hessian_s );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_15_lagrangian_hessian( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *par_z = python_pars[ 1 ];
    PyObject *par_v = python_pars[ 2 ];
    struct Nuitka_CellObject *var_Hx = PyCell_EMPTY();
    struct Nuitka_CellObject *var_S_Hs_S = PyCell_EMPTY();
    PyObject *var_matvec = NULL;
    struct Nuitka_FrameObject *frame_628817ac497dd4007ede80c848e38ad7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_628817ac497dd4007ede80c848e38ad7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_628817ac497dd4007ede80c848e38ad7, codeobj_628817ac497dd4007ede80c848e38ad7, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_628817ac497dd4007ede80c848e38ad7 = cache_frame_628817ac497dd4007ede80c848e38ad7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_628817ac497dd4007ede80c848e38ad7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_628817ac497dd4007ede80c848e38ad7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_called_instance_1 = PyCell_GET( par_self );
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        CHECK_OBJECT( par_v );
        tmp_args_element_name_2 = par_v;
        frame_628817ac497dd4007ede80c848e38ad7->m_frame.f_lineno = 226;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_lagrangian_hessian_x, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "coocco";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_Hx ) == NULL );
        PyCell_SET( var_Hx, tmp_assign_source_1 );

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_1 = PyCell_GET( par_self );
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_n_ineq );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "coocco";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "coocco";
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_called_instance_2 = PyCell_GET( par_self );
            CHECK_OBJECT( par_z );
            tmp_args_element_name_3 = par_z;
            CHECK_OBJECT( par_v );
            tmp_args_element_name_4 = par_v;
            frame_628817ac497dd4007ede80c848e38ad7->m_frame.f_lineno = 228;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_lagrangian_hessian_s, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 228;
                type_description_1 = "coocco";
                goto frame_exception_exit_1;
            }
            assert( PyCell_GET( var_S_Hs_S ) == NULL );
            PyCell_SET( var_S_Hs_S, tmp_assign_source_2 );

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_15_lagrangian_hessian$$$function_1_matvec(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] = var_Hx;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[1] = var_S_Hs_S;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[2] = par_self;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[2] );


        assert( var_matvec == NULL );
        var_matvec = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_LinearOperator );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinearOperator );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinearOperator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 240;
            type_description_1 = "coocco";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_2 = PyCell_GET( par_self );
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_n_vars );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "coocco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_3 = PyCell_GET( par_self );
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_n_ineq );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 240;
            type_description_1 = "coocco";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "coocco";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_4 = PyCell_GET( par_self );
        tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_n_vars );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 241;
            type_description_1 = "coocco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_5 = PyCell_GET( par_self );
        tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_n_ineq );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 241;
            type_description_1 = "coocco";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 241;
            type_description_1 = "coocco";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_matvec );
        tmp_args_element_name_6 = var_matvec;
        frame_628817ac497dd4007ede80c848e38ad7->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "coocco";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_628817ac497dd4007ede80c848e38ad7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_628817ac497dd4007ede80c848e38ad7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_628817ac497dd4007ede80c848e38ad7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_628817ac497dd4007ede80c848e38ad7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_628817ac497dd4007ede80c848e38ad7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_628817ac497dd4007ede80c848e38ad7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_628817ac497dd4007ede80c848e38ad7,
        type_description_1,
        par_self,
        par_z,
        par_v,
        var_Hx,
        var_S_Hs_S,
        var_matvec
    );


    // Release cached frame.
    if ( frame_628817ac497dd4007ede80c848e38ad7 == cache_frame_628817ac497dd4007ede80c848e38ad7 )
    {
        Py_DECREF( frame_628817ac497dd4007ede80c848e38ad7 );
    }
    cache_frame_628817ac497dd4007ede80c848e38ad7 = NULL;

    assertFrameObject( frame_628817ac497dd4007ede80c848e38ad7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_15_lagrangian_hessian );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    CHECK_OBJECT( (PyObject *)var_Hx );
    Py_DECREF( var_Hx );
    var_Hx = NULL;

    CHECK_OBJECT( (PyObject *)var_S_Hs_S );
    Py_DECREF( var_S_Hs_S );
    var_S_Hs_S = NULL;

    CHECK_OBJECT( (PyObject *)var_matvec );
    Py_DECREF( var_matvec );
    var_matvec = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    CHECK_OBJECT( (PyObject *)var_Hx );
    Py_DECREF( var_Hx );
    var_Hx = NULL;

    CHECK_OBJECT( (PyObject *)var_S_Hs_S );
    Py_DECREF( var_S_Hs_S );
    var_S_Hs_S = NULL;

    Py_XDECREF( var_matvec );
    var_matvec = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_15_lagrangian_hessian );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_15_lagrangian_hessian$$$function_1_matvec( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_vec = python_pars[ 0 ];
    PyObject *var_vec_x = NULL;
    PyObject *var_vec_s = NULL;
    struct Nuitka_FrameObject *frame_c757c859f1b5660de638e5ed81bc69cc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c757c859f1b5660de638e5ed81bc69cc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c757c859f1b5660de638e5ed81bc69cc, codeobj_c757c859f1b5660de638e5ed81bc69cc, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c757c859f1b5660de638e5ed81bc69cc = cache_frame_c757c859f1b5660de638e5ed81bc69cc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c757c859f1b5660de638e5ed81bc69cc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c757c859f1b5660de638e5ed81bc69cc ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 234;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[2] );
        CHECK_OBJECT( par_vec );
        tmp_args_element_name_1 = par_vec;
        frame_c757c859f1b5660de638e5ed81bc69cc->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_variables, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        assert( var_vec_x == NULL );
        var_vec_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 235;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = PyCell_GET( self->m_closure[2] );
        CHECK_OBJECT( par_vec );
        tmp_args_element_name_2 = par_vec;
        frame_c757c859f1b5660de638e5ed81bc69cc->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get_slack, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        assert( var_vec_s == NULL );
        var_vec_s = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 236;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[2] );
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_n_ineq );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "oooccc";
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
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 237;
                type_description_1 = "oooccc";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_hstack );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "oooccc";
                goto frame_exception_exit_1;
            }
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "Hx" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 237;
                type_description_1 = "oooccc";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = PyCell_GET( self->m_closure[0] );
            CHECK_OBJECT( var_vec_x );
            tmp_args_element_name_4 = var_vec_x;
            frame_c757c859f1b5660de638e5ed81bc69cc->m_frame.f_lineno = 237;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_dot, call_args );
            }

            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 237;
                type_description_1 = "oooccc";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_3 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_1 );
            if ( PyCell_GET( self->m_closure[1] ) == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "S_Hs_S" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 237;
                type_description_1 = "oooccc";
                goto frame_exception_exit_1;
            }

            tmp_left_name_1 = PyCell_GET( self->m_closure[1] );
            CHECK_OBJECT( var_vec_s );
            tmp_right_name_1 = var_vec_s;
            tmp_tuple_element_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_3 );

                exception_lineno = 237;
                type_description_1 = "oooccc";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_1 );
            frame_c757c859f1b5660de638e5ed81bc69cc->m_frame.f_lineno = 237;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "oooccc";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_5;
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "Hx" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 239;
                type_description_1 = "oooccc";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_4 = PyCell_GET( self->m_closure[0] );
            CHECK_OBJECT( var_vec_x );
            tmp_args_element_name_5 = var_vec_x;
            frame_c757c859f1b5660de638e5ed81bc69cc->m_frame.f_lineno = 239;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_dot, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 239;
                type_description_1 = "oooccc";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c757c859f1b5660de638e5ed81bc69cc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c757c859f1b5660de638e5ed81bc69cc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c757c859f1b5660de638e5ed81bc69cc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c757c859f1b5660de638e5ed81bc69cc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c757c859f1b5660de638e5ed81bc69cc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c757c859f1b5660de638e5ed81bc69cc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c757c859f1b5660de638e5ed81bc69cc,
        type_description_1,
        par_vec,
        var_vec_x,
        var_vec_s,
        self->m_closure[2],
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_c757c859f1b5660de638e5ed81bc69cc == cache_frame_c757c859f1b5660de638e5ed81bc69cc )
    {
        Py_DECREF( frame_c757c859f1b5660de638e5ed81bc69cc );
    }
    cache_frame_c757c859f1b5660de638e5ed81bc69cc = NULL;

    assertFrameObject( frame_c757c859f1b5660de638e5ed81bc69cc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_15_lagrangian_hessian$$$function_1_matvec );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_vec );
    Py_DECREF( par_vec );
    par_vec = NULL;

    CHECK_OBJECT( (PyObject *)var_vec_x );
    Py_DECREF( var_vec_x );
    var_vec_x = NULL;

    CHECK_OBJECT( (PyObject *)var_vec_s );
    Py_DECREF( var_vec_s );
    var_vec_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_vec );
    Py_DECREF( par_vec );
    par_vec = NULL;

    Py_XDECREF( var_vec_x );
    var_vec_x = NULL;

    Py_XDECREF( var_vec_s );
    var_vec_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_15_lagrangian_hessian$$$function_1_matvec );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_16_stop_criteria( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_state = python_pars[ 1 ];
    PyObject *par_z = python_pars[ 2 ];
    PyObject *par_last_iteration_failed = python_pars[ 3 ];
    PyObject *par_optimality = python_pars[ 4 ];
    PyObject *par_constr_violation = python_pars[ 5 ];
    PyObject *par_trust_radius = python_pars[ 6 ];
    PyObject *par_penalty = python_pars[ 7 ];
    PyObject *par_cg_info = python_pars[ 8 ];
    PyObject *var_x = NULL;
    PyObject *var_g_cond = NULL;
    PyObject *var_x_cond = NULL;
    struct Nuitka_FrameObject *frame_7f99421692640978fa851751ec310e0a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7f99421692640978fa851751ec310e0a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7f99421692640978fa851751ec310e0a, codeobj_7f99421692640978fa851751ec310e0a, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7f99421692640978fa851751ec310e0a = cache_frame_7f99421692640978fa851751ec310e0a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7f99421692640978fa851751ec310e0a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7f99421692640978fa851751ec310e0a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_7f99421692640978fa851751ec310e0a->m_frame.f_lineno = 251;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_variables, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_source_name_3;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_global_stop_criteria );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_state );
        tmp_args_element_name_2 = par_state;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_3 = var_x;
        CHECK_OBJECT( par_last_iteration_failed );
        tmp_args_element_name_4 = par_last_iteration_failed;
        CHECK_OBJECT( par_trust_radius );
        tmp_args_element_name_5 = par_trust_radius;
        CHECK_OBJECT( par_penalty );
        tmp_args_element_name_6 = par_penalty;
        CHECK_OBJECT( par_cg_info );
        tmp_args_element_name_7 = par_cg_info;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_barrier_parameter );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 256;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_tolerance );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_8 );

            exception_lineno = 257;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7f99421692640978fa851751ec310e0a->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS8( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 252;
            type_description_1 = "oooooooooooo";
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = Py_True;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_terminate, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 258;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        tmp_return_value = Py_True;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            int tmp_and_left_truth_1;
            PyObject *tmp_and_left_value_1;
            PyObject *tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( par_optimality );
            tmp_compexpr_left_1 = par_optimality;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_tolerance );
            if ( tmp_compexpr_right_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 261;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            Py_DECREF( tmp_compexpr_right_1 );
            if ( tmp_and_left_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 261;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
            if ( tmp_and_left_truth_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_and_left_value_1 );

                exception_lineno = 262;
                type_description_1 = "oooooooooooo";
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
            CHECK_OBJECT( par_constr_violation );
            tmp_compexpr_left_2 = par_constr_violation;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_tolerance );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 262;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_and_right_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 262;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_assign_source_2 = tmp_and_left_value_1;
            and_end_1:;
            assert( var_g_cond == NULL );
            var_g_cond = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_trust_radius );
            tmp_compexpr_left_3 = par_trust_radius;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_xtol );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_x_cond == NULL );
            var_x_cond = tmp_assign_source_3;
        }
        {
            int tmp_or_left_truth_1;
            PyObject *tmp_or_left_value_1;
            PyObject *tmp_or_right_value_1;
            CHECK_OBJECT( var_g_cond );
            tmp_or_left_value_1 = var_g_cond;
            tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
            if ( tmp_or_left_truth_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 264;
                type_description_1 = "oooooooooooo";
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
            CHECK_OBJECT( var_x_cond );
            tmp_or_right_value_1 = var_x_cond;
            tmp_return_value = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_return_value = tmp_or_left_value_1;
            or_end_1:;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7f99421692640978fa851751ec310e0a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7f99421692640978fa851751ec310e0a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7f99421692640978fa851751ec310e0a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7f99421692640978fa851751ec310e0a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7f99421692640978fa851751ec310e0a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7f99421692640978fa851751ec310e0a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7f99421692640978fa851751ec310e0a,
        type_description_1,
        par_self,
        par_state,
        par_z,
        par_last_iteration_failed,
        par_optimality,
        par_constr_violation,
        par_trust_radius,
        par_penalty,
        par_cg_info,
        var_x,
        var_g_cond,
        var_x_cond
    );


    // Release cached frame.
    if ( frame_7f99421692640978fa851751ec310e0a == cache_frame_7f99421692640978fa851751ec310e0a )
    {
        Py_DECREF( frame_7f99421692640978fa851751ec310e0a );
    }
    cache_frame_7f99421692640978fa851751ec310e0a = NULL;

    assertFrameObject( frame_7f99421692640978fa851751ec310e0a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_16_stop_criteria );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_last_iteration_failed );
    Py_DECREF( par_last_iteration_failed );
    par_last_iteration_failed = NULL;

    CHECK_OBJECT( (PyObject *)par_optimality );
    Py_DECREF( par_optimality );
    par_optimality = NULL;

    CHECK_OBJECT( (PyObject *)par_constr_violation );
    Py_DECREF( par_constr_violation );
    par_constr_violation = NULL;

    CHECK_OBJECT( (PyObject *)par_trust_radius );
    Py_DECREF( par_trust_radius );
    par_trust_radius = NULL;

    CHECK_OBJECT( (PyObject *)par_penalty );
    Py_DECREF( par_penalty );
    par_penalty = NULL;

    CHECK_OBJECT( (PyObject *)par_cg_info );
    Py_DECREF( par_cg_info );
    par_cg_info = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_g_cond );
    var_g_cond = NULL;

    Py_XDECREF( var_x_cond );
    var_x_cond = NULL;

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

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_last_iteration_failed );
    Py_DECREF( par_last_iteration_failed );
    par_last_iteration_failed = NULL;

    CHECK_OBJECT( (PyObject *)par_optimality );
    Py_DECREF( par_optimality );
    par_optimality = NULL;

    CHECK_OBJECT( (PyObject *)par_constr_violation );
    Py_DECREF( par_constr_violation );
    par_constr_violation = NULL;

    CHECK_OBJECT( (PyObject *)par_trust_radius );
    Py_DECREF( par_trust_radius );
    par_trust_radius = NULL;

    CHECK_OBJECT( (PyObject *)par_penalty );
    Py_DECREF( par_penalty );
    par_penalty = NULL;

    CHECK_OBJECT( (PyObject *)par_cg_info );
    Py_DECREF( par_cg_info );
    par_cg_info = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_g_cond );
    var_g_cond = NULL;

    Py_XDECREF( var_x_cond );
    var_x_cond = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_16_stop_criteria );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_17_tr_interior_point( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fun = python_pars[ 0 ];
    PyObject *par_grad = python_pars[ 1 ];
    PyObject *par_lagr_hess = python_pars[ 2 ];
    PyObject *par_n_vars = python_pars[ 3 ];
    PyObject *par_n_ineq = python_pars[ 4 ];
    PyObject *par_n_eq = python_pars[ 5 ];
    PyObject *par_constr = python_pars[ 6 ];
    PyObject *par_jac = python_pars[ 7 ];
    PyObject *par_x0 = python_pars[ 8 ];
    PyObject *par_fun0 = python_pars[ 9 ];
    PyObject *par_grad0 = python_pars[ 10 ];
    PyObject *par_constr_ineq0 = python_pars[ 11 ];
    PyObject *par_jac_ineq0 = python_pars[ 12 ];
    PyObject *par_constr_eq0 = python_pars[ 13 ];
    PyObject *par_jac_eq0 = python_pars[ 14 ];
    PyObject *par_stop_criteria = python_pars[ 15 ];
    PyObject *par_enforce_feasibility = python_pars[ 16 ];
    PyObject *par_xtol = python_pars[ 17 ];
    PyObject *par_state = python_pars[ 18 ];
    PyObject *par_initial_barrier_parameter = python_pars[ 19 ];
    PyObject *par_initial_tolerance = python_pars[ 20 ];
    PyObject *par_initial_penalty = python_pars[ 21 ];
    PyObject *par_initial_trust_radius = python_pars[ 22 ];
    PyObject *par_factorization_method = python_pars[ 23 ];
    PyObject *var_barrier_parameter = NULL;
    PyObject *var_tolerance = NULL;
    PyObject *var_trust_radius = NULL;
    PyObject *var_s0 = NULL;
    PyObject *var_subprob = NULL;
    PyObject *var_z = NULL;
    PyObject *var_fun0_subprob = NULL;
    PyObject *var_constr0_subprob = NULL;
    PyObject *var_grad0_subprob = NULL;
    PyObject *var_jac0_subprob = NULL;
    PyObject *var_trust_lb = NULL;
    PyObject *var_trust_ub = NULL;
    PyObject *var_x = NULL;
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
    struct Nuitka_FrameObject *frame_287f5c12a962e3c7bf6b0e55263bc282;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_287f5c12a962e3c7bf6b0e55263bc282 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_287f5c12a962e3c7bf6b0e55263bc282, codeobj_287f5c12a962e3c7bf6b0e55263bc282, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_287f5c12a962e3c7bf6b0e55263bc282 = cache_frame_287f5c12a962e3c7bf6b0e55263bc282;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_287f5c12a962e3c7bf6b0e55263bc282 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_287f5c12a962e3c7bf6b0e55263bc282 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_enforce_feasibility );
        tmp_compexpr_left_1 = par_enforce_feasibility;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 297;
                type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_n_ineq );
            tmp_args_element_name_1 = par_n_ineq;
            tmp_args_element_name_2 = (PyObject *)&PyBool_Type;
            frame_287f5c12a962e3c7bf6b0e55263bc282->m_frame.f_lineno = 297;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_zeros, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 297;
                type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_enforce_feasibility;
                assert( old != NULL );
                par_enforce_feasibility = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( par_initial_barrier_parameter );
        tmp_assign_source_2 = par_initial_barrier_parameter;
        assert( var_barrier_parameter == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_barrier_parameter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( par_initial_tolerance );
        tmp_assign_source_3 = par_initial_tolerance;
        assert( var_tolerance == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_tolerance = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( par_initial_trust_radius );
        tmp_assign_source_4 = par_initial_trust_radius;
        assert( var_trust_radius == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_trust_radius = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_maximum );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = const_float_minus_1_5;
        CHECK_OBJECT( par_constr_ineq0 );
        tmp_right_name_1 = par_constr_ineq0;
        tmp_args_element_name_3 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_n_ineq );
        tmp_args_element_name_5 = par_n_ineq;
        frame_287f5c12a962e3c7bf6b0e55263bc282->m_frame.f_lineno = 303;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_ones, call_args );
        }

        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_287f5c12a962e3c7bf6b0e55263bc282->m_frame.f_lineno = 303;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_s0 == NULL );
        var_s0 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_BarrierSubproblem );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BarrierSubproblem );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BarrierSubproblem" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 305;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_6 = par_x0;
        CHECK_OBJECT( var_s0 );
        tmp_args_element_name_7 = var_s0;
        CHECK_OBJECT( par_fun );
        tmp_args_element_name_8 = par_fun;
        CHECK_OBJECT( par_grad );
        tmp_args_element_name_9 = par_grad;
        CHECK_OBJECT( par_lagr_hess );
        tmp_args_element_name_10 = par_lagr_hess;
        CHECK_OBJECT( par_n_vars );
        tmp_args_element_name_11 = par_n_vars;
        CHECK_OBJECT( par_n_ineq );
        tmp_args_element_name_12 = par_n_ineq;
        CHECK_OBJECT( par_n_eq );
        tmp_args_element_name_13 = par_n_eq;
        CHECK_OBJECT( par_constr );
        tmp_args_element_name_14 = par_constr;
        CHECK_OBJECT( par_jac );
        tmp_args_element_name_15 = par_jac;
        CHECK_OBJECT( var_barrier_parameter );
        tmp_args_element_name_16 = var_barrier_parameter;
        CHECK_OBJECT( var_tolerance );
        tmp_args_element_name_17 = var_tolerance;
        CHECK_OBJECT( par_enforce_feasibility );
        tmp_args_element_name_18 = par_enforce_feasibility;
        CHECK_OBJECT( par_stop_criteria );
        tmp_args_element_name_19 = par_stop_criteria;
        CHECK_OBJECT( par_xtol );
        tmp_args_element_name_20 = par_xtol;
        CHECK_OBJECT( par_fun0 );
        tmp_args_element_name_21 = par_fun0;
        CHECK_OBJECT( par_grad0 );
        tmp_args_element_name_22 = par_grad0;
        CHECK_OBJECT( par_constr_ineq0 );
        tmp_args_element_name_23 = par_constr_ineq0;
        CHECK_OBJECT( par_jac_ineq0 );
        tmp_args_element_name_24 = par_jac_ineq0;
        CHECK_OBJECT( par_constr_eq0 );
        tmp_args_element_name_25 = par_constr_eq0;
        CHECK_OBJECT( par_jac_eq0 );
        tmp_args_element_name_26 = par_jac_eq0;
        frame_287f5c12a962e3c7bf6b0e55263bc282->m_frame.f_lineno = 305;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS21( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 305;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_subprob == NULL );
        var_subprob = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_tuple_element_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 311;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_5;
        CHECK_OBJECT( par_x0 );
        tmp_tuple_element_1 = par_x0;
        tmp_args_element_name_27 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_27, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_s0 );
        tmp_tuple_element_1 = var_s0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_27, 1, tmp_tuple_element_1 );
        frame_287f5c12a962e3c7bf6b0e55263bc282->m_frame.f_lineno = 311;
        {
            PyObject *call_args[] = { tmp_args_element_name_27 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_hstack, call_args );
        }

        Py_DECREF( tmp_args_element_name_27 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_z == NULL );
        var_z = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( var_subprob );
        tmp_source_name_2 = var_subprob;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_fun0 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_subprob );
        tmp_source_name_3 = var_subprob;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_constr0 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_1 );

            exception_lineno = 312;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_2 );
        tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
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


            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            exception_lineno = 312;
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


            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            exception_lineno = 312;
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
        assert( var_fun0_subprob == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_fun0_subprob = tmp_assign_source_11;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        assert( var_constr0_subprob == NULL );
        Py_INCREF( tmp_assign_source_12 );
        var_constr0_subprob = tmp_assign_source_12;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( var_subprob );
        tmp_source_name_4 = var_subprob;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_grad0 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_iter_arg_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_subprob );
        tmp_source_name_5 = var_subprob;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_jac0 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_2 );

            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto try_except_handler_4;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_3 );
        tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto try_except_handler_4;
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
        tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            exception_lineno = 313;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            exception_lineno = 313;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_15;
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
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_1;
        assert( var_grad0_subprob == NULL );
        Py_INCREF( tmp_assign_source_16 );
        var_grad0_subprob = tmp_assign_source_16;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_2;
        assert( var_jac0_subprob == NULL );
        Py_INCREF( tmp_assign_source_17 );
        var_jac0_subprob = tmp_assign_source_17;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_source_name_8;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_source_name_11;
        PyObject *tmp_args_element_name_32;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_6;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_hstack );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_7;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_full );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_subprob );
        tmp_source_name_8 = var_subprob;
        tmp_args_element_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_n_vars );
        if ( tmp_args_element_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_8;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_inf );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_29 );

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_30 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_args_element_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_29 );

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_287f5c12a962e3c7bf6b0e55263bc282->m_frame.f_lineno = 315;
        {
            PyObject *call_args[] = { tmp_args_element_name_29, tmp_args_element_name_30 };
            tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_29 );
        Py_DECREF( tmp_args_element_name_30 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_28 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_element_name_28, 0, tmp_tuple_element_4 );
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 316;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_9;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_full );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_28 );

            exception_lineno = 316;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_subprob );
        tmp_source_name_11 = var_subprob;
        tmp_args_element_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_n_ineq );
        if ( tmp_args_element_name_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_28 );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 316;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_32 = const_float_minus_0_995;
        frame_287f5c12a962e3c7bf6b0e55263bc282->m_frame.f_lineno = 316;
        {
            PyObject *call_args[] = { tmp_args_element_name_31, tmp_args_element_name_32 };
            tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_31 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_28 );

            exception_lineno = 316;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_28, 1, tmp_tuple_element_4 );
        frame_287f5c12a962e3c7bf6b0e55263bc282->m_frame.f_lineno = 315;
        {
            PyObject *call_args[] = { tmp_args_element_name_28 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_28 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_trust_lb == NULL );
        var_trust_lb = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_13;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_14;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_10;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_full );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_subprob );
        tmp_source_name_13 = var_subprob;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_n_vars );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_subprob );
        tmp_source_name_14 = var_subprob;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_n_ineq );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_33 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_args_element_name_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_33 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_15 = tmp_mvar_value_11;
        tmp_args_element_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_inf );
        if ( tmp_args_element_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_33 );

            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_287f5c12a962e3c7bf6b0e55263bc282->m_frame.f_lineno = 317;
        {
            PyObject *call_args[] = { tmp_args_element_name_33, tmp_args_element_name_34 };
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_33 );
        Py_DECREF( tmp_args_element_name_34 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_trust_ub == NULL );
        var_trust_ub = tmp_assign_source_19;
    }
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_source_name_16;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_source_name_17;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_source_name_18;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_args_element_name_39;
        PyObject *tmp_args_element_name_40;
        PyObject *tmp_args_element_name_41;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_source_name_19;
        PyObject *tmp_args_element_name_44;
        PyObject *tmp_args_element_name_45;
        PyObject *tmp_args_element_name_46;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_args_element_name_48;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_source_name_20;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_equality_constrained_sqp );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_equality_constrained_sqp );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "equality_constrained_sqp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_name_7 = tmp_mvar_value_12;
        CHECK_OBJECT( var_subprob );
        tmp_source_name_16 = var_subprob;
        tmp_args_element_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_function_and_constraints );
        if ( tmp_args_element_name_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_subprob );
        tmp_source_name_17 = var_subprob;
        tmp_args_element_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_gradient_and_jacobian );
        if ( tmp_args_element_name_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_35 );

            exception_lineno = 324;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_subprob );
        tmp_source_name_18 = var_subprob;
        tmp_args_element_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_lagrangian_hessian );
        if ( tmp_args_element_name_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_35 );
            Py_DECREF( tmp_args_element_name_36 );

            exception_lineno = 325;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_z );
        tmp_args_element_name_38 = var_z;
        CHECK_OBJECT( var_fun0_subprob );
        tmp_args_element_name_39 = var_fun0_subprob;
        CHECK_OBJECT( var_grad0_subprob );
        tmp_args_element_name_40 = var_grad0_subprob;
        CHECK_OBJECT( var_constr0_subprob );
        tmp_args_element_name_41 = var_constr0_subprob;
        CHECK_OBJECT( var_jac0_subprob );
        tmp_args_element_name_42 = var_jac0_subprob;
        CHECK_OBJECT( var_subprob );
        tmp_source_name_19 = var_subprob;
        tmp_args_element_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_stop_criteria );
        if ( tmp_args_element_name_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_35 );
            Py_DECREF( tmp_args_element_name_36 );
            Py_DECREF( tmp_args_element_name_37 );

            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( par_state );
        tmp_args_element_name_44 = par_state;
        CHECK_OBJECT( par_initial_penalty );
        tmp_args_element_name_45 = par_initial_penalty;
        CHECK_OBJECT( var_trust_radius );
        tmp_args_element_name_46 = var_trust_radius;
        CHECK_OBJECT( par_factorization_method );
        tmp_args_element_name_47 = par_factorization_method;
        CHECK_OBJECT( var_trust_lb );
        tmp_args_element_name_48 = var_trust_lb;
        CHECK_OBJECT( var_trust_ub );
        tmp_args_element_name_49 = var_trust_ub;
        CHECK_OBJECT( var_subprob );
        tmp_source_name_20 = var_subprob;
        tmp_args_element_name_50 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_scaling );
        if ( tmp_args_element_name_50 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_35 );
            Py_DECREF( tmp_args_element_name_36 );
            Py_DECREF( tmp_args_element_name_37 );
            Py_DECREF( tmp_args_element_name_43 );

            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto try_except_handler_6;
        }
        frame_287f5c12a962e3c7bf6b0e55263bc282->m_frame.f_lineno = 322;
        {
            PyObject *call_args[] = { tmp_args_element_name_35, tmp_args_element_name_36, tmp_args_element_name_37, tmp_args_element_name_38, tmp_args_element_name_39, tmp_args_element_name_40, tmp_args_element_name_41, tmp_args_element_name_42, tmp_args_element_name_43, tmp_args_element_name_44, tmp_args_element_name_45, tmp_args_element_name_46, tmp_args_element_name_47, tmp_args_element_name_48, tmp_args_element_name_49, tmp_args_element_name_50 };
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS16( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_35 );
        Py_DECREF( tmp_args_element_name_36 );
        Py_DECREF( tmp_args_element_name_37 );
        Py_DECREF( tmp_args_element_name_43 );
        Py_DECREF( tmp_args_element_name_50 );
        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_20;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
        if ( tmp_assign_source_21 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            exception_lineno = 322;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_21;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
        if ( tmp_assign_source_22 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            exception_lineno = 322;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_22;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_3__source_iter;
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

                    type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
                    exception_lineno = 322;
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

            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            exception_lineno = 322;
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
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_23 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_z;
            assert( old != NULL );
            var_z = tmp_assign_source_23;
            Py_INCREF( var_z );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
        tmp_assign_source_24 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = par_state;
            assert( old != NULL );
            par_state = tmp_assign_source_24;
            Py_INCREF( par_state );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_21;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_subprob );
        tmp_source_name_21 = var_subprob;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_terminate );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        goto loop_end_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_51;
        PyObject *tmp_args_element_name_52;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_source_name_22;
        tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_8 != NULL );
        CHECK_OBJECT( par_initial_trust_radius );
        tmp_args_element_name_51 = par_initial_trust_radius;
        tmp_left_name_3 = const_int_pos_5;
        CHECK_OBJECT( par_state );
        tmp_source_name_22 = par_state;
        tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_tr_radius );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_52 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_args_element_name_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_287f5c12a962e3c7bf6b0e55263bc282->m_frame.f_lineno = 333;
        {
            PyObject *call_args[] = { tmp_args_element_name_51, tmp_args_element_name_52 };
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_args_element_name_52 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_trust_radius;
            assert( old != NULL );
            var_trust_radius = tmp_assign_source_25;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( var_barrier_parameter );
        tmp_left_name_4 = var_barrier_parameter;
        tmp_right_name_4 = const_float_0_2;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_26 = tmp_left_name_4;
        var_barrier_parameter = tmp_assign_source_26;

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( var_tolerance );
        tmp_left_name_5 = var_tolerance;
        tmp_right_name_5 = const_float_0_2;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = tmp_left_name_5;
        var_tolerance = tmp_assign_source_27;

    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_53;
        PyObject *tmp_args_element_name_54;
        CHECK_OBJECT( var_subprob );
        tmp_called_instance_4 = var_subprob;
        CHECK_OBJECT( var_barrier_parameter );
        tmp_args_element_name_53 = var_barrier_parameter;
        CHECK_OBJECT( var_tolerance );
        tmp_args_element_name_54 = var_tolerance;
        frame_287f5c12a962e3c7bf6b0e55263bc282->m_frame.f_lineno = 340;
        {
            PyObject *call_args[] = { tmp_args_element_name_53, tmp_args_element_name_54 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_update, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_55;
        CHECK_OBJECT( var_subprob );
        tmp_called_instance_5 = var_subprob;
        CHECK_OBJECT( var_z );
        tmp_args_element_name_55 = var_z;
        frame_287f5c12a962e3c7bf6b0e55263bc282->m_frame.f_lineno = 342;
        {
            PyObject *call_args[] = { tmp_args_element_name_55 };
            tmp_iter_arg_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_function_and_constraints, call_args );
        }

        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_28 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_28;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_29 = UNPACK_NEXT( tmp_unpack_7, 0, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            exception_lineno = 342;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_29;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_30 = UNPACK_NEXT( tmp_unpack_8, 1, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            exception_lineno = 342;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_30;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_iterator_name_2 = tmp_tuple_unpack_4__source_iter;
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

                    type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
                    exception_lineno = 342;
                    goto try_except_handler_9;
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

            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            exception_lineno = 342;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    goto try_end_8;
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

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
        tmp_assign_source_31 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_fun0_subprob;
            assert( old != NULL );
            var_fun0_subprob = tmp_assign_source_31;
            Py_INCREF( var_fun0_subprob );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
        tmp_assign_source_32 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_constr0_subprob;
            assert( old != NULL );
            var_constr0_subprob = tmp_assign_source_32;
            Py_INCREF( var_constr0_subprob );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_56;
        CHECK_OBJECT( var_subprob );
        tmp_called_instance_6 = var_subprob;
        CHECK_OBJECT( var_z );
        tmp_args_element_name_56 = var_z;
        frame_287f5c12a962e3c7bf6b0e55263bc282->m_frame.f_lineno = 343;
        {
            PyObject *call_args[] = { tmp_args_element_name_56 };
            tmp_iter_arg_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_gradient_and_jacobian, call_args );
        }

        if ( tmp_iter_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_33 = MAKE_ITERATOR( tmp_iter_arg_5 );
        Py_DECREF( tmp_iter_arg_5 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__source_iter;
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_33;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_34 = UNPACK_NEXT( tmp_unpack_9, 0, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            exception_lineno = 343;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_1;
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_34;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_35 = UNPACK_NEXT( tmp_unpack_10, 1, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            exception_lineno = 343;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_2;
            tmp_tuple_unpack_5__element_2 = tmp_assign_source_35;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_iterator_name_3 = tmp_tuple_unpack_5__source_iter;
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

                    type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
                    exception_lineno = 343;
                    goto try_except_handler_11;
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

            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            exception_lineno = 343;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
    Py_DECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_10;
    // End of try:
    try_end_9:;
    goto try_end_10;
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

    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
    Py_DECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
        tmp_assign_source_36 = tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = var_grad0_subprob;
            assert( old != NULL );
            var_grad0_subprob = tmp_assign_source_36;
            Py_INCREF( var_grad0_subprob );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
        tmp_assign_source_37 = tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = var_jac0_subprob;
            assert( old != NULL );
            var_jac0_subprob = tmp_assign_source_37;
            Py_INCREF( var_jac0_subprob );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_name_57;
        CHECK_OBJECT( var_subprob );
        tmp_called_instance_7 = var_subprob;
        CHECK_OBJECT( var_z );
        tmp_args_element_name_57 = var_z;
        frame_287f5c12a962e3c7bf6b0e55263bc282->m_frame.f_lineno = 346;
        {
            PyObject *call_args[] = { tmp_args_element_name_57 };
            tmp_assign_source_38 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_get_variables, call_args );
        }

        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "ooooooooooooooooooooooooNNNooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_38;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_287f5c12a962e3c7bf6b0e55263bc282 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_287f5c12a962e3c7bf6b0e55263bc282 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_287f5c12a962e3c7bf6b0e55263bc282, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_287f5c12a962e3c7bf6b0e55263bc282->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_287f5c12a962e3c7bf6b0e55263bc282, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_287f5c12a962e3c7bf6b0e55263bc282,
        type_description_1,
        par_fun,
        par_grad,
        par_lagr_hess,
        par_n_vars,
        par_n_ineq,
        par_n_eq,
        par_constr,
        par_jac,
        par_x0,
        par_fun0,
        par_grad0,
        par_constr_ineq0,
        par_jac_ineq0,
        par_constr_eq0,
        par_jac_eq0,
        par_stop_criteria,
        par_enforce_feasibility,
        par_xtol,
        par_state,
        par_initial_barrier_parameter,
        par_initial_tolerance,
        par_initial_penalty,
        par_initial_trust_radius,
        par_factorization_method,
        NULL,
        NULL,
        NULL,
        var_barrier_parameter,
        var_tolerance,
        var_trust_radius,
        var_s0,
        var_subprob,
        var_z,
        var_fun0_subprob,
        var_constr0_subprob,
        var_grad0_subprob,
        var_jac0_subprob,
        var_trust_lb,
        var_trust_ub,
        var_x
    );


    // Release cached frame.
    if ( frame_287f5c12a962e3c7bf6b0e55263bc282 == cache_frame_287f5c12a962e3c7bf6b0e55263bc282 )
    {
        Py_DECREF( frame_287f5c12a962e3c7bf6b0e55263bc282 );
    }
    cache_frame_287f5c12a962e3c7bf6b0e55263bc282 = NULL;

    assertFrameObject( frame_287f5c12a962e3c7bf6b0e55263bc282 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_5;
        CHECK_OBJECT( var_x );
        tmp_tuple_element_5 = var_x;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( par_state );
        tmp_tuple_element_5 = par_state;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_5 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_17_tr_interior_point );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_grad );
    Py_DECREF( par_grad );
    par_grad = NULL;

    CHECK_OBJECT( (PyObject *)par_lagr_hess );
    Py_DECREF( par_lagr_hess );
    par_lagr_hess = NULL;

    CHECK_OBJECT( (PyObject *)par_n_vars );
    Py_DECREF( par_n_vars );
    par_n_vars = NULL;

    CHECK_OBJECT( (PyObject *)par_n_ineq );
    Py_DECREF( par_n_ineq );
    par_n_ineq = NULL;

    CHECK_OBJECT( (PyObject *)par_n_eq );
    Py_DECREF( par_n_eq );
    par_n_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_constr );
    Py_DECREF( par_constr );
    par_constr = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_fun0 );
    Py_DECREF( par_fun0 );
    par_fun0 = NULL;

    CHECK_OBJECT( (PyObject *)par_grad0 );
    Py_DECREF( par_grad0 );
    par_grad0 = NULL;

    CHECK_OBJECT( (PyObject *)par_constr_ineq0 );
    Py_DECREF( par_constr_ineq0 );
    par_constr_ineq0 = NULL;

    CHECK_OBJECT( (PyObject *)par_jac_ineq0 );
    Py_DECREF( par_jac_ineq0 );
    par_jac_ineq0 = NULL;

    CHECK_OBJECT( (PyObject *)par_constr_eq0 );
    Py_DECREF( par_constr_eq0 );
    par_constr_eq0 = NULL;

    CHECK_OBJECT( (PyObject *)par_jac_eq0 );
    Py_DECREF( par_jac_eq0 );
    par_jac_eq0 = NULL;

    CHECK_OBJECT( (PyObject *)par_stop_criteria );
    Py_DECREF( par_stop_criteria );
    par_stop_criteria = NULL;

    CHECK_OBJECT( (PyObject *)par_enforce_feasibility );
    Py_DECREF( par_enforce_feasibility );
    par_enforce_feasibility = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    CHECK_OBJECT( (PyObject *)par_initial_barrier_parameter );
    Py_DECREF( par_initial_barrier_parameter );
    par_initial_barrier_parameter = NULL;

    CHECK_OBJECT( (PyObject *)par_initial_tolerance );
    Py_DECREF( par_initial_tolerance );
    par_initial_tolerance = NULL;

    CHECK_OBJECT( (PyObject *)par_initial_penalty );
    Py_DECREF( par_initial_penalty );
    par_initial_penalty = NULL;

    CHECK_OBJECT( (PyObject *)par_initial_trust_radius );
    Py_DECREF( par_initial_trust_radius );
    par_initial_trust_radius = NULL;

    CHECK_OBJECT( (PyObject *)par_factorization_method );
    Py_DECREF( par_factorization_method );
    par_factorization_method = NULL;

    CHECK_OBJECT( (PyObject *)var_barrier_parameter );
    Py_DECREF( var_barrier_parameter );
    var_barrier_parameter = NULL;

    CHECK_OBJECT( (PyObject *)var_tolerance );
    Py_DECREF( var_tolerance );
    var_tolerance = NULL;

    CHECK_OBJECT( (PyObject *)var_trust_radius );
    Py_DECREF( var_trust_radius );
    var_trust_radius = NULL;

    CHECK_OBJECT( (PyObject *)var_s0 );
    Py_DECREF( var_s0 );
    var_s0 = NULL;

    CHECK_OBJECT( (PyObject *)var_subprob );
    Py_DECREF( var_subprob );
    var_subprob = NULL;

    CHECK_OBJECT( (PyObject *)var_z );
    Py_DECREF( var_z );
    var_z = NULL;

    CHECK_OBJECT( (PyObject *)var_fun0_subprob );
    Py_DECREF( var_fun0_subprob );
    var_fun0_subprob = NULL;

    CHECK_OBJECT( (PyObject *)var_constr0_subprob );
    Py_DECREF( var_constr0_subprob );
    var_constr0_subprob = NULL;

    CHECK_OBJECT( (PyObject *)var_grad0_subprob );
    Py_DECREF( var_grad0_subprob );
    var_grad0_subprob = NULL;

    CHECK_OBJECT( (PyObject *)var_jac0_subprob );
    Py_DECREF( var_jac0_subprob );
    var_jac0_subprob = NULL;

    CHECK_OBJECT( (PyObject *)var_trust_lb );
    Py_DECREF( var_trust_lb );
    var_trust_lb = NULL;

    CHECK_OBJECT( (PyObject *)var_trust_ub );
    Py_DECREF( var_trust_ub );
    var_trust_ub = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_grad );
    Py_DECREF( par_grad );
    par_grad = NULL;

    CHECK_OBJECT( (PyObject *)par_lagr_hess );
    Py_DECREF( par_lagr_hess );
    par_lagr_hess = NULL;

    CHECK_OBJECT( (PyObject *)par_n_vars );
    Py_DECREF( par_n_vars );
    par_n_vars = NULL;

    CHECK_OBJECT( (PyObject *)par_n_ineq );
    Py_DECREF( par_n_ineq );
    par_n_ineq = NULL;

    CHECK_OBJECT( (PyObject *)par_n_eq );
    Py_DECREF( par_n_eq );
    par_n_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_constr );
    Py_DECREF( par_constr );
    par_constr = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_fun0 );
    Py_DECREF( par_fun0 );
    par_fun0 = NULL;

    CHECK_OBJECT( (PyObject *)par_grad0 );
    Py_DECREF( par_grad0 );
    par_grad0 = NULL;

    CHECK_OBJECT( (PyObject *)par_constr_ineq0 );
    Py_DECREF( par_constr_ineq0 );
    par_constr_ineq0 = NULL;

    CHECK_OBJECT( (PyObject *)par_jac_ineq0 );
    Py_DECREF( par_jac_ineq0 );
    par_jac_ineq0 = NULL;

    CHECK_OBJECT( (PyObject *)par_constr_eq0 );
    Py_DECREF( par_constr_eq0 );
    par_constr_eq0 = NULL;

    CHECK_OBJECT( (PyObject *)par_jac_eq0 );
    Py_DECREF( par_jac_eq0 );
    par_jac_eq0 = NULL;

    CHECK_OBJECT( (PyObject *)par_stop_criteria );
    Py_DECREF( par_stop_criteria );
    par_stop_criteria = NULL;

    Py_XDECREF( par_enforce_feasibility );
    par_enforce_feasibility = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    Py_XDECREF( par_state );
    par_state = NULL;

    CHECK_OBJECT( (PyObject *)par_initial_barrier_parameter );
    Py_DECREF( par_initial_barrier_parameter );
    par_initial_barrier_parameter = NULL;

    CHECK_OBJECT( (PyObject *)par_initial_tolerance );
    Py_DECREF( par_initial_tolerance );
    par_initial_tolerance = NULL;

    CHECK_OBJECT( (PyObject *)par_initial_penalty );
    Py_DECREF( par_initial_penalty );
    par_initial_penalty = NULL;

    CHECK_OBJECT( (PyObject *)par_initial_trust_radius );
    Py_DECREF( par_initial_trust_radius );
    par_initial_trust_radius = NULL;

    CHECK_OBJECT( (PyObject *)par_factorization_method );
    Py_DECREF( par_factorization_method );
    par_factorization_method = NULL;

    Py_XDECREF( var_barrier_parameter );
    var_barrier_parameter = NULL;

    Py_XDECREF( var_tolerance );
    var_tolerance = NULL;

    Py_XDECREF( var_trust_radius );
    var_trust_radius = NULL;

    Py_XDECREF( var_s0 );
    var_s0 = NULL;

    Py_XDECREF( var_subprob );
    var_subprob = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_fun0_subprob );
    var_fun0_subprob = NULL;

    Py_XDECREF( var_constr0_subprob );
    var_constr0_subprob = NULL;

    Py_XDECREF( var_grad0_subprob );
    var_grad0_subprob = NULL;

    Py_XDECREF( var_jac0_subprob );
    var_jac0_subprob = NULL;

    Py_XDECREF( var_trust_lb );
    var_trust_lb = NULL;

    Py_XDECREF( var_trust_ub );
    var_trust_ub = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point$$$function_17_tr_interior_point );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_10__compute_gradient(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_10__compute_gradient,
        const_str_plain__compute_gradient,
#if PYTHON_VERSION >= 300
        const_str_digest_bb4fd4f69e5f3ce80e76facc7c974cb6,
#endif
        codeobj_f22505c6ac7593a30d60e89ac32e5024,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$tr_interior_point,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_11__compute_jacobian(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_11__compute_jacobian,
        const_str_plain__compute_jacobian,
#if PYTHON_VERSION >= 300
        const_str_digest_7459c0e72e4c9599d4c8ae956a84b23c,
#endif
        codeobj_6529abe17d6dd757a87ecc0e8a006650,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$tr_interior_point,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_12__assemble_sparse_jacobian(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_12__assemble_sparse_jacobian,
        const_str_plain__assemble_sparse_jacobian,
#if PYTHON_VERSION >= 300
        const_str_digest_22c741513c60e1271b03ce1a6dfc3b19,
#endif
        codeobj_4a34defbb110d2b91eb90529a6db8412,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$tr_interior_point,
        const_str_digest_4dd7d2ffdb5698ddf2d7ee044f2ea0a5,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_13_lagrangian_hessian_x(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_13_lagrangian_hessian_x,
        const_str_plain_lagrangian_hessian_x,
#if PYTHON_VERSION >= 300
        const_str_digest_32d9ad0dfe486b1c5890d5c661c1418a,
#endif
        codeobj_ba298ba7e65bb8dd19022013ff630c69,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$tr_interior_point,
        const_str_digest_33447fab4f89975dc60ca57bf6f5d536,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_14_lagrangian_hessian_s(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_14_lagrangian_hessian_s,
        const_str_plain_lagrangian_hessian_s,
#if PYTHON_VERSION >= 300
        const_str_digest_7bf329292949eaaa4d84d7bf12508abb,
#endif
        codeobj_5b51d1d949e4b38e9523fda44bc83dc8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$tr_interior_point,
        const_str_digest_6df350394cff8fb676ad13e394fdabba,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_15_lagrangian_hessian(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_15_lagrangian_hessian,
        const_str_plain_lagrangian_hessian,
#if PYTHON_VERSION >= 300
        const_str_digest_c7b85778a6e1a775c7a04ee2611017bd,
#endif
        codeobj_628817ac497dd4007ede80c848e38ad7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$tr_interior_point,
        const_str_digest_56456595d608b182204bbaf8564dd88d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_15_lagrangian_hessian$$$function_1_matvec(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_15_lagrangian_hessian$$$function_1_matvec,
        const_str_plain_matvec,
#if PYTHON_VERSION >= 300
        const_str_digest_64e1b4f5baac1e58a41b5203b2b51b92,
#endif
        codeobj_c757c859f1b5660de638e5ed81bc69cc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$tr_interior_point,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_16_stop_criteria(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_16_stop_criteria,
        const_str_plain_stop_criteria,
#if PYTHON_VERSION >= 300
        const_str_digest_e83bbc3984817188c3f8c1a76fe7188b,
#endif
        codeobj_7f99421692640978fa851751ec310e0a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$tr_interior_point,
        const_str_digest_87dde4f28003efc55d36f8bbb862786d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_17_tr_interior_point(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_17_tr_interior_point,
        const_str_plain_tr_interior_point,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_287f5c12a962e3c7bf6b0e55263bc282,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$tr_interior_point,
        const_str_digest_19de05c359c9bab80b1f0f65ff52990e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_be4ac83c9dc1679919b425d0d45982c9,
#endif
        codeobj_6baa37e9df8edd3a7cd0e01dc6a23a3f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$tr_interior_point,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_2_update(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_2_update,
        const_str_plain_update,
#if PYTHON_VERSION >= 300
        const_str_digest_e7e083070964387380dfadc8ed8aae91,
#endif
        codeobj_18058d24643f7563c8990dfa63e44864,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$tr_interior_point,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_3_get_slack(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_3_get_slack,
        const_str_plain_get_slack,
#if PYTHON_VERSION >= 300
        const_str_digest_43002d28627b3a306b90b51e48c0224e,
#endif
        codeobj_55e69a156dbb4f698ed05a9b9e994686,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$tr_interior_point,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_4_get_variables(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_4_get_variables,
        const_str_plain_get_variables,
#if PYTHON_VERSION >= 300
        const_str_digest_08e58937c577423daa7b15fb7e3a0bb0,
#endif
        codeobj_e6b7d6a111070034eb4eadc95a2f4a92,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$tr_interior_point,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_5_function_and_constraints(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_5_function_and_constraints,
        const_str_plain_function_and_constraints,
#if PYTHON_VERSION >= 300
        const_str_digest_45e05aa76513ae162c4c455c5effcf03,
#endif
        codeobj_ebde815d7f717717ac1e7873606b1118,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$tr_interior_point,
        const_str_digest_8ec8af548357aafbeb3ec45aae989c4f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_6__compute_function(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_6__compute_function,
        const_str_plain__compute_function,
#if PYTHON_VERSION >= 300
        const_str_digest_435f210bc86392fd589abd76dc56c2e8,
#endif
        codeobj_206a0af41086a4af98d16e3536dee304,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$tr_interior_point,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_7__compute_constr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_7__compute_constr,
        const_str_plain__compute_constr,
#if PYTHON_VERSION >= 300
        const_str_digest_832bd0feb8c6b1c05888df5fb9be806c,
#endif
        codeobj_b2c41e654c2bc37da42117d37ef4ba9b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$tr_interior_point,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_8_scaling(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_8_scaling,
        const_str_plain_scaling,
#if PYTHON_VERSION >= 300
        const_str_digest_e7290e4657743ba93ad69cf9a4218182,
#endif
        codeobj_191ac557a863c1bb3d8881c519c68a70,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$tr_interior_point,
        const_str_digest_fa06ac6707865c6dbe7380bb4a871dbc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_8_scaling$$$function_1_matvec(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_8_scaling$$$function_1_matvec,
        const_str_plain_matvec,
#if PYTHON_VERSION >= 300
        const_str_digest_bfb32d47cb00c840ca6822c9a61069f3,
#endif
        codeobj_488a9b467667430433278618cc6bef55,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$tr_interior_point,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_9_gradient_and_jacobian(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_9_gradient_and_jacobian,
        const_str_plain_gradient_and_jacobian,
#if PYTHON_VERSION >= 300
        const_str_digest_3ca425fc2a1ac218dddc5c722ff26f77,
#endif
        codeobj_3fd3ff5e0a4c221d8370cf3eb8d007d5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$tr_interior_point,
        const_str_digest_890fd2644d421361e0f0ef5277c08337,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_trustregion_constr$tr_interior_point =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._trustregion_constr.tr_interior_point",
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

MOD_INIT_DECL( scipy$optimize$_trustregion_constr$tr_interior_point )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_trustregion_constr$tr_interior_point );
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
    puts("scipy.optimize._trustregion_constr.tr_interior_point: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._trustregion_constr.tr_interior_point: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._trustregion_constr.tr_interior_point: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_trustregion_constr$tr_interior_point" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_trustregion_constr$tr_interior_point = Py_InitModule4(
        "scipy.optimize._trustregion_constr.tr_interior_point",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_trustregion_constr$tr_interior_point = PyModule_Create( &mdef_scipy$optimize$_trustregion_constr$tr_interior_point );
#endif

    moduledict_scipy$optimize$_trustregion_constr$tr_interior_point = MODULE_DICT( module_scipy$optimize$_trustregion_constr$tr_interior_point );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_trustregion_constr$tr_interior_point,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_trustregion_constr$tr_interior_point,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_trustregion_constr$tr_interior_point,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_trustregion_constr$tr_interior_point,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_trustregion_constr$tr_interior_point );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_d42ae27d5a80d6ad74d4236844440be5, module_scipy$optimize$_trustregion_constr$tr_interior_point );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_63a984cc39880e2778cff02c06e74a62;
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
    PyObject *locals_scipy$optimize$_trustregion_constr$tr_interior_point_24 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_d55f5e43bed988747520c68822fb5788_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_d55f5e43bed988747520c68822fb5788_2 = NULL;
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
        tmp_assign_source_1 = const_str_digest_ce490fc60fea635a090c3bdd2939e674;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_63a984cc39880e2778cff02c06e74a62 = MAKE_MODULE_FRAME( codeobj_63a984cc39880e2778cff02c06e74a62, module_scipy$optimize$_trustregion_constr$tr_interior_point );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_63a984cc39880e2778cff02c06e74a62 );
    assert( Py_REFCNT( frame_63a984cc39880e2778cff02c06e74a62 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_63a984cc39880e2778cff02c06e74a62->m_frame.f_lineno = 15;
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


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$tr_interior_point;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_63a984cc39880e2778cff02c06e74a62->m_frame.f_lineno = 16;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_sparse );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_sps, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_numpy;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$tr_interior_point;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_63a984cc39880e2778cff02c06e74a62->m_frame.f_lineno = 17;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_equality_constrained_sqp;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$tr_interior_point;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_equality_constrained_sqp_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_63a984cc39880e2778cff02c06e74a62->m_frame.f_lineno = 18;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$tr_interior_point,
                const_str_plain_equality_constrained_sqp,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_equality_constrained_sqp );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_equality_constrained_sqp, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_8783708b6421c71a0892a844e756fb02;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$tr_interior_point;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_LinearOperator_tuple;
        tmp_level_name_4 = const_int_0;
        frame_63a984cc39880e2778cff02c06e74a62->m_frame.f_lineno = 19;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_LinearOperator );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_LinearOperator, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = LIST_COPY( const_list_str_plain_tr_interior_point_list );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
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


            exception_lineno = 24;

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


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_empty;
        tmp_assign_source_14 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_14;
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


            exception_lineno = 24;

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


            exception_lineno = 24;

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
            PyObject *tmp_assign_source_15;
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


                exception_lineno = 24;

                goto try_except_handler_2;
            }
            tmp_args_name_1 = const_tuple_str_plain_BarrierSubproblem_tuple_empty_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_63a984cc39880e2778cff02c06e74a62->m_frame.f_lineno = 24;
            tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 24;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_15;
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


                exception_lineno = 24;

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


                    exception_lineno = 24;

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

                    exception_lineno = 24;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 24;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 24;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_16;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_scipy$optimize$_trustregion_constr$tr_interior_point_24 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_d42ae27d5a80d6ad74d4236844440be5;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_digest_6b2891a47117001bc25c868eeae3fd15;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_BarrierSubproblem;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_d55f5e43bed988747520c68822fb5788_2, codeobj_d55f5e43bed988747520c68822fb5788, module_scipy$optimize$_trustregion_constr$tr_interior_point, sizeof(void *) );
        frame_d55f5e43bed988747520c68822fb5788_2 = cache_frame_d55f5e43bed988747520c68822fb5788_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_d55f5e43bed988747520c68822fb5788_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_d55f5e43bed988747520c68822fb5788_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_1___init__(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_2_update(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24, const_str_plain_update, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_3_get_slack(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24, const_str_plain_get_slack, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_4_get_variables(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24, const_str_plain_get_variables, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_5_function_and_constraints(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24, const_str_plain_function_and_constraints, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_6__compute_function(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24, const_str_plain__compute_function, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_7__compute_constr(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24, const_str_plain__compute_constr, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_8_scaling(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24, const_str_plain_scaling, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_9_gradient_and_jacobian(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24, const_str_plain_gradient_and_jacobian, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_10__compute_gradient(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24, const_str_plain__compute_gradient, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_11__compute_jacobian(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24, const_str_plain__compute_jacobian, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_12__assemble_sparse_jacobian(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24, const_str_plain__assemble_sparse_jacobian, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_13_lagrangian_hessian_x(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24, const_str_plain_lagrangian_hessian_x, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_14_lagrangian_hessian_s(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24, const_str_plain_lagrangian_hessian_s, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_15_lagrangian_hessian(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24, const_str_plain_lagrangian_hessian, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_16_stop_criteria(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24, const_str_plain_stop_criteria, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_d55f5e43bed988747520c68822fb5788_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_d55f5e43bed988747520c68822fb5788_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_d55f5e43bed988747520c68822fb5788_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_d55f5e43bed988747520c68822fb5788_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_d55f5e43bed988747520c68822fb5788_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_d55f5e43bed988747520c68822fb5788_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_d55f5e43bed988747520c68822fb5788_2 == cache_frame_d55f5e43bed988747520c68822fb5788_2 )
        {
            Py_DECREF( frame_d55f5e43bed988747520c68822fb5788_2 );
        }
        cache_frame_d55f5e43bed988747520c68822fb5788_2 = NULL;

        assertFrameObject( frame_d55f5e43bed988747520c68822fb5788_2 );

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
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain_BarrierSubproblem;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_empty;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_scipy$optimize$_trustregion_constr$tr_interior_point_24;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_63a984cc39880e2778cff02c06e74a62->m_frame.f_lineno = 24;
            tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 24;

                goto try_except_handler_4;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_18;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_17 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_17 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24 );
        locals_scipy$optimize$_trustregion_constr$tr_interior_point_24 = NULL;
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

        Py_DECREF( locals_scipy$optimize$_trustregion_constr$tr_interior_point_24 );
        locals_scipy$optimize$_trustregion_constr$tr_interior_point_24 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point );
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
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$tr_interior_point );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 24;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_BarrierSubproblem, tmp_assign_source_17 );
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
    RESTORE_FRAME_EXCEPTION( frame_63a984cc39880e2778cff02c06e74a62 );
#endif
    popFrameStack();

    assertFrameObject( frame_63a984cc39880e2778cff02c06e74a62 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_63a984cc39880e2778cff02c06e74a62 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_63a984cc39880e2778cff02c06e74a62, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_63a984cc39880e2778cff02c06e74a62->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_63a984cc39880e2778cff02c06e74a62, exception_lineno );
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
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$tr_interior_point$$$function_17_tr_interior_point(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain_tr_interior_point, tmp_assign_source_19 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$tr_interior_point, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_trustregion_constr$tr_interior_point );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
