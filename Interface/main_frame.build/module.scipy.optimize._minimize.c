/* Generated code for Python module 'scipy.optimize._minimize'
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

/* The "_module_scipy$optimize$_minimize" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_minimize;
PyDictObject *moduledict_scipy$optimize$_minimize;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_4daa4d5603a458e52f3ee710892e453a;
static PyObject *const_tuple_str_plain__minimize_trust_krylov_tuple;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_digest_e27e349d28fa7d1be2332d50a5d0e34b;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_LinearConstraint;
extern PyObject *const_str_plain_dict;
static PyObject *const_str_plain_powell;
extern PyObject *const_str_plain__minimize_neldermead;
static PyObject *const_str_digest_54028da0d8863a1b8bfd633c09dd4afd;
extern PyObject *const_str_plain_xatol;
extern PyObject *const_str_plain_fatol;
extern PyObject *const_str_plain_i;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_b0026835f016d1d27035eae8ab4ec642_tuple;
extern PyObject *const_str_plain_NonlinearConstraint;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_SLSQP;
extern PyObject *const_str_plain_minimize_scalar;
extern PyObject *const_str_plain_bool;
extern PyObject *const_str_plain_cs;
extern PyObject *const_str_plain_any;
static PyObject *const_str_digest_42e068806b5c2a019590043b4bbd9aa0;
extern PyObject *const_str_plain_jac;
extern PyObject *const_str_plain_division;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_all_constraint_types;
extern PyObject *const_str_plain_hess;
extern PyObject *const_str_plain_None;
extern PyObject *const_tuple_str_plain__minimize_trustregion_constr_tuple;
extern PyObject *const_str_plain_barrier_tol;
static PyObject *const_tuple_str_plain_cobyla_str_plain__custom_tuple;
extern PyObject *const_str_plain_new_bounds_to_old;
extern PyObject *const_str_plain_callable;
extern PyObject *const_str_plain_constraints;
extern PyObject *const_str_plain_lbfgsb;
static PyObject *const_str_digest_a7985a24d8e119b49cc55e2f32040610;
extern PyObject *const_str_plain__minimize_trustregion_constr;
static PyObject *const_str_digest_4b1e510c0634b1d9daeac7647ed7a5b3;
static PyObject *const_tuple_str_plain__minimize_cobyla_tuple;
static PyObject *const_str_plain__trustregion_ncg;
extern PyObject *const_str_plain__minimize_lbfgsb;
extern PyObject *const_str_plain_typecodes;
static PyObject *const_str_digest_9651963c5184f389b704c05cfb123044;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_slsqp;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_digest_9bca7c4227b5a1da023f6724018a8c27;
static PyObject *const_tuple_de02313c6a67bf3b39594658045fd3f6_tuple;
extern PyObject *const_str_plain_bracket;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain__minimize_powell;
extern PyObject *const_str_plain__minimize_dogleg;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_digest_c88389693d9d476899c1c6e170568469;
static PyObject *const_str_plain_new_constraint_types;
extern PyObject *const_str_plain__minimize_cg;
extern PyObject *const_str_plain_numpy;
static PyObject *const_tuple_912f31eee7cd3bda74803669f4c50038_tuple;
static PyObject *const_str_digest_e375c59a1ac5b6aa91a63059861ae355;
static PyObject *const_str_digest_cef9fbfc7fcc4451324549ad968be27b;
extern PyObject *const_str_plain__constraints;
extern PyObject *const_str_plain_AllInteger;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_Bounds;
extern PyObject *const_str_plain_con;
static PyObject *const_str_digest_46e4644880d25752897dc08932e87714;
static PyObject *const_str_digest_9274bf2c59096d8ba7dbeb0419e9be0c;
extern PyObject *const_str_plain_x0;
extern PyObject *const_str_plain__minimize_slsqp;
extern PyObject *const_str_plain_tnc;
extern PyObject *const_str_plain_hessp;
static PyObject *const_tuple_str_digest_4b1e510c0634b1d9daeac7647ed7a5b3_str_plain_tnc_tuple;
extern PyObject *const_str_plain_cobyla;
static PyObject *const_tuple_25e6aee4221265b68ab0be395ebcc132_tuple;
static PyObject *const_str_digest_cf43b93af9d0a8b9649eef9e473daaf9;
extern PyObject *const_str_plain_xtol;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_plain_fun;
extern PyObject *const_str_digest_99b0f2800a158b791fce03480ec7ee9d;
static PyObject *const_tuple_4650da6b56dac71682c32b47484586f1_tuple;
extern PyObject *const_str_plain_MemoizeJac;
static PyObject *const_list_str_plain_minimize_str_plain_minimize_scalar_list;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_disp;
static PyObject *const_str_digest_c1a2e72a50223220bee614374a6c0b52;
extern PyObject *const_str_plain_golden;
static PyObject *const_str_plain__custom;
extern PyObject *const_str_plain_ub;
static PyObject *const_str_digest_39e0f96b55cf42322ad66366c618f104;
extern PyObject *const_str_plain_ftol;
static PyObject *const_str_digest_bb18aaa9cdb5c3593dabdf5e70360cab;
static PyObject *const_str_digest_08fb05b0f1747e92cee153be8c645267;
extern PyObject *const_str_plain_new_constraint_to_old;
extern PyObject *const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202;
extern PyObject *const_str_plain_RuntimeWarning;
static PyObject *const_tuple_str_plain__minimize_slsqp_tuple;
static PyObject *const_str_plain_bfgs;
extern PyObject *const_str_plain_gtol;
extern PyObject *const_str_plain_minimize;
extern PyObject *const_str_plain__minimize_tnc;
static PyObject *const_str_digest_4ef079d91469ae7917d9799d8ae6f54a;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_8d0d5a5b00935c558fd21d8fa45bf036;
static PyObject *const_str_digest_e2d106e69cf0b2b1d74938d61b5d9f8f;
static PyObject *const_tuple_dd9bd93e271b00cf0dec905b3498ca59_tuple;
extern PyObject *const_str_plain__minimize_trustregion_exact;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain__minimize_trustregion_exact_tuple;
static PyObject *const_str_digest_753c701e6a332a0f84c5e5ae08fd2679;
extern PyObject *const_tuple_str_plain_callable_tuple;
extern PyObject *const_str_plain__minimize_bfgs;
static PyObject *const_tuple_1c5d95777d8ef6d328f71aa083ed78cd_tuple;
static PyObject *const_str_digest_44040f14a42fd71dbcd6a8699a07c941;
static PyObject *const_str_plain_standardize_bounds;
extern PyObject *const_str_plain_brent;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_return_all;
extern PyObject *const_str_digest_3a03db61930d1390c0d72de0a5982961;
extern PyObject *const_str_plain_old_bound_to_new;
extern PyObject *const_str_plain_shape;
static PyObject *const_tuple_str_plain__minimize_dogleg_tuple;
static PyObject *const_str_plain_dogleg;
extern PyObject *const_str_plain_meth;
static PyObject *const_tuple_str_plain_disp_tuple;
extern PyObject *const_str_plain_setdefault;
extern PyObject *const_str_plain_callback;
static PyObject *const_tuple_str_plain__minimize_lbfgsb_tuple;
static PyObject *const_str_plain_standardize_constraints;
static PyObject *const_tuple_f2d2f3449559f65ffe82881c8557025b_tuple;
extern PyObject *const_str_plain_optimize;
extern PyObject *const_str_plain_old_constraint_to_new;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_tuple_dd2ed64315f6fdd030f1c9d72d73402c_tuple;
static PyObject *const_str_plain__trustregion_exact;
extern PyObject *const_str_plain_derivative;
static PyObject *const_str_plain__trustregion_krylov;
extern PyObject *const_str_plain__minimize_scalar_bounded;
static PyObject *const_tuple_d49114fdfd1323e376944e5b65c0cbd9_tuple;
static PyObject *const_tuple_acbb4d22e32d76d121eec200fe65c12b_tuple;
static PyObject *const_str_digest_da0aa1e48c5932ece168871744804c5f;
extern PyObject *const_str_plain_kind;
extern PyObject *const_str_plain__minimize_scalar_golden;
static PyObject *const_tuple_str_digest_99b0f2800a158b791fce03480ec7ee9d_str_plain_cs_tuple;
static PyObject *const_tuple_85616b67cd523b835b7883d9cd377584_tuple;
static PyObject *const_tuple_str_plain_cobyla_tuple;
extern PyObject *const_str_plain_cg;
extern PyObject *const_str_plain__minimize_scalar_brent;
extern PyObject *const_slice_none_int_neg_1_none;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_b41d75c9751ce45ea8436205fcf63510;
static PyObject *const_tuple_str_plain__minimize_tnc_tuple;
static PyObject *const_tuple_7f0292d08fbdffbc12dda99630bf713c_tuple;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_digest_b21697a8dbf086a46d9ca589af9912aa;
static PyObject *const_tuple_none_none_tuple_empty_str_plain_brent_none_none_tuple;
extern PyObject *const_str_plain__trustregion_constr;
static PyObject *const_tuple_d1e84eb6ebfcc394c2bfcfec8278186c_tuple;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain__minimize_cobyla;
static PyObject *const_tuple_0b615d6e313da26b12c2d0c18014ca66_tuple;
extern PyObject *const_str_plain_lb;
static PyObject *const_str_digest_d1fc6a039ddd29ba16b73faab2f66130;
static PyObject *const_str_plain__trustregion_dogleg;
extern PyObject *const_tuple_str_plain_warn_tuple;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_method;
static PyObject *const_tuple_6299fab7543a1d6da195c654ed1bb8a6_tuple;
static PyObject *const_tuple_str_plain__minimize_trust_ncg_tuple;
static PyObject *const_str_digest_c0ac58071c26964d4384bab73915c9a6;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_d64588770c3febb768625b6bb688fe61;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_bounds;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_bounded;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_863fc7cd57512d75f0fa3a49a5bf2347;
static PyObject *const_tuple_084d2f95b0faa70e48ac09f904a1065a_tuple;
extern PyObject *const_str_plain__minimize_trust_krylov;
static PyObject *const_str_plain_old_constraints;
extern PyObject *const_str_plain__minimize_newtoncg;
extern PyObject *const_str_plain_BFGS;
static PyObject *const_tuple_str_plain_return_all_false_tuple;
extern PyObject *const_str_plain__minimize_trust_ncg;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_4daa4d5603a458e52f3ee710892e453a = UNSTREAM_STRING_ASCII( &constant_bin[ 4953271 ], 11, 0 );
    const_tuple_str_plain__minimize_trust_krylov_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__minimize_trust_krylov_tuple, 0, const_str_plain__minimize_trust_krylov ); Py_INCREF( const_str_plain__minimize_trust_krylov );
    const_str_digest_e27e349d28fa7d1be2332d50a5d0e34b = UNSTREAM_STRING_ASCII( &constant_bin[ 4697875 ], 12, 0 );
    const_str_plain_powell = UNSTREAM_STRING_ASCII( &constant_bin[ 4696906 ], 6, 1 );
    const_str_digest_54028da0d8863a1b8bfd633c09dd4afd = UNSTREAM_STRING_ASCII( &constant_bin[ 4953282 ], 27, 0 );
    const_tuple_b0026835f016d1d27035eae8ab4ec642_tuple = PyTuple_New( 3 );
    const_str_digest_d1fc6a039ddd29ba16b73faab2f66130 = UNSTREAM_STRING_ASCII( &constant_bin[ 4953309 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_b0026835f016d1d27035eae8ab4ec642_tuple, 0, const_str_digest_d1fc6a039ddd29ba16b73faab2f66130 ); Py_INCREF( const_str_digest_d1fc6a039ddd29ba16b73faab2f66130 );
    PyTuple_SET_ITEM( const_tuple_b0026835f016d1d27035eae8ab4ec642_tuple, 1, const_str_plain_powell ); Py_INCREF( const_str_plain_powell );
    PyTuple_SET_ITEM( const_tuple_b0026835f016d1d27035eae8ab4ec642_tuple, 2, const_str_plain_tnc ); Py_INCREF( const_str_plain_tnc );
    const_str_digest_42e068806b5c2a019590043b4bbd9aa0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4953318 ], 80, 0 );
    const_str_plain_all_constraint_types = UNSTREAM_STRING_ASCII( &constant_bin[ 4953398 ], 20, 1 );
    const_tuple_str_plain_cobyla_str_plain__custom_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cobyla_str_plain__custom_tuple, 0, const_str_plain_cobyla ); Py_INCREF( const_str_plain_cobyla );
    const_str_plain__custom = UNSTREAM_STRING_ASCII( &constant_bin[ 91343 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cobyla_str_plain__custom_tuple, 1, const_str_plain__custom ); Py_INCREF( const_str_plain__custom );
    const_str_digest_a7985a24d8e119b49cc55e2f32040610 = UNSTREAM_STRING_ASCII( &constant_bin[ 4953418 ], 11, 0 );
    const_str_digest_4b1e510c0634b1d9daeac7647ed7a5b3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4953429 ], 8, 0 );
    const_tuple_str_plain__minimize_cobyla_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__minimize_cobyla_tuple, 0, const_str_plain__minimize_cobyla ); Py_INCREF( const_str_plain__minimize_cobyla );
    const_str_plain__trustregion_ncg = UNSTREAM_STRING_ASCII( &constant_bin[ 4953437 ], 16, 1 );
    const_str_digest_9651963c5184f389b704c05cfb123044 = UNSTREAM_STRING_ASCII( &constant_bin[ 4953453 ], 92, 0 );
    const_tuple_de02313c6a67bf3b39594658045fd3f6_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_de02313c6a67bf3b39594658045fd3f6_tuple, 0, const_str_plain_constraints ); Py_INCREF( const_str_plain_constraints );
    PyTuple_SET_ITEM( const_tuple_de02313c6a67bf3b39594658045fd3f6_tuple, 1, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    PyTuple_SET_ITEM( const_tuple_de02313c6a67bf3b39594658045fd3f6_tuple, 2, const_str_plain_meth ); Py_INCREF( const_str_plain_meth );
    PyTuple_SET_ITEM( const_tuple_de02313c6a67bf3b39594658045fd3f6_tuple, 3, const_str_plain_all_constraint_types ); Py_INCREF( const_str_plain_all_constraint_types );
    const_str_plain_new_constraint_types = UNSTREAM_STRING_ASCII( &constant_bin[ 4953545 ], 20, 1 );
    PyTuple_SET_ITEM( const_tuple_de02313c6a67bf3b39594658045fd3f6_tuple, 4, const_str_plain_new_constraint_types ); Py_INCREF( const_str_plain_new_constraint_types );
    PyTuple_SET_ITEM( const_tuple_de02313c6a67bf3b39594658045fd3f6_tuple, 5, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_de02313c6a67bf3b39594658045fd3f6_tuple, 6, const_str_plain_con ); Py_INCREF( const_str_plain_con );
    const_str_plain_old_constraints = UNSTREAM_STRING_ASCII( &constant_bin[ 4732338 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_de02313c6a67bf3b39594658045fd3f6_tuple, 7, const_str_plain_old_constraints ); Py_INCREF( const_str_plain_old_constraints );
    const_tuple_912f31eee7cd3bda74803669f4c50038_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_912f31eee7cd3bda74803669f4c50038_tuple, 0, const_str_digest_4b1e510c0634b1d9daeac7647ed7a5b3 ); Py_INCREF( const_str_digest_4b1e510c0634b1d9daeac7647ed7a5b3 );
    PyTuple_SET_ITEM( const_tuple_912f31eee7cd3bda74803669f4c50038_tuple, 1, const_str_plain_tnc ); Py_INCREF( const_str_plain_tnc );
    PyTuple_SET_ITEM( const_tuple_912f31eee7cd3bda74803669f4c50038_tuple, 2, const_str_plain_slsqp ); Py_INCREF( const_str_plain_slsqp );
    const_str_digest_e375c59a1ac5b6aa91a63059861ae355 = UNSTREAM_STRING_ASCII( &constant_bin[ 4953565 ], 33, 0 );
    const_str_digest_cef9fbfc7fcc4451324549ad968be27b = UNSTREAM_STRING_ASCII( &constant_bin[ 4953598 ], 36, 0 );
    const_str_digest_46e4644880d25752897dc08932e87714 = UNSTREAM_STRING_ASCII( &constant_bin[ 4953634 ], 66, 0 );
    const_str_digest_9274bf2c59096d8ba7dbeb0419e9be0c = UNSTREAM_STRING_ASCII( &constant_bin[ 4953700 ], 56, 0 );
    const_tuple_str_digest_4b1e510c0634b1d9daeac7647ed7a5b3_str_plain_tnc_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_4b1e510c0634b1d9daeac7647ed7a5b3_str_plain_tnc_tuple, 0, const_str_digest_4b1e510c0634b1d9daeac7647ed7a5b3 ); Py_INCREF( const_str_digest_4b1e510c0634b1d9daeac7647ed7a5b3 );
    PyTuple_SET_ITEM( const_tuple_str_digest_4b1e510c0634b1d9daeac7647ed7a5b3_str_plain_tnc_tuple, 1, const_str_plain_tnc ); Py_INCREF( const_str_plain_tnc );
    const_tuple_25e6aee4221265b68ab0be395ebcc132_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_25e6aee4221265b68ab0be395ebcc132_tuple, 0, const_str_plain__minimize_neldermead ); Py_INCREF( const_str_plain__minimize_neldermead );
    PyTuple_SET_ITEM( const_tuple_25e6aee4221265b68ab0be395ebcc132_tuple, 1, const_str_plain__minimize_powell ); Py_INCREF( const_str_plain__minimize_powell );
    PyTuple_SET_ITEM( const_tuple_25e6aee4221265b68ab0be395ebcc132_tuple, 2, const_str_plain__minimize_cg ); Py_INCREF( const_str_plain__minimize_cg );
    PyTuple_SET_ITEM( const_tuple_25e6aee4221265b68ab0be395ebcc132_tuple, 3, const_str_plain__minimize_bfgs ); Py_INCREF( const_str_plain__minimize_bfgs );
    PyTuple_SET_ITEM( const_tuple_25e6aee4221265b68ab0be395ebcc132_tuple, 4, const_str_plain__minimize_newtoncg ); Py_INCREF( const_str_plain__minimize_newtoncg );
    PyTuple_SET_ITEM( const_tuple_25e6aee4221265b68ab0be395ebcc132_tuple, 5, const_str_plain__minimize_scalar_brent ); Py_INCREF( const_str_plain__minimize_scalar_brent );
    PyTuple_SET_ITEM( const_tuple_25e6aee4221265b68ab0be395ebcc132_tuple, 6, const_str_plain__minimize_scalar_bounded ); Py_INCREF( const_str_plain__minimize_scalar_bounded );
    PyTuple_SET_ITEM( const_tuple_25e6aee4221265b68ab0be395ebcc132_tuple, 7, const_str_plain__minimize_scalar_golden ); Py_INCREF( const_str_plain__minimize_scalar_golden );
    PyTuple_SET_ITEM( const_tuple_25e6aee4221265b68ab0be395ebcc132_tuple, 8, const_str_plain_MemoizeJac ); Py_INCREF( const_str_plain_MemoizeJac );
    const_str_digest_cf43b93af9d0a8b9649eef9e473daaf9 = UNSTREAM_STRING_ASCII( &constant_bin[ 4953756 ], 4526, 0 );
    const_tuple_4650da6b56dac71682c32b47484586f1_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_4650da6b56dac71682c32b47484586f1_tuple, 0, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_4650da6b56dac71682c32b47484586f1_tuple, 1, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    PyTuple_SET_ITEM( const_tuple_4650da6b56dac71682c32b47484586f1_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_4650da6b56dac71682c32b47484586f1_tuple, 3, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_4650da6b56dac71682c32b47484586f1_tuple, 4, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_4650da6b56dac71682c32b47484586f1_tuple, 5, const_str_plain_hess ); Py_INCREF( const_str_plain_hess );
    PyTuple_SET_ITEM( const_tuple_4650da6b56dac71682c32b47484586f1_tuple, 6, const_str_plain_hessp ); Py_INCREF( const_str_plain_hessp );
    PyTuple_SET_ITEM( const_tuple_4650da6b56dac71682c32b47484586f1_tuple, 7, const_str_plain_bounds ); Py_INCREF( const_str_plain_bounds );
    PyTuple_SET_ITEM( const_tuple_4650da6b56dac71682c32b47484586f1_tuple, 8, const_str_plain_constraints ); Py_INCREF( const_str_plain_constraints );
    PyTuple_SET_ITEM( const_tuple_4650da6b56dac71682c32b47484586f1_tuple, 9, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_4650da6b56dac71682c32b47484586f1_tuple, 10, const_str_plain_callback ); Py_INCREF( const_str_plain_callback );
    PyTuple_SET_ITEM( const_tuple_4650da6b56dac71682c32b47484586f1_tuple, 11, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_4650da6b56dac71682c32b47484586f1_tuple, 12, const_str_plain_meth ); Py_INCREF( const_str_plain_meth );
    const_list_str_plain_minimize_str_plain_minimize_scalar_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_minimize_str_plain_minimize_scalar_list, 0, const_str_plain_minimize ); Py_INCREF( const_str_plain_minimize );
    PyList_SET_ITEM( const_list_str_plain_minimize_str_plain_minimize_scalar_list, 1, const_str_plain_minimize_scalar ); Py_INCREF( const_str_plain_minimize_scalar );
    const_str_digest_c1a2e72a50223220bee614374a6c0b52 = UNSTREAM_STRING_ASCII( &constant_bin[ 4958282 ], 51, 0 );
    const_str_digest_39e0f96b55cf42322ad66366c618f104 = UNSTREAM_STRING_ASCII( &constant_bin[ 4958333 ], 27, 0 );
    const_str_digest_bb18aaa9cdb5c3593dabdf5e70360cab = UNSTREAM_STRING_ASCII( &constant_bin[ 4958360 ], 50, 0 );
    const_str_digest_08fb05b0f1747e92cee153be8c645267 = UNSTREAM_STRING_ASCII( &constant_bin[ 4958410 ], 31, 0 );
    const_tuple_str_plain__minimize_slsqp_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__minimize_slsqp_tuple, 0, const_str_plain__minimize_slsqp ); Py_INCREF( const_str_plain__minimize_slsqp );
    const_str_plain_bfgs = UNSTREAM_STRING_ASCII( &constant_bin[ 4696958 ], 4, 1 );
    const_str_digest_4ef079d91469ae7917d9799d8ae6f54a = UNSTREAM_STRING_ASCII( &constant_bin[ 4958441 ], 50, 0 );
    const_str_digest_8d0d5a5b00935c558fd21d8fa45bf036 = UNSTREAM_STRING_ASCII( &constant_bin[ 4958491 ], 57, 0 );
    const_str_digest_e2d106e69cf0b2b1d74938d61b5d9f8f = UNSTREAM_STRING_ASCII( &constant_bin[ 4958548 ], 9, 0 );
    const_tuple_dd9bd93e271b00cf0dec905b3498ca59_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_dd9bd93e271b00cf0dec905b3498ca59_tuple, 0, const_str_digest_4daa4d5603a458e52f3ee710892e453a ); Py_INCREF( const_str_digest_4daa4d5603a458e52f3ee710892e453a );
    PyTuple_SET_ITEM( const_tuple_dd9bd93e271b00cf0dec905b3498ca59_tuple, 1, const_str_plain_powell ); Py_INCREF( const_str_plain_powell );
    PyTuple_SET_ITEM( const_tuple_dd9bd93e271b00cf0dec905b3498ca59_tuple, 2, const_str_plain_cobyla ); Py_INCREF( const_str_plain_cobyla );
    const_tuple_str_plain__minimize_trustregion_exact_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__minimize_trustregion_exact_tuple, 0, const_str_plain__minimize_trustregion_exact ); Py_INCREF( const_str_plain__minimize_trustregion_exact );
    const_str_digest_753c701e6a332a0f84c5e5ae08fd2679 = UNSTREAM_STRING_ASCII( &constant_bin[ 4953573 ], 24, 0 );
    const_tuple_1c5d95777d8ef6d328f71aa083ed78cd_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_1c5d95777d8ef6d328f71aa083ed78cd_tuple, 0, const_str_plain_old_bound_to_new ); Py_INCREF( const_str_plain_old_bound_to_new );
    PyTuple_SET_ITEM( const_tuple_1c5d95777d8ef6d328f71aa083ed78cd_tuple, 1, const_str_plain_new_bounds_to_old ); Py_INCREF( const_str_plain_new_bounds_to_old );
    PyTuple_SET_ITEM( const_tuple_1c5d95777d8ef6d328f71aa083ed78cd_tuple, 2, const_str_plain_old_constraint_to_new ); Py_INCREF( const_str_plain_old_constraint_to_new );
    PyTuple_SET_ITEM( const_tuple_1c5d95777d8ef6d328f71aa083ed78cd_tuple, 3, const_str_plain_new_constraint_to_old ); Py_INCREF( const_str_plain_new_constraint_to_old );
    PyTuple_SET_ITEM( const_tuple_1c5d95777d8ef6d328f71aa083ed78cd_tuple, 4, const_str_plain_NonlinearConstraint ); Py_INCREF( const_str_plain_NonlinearConstraint );
    PyTuple_SET_ITEM( const_tuple_1c5d95777d8ef6d328f71aa083ed78cd_tuple, 5, const_str_plain_LinearConstraint ); Py_INCREF( const_str_plain_LinearConstraint );
    PyTuple_SET_ITEM( const_tuple_1c5d95777d8ef6d328f71aa083ed78cd_tuple, 6, const_str_plain_Bounds ); Py_INCREF( const_str_plain_Bounds );
    const_str_digest_44040f14a42fd71dbcd6a8699a07c941 = UNSTREAM_STRING_ASCII( &constant_bin[ 4958557 ], 49, 0 );
    const_str_plain_standardize_bounds = UNSTREAM_STRING_ASCII( &constant_bin[ 4958606 ], 18, 1 );
    const_tuple_str_plain__minimize_dogleg_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__minimize_dogleg_tuple, 0, const_str_plain__minimize_dogleg ); Py_INCREF( const_str_plain__minimize_dogleg );
    const_str_plain_dogleg = UNSTREAM_STRING_ASCII( &constant_bin[ 4697155 ], 6, 1 );
    const_tuple_str_plain_disp_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_disp_tuple, 0, const_str_plain_disp ); Py_INCREF( const_str_plain_disp );
    const_tuple_str_plain__minimize_lbfgsb_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__minimize_lbfgsb_tuple, 0, const_str_plain__minimize_lbfgsb ); Py_INCREF( const_str_plain__minimize_lbfgsb );
    const_str_plain_standardize_constraints = UNSTREAM_STRING_ASCII( &constant_bin[ 4958624 ], 23, 1 );
    const_tuple_f2d2f3449559f65ffe82881c8557025b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_f2d2f3449559f65ffe82881c8557025b_tuple, 0, const_str_plain_bounds ); Py_INCREF( const_str_plain_bounds );
    PyTuple_SET_ITEM( const_tuple_f2d2f3449559f65ffe82881c8557025b_tuple, 1, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    PyTuple_SET_ITEM( const_tuple_f2d2f3449559f65ffe82881c8557025b_tuple, 2, const_str_plain_meth ); Py_INCREF( const_str_plain_meth );
    PyTuple_SET_ITEM( const_tuple_f2d2f3449559f65ffe82881c8557025b_tuple, 3, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_f2d2f3449559f65ffe82881c8557025b_tuple, 4, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    const_str_plain__trustregion_exact = UNSTREAM_STRING_ASCII( &constant_bin[ 4958647 ], 18, 1 );
    const_str_plain__trustregion_krylov = UNSTREAM_STRING_ASCII( &constant_bin[ 4958665 ], 19, 1 );
    const_tuple_d49114fdfd1323e376944e5b65c0cbd9_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_d49114fdfd1323e376944e5b65c0cbd9_tuple, 0, const_str_digest_4daa4d5603a458e52f3ee710892e453a ); Py_INCREF( const_str_digest_4daa4d5603a458e52f3ee710892e453a );
    PyTuple_SET_ITEM( const_tuple_d49114fdfd1323e376944e5b65c0cbd9_tuple, 1, const_str_plain_powell ); Py_INCREF( const_str_plain_powell );
    PyTuple_SET_ITEM( const_tuple_d49114fdfd1323e376944e5b65c0cbd9_tuple, 2, const_str_plain_cg ); Py_INCREF( const_str_plain_cg );
    PyTuple_SET_ITEM( const_tuple_d49114fdfd1323e376944e5b65c0cbd9_tuple, 3, const_str_plain_bfgs ); Py_INCREF( const_str_plain_bfgs );
    PyTuple_SET_ITEM( const_tuple_d49114fdfd1323e376944e5b65c0cbd9_tuple, 4, const_str_digest_d1fc6a039ddd29ba16b73faab2f66130 ); Py_INCREF( const_str_digest_d1fc6a039ddd29ba16b73faab2f66130 );
    PyTuple_SET_ITEM( const_tuple_d49114fdfd1323e376944e5b65c0cbd9_tuple, 5, const_str_plain_dogleg ); Py_INCREF( const_str_plain_dogleg );
    PyTuple_SET_ITEM( const_tuple_d49114fdfd1323e376944e5b65c0cbd9_tuple, 6, const_str_digest_e2d106e69cf0b2b1d74938d61b5d9f8f ); Py_INCREF( const_str_digest_e2d106e69cf0b2b1d74938d61b5d9f8f );
    const_tuple_acbb4d22e32d76d121eec200fe65c12b_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_acbb4d22e32d76d121eec200fe65c12b_tuple, 0, const_str_digest_d1fc6a039ddd29ba16b73faab2f66130 ); Py_INCREF( const_str_digest_d1fc6a039ddd29ba16b73faab2f66130 );
    PyTuple_SET_ITEM( const_tuple_acbb4d22e32d76d121eec200fe65c12b_tuple, 1, const_str_plain_dogleg ); Py_INCREF( const_str_plain_dogleg );
    PyTuple_SET_ITEM( const_tuple_acbb4d22e32d76d121eec200fe65c12b_tuple, 2, const_str_digest_e2d106e69cf0b2b1d74938d61b5d9f8f ); Py_INCREF( const_str_digest_e2d106e69cf0b2b1d74938d61b5d9f8f );
    PyTuple_SET_ITEM( const_tuple_acbb4d22e32d76d121eec200fe65c12b_tuple, 3, const_str_digest_e27e349d28fa7d1be2332d50a5d0e34b ); Py_INCREF( const_str_digest_e27e349d28fa7d1be2332d50a5d0e34b );
    const_str_digest_b41d75c9751ce45ea8436205fcf63510 = UNSTREAM_STRING_ASCII( &constant_bin[ 4958684 ], 12, 0 );
    PyTuple_SET_ITEM( const_tuple_acbb4d22e32d76d121eec200fe65c12b_tuple, 4, const_str_digest_b41d75c9751ce45ea8436205fcf63510 ); Py_INCREF( const_str_digest_b41d75c9751ce45ea8436205fcf63510 );
    PyTuple_SET_ITEM( const_tuple_acbb4d22e32d76d121eec200fe65c12b_tuple, 5, const_str_digest_a7985a24d8e119b49cc55e2f32040610 ); Py_INCREF( const_str_digest_a7985a24d8e119b49cc55e2f32040610 );
    PyTuple_SET_ITEM( const_tuple_acbb4d22e32d76d121eec200fe65c12b_tuple, 6, const_str_plain__custom ); Py_INCREF( const_str_plain__custom );
    const_str_digest_da0aa1e48c5932ece168871744804c5f = UNSTREAM_STRING_ASCII( &constant_bin[ 4958696 ], 36, 0 );
    const_tuple_str_digest_99b0f2800a158b791fce03480ec7ee9d_str_plain_cs_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_99b0f2800a158b791fce03480ec7ee9d_str_plain_cs_tuple, 0, const_str_digest_99b0f2800a158b791fce03480ec7ee9d ); Py_INCREF( const_str_digest_99b0f2800a158b791fce03480ec7ee9d );
    PyTuple_SET_ITEM( const_tuple_str_digest_99b0f2800a158b791fce03480ec7ee9d_str_plain_cs_tuple, 1, const_str_plain_cs ); Py_INCREF( const_str_plain_cs );
    const_tuple_85616b67cd523b835b7883d9cd377584_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_85616b67cd523b835b7883d9cd377584_tuple, 0, const_str_digest_d1fc6a039ddd29ba16b73faab2f66130 ); Py_INCREF( const_str_digest_d1fc6a039ddd29ba16b73faab2f66130 );
    PyTuple_SET_ITEM( const_tuple_85616b67cd523b835b7883d9cd377584_tuple, 1, const_str_plain_dogleg ); Py_INCREF( const_str_plain_dogleg );
    PyTuple_SET_ITEM( const_tuple_85616b67cd523b835b7883d9cd377584_tuple, 2, const_str_digest_e2d106e69cf0b2b1d74938d61b5d9f8f ); Py_INCREF( const_str_digest_e2d106e69cf0b2b1d74938d61b5d9f8f );
    PyTuple_SET_ITEM( const_tuple_85616b67cd523b835b7883d9cd377584_tuple, 3, const_str_digest_e27e349d28fa7d1be2332d50a5d0e34b ); Py_INCREF( const_str_digest_e27e349d28fa7d1be2332d50a5d0e34b );
    PyTuple_SET_ITEM( const_tuple_85616b67cd523b835b7883d9cd377584_tuple, 4, const_str_digest_b41d75c9751ce45ea8436205fcf63510 ); Py_INCREF( const_str_digest_b41d75c9751ce45ea8436205fcf63510 );
    PyTuple_SET_ITEM( const_tuple_85616b67cd523b835b7883d9cd377584_tuple, 5, const_str_plain__custom ); Py_INCREF( const_str_plain__custom );
    const_tuple_str_plain_cobyla_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cobyla_tuple, 0, const_str_plain_cobyla ); Py_INCREF( const_str_plain_cobyla );
    const_tuple_str_plain__minimize_tnc_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__minimize_tnc_tuple, 0, const_str_plain__minimize_tnc ); Py_INCREF( const_str_plain__minimize_tnc );
    const_tuple_7f0292d08fbdffbc12dda99630bf713c_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_7f0292d08fbdffbc12dda99630bf713c_tuple, 0, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_7f0292d08fbdffbc12dda99630bf713c_tuple, 1, const_str_plain_bracket ); Py_INCREF( const_str_plain_bracket );
    PyTuple_SET_ITEM( const_tuple_7f0292d08fbdffbc12dda99630bf713c_tuple, 2, const_str_plain_bounds ); Py_INCREF( const_str_plain_bounds );
    PyTuple_SET_ITEM( const_tuple_7f0292d08fbdffbc12dda99630bf713c_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_7f0292d08fbdffbc12dda99630bf713c_tuple, 4, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_7f0292d08fbdffbc12dda99630bf713c_tuple, 5, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_7f0292d08fbdffbc12dda99630bf713c_tuple, 6, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_7f0292d08fbdffbc12dda99630bf713c_tuple, 7, const_str_plain_meth ); Py_INCREF( const_str_plain_meth );
    PyTuple_SET_ITEM( const_tuple_7f0292d08fbdffbc12dda99630bf713c_tuple, 8, const_str_plain_disp ); Py_INCREF( const_str_plain_disp );
    const_tuple_none_none_tuple_empty_str_plain_brent_none_none_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_none_none_tuple_empty_str_plain_brent_none_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_tuple_empty_str_plain_brent_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_tuple_empty_str_plain_brent_none_none_tuple, 2, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_none_none_tuple_empty_str_plain_brent_none_none_tuple, 3, const_str_plain_brent ); Py_INCREF( const_str_plain_brent );
    PyTuple_SET_ITEM( const_tuple_none_none_tuple_empty_str_plain_brent_none_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_tuple_empty_str_plain_brent_none_none_tuple, 5, Py_None ); Py_INCREF( Py_None );
    const_tuple_d1e84eb6ebfcc394c2bfcfec8278186c_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_d1e84eb6ebfcc394c2bfcfec8278186c_tuple, 0, const_str_plain_bfgs ); Py_INCREF( const_str_plain_bfgs );
    PyTuple_SET_ITEM( const_tuple_d1e84eb6ebfcc394c2bfcfec8278186c_tuple, 1, const_str_plain_cg ); Py_INCREF( const_str_plain_cg );
    PyTuple_SET_ITEM( const_tuple_d1e84eb6ebfcc394c2bfcfec8278186c_tuple, 2, const_str_digest_4b1e510c0634b1d9daeac7647ed7a5b3 ); Py_INCREF( const_str_digest_4b1e510c0634b1d9daeac7647ed7a5b3 );
    PyTuple_SET_ITEM( const_tuple_d1e84eb6ebfcc394c2bfcfec8278186c_tuple, 3, const_str_plain_tnc ); Py_INCREF( const_str_plain_tnc );
    PyTuple_SET_ITEM( const_tuple_d1e84eb6ebfcc394c2bfcfec8278186c_tuple, 4, const_str_plain_dogleg ); Py_INCREF( const_str_plain_dogleg );
    PyTuple_SET_ITEM( const_tuple_d1e84eb6ebfcc394c2bfcfec8278186c_tuple, 5, const_str_digest_e2d106e69cf0b2b1d74938d61b5d9f8f ); Py_INCREF( const_str_digest_e2d106e69cf0b2b1d74938d61b5d9f8f );
    PyTuple_SET_ITEM( const_tuple_d1e84eb6ebfcc394c2bfcfec8278186c_tuple, 6, const_str_digest_a7985a24d8e119b49cc55e2f32040610 ); Py_INCREF( const_str_digest_a7985a24d8e119b49cc55e2f32040610 );
    PyTuple_SET_ITEM( const_tuple_d1e84eb6ebfcc394c2bfcfec8278186c_tuple, 7, const_str_digest_b41d75c9751ce45ea8436205fcf63510 ); Py_INCREF( const_str_digest_b41d75c9751ce45ea8436205fcf63510 );
    const_tuple_0b615d6e313da26b12c2d0c18014ca66_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_0b615d6e313da26b12c2d0c18014ca66_tuple, 0, const_str_plain_powell ); Py_INCREF( const_str_plain_powell );
    PyTuple_SET_ITEM( const_tuple_0b615d6e313da26b12c2d0c18014ca66_tuple, 1, const_str_digest_4b1e510c0634b1d9daeac7647ed7a5b3 ); Py_INCREF( const_str_digest_4b1e510c0634b1d9daeac7647ed7a5b3 );
    PyTuple_SET_ITEM( const_tuple_0b615d6e313da26b12c2d0c18014ca66_tuple, 2, const_str_plain_tnc ); Py_INCREF( const_str_plain_tnc );
    PyTuple_SET_ITEM( const_tuple_0b615d6e313da26b12c2d0c18014ca66_tuple, 3, const_str_plain_slsqp ); Py_INCREF( const_str_plain_slsqp );
    const_str_plain__trustregion_dogleg = UNSTREAM_STRING_ASCII( &constant_bin[ 4958732 ], 19, 1 );
    const_tuple_6299fab7543a1d6da195c654ed1bb8a6_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_6299fab7543a1d6da195c654ed1bb8a6_tuple, 0, const_str_digest_4b1e510c0634b1d9daeac7647ed7a5b3 ); Py_INCREF( const_str_digest_4b1e510c0634b1d9daeac7647ed7a5b3 );
    PyTuple_SET_ITEM( const_tuple_6299fab7543a1d6da195c654ed1bb8a6_tuple, 1, const_str_plain_tnc ); Py_INCREF( const_str_plain_tnc );
    PyTuple_SET_ITEM( const_tuple_6299fab7543a1d6da195c654ed1bb8a6_tuple, 2, const_str_plain_cobyla ); Py_INCREF( const_str_plain_cobyla );
    PyTuple_SET_ITEM( const_tuple_6299fab7543a1d6da195c654ed1bb8a6_tuple, 3, const_str_plain_slsqp ); Py_INCREF( const_str_plain_slsqp );
    const_tuple_str_plain__minimize_trust_ncg_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__minimize_trust_ncg_tuple, 0, const_str_plain__minimize_trust_ncg ); Py_INCREF( const_str_plain__minimize_trust_ncg );
    const_str_digest_c0ac58071c26964d4384bab73915c9a6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4958751 ], 47, 0 );
    const_str_digest_d64588770c3febb768625b6bb688fe61 = UNSTREAM_STRING_ASCII( &constant_bin[ 4958798 ], 195, 0 );
    const_str_plain_bounded = UNSTREAM_STRING_ASCII( &constant_bin[ 3876776 ], 7, 1 );
    const_str_digest_863fc7cd57512d75f0fa3a49a5bf2347 = UNSTREAM_STRING_ASCII( &constant_bin[ 4958993 ], 20912, 0 );
    const_tuple_084d2f95b0faa70e48ac09f904a1065a_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_084d2f95b0faa70e48ac09f904a1065a_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_084d2f95b0faa70e48ac09f904a1065a_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_084d2f95b0faa70e48ac09f904a1065a_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_084d2f95b0faa70e48ac09f904a1065a_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_084d2f95b0faa70e48ac09f904a1065a_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_084d2f95b0faa70e48ac09f904a1065a_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_084d2f95b0faa70e48ac09f904a1065a_tuple, 6, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_084d2f95b0faa70e48ac09f904a1065a_tuple, 7, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_084d2f95b0faa70e48ac09f904a1065a_tuple, 8, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_084d2f95b0faa70e48ac09f904a1065a_tuple, 9, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_return_all_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_return_all_false_tuple, 0, const_str_plain_return_all ); Py_INCREF( const_str_plain_return_all );
    PyTuple_SET_ITEM( const_tuple_str_plain_return_all_false_tuple, 1, Py_False ); Py_INCREF( Py_False );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_minimize( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d1706e25f1ce226511da7f868220610a;
static PyCodeObject *codeobj_a57c3d2c77b2b77c6e21e91e233c61ec;
static PyCodeObject *codeobj_800d751d8acf434849d31833ebb64369;
static PyCodeObject *codeobj_14279a22dc65e2a7cb8c070d7f5b5b7d;
static PyCodeObject *codeobj_c3c437deddd1a060188e0d37194c13e6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_54028da0d8863a1b8bfd633c09dd4afd );
    codeobj_d1706e25f1ce226511da7f868220610a = MAKE_CODEOBJ( module_filename_obj, const_str_digest_e375c59a1ac5b6aa91a63059861ae355, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_a57c3d2c77b2b77c6e21e91e233c61ec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_minimize, 42, const_tuple_4650da6b56dac71682c32b47484586f1_tuple, 12, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_800d751d8acf434849d31833ebb64369 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_minimize_scalar, 629, const_tuple_7f0292d08fbdffbc12dda99630bf713c_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_14279a22dc65e2a7cb8c070d7f5b5b7d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_standardize_bounds, 787, const_tuple_f2d2f3449559f65ffe82881c8557025b_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c3c437deddd1a060188e0d37194c13e6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_standardize_constraints, 799, const_tuple_de02313c6a67bf3b39594658045fd3f6_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function_1_minimize( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function_2_minimize_scalar( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function_3_standardize_bounds(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function_4_standardize_constraints(  );


// The module function definitions.
static PyObject *impl_scipy$optimize$_minimize$$$function_1_minimize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fun = python_pars[ 0 ];
    PyObject *par_x0 = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_method = python_pars[ 3 ];
    PyObject *par_jac = python_pars[ 4 ];
    PyObject *par_hess = python_pars[ 5 ];
    PyObject *par_hessp = python_pars[ 6 ];
    PyObject *par_bounds = python_pars[ 7 ];
    PyObject *par_constraints = python_pars[ 8 ];
    PyObject *par_tol = python_pars[ 9 ];
    PyObject *par_callback = python_pars[ 10 ];
    PyObject *par_options = python_pars[ 11 ];
    PyObject *var_meth = NULL;
    struct Nuitka_FrameObject *frame_a57c3d2c77b2b77c6e21e91e233c61ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a57c3d2c77b2b77c6e21e91e233c61ec = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a57c3d2c77b2b77c6e21e91e233c61ec, codeobj_a57c3d2c77b2b77c6e21e91e233c61ec, module_scipy$optimize$_minimize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a57c3d2c77b2b77c6e21e91e233c61ec = cache_frame_a57c3d2c77b2b77c6e21e91e233c61ec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a57c3d2c77b2b77c6e21e91e233c61ec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a57c3d2c77b2b77c6e21e91e233c61ec ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 473;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_1 = par_x0;
        frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 473;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asarray, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 473;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x0;
            assert( old != NULL );
            par_x0 = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_x0 );
        tmp_source_name_2 = par_x0;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 474;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_kind );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 474;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 474;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_typecodes );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 474;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_str_plain_AllInteger;
        tmp_compexpr_right_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 474;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 474;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 475;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_3;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_asarray );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 475;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_x0 );
            tmp_tuple_element_1 = par_x0;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
            frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 475;
            tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 475;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_x0;
                assert( old != NULL );
                par_x0 = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_args );
        tmp_isinstance_inst_1 = par_args;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 477;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 477;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_tuple_element_2;
            CHECK_OBJECT( par_args );
            tmp_tuple_element_2 = par_args;
            tmp_assign_source_3 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_assign_source_3, 0, tmp_tuple_element_2 );
            {
                PyObject *old = par_args;
                assert( old != NULL );
                par_args = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_method );
        tmp_compexpr_left_2 = par_method;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_4;
            int tmp_truth_name_1;
            CHECK_OBJECT( par_constraints );
            tmp_truth_name_1 = CHECK_IF_TRUE( par_constraints );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 482;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                tmp_assign_source_4 = const_str_plain_SLSQP;
                {
                    PyObject *old = par_method;
                    assert( old != NULL );
                    par_method = tmp_assign_source_4;
                    Py_INCREF( par_method );
                    Py_DECREF( old );
                }

            }
            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                CHECK_OBJECT( par_bounds );
                tmp_compexpr_left_3 = par_bounds;
                tmp_compexpr_right_3 = Py_None;
                tmp_condition_result_5 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    tmp_assign_source_5 = const_str_digest_3a03db61930d1390c0d72de0a5982961;
                    {
                        PyObject *old = par_method;
                        assert( old != NULL );
                        par_method = tmp_assign_source_5;
                        Py_INCREF( par_method );
                        Py_DECREF( old );
                    }

                }
                goto branch_end_5;
                branch_no_5:;
                {
                    PyObject *tmp_assign_source_6;
                    tmp_assign_source_6 = const_str_plain_BFGS;
                    {
                        PyObject *old = par_method;
                        assert( old != NULL );
                        par_method = tmp_assign_source_6;
                        Py_INCREF( par_method );
                        Py_DECREF( old );
                    }

                }
                branch_end_5:;
            }
            branch_end_4:;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_callable );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_callable );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "callable" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 489;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        if ( par_method == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 489;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = par_method;
        frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 489;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 489;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 489;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = const_str_plain__custom;
            assert( var_meth == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_meth = tmp_assign_source_7;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_instance_2;
            if ( par_method == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 492;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = par_method;
            frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 492;
            tmp_assign_source_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 492;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_meth == NULL );
            var_meth = tmp_assign_source_8;
        }
        branch_end_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_options );
        tmp_compexpr_left_4 = par_options;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_7 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = PyDict_New();
            {
                PyObject *old = par_options;
                assert( old != NULL );
                par_options = tmp_assign_source_9;
                Py_DECREF( old );
            }

        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_value_name_1;
        CHECK_OBJECT( var_meth );
        tmp_compexpr_left_5 = var_meth;
        tmp_compexpr_right_5 = const_tuple_dd9bd93e271b00cf0dec905b3498ca59_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_5, tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 498;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_jac );
        tmp_value_name_1 = par_jac;
        tmp_res = CHECK_IF_TRUE( tmp_value_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 498;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_mvar_value_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_warn );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 499;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_5;
            tmp_left_name_1 = const_str_digest_bb18aaa9cdb5c3593dabdf5e70360cab;
            if ( par_method == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 499;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_1 = par_method;
            tmp_args_element_name_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 499;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_args_element_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 500;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_4 = tmp_mvar_value_6;
            frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 499;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 499;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( var_meth );
        tmp_compexpr_left_6 = var_meth;
        tmp_compexpr_right_6 = const_tuple_acbb4d22e32d76d121eec200fe65c12b_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_6, tmp_compexpr_left_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 502;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_hess );
        tmp_compexpr_left_7 = par_hess;
        tmp_compexpr_right_7 = Py_None;
        tmp_and_right_value_2 = ( tmp_compexpr_left_7 != tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_9 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_9 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_mvar_value_8;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_warn );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 504;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_7;
            tmp_left_name_2 = const_str_digest_4ef079d91469ae7917d9799d8ae6f54a;
            if ( par_method == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 504;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_2 = par_method;
            tmp_args_element_name_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 504;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
            }

            if ( tmp_mvar_value_8 == NULL )
            {
                Py_DECREF( tmp_args_element_name_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 505;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_6 = tmp_mvar_value_8;
            frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 504;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 504;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        CHECK_OBJECT( var_meth );
        tmp_compexpr_left_8 = var_meth;
        tmp_compexpr_right_8 = const_tuple_85616b67cd523b835b7883d9cd377584_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_8, tmp_compexpr_left_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 507;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_3 == 1 )
        {
            goto and_right_3;
        }
        else
        {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT( par_hessp );
        tmp_compexpr_left_9 = par_hessp;
        tmp_compexpr_right_9 = Py_None;
        tmp_and_right_value_3 = ( tmp_compexpr_left_9 != tmp_compexpr_right_9 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_10 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_10 = tmp_and_left_value_3;
        and_end_3:;
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
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_mvar_value_10;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_warn );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 510;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_9;
            tmp_left_name_3 = const_str_digest_46e4644880d25752897dc08932e87714;
            if ( par_method == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 511;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_3 = par_method;
            tmp_args_element_name_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 510;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
            }

            if ( tmp_mvar_value_10 == NULL )
            {
                Py_DECREF( tmp_args_element_name_7 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 511;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_8 = tmp_mvar_value_10;
            frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 510;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 510;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_10:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_9;
        int tmp_truth_name_3;
        CHECK_OBJECT( var_meth );
        tmp_compexpr_left_10 = var_meth;
        tmp_compexpr_right_10 = const_tuple_d49114fdfd1323e376944e5b65c0cbd9_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_10, tmp_compexpr_left_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 513;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_4 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_bounds );
        tmp_compexpr_left_11 = par_bounds;
        tmp_compexpr_right_11 = Py_None;
        tmp_or_left_value_1 = ( tmp_compexpr_left_11 != tmp_compexpr_right_11 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 514;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_11;
        CHECK_OBJECT( par_constraints );
        tmp_args_element_name_9 = par_constraints;
        frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 514;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_any, call_args );
        }

        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 514;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_5 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_5 );

            exception_lineno = 514;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_5 );
        tmp_and_right_value_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_right_value_4 = tmp_or_left_value_1;
        or_end_1:;
        tmp_condition_result_11 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_11 = tmp_and_left_value_4;
        and_end_4:;
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
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_call_result_6;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_mvar_value_13;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_warn );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 515;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_6 = tmp_mvar_value_12;
            tmp_left_name_4 = const_str_digest_c0ac58071c26964d4384bab73915c9a6;
            if ( par_method == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 515;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_4 = par_method;
            tmp_args_element_name_10 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 515;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
            }

            if ( tmp_mvar_value_13 == NULL )
            {
                Py_DECREF( tmp_args_element_name_10 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 516;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_11 = tmp_mvar_value_13;
            frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 515;
            {
                PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 515;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        branch_no_11:;
    }
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_and_left_truth_5;
        nuitka_bool tmp_and_left_value_5;
        nuitka_bool tmp_and_right_value_5;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_12;
        int tmp_truth_name_4;
        CHECK_OBJECT( var_meth );
        tmp_compexpr_left_12 = var_meth;
        tmp_compexpr_right_12 = const_tuple_str_digest_4b1e510c0634b1d9daeac7647ed7a5b3_str_plain_tnc_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_12, tmp_compexpr_left_12 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 517;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_5 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_5 == 1 )
        {
            goto and_right_5;
        }
        else
        {
            goto and_left_5;
        }
        and_right_5:;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 517;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_14;
        CHECK_OBJECT( par_constraints );
        tmp_args_element_name_12 = par_constraints;
        frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 517;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_call_result_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_any, call_args );
        }

        if ( tmp_call_result_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 517;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_7 );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_7 );

            exception_lineno = 517;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_5 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_7 );
        tmp_condition_result_12 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_condition_result_12 = tmp_and_left_value_5;
        and_end_5:;
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
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_call_result_8;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_mvar_value_16;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_warn );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
            }

            if ( tmp_mvar_value_15 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 518;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_15;
            tmp_left_name_5 = const_str_digest_da0aa1e48c5932ece168871744804c5f;
            if ( par_method == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 518;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_5 = par_method;
            tmp_args_element_name_13 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_args_element_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 518;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
            }

            if ( tmp_mvar_value_16 == NULL )
            {
                Py_DECREF( tmp_args_element_name_13 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 519;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_14 = tmp_mvar_value_16;
            frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 518;
            {
                PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
                tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_args_element_name_13 );
            if ( tmp_call_result_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 518;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_8 );
        }
        branch_no_12:;
    }
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_and_left_truth_6;
        nuitka_bool tmp_and_left_value_6;
        nuitka_bool tmp_and_right_value_6;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        CHECK_OBJECT( var_meth );
        tmp_compexpr_left_13 = var_meth;
        tmp_compexpr_right_13 = const_str_plain_cobyla;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 520;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_6 == 1 )
        {
            goto and_right_6;
        }
        else
        {
            goto and_left_6;
        }
        and_right_6:;
        CHECK_OBJECT( par_bounds );
        tmp_compexpr_left_14 = par_bounds;
        tmp_compexpr_right_14 = Py_None;
        tmp_and_right_value_6 = ( tmp_compexpr_left_14 != tmp_compexpr_right_14 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_13 = tmp_and_right_value_6;
        goto and_end_6;
        and_left_6:;
        tmp_condition_result_13 = tmp_and_left_value_6;
        and_end_6:;
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
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_call_result_9;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_mvar_value_18;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_warn );

            if (unlikely( tmp_mvar_value_17 == NULL ))
            {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
            }

            if ( tmp_mvar_value_17 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 521;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_8 = tmp_mvar_value_17;
            tmp_left_name_6 = const_str_digest_08fb05b0f1747e92cee153be8c645267;
            if ( par_method == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 521;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_6 = par_method;
            tmp_args_element_name_15 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 521;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

            if (unlikely( tmp_mvar_value_18 == NULL ))
            {
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
            }

            if ( tmp_mvar_value_18 == NULL )
            {
                Py_DECREF( tmp_args_element_name_15 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 522;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_16 = tmp_mvar_value_18;
            frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 521;
            {
                PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_args_element_name_15 );
            if ( tmp_call_result_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 521;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_9 );
        }
        branch_no_13:;
    }
    {
        nuitka_bool tmp_condition_result_14;
        int tmp_and_left_truth_7;
        nuitka_bool tmp_and_left_value_7;
        nuitka_bool tmp_and_right_value_7;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        CHECK_OBJECT( var_meth );
        tmp_compexpr_left_15 = var_meth;
        tmp_compexpr_right_15 = const_tuple_str_plain_cobyla_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_15, tmp_compexpr_left_15 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 524;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_7 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_7 = tmp_and_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_7 == 1 )
        {
            goto and_right_7;
        }
        else
        {
            goto and_left_7;
        }
        and_right_7:;
        CHECK_OBJECT( par_callback );
        tmp_compexpr_left_16 = par_callback;
        tmp_compexpr_right_16 = Py_None;
        tmp_and_right_value_7 = ( tmp_compexpr_left_16 != tmp_compexpr_right_16 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_14 = tmp_and_right_value_7;
        goto and_end_7;
        and_left_7:;
        tmp_condition_result_14 = tmp_and_left_value_7;
        and_end_7:;
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
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_call_result_10;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_mvar_value_20;
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_warn );

            if (unlikely( tmp_mvar_value_19 == NULL ))
            {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
            }

            if ( tmp_mvar_value_19 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 525;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_9 = tmp_mvar_value_19;
            tmp_left_name_7 = const_str_digest_cef9fbfc7fcc4451324549ad968be27b;
            if ( par_method == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 525;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_7 = par_method;
            tmp_args_element_name_17 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
            if ( tmp_args_element_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 525;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

            if (unlikely( tmp_mvar_value_20 == NULL ))
            {
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
            }

            if ( tmp_mvar_value_20 == NULL )
            {
                Py_DECREF( tmp_args_element_name_17 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 525;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_18 = tmp_mvar_value_20;
            frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 525;
            {
                PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18 };
                tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_args_element_name_17 );
            if ( tmp_call_result_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 525;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_10 );
        }
        branch_no_14:;
    }
    {
        nuitka_bool tmp_condition_result_15;
        int tmp_and_left_truth_8;
        nuitka_bool tmp_and_left_value_8;
        nuitka_bool tmp_and_right_value_8;
        PyObject *tmp_compexpr_left_17;
        PyObject *tmp_compexpr_right_17;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_11;
        int tmp_truth_name_5;
        CHECK_OBJECT( var_meth );
        tmp_compexpr_left_17 = var_meth;
        tmp_compexpr_right_17 = const_tuple_6299fab7543a1d6da195c654ed1bb8a6_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_17, tmp_compexpr_left_17 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 527;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_8 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_8 = tmp_and_left_value_8 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_8 == 1 )
        {
            goto and_right_8;
        }
        else
        {
            goto and_left_8;
        }
        and_right_8:;
        CHECK_OBJECT( par_options );
        tmp_called_instance_5 = par_options;
        frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 528;
        tmp_call_result_11 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_return_all_false_tuple, 0 ) );

        if ( tmp_call_result_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 528;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE( tmp_call_result_11 );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_11 );

            exception_lineno = 528;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_8 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_11 );
        tmp_condition_result_15 = tmp_and_right_value_8;
        goto and_end_8;
        and_left_8:;
        tmp_condition_result_15 = tmp_and_left_value_8;
        and_end_8:;
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
            PyObject *tmp_called_name_10;
            PyObject *tmp_mvar_value_21;
            PyObject *tmp_call_result_12;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_mvar_value_22;
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_warn );

            if (unlikely( tmp_mvar_value_21 == NULL ))
            {
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
            }

            if ( tmp_mvar_value_21 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 529;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_10 = tmp_mvar_value_21;
            tmp_left_name_8 = const_str_digest_44040f14a42fd71dbcd6a8699a07c941;
            if ( par_method == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 529;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_8 = par_method;
            tmp_args_element_name_19 = BINARY_OPERATION_REMAINDER( tmp_left_name_8, tmp_right_name_8 );
            if ( tmp_args_element_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 529;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

            if (unlikely( tmp_mvar_value_22 == NULL ))
            {
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
            }

            if ( tmp_mvar_value_22 == NULL )
            {
                Py_DECREF( tmp_args_element_name_19 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 530;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_20 = tmp_mvar_value_22;
            frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 529;
            {
                PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20 };
                tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_args_element_name_19 );
            if ( tmp_call_result_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 529;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_12 );
        }
        branch_no_15:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_18;
        PyObject *tmp_compexpr_right_18;
        CHECK_OBJECT( var_meth );
        tmp_compexpr_left_18 = var_meth;
        tmp_compexpr_right_18 = const_str_digest_e27e349d28fa7d1be2332d50a5d0e34b;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_18, tmp_compexpr_right_18 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 533;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_compexpr_left_19;
            PyObject *tmp_compexpr_right_19;
            PyObject *tmp_type_arg_1;
            CHECK_OBJECT( par_jac );
            tmp_type_arg_1 = par_jac;
            tmp_compexpr_left_19 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_compexpr_left_19 == NULL) );
            tmp_compexpr_right_19 = (PyObject *)&PyBool_Type;
            tmp_condition_result_17 = ( tmp_compexpr_left_19 == tmp_compexpr_right_19 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_compexpr_left_19 );
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
                nuitka_bool tmp_condition_result_18;
                int tmp_truth_name_6;
                CHECK_OBJECT( par_jac );
                tmp_truth_name_6 = CHECK_IF_TRUE( par_jac );
                if ( tmp_truth_name_6 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 535;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_18 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_10;
                    PyObject *tmp_called_name_11;
                    PyObject *tmp_mvar_value_23;
                    PyObject *tmp_args_element_name_21;
                    tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_MemoizeJac );

                    if (unlikely( tmp_mvar_value_23 == NULL ))
                    {
                        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MemoizeJac );
                    }

                    if ( tmp_mvar_value_23 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MemoizeJac" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 536;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_11 = tmp_mvar_value_23;
                    CHECK_OBJECT( par_fun );
                    tmp_args_element_name_21 = par_fun;
                    frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 536;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_21 };
                        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
                    }

                    if ( tmp_assign_source_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 536;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_fun;
                        assert( old != NULL );
                        par_fun = tmp_assign_source_10;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_11;
                    PyObject *tmp_source_name_5;
                    CHECK_OBJECT( par_fun );
                    tmp_source_name_5 = par_fun;
                    tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_derivative );
                    if ( tmp_assign_source_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 537;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_jac;
                        assert( old != NULL );
                        par_jac = tmp_assign_source_11;
                        Py_DECREF( old );
                    }

                }
                goto branch_end_18;
                branch_no_18:;
                {
                    PyObject *tmp_assign_source_12;
                    tmp_assign_source_12 = const_str_digest_9bca7c4227b5a1da023f6724018a8c27;
                    {
                        PyObject *old = par_jac;
                        assert( old != NULL );
                        par_jac = tmp_assign_source_12;
                        Py_INCREF( par_jac );
                        Py_DECREF( old );
                    }

                }
                branch_end_18:;
            }
            goto branch_end_17;
            branch_no_17:;
            {
                nuitka_bool tmp_condition_result_19;
                PyObject *tmp_compexpr_left_20;
                PyObject *tmp_compexpr_right_20;
                CHECK_OBJECT( par_jac );
                tmp_compexpr_left_20 = par_jac;
                tmp_compexpr_right_20 = Py_None;
                tmp_condition_result_19 = ( tmp_compexpr_left_20 == tmp_compexpr_right_20 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_13;
                    tmp_assign_source_13 = const_str_digest_9bca7c4227b5a1da023f6724018a8c27;
                    {
                        PyObject *old = par_jac;
                        assert( old != NULL );
                        par_jac = tmp_assign_source_13;
                        Py_INCREF( par_jac );
                        Py_DECREF( old );
                    }

                }
                goto branch_end_19;
                branch_no_19:;
                {
                    nuitka_bool tmp_condition_result_20;
                    int tmp_and_left_truth_9;
                    nuitka_bool tmp_and_left_value_9;
                    nuitka_bool tmp_and_right_value_9;
                    PyObject *tmp_operand_name_2;
                    PyObject *tmp_called_name_12;
                    PyObject *tmp_mvar_value_24;
                    PyObject *tmp_args_element_name_22;
                    PyObject *tmp_compexpr_left_21;
                    PyObject *tmp_compexpr_right_21;
                    tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_callable );

                    if (unlikely( tmp_mvar_value_24 == NULL ))
                    {
                        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_callable );
                    }

                    if ( tmp_mvar_value_24 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "callable" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 542;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_12 = tmp_mvar_value_24;
                    CHECK_OBJECT( par_jac );
                    tmp_args_element_name_22 = par_jac;
                    frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 542;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_22 };
                        tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
                    }

                    if ( tmp_operand_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 542;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
                    Py_DECREF( tmp_operand_name_2 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 542;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_left_value_9 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    tmp_and_left_truth_9 = tmp_and_left_value_9 == NUITKA_BOOL_TRUE ? 1 : 0;
                    if ( tmp_and_left_truth_9 == 1 )
                    {
                        goto and_right_9;
                    }
                    else
                    {
                        goto and_left_9;
                    }
                    and_right_9:;
                    CHECK_OBJECT( par_jac );
                    tmp_compexpr_left_21 = par_jac;
                    tmp_compexpr_right_21 = const_tuple_dd2ed64315f6fdd030f1c9d72d73402c_tuple;
                    tmp_res = PySequence_Contains( tmp_compexpr_right_21, tmp_compexpr_left_21 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 542;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_right_value_9 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    tmp_condition_result_20 = tmp_and_right_value_9;
                    goto and_end_9;
                    and_left_9:;
                    tmp_condition_result_20 = tmp_and_left_value_9;
                    and_end_9:;
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
                        PyObject *tmp_raise_type_1;
                        PyObject *tmp_make_exception_arg_1;
                        tmp_make_exception_arg_1 = const_str_digest_39e0f96b55cf42322ad66366c618f104;
                        frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 543;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_1 };
                            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                        }

                        assert( !(tmp_raise_type_1 == NULL) );
                        exception_type = tmp_raise_type_1;
                        exception_lineno = 543;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_no_20:;
                }
                branch_end_19:;
            }
            branch_end_17:;
        }
        goto branch_end_16;
        branch_no_16:;
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_compexpr_left_22;
            PyObject *tmp_compexpr_right_22;
            CHECK_OBJECT( par_jac );
            tmp_compexpr_left_22 = par_jac;
            tmp_compexpr_right_22 = const_tuple_dd2ed64315f6fdd030f1c9d72d73402c_tuple;
            tmp_res = PySequence_Contains( tmp_compexpr_right_22, tmp_compexpr_left_22 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 545;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_21 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                nuitka_bool tmp_condition_result_22;
                PyObject *tmp_compexpr_left_23;
                PyObject *tmp_compexpr_right_23;
                CHECK_OBJECT( par_jac );
                tmp_compexpr_left_23 = par_jac;
                tmp_compexpr_right_23 = const_tuple_str_digest_99b0f2800a158b791fce03480ec7ee9d_str_plain_cs_tuple;
                tmp_res = PySequence_Contains( tmp_compexpr_right_23, tmp_compexpr_left_23 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 546;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_22 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_called_name_13;
                    PyObject *tmp_mvar_value_25;
                    PyObject *tmp_call_result_13;
                    PyObject *tmp_args_element_name_23;
                    PyObject *tmp_left_name_9;
                    PyObject *tmp_right_name_9;
                    tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_warn );

                    if (unlikely( tmp_mvar_value_25 == NULL ))
                    {
                        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
                    }

                    if ( tmp_mvar_value_25 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 547;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_13 = tmp_mvar_value_25;
                    tmp_left_name_9 = const_str_digest_42e068806b5c2a019590043b4bbd9aa0;
                    CHECK_OBJECT( par_jac );
                    tmp_right_name_9 = par_jac;
                    tmp_args_element_name_23 = BINARY_OPERATION_REMAINDER( tmp_left_name_9, tmp_right_name_9 );
                    if ( tmp_args_element_name_23 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 547;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 547;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_23 };
                        tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_23 );
                    if ( tmp_call_result_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 547;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_13 );
                }
                branch_no_22:;
            }
            {
                PyObject *tmp_assign_source_14;
                tmp_assign_source_14 = Py_None;
                {
                    PyObject *old = par_jac;
                    assert( old != NULL );
                    par_jac = tmp_assign_source_14;
                    Py_INCREF( par_jac );
                    Py_DECREF( old );
                }

            }
            goto branch_end_21;
            branch_no_21:;
            {
                nuitka_bool tmp_condition_result_23;
                PyObject *tmp_operand_name_3;
                PyObject *tmp_called_name_14;
                PyObject *tmp_mvar_value_26;
                PyObject *tmp_args_element_name_24;
                tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_callable );

                if (unlikely( tmp_mvar_value_26 == NULL ))
                {
                    tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_callable );
                }

                if ( tmp_mvar_value_26 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "callable" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 550;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_14 = tmp_mvar_value_26;
                CHECK_OBJECT( par_jac );
                tmp_args_element_name_24 = par_jac;
                frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 550;
                {
                    PyObject *call_args[] = { tmp_args_element_name_24 };
                    tmp_operand_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
                }

                if ( tmp_operand_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 550;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
                Py_DECREF( tmp_operand_name_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 550;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_23 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    nuitka_bool tmp_condition_result_24;
                    PyObject *tmp_value_name_2;
                    CHECK_OBJECT( par_jac );
                    tmp_value_name_2 = par_jac;
                    tmp_res = CHECK_IF_TRUE( tmp_value_name_2 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 551;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_24 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_assign_source_15;
                        PyObject *tmp_called_name_15;
                        PyObject *tmp_mvar_value_27;
                        PyObject *tmp_args_element_name_25;
                        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_MemoizeJac );

                        if (unlikely( tmp_mvar_value_27 == NULL ))
                        {
                            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MemoizeJac );
                        }

                        if ( tmp_mvar_value_27 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MemoizeJac" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 552;
                            type_description_1 = "ooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_15 = tmp_mvar_value_27;
                        CHECK_OBJECT( par_fun );
                        tmp_args_element_name_25 = par_fun;
                        frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 552;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_25 };
                            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
                        }

                        if ( tmp_assign_source_15 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 552;
                            type_description_1 = "ooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = par_fun;
                            assert( old != NULL );
                            par_fun = tmp_assign_source_15;
                            Py_DECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_assign_source_16;
                        PyObject *tmp_source_name_6;
                        CHECK_OBJECT( par_fun );
                        tmp_source_name_6 = par_fun;
                        tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_derivative );
                        if ( tmp_assign_source_16 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 553;
                            type_description_1 = "ooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = par_jac;
                            assert( old != NULL );
                            par_jac = tmp_assign_source_16;
                            Py_DECREF( old );
                        }

                    }
                    goto branch_end_24;
                    branch_no_24:;
                    {
                        PyObject *tmp_assign_source_17;
                        tmp_assign_source_17 = Py_None;
                        {
                            PyObject *old = par_jac;
                            assert( old != NULL );
                            par_jac = tmp_assign_source_17;
                            Py_INCREF( par_jac );
                            Py_DECREF( old );
                        }

                    }
                    branch_end_24:;
                }
                branch_no_23:;
            }
            branch_end_21:;
        }
        branch_end_16:;
    }
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_compexpr_left_24;
        PyObject *tmp_compexpr_right_24;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_left_24 = par_tol;
        tmp_compexpr_right_24 = Py_None;
        tmp_condition_result_25 = ( tmp_compexpr_left_24 != tmp_compexpr_right_24 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_18;
            PyObject *tmp_dict_seq_1;
            CHECK_OBJECT( par_options );
            tmp_dict_seq_1 = par_options;
            tmp_assign_source_18 = TO_DICT( tmp_dict_seq_1, NULL );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 559;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_options;
                assert( old != NULL );
                par_options = tmp_assign_source_18;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_compexpr_left_25;
            PyObject *tmp_compexpr_right_25;
            CHECK_OBJECT( var_meth );
            tmp_compexpr_left_25 = var_meth;
            tmp_compexpr_right_25 = const_str_digest_4daa4d5603a458e52f3ee710892e453a;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_25, tmp_compexpr_right_25 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 560;
                type_description_1 = "ooooooooooooo";
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
                PyObject *tmp_called_instance_6;
                PyObject *tmp_call_result_14;
                PyObject *tmp_args_element_name_26;
                PyObject *tmp_args_element_name_27;
                CHECK_OBJECT( par_options );
                tmp_called_instance_6 = par_options;
                tmp_args_element_name_26 = const_str_plain_xatol;
                CHECK_OBJECT( par_tol );
                tmp_args_element_name_27 = par_tol;
                frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 561;
                {
                    PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_27 };
                    tmp_call_result_14 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_setdefault, call_args );
                }

                if ( tmp_call_result_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 561;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_14 );
            }
            {
                PyObject *tmp_called_instance_7;
                PyObject *tmp_call_result_15;
                PyObject *tmp_args_element_name_28;
                PyObject *tmp_args_element_name_29;
                CHECK_OBJECT( par_options );
                tmp_called_instance_7 = par_options;
                tmp_args_element_name_28 = const_str_plain_fatol;
                CHECK_OBJECT( par_tol );
                tmp_args_element_name_29 = par_tol;
                frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 562;
                {
                    PyObject *call_args[] = { tmp_args_element_name_28, tmp_args_element_name_29 };
                    tmp_call_result_15 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_setdefault, call_args );
                }

                if ( tmp_call_result_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 562;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_15 );
            }
            branch_no_26:;
        }
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_compexpr_left_26;
            PyObject *tmp_compexpr_right_26;
            CHECK_OBJECT( var_meth );
            tmp_compexpr_left_26 = var_meth;
            tmp_compexpr_right_26 = const_tuple_b0026835f016d1d27035eae8ab4ec642_tuple;
            tmp_res = PySequence_Contains( tmp_compexpr_right_26, tmp_compexpr_left_26 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 563;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_27 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_instance_8;
                PyObject *tmp_call_result_16;
                PyObject *tmp_args_element_name_30;
                PyObject *tmp_args_element_name_31;
                CHECK_OBJECT( par_options );
                tmp_called_instance_8 = par_options;
                tmp_args_element_name_30 = const_str_plain_xtol;
                CHECK_OBJECT( par_tol );
                tmp_args_element_name_31 = par_tol;
                frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 564;
                {
                    PyObject *call_args[] = { tmp_args_element_name_30, tmp_args_element_name_31 };
                    tmp_call_result_16 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_8, const_str_plain_setdefault, call_args );
                }

                if ( tmp_call_result_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 564;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_16 );
            }
            branch_no_27:;
        }
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_compexpr_left_27;
            PyObject *tmp_compexpr_right_27;
            CHECK_OBJECT( var_meth );
            tmp_compexpr_left_27 = var_meth;
            tmp_compexpr_right_27 = const_tuple_0b615d6e313da26b12c2d0c18014ca66_tuple;
            tmp_res = PySequence_Contains( tmp_compexpr_right_27, tmp_compexpr_left_27 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 565;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_28 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_instance_9;
                PyObject *tmp_call_result_17;
                PyObject *tmp_args_element_name_32;
                PyObject *tmp_args_element_name_33;
                CHECK_OBJECT( par_options );
                tmp_called_instance_9 = par_options;
                tmp_args_element_name_32 = const_str_plain_ftol;
                CHECK_OBJECT( par_tol );
                tmp_args_element_name_33 = par_tol;
                frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 566;
                {
                    PyObject *call_args[] = { tmp_args_element_name_32, tmp_args_element_name_33 };
                    tmp_call_result_17 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_9, const_str_plain_setdefault, call_args );
                }

                if ( tmp_call_result_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 566;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_17 );
            }
            branch_no_28:;
        }
        {
            nuitka_bool tmp_condition_result_29;
            PyObject *tmp_compexpr_left_28;
            PyObject *tmp_compexpr_right_28;
            CHECK_OBJECT( var_meth );
            tmp_compexpr_left_28 = var_meth;
            tmp_compexpr_right_28 = const_tuple_d1e84eb6ebfcc394c2bfcfec8278186c_tuple;
            tmp_res = PySequence_Contains( tmp_compexpr_right_28, tmp_compexpr_left_28 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 567;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_29 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_29 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_29;
            }
            else
            {
                goto branch_no_29;
            }
            branch_yes_29:;
            {
                PyObject *tmp_called_instance_10;
                PyObject *tmp_call_result_18;
                PyObject *tmp_args_element_name_34;
                PyObject *tmp_args_element_name_35;
                CHECK_OBJECT( par_options );
                tmp_called_instance_10 = par_options;
                tmp_args_element_name_34 = const_str_plain_gtol;
                CHECK_OBJECT( par_tol );
                tmp_args_element_name_35 = par_tol;
                frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 569;
                {
                    PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35 };
                    tmp_call_result_18 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_10, const_str_plain_setdefault, call_args );
                }

                if ( tmp_call_result_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 569;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_18 );
            }
            branch_no_29:;
        }
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_compexpr_left_29;
            PyObject *tmp_compexpr_right_29;
            CHECK_OBJECT( var_meth );
            tmp_compexpr_left_29 = var_meth;
            tmp_compexpr_right_29 = const_tuple_str_plain_cobyla_str_plain__custom_tuple;
            tmp_res = PySequence_Contains( tmp_compexpr_right_29, tmp_compexpr_left_29 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 570;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_30 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_instance_11;
                PyObject *tmp_call_result_19;
                PyObject *tmp_args_element_name_36;
                PyObject *tmp_args_element_name_37;
                CHECK_OBJECT( par_options );
                tmp_called_instance_11 = par_options;
                tmp_args_element_name_36 = const_str_plain_tol;
                CHECK_OBJECT( par_tol );
                tmp_args_element_name_37 = par_tol;
                frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 571;
                {
                    PyObject *call_args[] = { tmp_args_element_name_36, tmp_args_element_name_37 };
                    tmp_call_result_19 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_11, const_str_plain_setdefault, call_args );
                }

                if ( tmp_call_result_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 571;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_19 );
            }
            branch_no_30:;
        }
        {
            nuitka_bool tmp_condition_result_31;
            PyObject *tmp_compexpr_left_30;
            PyObject *tmp_compexpr_right_30;
            CHECK_OBJECT( var_meth );
            tmp_compexpr_left_30 = var_meth;
            tmp_compexpr_right_30 = const_str_digest_e27e349d28fa7d1be2332d50a5d0e34b;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_30, tmp_compexpr_right_30 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 572;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_31 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_31 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_31;
            }
            else
            {
                goto branch_no_31;
            }
            branch_yes_31:;
            {
                PyObject *tmp_called_instance_12;
                PyObject *tmp_call_result_20;
                PyObject *tmp_args_element_name_38;
                PyObject *tmp_args_element_name_39;
                CHECK_OBJECT( par_options );
                tmp_called_instance_12 = par_options;
                tmp_args_element_name_38 = const_str_plain_xtol;
                CHECK_OBJECT( par_tol );
                tmp_args_element_name_39 = par_tol;
                frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 573;
                {
                    PyObject *call_args[] = { tmp_args_element_name_38, tmp_args_element_name_39 };
                    tmp_call_result_20 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_12, const_str_plain_setdefault, call_args );
                }

                if ( tmp_call_result_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 573;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_20 );
            }
            {
                PyObject *tmp_called_instance_13;
                PyObject *tmp_call_result_21;
                PyObject *tmp_args_element_name_40;
                PyObject *tmp_args_element_name_41;
                CHECK_OBJECT( par_options );
                tmp_called_instance_13 = par_options;
                tmp_args_element_name_40 = const_str_plain_gtol;
                CHECK_OBJECT( par_tol );
                tmp_args_element_name_41 = par_tol;
                frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 574;
                {
                    PyObject *call_args[] = { tmp_args_element_name_40, tmp_args_element_name_41 };
                    tmp_call_result_21 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_13, const_str_plain_setdefault, call_args );
                }

                if ( tmp_call_result_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 574;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_21 );
            }
            {
                PyObject *tmp_called_instance_14;
                PyObject *tmp_call_result_22;
                PyObject *tmp_args_element_name_42;
                PyObject *tmp_args_element_name_43;
                CHECK_OBJECT( par_options );
                tmp_called_instance_14 = par_options;
                tmp_args_element_name_42 = const_str_plain_barrier_tol;
                CHECK_OBJECT( par_tol );
                tmp_args_element_name_43 = par_tol;
                frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 575;
                {
                    PyObject *call_args[] = { tmp_args_element_name_42, tmp_args_element_name_43 };
                    tmp_call_result_22 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_14, const_str_plain_setdefault, call_args );
                }

                if ( tmp_call_result_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 575;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_22 );
            }
            branch_no_31:;
        }
        branch_no_25:;
    }
    {
        nuitka_bool tmp_condition_result_32;
        PyObject *tmp_compexpr_left_31;
        PyObject *tmp_compexpr_right_31;
        CHECK_OBJECT( par_bounds );
        tmp_compexpr_left_31 = par_bounds;
        tmp_compexpr_right_31 = Py_None;
        tmp_condition_result_32 = ( tmp_compexpr_left_31 != tmp_compexpr_right_31 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_32 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_32;
        }
        else
        {
            goto branch_no_32;
        }
        branch_yes_32:;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_name_16;
            PyObject *tmp_mvar_value_28;
            PyObject *tmp_args_element_name_44;
            PyObject *tmp_args_element_name_45;
            PyObject *tmp_args_element_name_46;
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_standardize_bounds );

            if (unlikely( tmp_mvar_value_28 == NULL ))
            {
                tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_standardize_bounds );
            }

            if ( tmp_mvar_value_28 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "standardize_bounds" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 578;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_16 = tmp_mvar_value_28;
            CHECK_OBJECT( par_bounds );
            tmp_args_element_name_44 = par_bounds;
            CHECK_OBJECT( par_x0 );
            tmp_args_element_name_45 = par_x0;
            CHECK_OBJECT( var_meth );
            tmp_args_element_name_46 = var_meth;
            frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 578;
            {
                PyObject *call_args[] = { tmp_args_element_name_44, tmp_args_element_name_45, tmp_args_element_name_46 };
                tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_16, call_args );
            }

            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 578;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_bounds;
                assert( old != NULL );
                par_bounds = tmp_assign_source_19;
                Py_DECREF( old );
            }

        }
        branch_no_32:;
    }
    {
        nuitka_bool tmp_condition_result_33;
        PyObject *tmp_compexpr_left_32;
        PyObject *tmp_compexpr_right_32;
        CHECK_OBJECT( par_constraints );
        tmp_compexpr_left_32 = par_constraints;
        tmp_compexpr_right_32 = Py_None;
        tmp_condition_result_33 = ( tmp_compexpr_left_32 != tmp_compexpr_right_32 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_33 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_33;
        }
        else
        {
            goto branch_no_33;
        }
        branch_yes_33:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_name_17;
            PyObject *tmp_mvar_value_29;
            PyObject *tmp_args_element_name_47;
            PyObject *tmp_args_element_name_48;
            PyObject *tmp_args_element_name_49;
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_standardize_constraints );

            if (unlikely( tmp_mvar_value_29 == NULL ))
            {
                tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_standardize_constraints );
            }

            if ( tmp_mvar_value_29 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "standardize_constraints" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 581;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_17 = tmp_mvar_value_29;
            CHECK_OBJECT( par_constraints );
            tmp_args_element_name_47 = par_constraints;
            CHECK_OBJECT( par_x0 );
            tmp_args_element_name_48 = par_x0;
            CHECK_OBJECT( var_meth );
            tmp_args_element_name_49 = var_meth;
            frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 581;
            {
                PyObject *call_args[] = { tmp_args_element_name_47, tmp_args_element_name_48, tmp_args_element_name_49 };
                tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_17, call_args );
            }

            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 581;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_constraints;
                assert( old != NULL );
                par_constraints = tmp_assign_source_20;
                Py_DECREF( old );
            }

        }
        branch_no_33:;
    }
    {
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_compexpr_left_33;
        PyObject *tmp_compexpr_right_33;
        CHECK_OBJECT( var_meth );
        tmp_compexpr_left_33 = var_meth;
        tmp_compexpr_right_33 = const_str_plain__custom;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_33, tmp_compexpr_right_33 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 583;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_34 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_34 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_34;
        }
        else
        {
            goto branch_no_34;
        }
        branch_yes_34:;
        {
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_dircall_arg4_1;
            if ( par_method == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 584;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg1_1 = par_method;
            if ( par_fun == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fun" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 584;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_3 = par_fun;
            tmp_dircall_arg2_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( par_x0 );
            tmp_tuple_element_3 = par_x0;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_3 );
            tmp_dict_key_1 = const_str_plain_args;
            CHECK_OBJECT( par_args );
            tmp_dict_value_1 = par_args;
            tmp_dircall_arg3_1 = _PyDict_NewPresized( 7 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_jac;
            if ( par_jac == NULL )
            {
                Py_DECREF( tmp_dircall_arg2_1 );
                Py_DECREF( tmp_dircall_arg3_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 584;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_2 = par_jac;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_hess;
            CHECK_OBJECT( par_hess );
            tmp_dict_value_3 = par_hess;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_4 = const_str_plain_hessp;
            CHECK_OBJECT( par_hessp );
            tmp_dict_value_4 = par_hessp;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_5 = const_str_plain_bounds;
            CHECK_OBJECT( par_bounds );
            tmp_dict_value_5 = par_bounds;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_6 = const_str_plain_constraints;
            CHECK_OBJECT( par_constraints );
            tmp_dict_value_6 = par_constraints;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_7 = const_str_plain_callback;
            CHECK_OBJECT( par_callback );
            tmp_dict_value_7 = par_callback;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            if ( par_options == NULL )
            {
                Py_DECREF( tmp_dircall_arg2_1 );
                Py_DECREF( tmp_dircall_arg3_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 586;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg4_1 = par_options;
            Py_INCREF( tmp_dircall_arg1_1 );
            Py_INCREF( tmp_dircall_arg4_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
            }
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 584;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_34;
        branch_no_34:;
        {
            nuitka_bool tmp_condition_result_35;
            PyObject *tmp_compexpr_left_34;
            PyObject *tmp_compexpr_right_34;
            CHECK_OBJECT( var_meth );
            tmp_compexpr_left_34 = var_meth;
            tmp_compexpr_right_34 = const_str_digest_4daa4d5603a458e52f3ee710892e453a;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_34, tmp_compexpr_right_34 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 587;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_35 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_35 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_35;
            }
            else
            {
                goto branch_no_35;
            }
            branch_yes_35:;
            {
                PyObject *tmp_dircall_arg1_2;
                PyObject *tmp_mvar_value_30;
                PyObject *tmp_dircall_arg2_2;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_dircall_arg3_2;
                tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_neldermead );

                if (unlikely( tmp_mvar_value_30 == NULL ))
                {
                    tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_neldermead );
                }

                if ( tmp_mvar_value_30 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_neldermead" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 588;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_dircall_arg1_2 = tmp_mvar_value_30;
                if ( par_fun == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fun" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 588;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_4 = par_fun;
                tmp_dircall_arg2_2 = PyTuple_New( 4 );
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_4 );
                CHECK_OBJECT( par_x0 );
                tmp_tuple_element_4 = par_x0;
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_4 );
                CHECK_OBJECT( par_args );
                tmp_tuple_element_4 = par_args;
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_2, 2, tmp_tuple_element_4 );
                CHECK_OBJECT( par_callback );
                tmp_tuple_element_4 = par_callback;
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_2, 3, tmp_tuple_element_4 );
                if ( par_options == NULL )
                {
                    Py_DECREF( tmp_dircall_arg2_2 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 588;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_dircall_arg3_2 = par_options;
                Py_INCREF( tmp_dircall_arg1_2 );
                Py_INCREF( tmp_dircall_arg3_2 );

                {
                    PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
                    tmp_return_value = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
                }
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 588;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_35;
            branch_no_35:;
            {
                nuitka_bool tmp_condition_result_36;
                PyObject *tmp_compexpr_left_35;
                PyObject *tmp_compexpr_right_35;
                CHECK_OBJECT( var_meth );
                tmp_compexpr_left_35 = var_meth;
                tmp_compexpr_right_35 = const_str_plain_powell;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_35, tmp_compexpr_right_35 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 589;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_36 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_36 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_36;
                }
                else
                {
                    goto branch_no_36;
                }
                branch_yes_36:;
                {
                    PyObject *tmp_dircall_arg1_3;
                    PyObject *tmp_mvar_value_31;
                    PyObject *tmp_dircall_arg2_3;
                    PyObject *tmp_tuple_element_5;
                    PyObject *tmp_dircall_arg3_3;
                    tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_powell );

                    if (unlikely( tmp_mvar_value_31 == NULL ))
                    {
                        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_powell );
                    }

                    if ( tmp_mvar_value_31 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_powell" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 590;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_dircall_arg1_3 = tmp_mvar_value_31;
                    if ( par_fun == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fun" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 590;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_tuple_element_5 = par_fun;
                    tmp_dircall_arg2_3 = PyTuple_New( 4 );
                    Py_INCREF( tmp_tuple_element_5 );
                    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_5 );
                    CHECK_OBJECT( par_x0 );
                    tmp_tuple_element_5 = par_x0;
                    Py_INCREF( tmp_tuple_element_5 );
                    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 1, tmp_tuple_element_5 );
                    CHECK_OBJECT( par_args );
                    tmp_tuple_element_5 = par_args;
                    Py_INCREF( tmp_tuple_element_5 );
                    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 2, tmp_tuple_element_5 );
                    CHECK_OBJECT( par_callback );
                    tmp_tuple_element_5 = par_callback;
                    Py_INCREF( tmp_tuple_element_5 );
                    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 3, tmp_tuple_element_5 );
                    if ( par_options == NULL )
                    {
                        Py_DECREF( tmp_dircall_arg2_3 );
                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 590;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_dircall_arg3_3 = par_options;
                    Py_INCREF( tmp_dircall_arg1_3 );
                    Py_INCREF( tmp_dircall_arg3_3 );

                    {
                        PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3};
                        tmp_return_value = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
                    }
                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 590;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                goto branch_end_36;
                branch_no_36:;
                {
                    nuitka_bool tmp_condition_result_37;
                    PyObject *tmp_compexpr_left_36;
                    PyObject *tmp_compexpr_right_36;
                    CHECK_OBJECT( var_meth );
                    tmp_compexpr_left_36 = var_meth;
                    tmp_compexpr_right_36 = const_str_plain_cg;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_36, tmp_compexpr_right_36 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 591;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_37 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_37 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_37;
                    }
                    else
                    {
                        goto branch_no_37;
                    }
                    branch_yes_37:;
                    {
                        PyObject *tmp_dircall_arg1_4;
                        PyObject *tmp_mvar_value_32;
                        PyObject *tmp_dircall_arg2_4;
                        PyObject *tmp_tuple_element_6;
                        PyObject *tmp_dircall_arg3_4;
                        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_cg );

                        if (unlikely( tmp_mvar_value_32 == NULL ))
                        {
                            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_cg );
                        }

                        if ( tmp_mvar_value_32 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_cg" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 592;
                            type_description_1 = "ooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_dircall_arg1_4 = tmp_mvar_value_32;
                        if ( par_fun == NULL )
                        {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fun" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 592;
                            type_description_1 = "ooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_tuple_element_6 = par_fun;
                        tmp_dircall_arg2_4 = PyTuple_New( 5 );
                        Py_INCREF( tmp_tuple_element_6 );
                        PyTuple_SET_ITEM( tmp_dircall_arg2_4, 0, tmp_tuple_element_6 );
                        CHECK_OBJECT( par_x0 );
                        tmp_tuple_element_6 = par_x0;
                        Py_INCREF( tmp_tuple_element_6 );
                        PyTuple_SET_ITEM( tmp_dircall_arg2_4, 1, tmp_tuple_element_6 );
                        CHECK_OBJECT( par_args );
                        tmp_tuple_element_6 = par_args;
                        Py_INCREF( tmp_tuple_element_6 );
                        PyTuple_SET_ITEM( tmp_dircall_arg2_4, 2, tmp_tuple_element_6 );
                        if ( par_jac == NULL )
                        {
                            Py_DECREF( tmp_dircall_arg2_4 );
                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 592;
                            type_description_1 = "ooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_tuple_element_6 = par_jac;
                        Py_INCREF( tmp_tuple_element_6 );
                        PyTuple_SET_ITEM( tmp_dircall_arg2_4, 3, tmp_tuple_element_6 );
                        CHECK_OBJECT( par_callback );
                        tmp_tuple_element_6 = par_callback;
                        Py_INCREF( tmp_tuple_element_6 );
                        PyTuple_SET_ITEM( tmp_dircall_arg2_4, 4, tmp_tuple_element_6 );
                        if ( par_options == NULL )
                        {
                            Py_DECREF( tmp_dircall_arg2_4 );
                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 592;
                            type_description_1 = "ooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_dircall_arg3_4 = par_options;
                        Py_INCREF( tmp_dircall_arg1_4 );
                        Py_INCREF( tmp_dircall_arg3_4 );

                        {
                            PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_4, tmp_dircall_arg3_4};
                            tmp_return_value = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
                        }
                        if ( tmp_return_value == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 592;
                            type_description_1 = "ooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        goto frame_return_exit_1;
                    }
                    goto branch_end_37;
                    branch_no_37:;
                    {
                        nuitka_bool tmp_condition_result_38;
                        PyObject *tmp_compexpr_left_37;
                        PyObject *tmp_compexpr_right_37;
                        CHECK_OBJECT( var_meth );
                        tmp_compexpr_left_37 = var_meth;
                        tmp_compexpr_right_37 = const_str_plain_bfgs;
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_37, tmp_compexpr_right_37 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 593;
                            type_description_1 = "ooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_38 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if ( tmp_condition_result_38 == NUITKA_BOOL_TRUE )
                        {
                            goto branch_yes_38;
                        }
                        else
                        {
                            goto branch_no_38;
                        }
                        branch_yes_38:;
                        {
                            PyObject *tmp_dircall_arg1_5;
                            PyObject *tmp_mvar_value_33;
                            PyObject *tmp_dircall_arg2_5;
                            PyObject *tmp_tuple_element_7;
                            PyObject *tmp_dircall_arg3_5;
                            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_bfgs );

                            if (unlikely( tmp_mvar_value_33 == NULL ))
                            {
                                tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_bfgs );
                            }

                            if ( tmp_mvar_value_33 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_bfgs" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 594;
                                type_description_1 = "ooooooooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_dircall_arg1_5 = tmp_mvar_value_33;
                            if ( par_fun == NULL )
                            {

                                exception_type = PyExc_UnboundLocalError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fun" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 594;
                                type_description_1 = "ooooooooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_tuple_element_7 = par_fun;
                            tmp_dircall_arg2_5 = PyTuple_New( 5 );
                            Py_INCREF( tmp_tuple_element_7 );
                            PyTuple_SET_ITEM( tmp_dircall_arg2_5, 0, tmp_tuple_element_7 );
                            CHECK_OBJECT( par_x0 );
                            tmp_tuple_element_7 = par_x0;
                            Py_INCREF( tmp_tuple_element_7 );
                            PyTuple_SET_ITEM( tmp_dircall_arg2_5, 1, tmp_tuple_element_7 );
                            CHECK_OBJECT( par_args );
                            tmp_tuple_element_7 = par_args;
                            Py_INCREF( tmp_tuple_element_7 );
                            PyTuple_SET_ITEM( tmp_dircall_arg2_5, 2, tmp_tuple_element_7 );
                            if ( par_jac == NULL )
                            {
                                Py_DECREF( tmp_dircall_arg2_5 );
                                exception_type = PyExc_UnboundLocalError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 594;
                                type_description_1 = "ooooooooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_tuple_element_7 = par_jac;
                            Py_INCREF( tmp_tuple_element_7 );
                            PyTuple_SET_ITEM( tmp_dircall_arg2_5, 3, tmp_tuple_element_7 );
                            CHECK_OBJECT( par_callback );
                            tmp_tuple_element_7 = par_callback;
                            Py_INCREF( tmp_tuple_element_7 );
                            PyTuple_SET_ITEM( tmp_dircall_arg2_5, 4, tmp_tuple_element_7 );
                            if ( par_options == NULL )
                            {
                                Py_DECREF( tmp_dircall_arg2_5 );
                                exception_type = PyExc_UnboundLocalError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 594;
                                type_description_1 = "ooooooooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_dircall_arg3_5 = par_options;
                            Py_INCREF( tmp_dircall_arg1_5 );
                            Py_INCREF( tmp_dircall_arg3_5 );

                            {
                                PyObject *dir_call_args[] = {tmp_dircall_arg1_5, tmp_dircall_arg2_5, tmp_dircall_arg3_5};
                                tmp_return_value = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
                            }
                            if ( tmp_return_value == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 594;
                                type_description_1 = "ooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            goto frame_return_exit_1;
                        }
                        goto branch_end_38;
                        branch_no_38:;
                        {
                            nuitka_bool tmp_condition_result_39;
                            PyObject *tmp_compexpr_left_38;
                            PyObject *tmp_compexpr_right_38;
                            CHECK_OBJECT( var_meth );
                            tmp_compexpr_left_38 = var_meth;
                            tmp_compexpr_right_38 = const_str_digest_d1fc6a039ddd29ba16b73faab2f66130;
                            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_38, tmp_compexpr_right_38 );
                            if ( tmp_res == -1 )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 595;
                                type_description_1 = "ooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_condition_result_39 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                            if ( tmp_condition_result_39 == NUITKA_BOOL_TRUE )
                            {
                                goto branch_yes_39;
                            }
                            else
                            {
                                goto branch_no_39;
                            }
                            branch_yes_39:;
                            {
                                PyObject *tmp_dircall_arg1_6;
                                PyObject *tmp_mvar_value_34;
                                PyObject *tmp_dircall_arg2_6;
                                PyObject *tmp_tuple_element_8;
                                PyObject *tmp_dircall_arg3_6;
                                tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_newtoncg );

                                if (unlikely( tmp_mvar_value_34 == NULL ))
                                {
                                    tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_newtoncg );
                                }

                                if ( tmp_mvar_value_34 == NULL )
                                {

                                    exception_type = PyExc_NameError;
                                    Py_INCREF( exception_type );
                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_newtoncg" );
                                    exception_tb = NULL;
                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                    CHAIN_EXCEPTION( exception_value );

                                    exception_lineno = 596;
                                    type_description_1 = "ooooooooooooo";
                                    goto frame_exception_exit_1;
                                }

                                tmp_dircall_arg1_6 = tmp_mvar_value_34;
                                if ( par_fun == NULL )
                                {

                                    exception_type = PyExc_UnboundLocalError;
                                    Py_INCREF( exception_type );
                                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fun" );
                                    exception_tb = NULL;
                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                    CHAIN_EXCEPTION( exception_value );

                                    exception_lineno = 596;
                                    type_description_1 = "ooooooooooooo";
                                    goto frame_exception_exit_1;
                                }

                                tmp_tuple_element_8 = par_fun;
                                tmp_dircall_arg2_6 = PyTuple_New( 7 );
                                Py_INCREF( tmp_tuple_element_8 );
                                PyTuple_SET_ITEM( tmp_dircall_arg2_6, 0, tmp_tuple_element_8 );
                                CHECK_OBJECT( par_x0 );
                                tmp_tuple_element_8 = par_x0;
                                Py_INCREF( tmp_tuple_element_8 );
                                PyTuple_SET_ITEM( tmp_dircall_arg2_6, 1, tmp_tuple_element_8 );
                                CHECK_OBJECT( par_args );
                                tmp_tuple_element_8 = par_args;
                                Py_INCREF( tmp_tuple_element_8 );
                                PyTuple_SET_ITEM( tmp_dircall_arg2_6, 2, tmp_tuple_element_8 );
                                if ( par_jac == NULL )
                                {
                                    Py_DECREF( tmp_dircall_arg2_6 );
                                    exception_type = PyExc_UnboundLocalError;
                                    Py_INCREF( exception_type );
                                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac" );
                                    exception_tb = NULL;
                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                    CHAIN_EXCEPTION( exception_value );

                                    exception_lineno = 596;
                                    type_description_1 = "ooooooooooooo";
                                    goto frame_exception_exit_1;
                                }

                                tmp_tuple_element_8 = par_jac;
                                Py_INCREF( tmp_tuple_element_8 );
                                PyTuple_SET_ITEM( tmp_dircall_arg2_6, 3, tmp_tuple_element_8 );
                                CHECK_OBJECT( par_hess );
                                tmp_tuple_element_8 = par_hess;
                                Py_INCREF( tmp_tuple_element_8 );
                                PyTuple_SET_ITEM( tmp_dircall_arg2_6, 4, tmp_tuple_element_8 );
                                CHECK_OBJECT( par_hessp );
                                tmp_tuple_element_8 = par_hessp;
                                Py_INCREF( tmp_tuple_element_8 );
                                PyTuple_SET_ITEM( tmp_dircall_arg2_6, 5, tmp_tuple_element_8 );
                                CHECK_OBJECT( par_callback );
                                tmp_tuple_element_8 = par_callback;
                                Py_INCREF( tmp_tuple_element_8 );
                                PyTuple_SET_ITEM( tmp_dircall_arg2_6, 6, tmp_tuple_element_8 );
                                if ( par_options == NULL )
                                {
                                    Py_DECREF( tmp_dircall_arg2_6 );
                                    exception_type = PyExc_UnboundLocalError;
                                    Py_INCREF( exception_type );
                                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                                    exception_tb = NULL;
                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                    CHAIN_EXCEPTION( exception_value );

                                    exception_lineno = 597;
                                    type_description_1 = "ooooooooooooo";
                                    goto frame_exception_exit_1;
                                }

                                tmp_dircall_arg3_6 = par_options;
                                Py_INCREF( tmp_dircall_arg1_6 );
                                Py_INCREF( tmp_dircall_arg3_6 );

                                {
                                    PyObject *dir_call_args[] = {tmp_dircall_arg1_6, tmp_dircall_arg2_6, tmp_dircall_arg3_6};
                                    tmp_return_value = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
                                }
                                if ( tmp_return_value == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 596;
                                    type_description_1 = "ooooooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                goto frame_return_exit_1;
                            }
                            goto branch_end_39;
                            branch_no_39:;
                            {
                                nuitka_bool tmp_condition_result_40;
                                PyObject *tmp_compexpr_left_39;
                                PyObject *tmp_compexpr_right_39;
                                CHECK_OBJECT( var_meth );
                                tmp_compexpr_left_39 = var_meth;
                                tmp_compexpr_right_39 = const_str_digest_4b1e510c0634b1d9daeac7647ed7a5b3;
                                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_39, tmp_compexpr_right_39 );
                                if ( tmp_res == -1 )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 598;
                                    type_description_1 = "ooooooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_condition_result_40 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                if ( tmp_condition_result_40 == NUITKA_BOOL_TRUE )
                                {
                                    goto branch_yes_40;
                                }
                                else
                                {
                                    goto branch_no_40;
                                }
                                branch_yes_40:;
                                {
                                    PyObject *tmp_dircall_arg1_7;
                                    PyObject *tmp_mvar_value_35;
                                    PyObject *tmp_dircall_arg2_7;
                                    PyObject *tmp_tuple_element_9;
                                    PyObject *tmp_dircall_arg3_7;
                                    PyObject *tmp_dict_key_8;
                                    PyObject *tmp_dict_value_8;
                                    PyObject *tmp_dircall_arg4_2;
                                    tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_lbfgsb );

                                    if (unlikely( tmp_mvar_value_35 == NULL ))
                                    {
                                        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_lbfgsb );
                                    }

                                    if ( tmp_mvar_value_35 == NULL )
                                    {

                                        exception_type = PyExc_NameError;
                                        Py_INCREF( exception_type );
                                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_lbfgsb" );
                                        exception_tb = NULL;
                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                        CHAIN_EXCEPTION( exception_value );

                                        exception_lineno = 599;
                                        type_description_1 = "ooooooooooooo";
                                        goto frame_exception_exit_1;
                                    }

                                    tmp_dircall_arg1_7 = tmp_mvar_value_35;
                                    if ( par_fun == NULL )
                                    {

                                        exception_type = PyExc_UnboundLocalError;
                                        Py_INCREF( exception_type );
                                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fun" );
                                        exception_tb = NULL;
                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                        CHAIN_EXCEPTION( exception_value );

                                        exception_lineno = 599;
                                        type_description_1 = "ooooooooooooo";
                                        goto frame_exception_exit_1;
                                    }

                                    tmp_tuple_element_9 = par_fun;
                                    tmp_dircall_arg2_7 = PyTuple_New( 5 );
                                    Py_INCREF( tmp_tuple_element_9 );
                                    PyTuple_SET_ITEM( tmp_dircall_arg2_7, 0, tmp_tuple_element_9 );
                                    CHECK_OBJECT( par_x0 );
                                    tmp_tuple_element_9 = par_x0;
                                    Py_INCREF( tmp_tuple_element_9 );
                                    PyTuple_SET_ITEM( tmp_dircall_arg2_7, 1, tmp_tuple_element_9 );
                                    CHECK_OBJECT( par_args );
                                    tmp_tuple_element_9 = par_args;
                                    Py_INCREF( tmp_tuple_element_9 );
                                    PyTuple_SET_ITEM( tmp_dircall_arg2_7, 2, tmp_tuple_element_9 );
                                    if ( par_jac == NULL )
                                    {
                                        Py_DECREF( tmp_dircall_arg2_7 );
                                        exception_type = PyExc_UnboundLocalError;
                                        Py_INCREF( exception_type );
                                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac" );
                                        exception_tb = NULL;
                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                        CHAIN_EXCEPTION( exception_value );

                                        exception_lineno = 599;
                                        type_description_1 = "ooooooooooooo";
                                        goto frame_exception_exit_1;
                                    }

                                    tmp_tuple_element_9 = par_jac;
                                    Py_INCREF( tmp_tuple_element_9 );
                                    PyTuple_SET_ITEM( tmp_dircall_arg2_7, 3, tmp_tuple_element_9 );
                                    CHECK_OBJECT( par_bounds );
                                    tmp_tuple_element_9 = par_bounds;
                                    Py_INCREF( tmp_tuple_element_9 );
                                    PyTuple_SET_ITEM( tmp_dircall_arg2_7, 4, tmp_tuple_element_9 );
                                    tmp_dict_key_8 = const_str_plain_callback;
                                    CHECK_OBJECT( par_callback );
                                    tmp_dict_value_8 = par_callback;
                                    tmp_dircall_arg3_7 = _PyDict_NewPresized( 1 );
                                    tmp_res = PyDict_SetItem( tmp_dircall_arg3_7, tmp_dict_key_8, tmp_dict_value_8 );
                                    assert( !(tmp_res != 0) );
                                    if ( par_options == NULL )
                                    {
                                        Py_DECREF( tmp_dircall_arg2_7 );
                                        Py_DECREF( tmp_dircall_arg3_7 );
                                        exception_type = PyExc_UnboundLocalError;
                                        Py_INCREF( exception_type );
                                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                                        exception_tb = NULL;
                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                        CHAIN_EXCEPTION( exception_value );

                                        exception_lineno = 600;
                                        type_description_1 = "ooooooooooooo";
                                        goto frame_exception_exit_1;
                                    }

                                    tmp_dircall_arg4_2 = par_options;
                                    Py_INCREF( tmp_dircall_arg1_7 );
                                    Py_INCREF( tmp_dircall_arg4_2 );

                                    {
                                        PyObject *dir_call_args[] = {tmp_dircall_arg1_7, tmp_dircall_arg2_7, tmp_dircall_arg3_7, tmp_dircall_arg4_2};
                                        tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
                                    }
                                    if ( tmp_return_value == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 599;
                                        type_description_1 = "ooooooooooooo";
                                        goto frame_exception_exit_1;
                                    }
                                    goto frame_return_exit_1;
                                }
                                goto branch_end_40;
                                branch_no_40:;
                                {
                                    nuitka_bool tmp_condition_result_41;
                                    PyObject *tmp_compexpr_left_40;
                                    PyObject *tmp_compexpr_right_40;
                                    CHECK_OBJECT( var_meth );
                                    tmp_compexpr_left_40 = var_meth;
                                    tmp_compexpr_right_40 = const_str_plain_tnc;
                                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_40, tmp_compexpr_right_40 );
                                    if ( tmp_res == -1 )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 601;
                                        type_description_1 = "ooooooooooooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_condition_result_41 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                    if ( tmp_condition_result_41 == NUITKA_BOOL_TRUE )
                                    {
                                        goto branch_yes_41;
                                    }
                                    else
                                    {
                                        goto branch_no_41;
                                    }
                                    branch_yes_41:;
                                    {
                                        PyObject *tmp_dircall_arg1_8;
                                        PyObject *tmp_mvar_value_36;
                                        PyObject *tmp_dircall_arg2_8;
                                        PyObject *tmp_tuple_element_10;
                                        PyObject *tmp_dircall_arg3_8;
                                        PyObject *tmp_dict_key_9;
                                        PyObject *tmp_dict_value_9;
                                        PyObject *tmp_dircall_arg4_3;
                                        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_tnc );

                                        if (unlikely( tmp_mvar_value_36 == NULL ))
                                        {
                                            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_tnc );
                                        }

                                        if ( tmp_mvar_value_36 == NULL )
                                        {

                                            exception_type = PyExc_NameError;
                                            Py_INCREF( exception_type );
                                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_tnc" );
                                            exception_tb = NULL;
                                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                            CHAIN_EXCEPTION( exception_value );

                                            exception_lineno = 602;
                                            type_description_1 = "ooooooooooooo";
                                            goto frame_exception_exit_1;
                                        }

                                        tmp_dircall_arg1_8 = tmp_mvar_value_36;
                                        if ( par_fun == NULL )
                                        {

                                            exception_type = PyExc_UnboundLocalError;
                                            Py_INCREF( exception_type );
                                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fun" );
                                            exception_tb = NULL;
                                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                            CHAIN_EXCEPTION( exception_value );

                                            exception_lineno = 602;
                                            type_description_1 = "ooooooooooooo";
                                            goto frame_exception_exit_1;
                                        }

                                        tmp_tuple_element_10 = par_fun;
                                        tmp_dircall_arg2_8 = PyTuple_New( 5 );
                                        Py_INCREF( tmp_tuple_element_10 );
                                        PyTuple_SET_ITEM( tmp_dircall_arg2_8, 0, tmp_tuple_element_10 );
                                        CHECK_OBJECT( par_x0 );
                                        tmp_tuple_element_10 = par_x0;
                                        Py_INCREF( tmp_tuple_element_10 );
                                        PyTuple_SET_ITEM( tmp_dircall_arg2_8, 1, tmp_tuple_element_10 );
                                        CHECK_OBJECT( par_args );
                                        tmp_tuple_element_10 = par_args;
                                        Py_INCREF( tmp_tuple_element_10 );
                                        PyTuple_SET_ITEM( tmp_dircall_arg2_8, 2, tmp_tuple_element_10 );
                                        if ( par_jac == NULL )
                                        {
                                            Py_DECREF( tmp_dircall_arg2_8 );
                                            exception_type = PyExc_UnboundLocalError;
                                            Py_INCREF( exception_type );
                                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac" );
                                            exception_tb = NULL;
                                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                            CHAIN_EXCEPTION( exception_value );

                                            exception_lineno = 602;
                                            type_description_1 = "ooooooooooooo";
                                            goto frame_exception_exit_1;
                                        }

                                        tmp_tuple_element_10 = par_jac;
                                        Py_INCREF( tmp_tuple_element_10 );
                                        PyTuple_SET_ITEM( tmp_dircall_arg2_8, 3, tmp_tuple_element_10 );
                                        CHECK_OBJECT( par_bounds );
                                        tmp_tuple_element_10 = par_bounds;
                                        Py_INCREF( tmp_tuple_element_10 );
                                        PyTuple_SET_ITEM( tmp_dircall_arg2_8, 4, tmp_tuple_element_10 );
                                        tmp_dict_key_9 = const_str_plain_callback;
                                        CHECK_OBJECT( par_callback );
                                        tmp_dict_value_9 = par_callback;
                                        tmp_dircall_arg3_8 = _PyDict_NewPresized( 1 );
                                        tmp_res = PyDict_SetItem( tmp_dircall_arg3_8, tmp_dict_key_9, tmp_dict_value_9 );
                                        assert( !(tmp_res != 0) );
                                        if ( par_options == NULL )
                                        {
                                            Py_DECREF( tmp_dircall_arg2_8 );
                                            Py_DECREF( tmp_dircall_arg3_8 );
                                            exception_type = PyExc_UnboundLocalError;
                                            Py_INCREF( exception_type );
                                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                                            exception_tb = NULL;
                                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                            CHAIN_EXCEPTION( exception_value );

                                            exception_lineno = 603;
                                            type_description_1 = "ooooooooooooo";
                                            goto frame_exception_exit_1;
                                        }

                                        tmp_dircall_arg4_3 = par_options;
                                        Py_INCREF( tmp_dircall_arg1_8 );
                                        Py_INCREF( tmp_dircall_arg4_3 );

                                        {
                                            PyObject *dir_call_args[] = {tmp_dircall_arg1_8, tmp_dircall_arg2_8, tmp_dircall_arg3_8, tmp_dircall_arg4_3};
                                            tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
                                        }
                                        if ( tmp_return_value == NULL )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 602;
                                            type_description_1 = "ooooooooooooo";
                                            goto frame_exception_exit_1;
                                        }
                                        goto frame_return_exit_1;
                                    }
                                    goto branch_end_41;
                                    branch_no_41:;
                                    {
                                        nuitka_bool tmp_condition_result_42;
                                        PyObject *tmp_compexpr_left_41;
                                        PyObject *tmp_compexpr_right_41;
                                        CHECK_OBJECT( var_meth );
                                        tmp_compexpr_left_41 = var_meth;
                                        tmp_compexpr_right_41 = const_str_plain_cobyla;
                                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_41, tmp_compexpr_right_41 );
                                        if ( tmp_res == -1 )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 604;
                                            type_description_1 = "ooooooooooooo";
                                            goto frame_exception_exit_1;
                                        }
                                        tmp_condition_result_42 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                        if ( tmp_condition_result_42 == NUITKA_BOOL_TRUE )
                                        {
                                            goto branch_yes_42;
                                        }
                                        else
                                        {
                                            goto branch_no_42;
                                        }
                                        branch_yes_42:;
                                        {
                                            PyObject *tmp_dircall_arg1_9;
                                            PyObject *tmp_mvar_value_37;
                                            PyObject *tmp_dircall_arg2_9;
                                            PyObject *tmp_tuple_element_11;
                                            PyObject *tmp_dircall_arg3_9;
                                            tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_cobyla );

                                            if (unlikely( tmp_mvar_value_37 == NULL ))
                                            {
                                                tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_cobyla );
                                            }

                                            if ( tmp_mvar_value_37 == NULL )
                                            {

                                                exception_type = PyExc_NameError;
                                                Py_INCREF( exception_type );
                                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_cobyla" );
                                                exception_tb = NULL;
                                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                CHAIN_EXCEPTION( exception_value );

                                                exception_lineno = 605;
                                                type_description_1 = "ooooooooooooo";
                                                goto frame_exception_exit_1;
                                            }

                                            tmp_dircall_arg1_9 = tmp_mvar_value_37;
                                            if ( par_fun == NULL )
                                            {

                                                exception_type = PyExc_UnboundLocalError;
                                                Py_INCREF( exception_type );
                                                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fun" );
                                                exception_tb = NULL;
                                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                CHAIN_EXCEPTION( exception_value );

                                                exception_lineno = 605;
                                                type_description_1 = "ooooooooooooo";
                                                goto frame_exception_exit_1;
                                            }

                                            tmp_tuple_element_11 = par_fun;
                                            tmp_dircall_arg2_9 = PyTuple_New( 4 );
                                            Py_INCREF( tmp_tuple_element_11 );
                                            PyTuple_SET_ITEM( tmp_dircall_arg2_9, 0, tmp_tuple_element_11 );
                                            CHECK_OBJECT( par_x0 );
                                            tmp_tuple_element_11 = par_x0;
                                            Py_INCREF( tmp_tuple_element_11 );
                                            PyTuple_SET_ITEM( tmp_dircall_arg2_9, 1, tmp_tuple_element_11 );
                                            CHECK_OBJECT( par_args );
                                            tmp_tuple_element_11 = par_args;
                                            Py_INCREF( tmp_tuple_element_11 );
                                            PyTuple_SET_ITEM( tmp_dircall_arg2_9, 2, tmp_tuple_element_11 );
                                            CHECK_OBJECT( par_constraints );
                                            tmp_tuple_element_11 = par_constraints;
                                            Py_INCREF( tmp_tuple_element_11 );
                                            PyTuple_SET_ITEM( tmp_dircall_arg2_9, 3, tmp_tuple_element_11 );
                                            if ( par_options == NULL )
                                            {
                                                Py_DECREF( tmp_dircall_arg2_9 );
                                                exception_type = PyExc_UnboundLocalError;
                                                Py_INCREF( exception_type );
                                                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                                                exception_tb = NULL;
                                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                CHAIN_EXCEPTION( exception_value );

                                                exception_lineno = 605;
                                                type_description_1 = "ooooooooooooo";
                                                goto frame_exception_exit_1;
                                            }

                                            tmp_dircall_arg3_9 = par_options;
                                            Py_INCREF( tmp_dircall_arg1_9 );
                                            Py_INCREF( tmp_dircall_arg3_9 );

                                            {
                                                PyObject *dir_call_args[] = {tmp_dircall_arg1_9, tmp_dircall_arg2_9, tmp_dircall_arg3_9};
                                                tmp_return_value = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
                                            }
                                            if ( tmp_return_value == NULL )
                                            {
                                                assert( ERROR_OCCURRED() );

                                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                exception_lineno = 605;
                                                type_description_1 = "ooooooooooooo";
                                                goto frame_exception_exit_1;
                                            }
                                            goto frame_return_exit_1;
                                        }
                                        goto branch_end_42;
                                        branch_no_42:;
                                        {
                                            nuitka_bool tmp_condition_result_43;
                                            PyObject *tmp_compexpr_left_42;
                                            PyObject *tmp_compexpr_right_42;
                                            CHECK_OBJECT( var_meth );
                                            tmp_compexpr_left_42 = var_meth;
                                            tmp_compexpr_right_42 = const_str_plain_slsqp;
                                            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_42, tmp_compexpr_right_42 );
                                            if ( tmp_res == -1 )
                                            {
                                                assert( ERROR_OCCURRED() );

                                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                exception_lineno = 606;
                                                type_description_1 = "ooooooooooooo";
                                                goto frame_exception_exit_1;
                                            }
                                            tmp_condition_result_43 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                            if ( tmp_condition_result_43 == NUITKA_BOOL_TRUE )
                                            {
                                                goto branch_yes_43;
                                            }
                                            else
                                            {
                                                goto branch_no_43;
                                            }
                                            branch_yes_43:;
                                            {
                                                PyObject *tmp_dircall_arg1_10;
                                                PyObject *tmp_mvar_value_38;
                                                PyObject *tmp_dircall_arg2_10;
                                                PyObject *tmp_tuple_element_12;
                                                PyObject *tmp_dircall_arg3_10;
                                                PyObject *tmp_dict_key_10;
                                                PyObject *tmp_dict_value_10;
                                                PyObject *tmp_dircall_arg4_4;
                                                tmp_mvar_value_38 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_slsqp );

                                                if (unlikely( tmp_mvar_value_38 == NULL ))
                                                {
                                                    tmp_mvar_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_slsqp );
                                                }

                                                if ( tmp_mvar_value_38 == NULL )
                                                {

                                                    exception_type = PyExc_NameError;
                                                    Py_INCREF( exception_type );
                                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_slsqp" );
                                                    exception_tb = NULL;
                                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                    CHAIN_EXCEPTION( exception_value );

                                                    exception_lineno = 607;
                                                    type_description_1 = "ooooooooooooo";
                                                    goto frame_exception_exit_1;
                                                }

                                                tmp_dircall_arg1_10 = tmp_mvar_value_38;
                                                if ( par_fun == NULL )
                                                {

                                                    exception_type = PyExc_UnboundLocalError;
                                                    Py_INCREF( exception_type );
                                                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fun" );
                                                    exception_tb = NULL;
                                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                    CHAIN_EXCEPTION( exception_value );

                                                    exception_lineno = 607;
                                                    type_description_1 = "ooooooooooooo";
                                                    goto frame_exception_exit_1;
                                                }

                                                tmp_tuple_element_12 = par_fun;
                                                tmp_dircall_arg2_10 = PyTuple_New( 6 );
                                                Py_INCREF( tmp_tuple_element_12 );
                                                PyTuple_SET_ITEM( tmp_dircall_arg2_10, 0, tmp_tuple_element_12 );
                                                CHECK_OBJECT( par_x0 );
                                                tmp_tuple_element_12 = par_x0;
                                                Py_INCREF( tmp_tuple_element_12 );
                                                PyTuple_SET_ITEM( tmp_dircall_arg2_10, 1, tmp_tuple_element_12 );
                                                CHECK_OBJECT( par_args );
                                                tmp_tuple_element_12 = par_args;
                                                Py_INCREF( tmp_tuple_element_12 );
                                                PyTuple_SET_ITEM( tmp_dircall_arg2_10, 2, tmp_tuple_element_12 );
                                                if ( par_jac == NULL )
                                                {
                                                    Py_DECREF( tmp_dircall_arg2_10 );
                                                    exception_type = PyExc_UnboundLocalError;
                                                    Py_INCREF( exception_type );
                                                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac" );
                                                    exception_tb = NULL;
                                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                    CHAIN_EXCEPTION( exception_value );

                                                    exception_lineno = 607;
                                                    type_description_1 = "ooooooooooooo";
                                                    goto frame_exception_exit_1;
                                                }

                                                tmp_tuple_element_12 = par_jac;
                                                Py_INCREF( tmp_tuple_element_12 );
                                                PyTuple_SET_ITEM( tmp_dircall_arg2_10, 3, tmp_tuple_element_12 );
                                                CHECK_OBJECT( par_bounds );
                                                tmp_tuple_element_12 = par_bounds;
                                                Py_INCREF( tmp_tuple_element_12 );
                                                PyTuple_SET_ITEM( tmp_dircall_arg2_10, 4, tmp_tuple_element_12 );
                                                CHECK_OBJECT( par_constraints );
                                                tmp_tuple_element_12 = par_constraints;
                                                Py_INCREF( tmp_tuple_element_12 );
                                                PyTuple_SET_ITEM( tmp_dircall_arg2_10, 5, tmp_tuple_element_12 );
                                                tmp_dict_key_10 = const_str_plain_callback;
                                                CHECK_OBJECT( par_callback );
                                                tmp_dict_value_10 = par_callback;
                                                tmp_dircall_arg3_10 = _PyDict_NewPresized( 1 );
                                                tmp_res = PyDict_SetItem( tmp_dircall_arg3_10, tmp_dict_key_10, tmp_dict_value_10 );
                                                assert( !(tmp_res != 0) );
                                                if ( par_options == NULL )
                                                {
                                                    Py_DECREF( tmp_dircall_arg2_10 );
                                                    Py_DECREF( tmp_dircall_arg3_10 );
                                                    exception_type = PyExc_UnboundLocalError;
                                                    Py_INCREF( exception_type );
                                                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                                                    exception_tb = NULL;
                                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                    CHAIN_EXCEPTION( exception_value );

                                                    exception_lineno = 608;
                                                    type_description_1 = "ooooooooooooo";
                                                    goto frame_exception_exit_1;
                                                }

                                                tmp_dircall_arg4_4 = par_options;
                                                Py_INCREF( tmp_dircall_arg1_10 );
                                                Py_INCREF( tmp_dircall_arg4_4 );

                                                {
                                                    PyObject *dir_call_args[] = {tmp_dircall_arg1_10, tmp_dircall_arg2_10, tmp_dircall_arg3_10, tmp_dircall_arg4_4};
                                                    tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
                                                }
                                                if ( tmp_return_value == NULL )
                                                {
                                                    assert( ERROR_OCCURRED() );

                                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                    exception_lineno = 607;
                                                    type_description_1 = "ooooooooooooo";
                                                    goto frame_exception_exit_1;
                                                }
                                                goto frame_return_exit_1;
                                            }
                                            goto branch_end_43;
                                            branch_no_43:;
                                            {
                                                nuitka_bool tmp_condition_result_44;
                                                PyObject *tmp_compexpr_left_43;
                                                PyObject *tmp_compexpr_right_43;
                                                CHECK_OBJECT( var_meth );
                                                tmp_compexpr_left_43 = var_meth;
                                                tmp_compexpr_right_43 = const_str_digest_e27e349d28fa7d1be2332d50a5d0e34b;
                                                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_43, tmp_compexpr_right_43 );
                                                if ( tmp_res == -1 )
                                                {
                                                    assert( ERROR_OCCURRED() );

                                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                    exception_lineno = 609;
                                                    type_description_1 = "ooooooooooooo";
                                                    goto frame_exception_exit_1;
                                                }
                                                tmp_condition_result_44 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                                if ( tmp_condition_result_44 == NUITKA_BOOL_TRUE )
                                                {
                                                    goto branch_yes_44;
                                                }
                                                else
                                                {
                                                    goto branch_no_44;
                                                }
                                                branch_yes_44:;
                                                {
                                                    PyObject *tmp_dircall_arg1_11;
                                                    PyObject *tmp_mvar_value_39;
                                                    PyObject *tmp_dircall_arg2_11;
                                                    PyObject *tmp_tuple_element_13;
                                                    PyObject *tmp_dircall_arg3_11;
                                                    PyObject *tmp_dict_key_11;
                                                    PyObject *tmp_dict_value_11;
                                                    PyObject *tmp_dircall_arg4_5;
                                                    tmp_mvar_value_39 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_trustregion_constr );

                                                    if (unlikely( tmp_mvar_value_39 == NULL ))
                                                    {
                                                        tmp_mvar_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_trustregion_constr );
                                                    }

                                                    if ( tmp_mvar_value_39 == NULL )
                                                    {

                                                        exception_type = PyExc_NameError;
                                                        Py_INCREF( exception_type );
                                                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_trustregion_constr" );
                                                        exception_tb = NULL;
                                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                        CHAIN_EXCEPTION( exception_value );

                                                        exception_lineno = 610;
                                                        type_description_1 = "ooooooooooooo";
                                                        goto frame_exception_exit_1;
                                                    }

                                                    tmp_dircall_arg1_11 = tmp_mvar_value_39;
                                                    if ( par_fun == NULL )
                                                    {

                                                        exception_type = PyExc_UnboundLocalError;
                                                        Py_INCREF( exception_type );
                                                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fun" );
                                                        exception_tb = NULL;
                                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                        CHAIN_EXCEPTION( exception_value );

                                                        exception_lineno = 610;
                                                        type_description_1 = "ooooooooooooo";
                                                        goto frame_exception_exit_1;
                                                    }

                                                    tmp_tuple_element_13 = par_fun;
                                                    tmp_dircall_arg2_11 = PyTuple_New( 8 );
                                                    Py_INCREF( tmp_tuple_element_13 );
                                                    PyTuple_SET_ITEM( tmp_dircall_arg2_11, 0, tmp_tuple_element_13 );
                                                    CHECK_OBJECT( par_x0 );
                                                    tmp_tuple_element_13 = par_x0;
                                                    Py_INCREF( tmp_tuple_element_13 );
                                                    PyTuple_SET_ITEM( tmp_dircall_arg2_11, 1, tmp_tuple_element_13 );
                                                    CHECK_OBJECT( par_args );
                                                    tmp_tuple_element_13 = par_args;
                                                    Py_INCREF( tmp_tuple_element_13 );
                                                    PyTuple_SET_ITEM( tmp_dircall_arg2_11, 2, tmp_tuple_element_13 );
                                                    if ( par_jac == NULL )
                                                    {
                                                        Py_DECREF( tmp_dircall_arg2_11 );
                                                        exception_type = PyExc_UnboundLocalError;
                                                        Py_INCREF( exception_type );
                                                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac" );
                                                        exception_tb = NULL;
                                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                        CHAIN_EXCEPTION( exception_value );

                                                        exception_lineno = 610;
                                                        type_description_1 = "ooooooooooooo";
                                                        goto frame_exception_exit_1;
                                                    }

                                                    tmp_tuple_element_13 = par_jac;
                                                    Py_INCREF( tmp_tuple_element_13 );
                                                    PyTuple_SET_ITEM( tmp_dircall_arg2_11, 3, tmp_tuple_element_13 );
                                                    CHECK_OBJECT( par_hess );
                                                    tmp_tuple_element_13 = par_hess;
                                                    Py_INCREF( tmp_tuple_element_13 );
                                                    PyTuple_SET_ITEM( tmp_dircall_arg2_11, 4, tmp_tuple_element_13 );
                                                    CHECK_OBJECT( par_hessp );
                                                    tmp_tuple_element_13 = par_hessp;
                                                    Py_INCREF( tmp_tuple_element_13 );
                                                    PyTuple_SET_ITEM( tmp_dircall_arg2_11, 5, tmp_tuple_element_13 );
                                                    CHECK_OBJECT( par_bounds );
                                                    tmp_tuple_element_13 = par_bounds;
                                                    Py_INCREF( tmp_tuple_element_13 );
                                                    PyTuple_SET_ITEM( tmp_dircall_arg2_11, 6, tmp_tuple_element_13 );
                                                    CHECK_OBJECT( par_constraints );
                                                    tmp_tuple_element_13 = par_constraints;
                                                    Py_INCREF( tmp_tuple_element_13 );
                                                    PyTuple_SET_ITEM( tmp_dircall_arg2_11, 7, tmp_tuple_element_13 );
                                                    tmp_dict_key_11 = const_str_plain_callback;
                                                    CHECK_OBJECT( par_callback );
                                                    tmp_dict_value_11 = par_callback;
                                                    tmp_dircall_arg3_11 = _PyDict_NewPresized( 1 );
                                                    tmp_res = PyDict_SetItem( tmp_dircall_arg3_11, tmp_dict_key_11, tmp_dict_value_11 );
                                                    assert( !(tmp_res != 0) );
                                                    if ( par_options == NULL )
                                                    {
                                                        Py_DECREF( tmp_dircall_arg2_11 );
                                                        Py_DECREF( tmp_dircall_arg3_11 );
                                                        exception_type = PyExc_UnboundLocalError;
                                                        Py_INCREF( exception_type );
                                                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                                                        exception_tb = NULL;
                                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                        CHAIN_EXCEPTION( exception_value );

                                                        exception_lineno = 612;
                                                        type_description_1 = "ooooooooooooo";
                                                        goto frame_exception_exit_1;
                                                    }

                                                    tmp_dircall_arg4_5 = par_options;
                                                    Py_INCREF( tmp_dircall_arg1_11 );
                                                    Py_INCREF( tmp_dircall_arg4_5 );

                                                    {
                                                        PyObject *dir_call_args[] = {tmp_dircall_arg1_11, tmp_dircall_arg2_11, tmp_dircall_arg3_11, tmp_dircall_arg4_5};
                                                        tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
                                                    }
                                                    if ( tmp_return_value == NULL )
                                                    {
                                                        assert( ERROR_OCCURRED() );

                                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                        exception_lineno = 610;
                                                        type_description_1 = "ooooooooooooo";
                                                        goto frame_exception_exit_1;
                                                    }
                                                    goto frame_return_exit_1;
                                                }
                                                goto branch_end_44;
                                                branch_no_44:;
                                                {
                                                    nuitka_bool tmp_condition_result_45;
                                                    PyObject *tmp_compexpr_left_44;
                                                    PyObject *tmp_compexpr_right_44;
                                                    CHECK_OBJECT( var_meth );
                                                    tmp_compexpr_left_44 = var_meth;
                                                    tmp_compexpr_right_44 = const_str_plain_dogleg;
                                                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_44, tmp_compexpr_right_44 );
                                                    if ( tmp_res == -1 )
                                                    {
                                                        assert( ERROR_OCCURRED() );

                                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                        exception_lineno = 613;
                                                        type_description_1 = "ooooooooooooo";
                                                        goto frame_exception_exit_1;
                                                    }
                                                    tmp_condition_result_45 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                                    if ( tmp_condition_result_45 == NUITKA_BOOL_TRUE )
                                                    {
                                                        goto branch_yes_45;
                                                    }
                                                    else
                                                    {
                                                        goto branch_no_45;
                                                    }
                                                    branch_yes_45:;
                                                    {
                                                        PyObject *tmp_dircall_arg1_12;
                                                        PyObject *tmp_mvar_value_40;
                                                        PyObject *tmp_dircall_arg2_12;
                                                        PyObject *tmp_tuple_element_14;
                                                        PyObject *tmp_dircall_arg3_12;
                                                        PyObject *tmp_dict_key_12;
                                                        PyObject *tmp_dict_value_12;
                                                        PyObject *tmp_dircall_arg4_6;
                                                        tmp_mvar_value_40 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_dogleg );

                                                        if (unlikely( tmp_mvar_value_40 == NULL ))
                                                        {
                                                            tmp_mvar_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_dogleg );
                                                        }

                                                        if ( tmp_mvar_value_40 == NULL )
                                                        {

                                                            exception_type = PyExc_NameError;
                                                            Py_INCREF( exception_type );
                                                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_dogleg" );
                                                            exception_tb = NULL;
                                                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                            CHAIN_EXCEPTION( exception_value );

                                                            exception_lineno = 614;
                                                            type_description_1 = "ooooooooooooo";
                                                            goto frame_exception_exit_1;
                                                        }

                                                        tmp_dircall_arg1_12 = tmp_mvar_value_40;
                                                        if ( par_fun == NULL )
                                                        {

                                                            exception_type = PyExc_UnboundLocalError;
                                                            Py_INCREF( exception_type );
                                                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fun" );
                                                            exception_tb = NULL;
                                                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                            CHAIN_EXCEPTION( exception_value );

                                                            exception_lineno = 614;
                                                            type_description_1 = "ooooooooooooo";
                                                            goto frame_exception_exit_1;
                                                        }

                                                        tmp_tuple_element_14 = par_fun;
                                                        tmp_dircall_arg2_12 = PyTuple_New( 5 );
                                                        Py_INCREF( tmp_tuple_element_14 );
                                                        PyTuple_SET_ITEM( tmp_dircall_arg2_12, 0, tmp_tuple_element_14 );
                                                        CHECK_OBJECT( par_x0 );
                                                        tmp_tuple_element_14 = par_x0;
                                                        Py_INCREF( tmp_tuple_element_14 );
                                                        PyTuple_SET_ITEM( tmp_dircall_arg2_12, 1, tmp_tuple_element_14 );
                                                        CHECK_OBJECT( par_args );
                                                        tmp_tuple_element_14 = par_args;
                                                        Py_INCREF( tmp_tuple_element_14 );
                                                        PyTuple_SET_ITEM( tmp_dircall_arg2_12, 2, tmp_tuple_element_14 );
                                                        if ( par_jac == NULL )
                                                        {
                                                            Py_DECREF( tmp_dircall_arg2_12 );
                                                            exception_type = PyExc_UnboundLocalError;
                                                            Py_INCREF( exception_type );
                                                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac" );
                                                            exception_tb = NULL;
                                                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                            CHAIN_EXCEPTION( exception_value );

                                                            exception_lineno = 614;
                                                            type_description_1 = "ooooooooooooo";
                                                            goto frame_exception_exit_1;
                                                        }

                                                        tmp_tuple_element_14 = par_jac;
                                                        Py_INCREF( tmp_tuple_element_14 );
                                                        PyTuple_SET_ITEM( tmp_dircall_arg2_12, 3, tmp_tuple_element_14 );
                                                        CHECK_OBJECT( par_hess );
                                                        tmp_tuple_element_14 = par_hess;
                                                        Py_INCREF( tmp_tuple_element_14 );
                                                        PyTuple_SET_ITEM( tmp_dircall_arg2_12, 4, tmp_tuple_element_14 );
                                                        tmp_dict_key_12 = const_str_plain_callback;
                                                        CHECK_OBJECT( par_callback );
                                                        tmp_dict_value_12 = par_callback;
                                                        tmp_dircall_arg3_12 = _PyDict_NewPresized( 1 );
                                                        tmp_res = PyDict_SetItem( tmp_dircall_arg3_12, tmp_dict_key_12, tmp_dict_value_12 );
                                                        assert( !(tmp_res != 0) );
                                                        if ( par_options == NULL )
                                                        {
                                                            Py_DECREF( tmp_dircall_arg2_12 );
                                                            Py_DECREF( tmp_dircall_arg3_12 );
                                                            exception_type = PyExc_UnboundLocalError;
                                                            Py_INCREF( exception_type );
                                                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                                                            exception_tb = NULL;
                                                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                            CHAIN_EXCEPTION( exception_value );

                                                            exception_lineno = 615;
                                                            type_description_1 = "ooooooooooooo";
                                                            goto frame_exception_exit_1;
                                                        }

                                                        tmp_dircall_arg4_6 = par_options;
                                                        Py_INCREF( tmp_dircall_arg1_12 );
                                                        Py_INCREF( tmp_dircall_arg4_6 );

                                                        {
                                                            PyObject *dir_call_args[] = {tmp_dircall_arg1_12, tmp_dircall_arg2_12, tmp_dircall_arg3_12, tmp_dircall_arg4_6};
                                                            tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
                                                        }
                                                        if ( tmp_return_value == NULL )
                                                        {
                                                            assert( ERROR_OCCURRED() );

                                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                            exception_lineno = 614;
                                                            type_description_1 = "ooooooooooooo";
                                                            goto frame_exception_exit_1;
                                                        }
                                                        goto frame_return_exit_1;
                                                    }
                                                    goto branch_end_45;
                                                    branch_no_45:;
                                                    {
                                                        nuitka_bool tmp_condition_result_46;
                                                        PyObject *tmp_compexpr_left_45;
                                                        PyObject *tmp_compexpr_right_45;
                                                        CHECK_OBJECT( var_meth );
                                                        tmp_compexpr_left_45 = var_meth;
                                                        tmp_compexpr_right_45 = const_str_digest_e2d106e69cf0b2b1d74938d61b5d9f8f;
                                                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_45, tmp_compexpr_right_45 );
                                                        if ( tmp_res == -1 )
                                                        {
                                                            assert( ERROR_OCCURRED() );

                                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                            exception_lineno = 616;
                                                            type_description_1 = "ooooooooooooo";
                                                            goto frame_exception_exit_1;
                                                        }
                                                        tmp_condition_result_46 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                                        if ( tmp_condition_result_46 == NUITKA_BOOL_TRUE )
                                                        {
                                                            goto branch_yes_46;
                                                        }
                                                        else
                                                        {
                                                            goto branch_no_46;
                                                        }
                                                        branch_yes_46:;
                                                        {
                                                            PyObject *tmp_dircall_arg1_13;
                                                            PyObject *tmp_mvar_value_41;
                                                            PyObject *tmp_dircall_arg2_13;
                                                            PyObject *tmp_tuple_element_15;
                                                            PyObject *tmp_dircall_arg3_13;
                                                            PyObject *tmp_dict_key_13;
                                                            PyObject *tmp_dict_value_13;
                                                            PyObject *tmp_dircall_arg4_7;
                                                            tmp_mvar_value_41 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_trust_ncg );

                                                            if (unlikely( tmp_mvar_value_41 == NULL ))
                                                            {
                                                                tmp_mvar_value_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_trust_ncg );
                                                            }

                                                            if ( tmp_mvar_value_41 == NULL )
                                                            {

                                                                exception_type = PyExc_NameError;
                                                                Py_INCREF( exception_type );
                                                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_trust_ncg" );
                                                                exception_tb = NULL;
                                                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                                CHAIN_EXCEPTION( exception_value );

                                                                exception_lineno = 617;
                                                                type_description_1 = "ooooooooooooo";
                                                                goto frame_exception_exit_1;
                                                            }

                                                            tmp_dircall_arg1_13 = tmp_mvar_value_41;
                                                            if ( par_fun == NULL )
                                                            {

                                                                exception_type = PyExc_UnboundLocalError;
                                                                Py_INCREF( exception_type );
                                                                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fun" );
                                                                exception_tb = NULL;
                                                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                                CHAIN_EXCEPTION( exception_value );

                                                                exception_lineno = 617;
                                                                type_description_1 = "ooooooooooooo";
                                                                goto frame_exception_exit_1;
                                                            }

                                                            tmp_tuple_element_15 = par_fun;
                                                            tmp_dircall_arg2_13 = PyTuple_New( 6 );
                                                            Py_INCREF( tmp_tuple_element_15 );
                                                            PyTuple_SET_ITEM( tmp_dircall_arg2_13, 0, tmp_tuple_element_15 );
                                                            CHECK_OBJECT( par_x0 );
                                                            tmp_tuple_element_15 = par_x0;
                                                            Py_INCREF( tmp_tuple_element_15 );
                                                            PyTuple_SET_ITEM( tmp_dircall_arg2_13, 1, tmp_tuple_element_15 );
                                                            CHECK_OBJECT( par_args );
                                                            tmp_tuple_element_15 = par_args;
                                                            Py_INCREF( tmp_tuple_element_15 );
                                                            PyTuple_SET_ITEM( tmp_dircall_arg2_13, 2, tmp_tuple_element_15 );
                                                            if ( par_jac == NULL )
                                                            {
                                                                Py_DECREF( tmp_dircall_arg2_13 );
                                                                exception_type = PyExc_UnboundLocalError;
                                                                Py_INCREF( exception_type );
                                                                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac" );
                                                                exception_tb = NULL;
                                                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                                CHAIN_EXCEPTION( exception_value );

                                                                exception_lineno = 617;
                                                                type_description_1 = "ooooooooooooo";
                                                                goto frame_exception_exit_1;
                                                            }

                                                            tmp_tuple_element_15 = par_jac;
                                                            Py_INCREF( tmp_tuple_element_15 );
                                                            PyTuple_SET_ITEM( tmp_dircall_arg2_13, 3, tmp_tuple_element_15 );
                                                            CHECK_OBJECT( par_hess );
                                                            tmp_tuple_element_15 = par_hess;
                                                            Py_INCREF( tmp_tuple_element_15 );
                                                            PyTuple_SET_ITEM( tmp_dircall_arg2_13, 4, tmp_tuple_element_15 );
                                                            CHECK_OBJECT( par_hessp );
                                                            tmp_tuple_element_15 = par_hessp;
                                                            Py_INCREF( tmp_tuple_element_15 );
                                                            PyTuple_SET_ITEM( tmp_dircall_arg2_13, 5, tmp_tuple_element_15 );
                                                            tmp_dict_key_13 = const_str_plain_callback;
                                                            CHECK_OBJECT( par_callback );
                                                            tmp_dict_value_13 = par_callback;
                                                            tmp_dircall_arg3_13 = _PyDict_NewPresized( 1 );
                                                            tmp_res = PyDict_SetItem( tmp_dircall_arg3_13, tmp_dict_key_13, tmp_dict_value_13 );
                                                            assert( !(tmp_res != 0) );
                                                            if ( par_options == NULL )
                                                            {
                                                                Py_DECREF( tmp_dircall_arg2_13 );
                                                                Py_DECREF( tmp_dircall_arg3_13 );
                                                                exception_type = PyExc_UnboundLocalError;
                                                                Py_INCREF( exception_type );
                                                                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                                                                exception_tb = NULL;
                                                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                                CHAIN_EXCEPTION( exception_value );

                                                                exception_lineno = 618;
                                                                type_description_1 = "ooooooooooooo";
                                                                goto frame_exception_exit_1;
                                                            }

                                                            tmp_dircall_arg4_7 = par_options;
                                                            Py_INCREF( tmp_dircall_arg1_13 );
                                                            Py_INCREF( tmp_dircall_arg4_7 );

                                                            {
                                                                PyObject *dir_call_args[] = {tmp_dircall_arg1_13, tmp_dircall_arg2_13, tmp_dircall_arg3_13, tmp_dircall_arg4_7};
                                                                tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
                                                            }
                                                            if ( tmp_return_value == NULL )
                                                            {
                                                                assert( ERROR_OCCURRED() );

                                                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                                exception_lineno = 617;
                                                                type_description_1 = "ooooooooooooo";
                                                                goto frame_exception_exit_1;
                                                            }
                                                            goto frame_return_exit_1;
                                                        }
                                                        goto branch_end_46;
                                                        branch_no_46:;
                                                        {
                                                            nuitka_bool tmp_condition_result_47;
                                                            PyObject *tmp_compexpr_left_46;
                                                            PyObject *tmp_compexpr_right_46;
                                                            CHECK_OBJECT( var_meth );
                                                            tmp_compexpr_left_46 = var_meth;
                                                            tmp_compexpr_right_46 = const_str_digest_b41d75c9751ce45ea8436205fcf63510;
                                                            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_46, tmp_compexpr_right_46 );
                                                            if ( tmp_res == -1 )
                                                            {
                                                                assert( ERROR_OCCURRED() );

                                                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                                exception_lineno = 619;
                                                                type_description_1 = "ooooooooooooo";
                                                                goto frame_exception_exit_1;
                                                            }
                                                            tmp_condition_result_47 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                                            if ( tmp_condition_result_47 == NUITKA_BOOL_TRUE )
                                                            {
                                                                goto branch_yes_47;
                                                            }
                                                            else
                                                            {
                                                                goto branch_no_47;
                                                            }
                                                            branch_yes_47:;
                                                            {
                                                                PyObject *tmp_dircall_arg1_14;
                                                                PyObject *tmp_mvar_value_42;
                                                                PyObject *tmp_dircall_arg2_14;
                                                                PyObject *tmp_tuple_element_16;
                                                                PyObject *tmp_dircall_arg3_14;
                                                                PyObject *tmp_dict_key_14;
                                                                PyObject *tmp_dict_value_14;
                                                                PyObject *tmp_dircall_arg4_8;
                                                                tmp_mvar_value_42 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_trust_krylov );

                                                                if (unlikely( tmp_mvar_value_42 == NULL ))
                                                                {
                                                                    tmp_mvar_value_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_trust_krylov );
                                                                }

                                                                if ( tmp_mvar_value_42 == NULL )
                                                                {

                                                                    exception_type = PyExc_NameError;
                                                                    Py_INCREF( exception_type );
                                                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_trust_krylov" );
                                                                    exception_tb = NULL;
                                                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                                    CHAIN_EXCEPTION( exception_value );

                                                                    exception_lineno = 620;
                                                                    type_description_1 = "ooooooooooooo";
                                                                    goto frame_exception_exit_1;
                                                                }

                                                                tmp_dircall_arg1_14 = tmp_mvar_value_42;
                                                                if ( par_fun == NULL )
                                                                {

                                                                    exception_type = PyExc_UnboundLocalError;
                                                                    Py_INCREF( exception_type );
                                                                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fun" );
                                                                    exception_tb = NULL;
                                                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                                    CHAIN_EXCEPTION( exception_value );

                                                                    exception_lineno = 620;
                                                                    type_description_1 = "ooooooooooooo";
                                                                    goto frame_exception_exit_1;
                                                                }

                                                                tmp_tuple_element_16 = par_fun;
                                                                tmp_dircall_arg2_14 = PyTuple_New( 6 );
                                                                Py_INCREF( tmp_tuple_element_16 );
                                                                PyTuple_SET_ITEM( tmp_dircall_arg2_14, 0, tmp_tuple_element_16 );
                                                                CHECK_OBJECT( par_x0 );
                                                                tmp_tuple_element_16 = par_x0;
                                                                Py_INCREF( tmp_tuple_element_16 );
                                                                PyTuple_SET_ITEM( tmp_dircall_arg2_14, 1, tmp_tuple_element_16 );
                                                                CHECK_OBJECT( par_args );
                                                                tmp_tuple_element_16 = par_args;
                                                                Py_INCREF( tmp_tuple_element_16 );
                                                                PyTuple_SET_ITEM( tmp_dircall_arg2_14, 2, tmp_tuple_element_16 );
                                                                if ( par_jac == NULL )
                                                                {
                                                                    Py_DECREF( tmp_dircall_arg2_14 );
                                                                    exception_type = PyExc_UnboundLocalError;
                                                                    Py_INCREF( exception_type );
                                                                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac" );
                                                                    exception_tb = NULL;
                                                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                                    CHAIN_EXCEPTION( exception_value );

                                                                    exception_lineno = 620;
                                                                    type_description_1 = "ooooooooooooo";
                                                                    goto frame_exception_exit_1;
                                                                }

                                                                tmp_tuple_element_16 = par_jac;
                                                                Py_INCREF( tmp_tuple_element_16 );
                                                                PyTuple_SET_ITEM( tmp_dircall_arg2_14, 3, tmp_tuple_element_16 );
                                                                CHECK_OBJECT( par_hess );
                                                                tmp_tuple_element_16 = par_hess;
                                                                Py_INCREF( tmp_tuple_element_16 );
                                                                PyTuple_SET_ITEM( tmp_dircall_arg2_14, 4, tmp_tuple_element_16 );
                                                                CHECK_OBJECT( par_hessp );
                                                                tmp_tuple_element_16 = par_hessp;
                                                                Py_INCREF( tmp_tuple_element_16 );
                                                                PyTuple_SET_ITEM( tmp_dircall_arg2_14, 5, tmp_tuple_element_16 );
                                                                tmp_dict_key_14 = const_str_plain_callback;
                                                                CHECK_OBJECT( par_callback );
                                                                tmp_dict_value_14 = par_callback;
                                                                tmp_dircall_arg3_14 = _PyDict_NewPresized( 1 );
                                                                tmp_res = PyDict_SetItem( tmp_dircall_arg3_14, tmp_dict_key_14, tmp_dict_value_14 );
                                                                assert( !(tmp_res != 0) );
                                                                if ( par_options == NULL )
                                                                {
                                                                    Py_DECREF( tmp_dircall_arg2_14 );
                                                                    Py_DECREF( tmp_dircall_arg3_14 );
                                                                    exception_type = PyExc_UnboundLocalError;
                                                                    Py_INCREF( exception_type );
                                                                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                                                                    exception_tb = NULL;
                                                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                                    CHAIN_EXCEPTION( exception_value );

                                                                    exception_lineno = 621;
                                                                    type_description_1 = "ooooooooooooo";
                                                                    goto frame_exception_exit_1;
                                                                }

                                                                tmp_dircall_arg4_8 = par_options;
                                                                Py_INCREF( tmp_dircall_arg1_14 );
                                                                Py_INCREF( tmp_dircall_arg4_8 );

                                                                {
                                                                    PyObject *dir_call_args[] = {tmp_dircall_arg1_14, tmp_dircall_arg2_14, tmp_dircall_arg3_14, tmp_dircall_arg4_8};
                                                                    tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
                                                                }
                                                                if ( tmp_return_value == NULL )
                                                                {
                                                                    assert( ERROR_OCCURRED() );

                                                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                                    exception_lineno = 620;
                                                                    type_description_1 = "ooooooooooooo";
                                                                    goto frame_exception_exit_1;
                                                                }
                                                                goto frame_return_exit_1;
                                                            }
                                                            goto branch_end_47;
                                                            branch_no_47:;
                                                            {
                                                                nuitka_bool tmp_condition_result_48;
                                                                PyObject *tmp_compexpr_left_47;
                                                                PyObject *tmp_compexpr_right_47;
                                                                CHECK_OBJECT( var_meth );
                                                                tmp_compexpr_left_47 = var_meth;
                                                                tmp_compexpr_right_47 = const_str_digest_a7985a24d8e119b49cc55e2f32040610;
                                                                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_47, tmp_compexpr_right_47 );
                                                                if ( tmp_res == -1 )
                                                                {
                                                                    assert( ERROR_OCCURRED() );

                                                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                                    exception_lineno = 622;
                                                                    type_description_1 = "ooooooooooooo";
                                                                    goto frame_exception_exit_1;
                                                                }
                                                                tmp_condition_result_48 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                                                if ( tmp_condition_result_48 == NUITKA_BOOL_TRUE )
                                                                {
                                                                    goto branch_yes_48;
                                                                }
                                                                else
                                                                {
                                                                    goto branch_no_48;
                                                                }
                                                                branch_yes_48:;
                                                                {
                                                                    PyObject *tmp_dircall_arg1_15;
                                                                    PyObject *tmp_mvar_value_43;
                                                                    PyObject *tmp_dircall_arg2_15;
                                                                    PyObject *tmp_tuple_element_17;
                                                                    PyObject *tmp_dircall_arg3_15;
                                                                    PyObject *tmp_dict_key_15;
                                                                    PyObject *tmp_dict_value_15;
                                                                    PyObject *tmp_dircall_arg4_9;
                                                                    tmp_mvar_value_43 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_trustregion_exact );

                                                                    if (unlikely( tmp_mvar_value_43 == NULL ))
                                                                    {
                                                                        tmp_mvar_value_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_trustregion_exact );
                                                                    }

                                                                    if ( tmp_mvar_value_43 == NULL )
                                                                    {

                                                                        exception_type = PyExc_NameError;
                                                                        Py_INCREF( exception_type );
                                                                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_trustregion_exact" );
                                                                        exception_tb = NULL;
                                                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                                        CHAIN_EXCEPTION( exception_value );

                                                                        exception_lineno = 623;
                                                                        type_description_1 = "ooooooooooooo";
                                                                        goto frame_exception_exit_1;
                                                                    }

                                                                    tmp_dircall_arg1_15 = tmp_mvar_value_43;
                                                                    if ( par_fun == NULL )
                                                                    {

                                                                        exception_type = PyExc_UnboundLocalError;
                                                                        Py_INCREF( exception_type );
                                                                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fun" );
                                                                        exception_tb = NULL;
                                                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                                        CHAIN_EXCEPTION( exception_value );

                                                                        exception_lineno = 623;
                                                                        type_description_1 = "ooooooooooooo";
                                                                        goto frame_exception_exit_1;
                                                                    }

                                                                    tmp_tuple_element_17 = par_fun;
                                                                    tmp_dircall_arg2_15 = PyTuple_New( 5 );
                                                                    Py_INCREF( tmp_tuple_element_17 );
                                                                    PyTuple_SET_ITEM( tmp_dircall_arg2_15, 0, tmp_tuple_element_17 );
                                                                    CHECK_OBJECT( par_x0 );
                                                                    tmp_tuple_element_17 = par_x0;
                                                                    Py_INCREF( tmp_tuple_element_17 );
                                                                    PyTuple_SET_ITEM( tmp_dircall_arg2_15, 1, tmp_tuple_element_17 );
                                                                    CHECK_OBJECT( par_args );
                                                                    tmp_tuple_element_17 = par_args;
                                                                    Py_INCREF( tmp_tuple_element_17 );
                                                                    PyTuple_SET_ITEM( tmp_dircall_arg2_15, 2, tmp_tuple_element_17 );
                                                                    if ( par_jac == NULL )
                                                                    {
                                                                        Py_DECREF( tmp_dircall_arg2_15 );
                                                                        exception_type = PyExc_UnboundLocalError;
                                                                        Py_INCREF( exception_type );
                                                                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac" );
                                                                        exception_tb = NULL;
                                                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                                        CHAIN_EXCEPTION( exception_value );

                                                                        exception_lineno = 623;
                                                                        type_description_1 = "ooooooooooooo";
                                                                        goto frame_exception_exit_1;
                                                                    }

                                                                    tmp_tuple_element_17 = par_jac;
                                                                    Py_INCREF( tmp_tuple_element_17 );
                                                                    PyTuple_SET_ITEM( tmp_dircall_arg2_15, 3, tmp_tuple_element_17 );
                                                                    CHECK_OBJECT( par_hess );
                                                                    tmp_tuple_element_17 = par_hess;
                                                                    Py_INCREF( tmp_tuple_element_17 );
                                                                    PyTuple_SET_ITEM( tmp_dircall_arg2_15, 4, tmp_tuple_element_17 );
                                                                    tmp_dict_key_15 = const_str_plain_callback;
                                                                    CHECK_OBJECT( par_callback );
                                                                    tmp_dict_value_15 = par_callback;
                                                                    tmp_dircall_arg3_15 = _PyDict_NewPresized( 1 );
                                                                    tmp_res = PyDict_SetItem( tmp_dircall_arg3_15, tmp_dict_key_15, tmp_dict_value_15 );
                                                                    assert( !(tmp_res != 0) );
                                                                    if ( par_options == NULL )
                                                                    {
                                                                        Py_DECREF( tmp_dircall_arg2_15 );
                                                                        Py_DECREF( tmp_dircall_arg3_15 );
                                                                        exception_type = PyExc_UnboundLocalError;
                                                                        Py_INCREF( exception_type );
                                                                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                                                                        exception_tb = NULL;
                                                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                                        CHAIN_EXCEPTION( exception_value );

                                                                        exception_lineno = 624;
                                                                        type_description_1 = "ooooooooooooo";
                                                                        goto frame_exception_exit_1;
                                                                    }

                                                                    tmp_dircall_arg4_9 = par_options;
                                                                    Py_INCREF( tmp_dircall_arg1_15 );
                                                                    Py_INCREF( tmp_dircall_arg4_9 );

                                                                    {
                                                                        PyObject *dir_call_args[] = {tmp_dircall_arg1_15, tmp_dircall_arg2_15, tmp_dircall_arg3_15, tmp_dircall_arg4_9};
                                                                        tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
                                                                    }
                                                                    if ( tmp_return_value == NULL )
                                                                    {
                                                                        assert( ERROR_OCCURRED() );

                                                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                                        exception_lineno = 623;
                                                                        type_description_1 = "ooooooooooooo";
                                                                        goto frame_exception_exit_1;
                                                                    }
                                                                    goto frame_return_exit_1;
                                                                }
                                                                goto branch_end_48;
                                                                branch_no_48:;
                                                                {
                                                                    PyObject *tmp_raise_type_2;
                                                                    PyObject *tmp_make_exception_arg_2;
                                                                    PyObject *tmp_left_name_10;
                                                                    PyObject *tmp_right_name_10;
                                                                    tmp_left_name_10 = const_str_digest_b21697a8dbf086a46d9ca589af9912aa;
                                                                    if ( par_method == NULL )
                                                                    {

                                                                        exception_type = PyExc_UnboundLocalError;
                                                                        Py_INCREF( exception_type );
                                                                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                                                                        exception_tb = NULL;
                                                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                                        CHAIN_EXCEPTION( exception_value );

                                                                        exception_lineno = 626;
                                                                        type_description_1 = "ooooooooooooo";
                                                                        goto frame_exception_exit_1;
                                                                    }

                                                                    tmp_right_name_10 = par_method;
                                                                    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_10, tmp_right_name_10 );
                                                                    if ( tmp_make_exception_arg_2 == NULL )
                                                                    {
                                                                        assert( ERROR_OCCURRED() );

                                                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                                        exception_lineno = 626;
                                                                        type_description_1 = "ooooooooooooo";
                                                                        goto frame_exception_exit_1;
                                                                    }
                                                                    frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame.f_lineno = 626;
                                                                    {
                                                                        PyObject *call_args[] = { tmp_make_exception_arg_2 };
                                                                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                                                                    }

                                                                    Py_DECREF( tmp_make_exception_arg_2 );
                                                                    assert( !(tmp_raise_type_2 == NULL) );
                                                                    exception_type = tmp_raise_type_2;
                                                                    exception_lineno = 626;
                                                                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                                                                    type_description_1 = "ooooooooooooo";
                                                                    goto frame_exception_exit_1;
                                                                }
                                                                branch_end_48:;
                                                            }
                                                            branch_end_47:;
                                                        }
                                                        branch_end_46:;
                                                    }
                                                    branch_end_45:;
                                                }
                                                branch_end_44:;
                                            }
                                            branch_end_43:;
                                        }
                                        branch_end_42:;
                                    }
                                    branch_end_41:;
                                }
                                branch_end_40:;
                            }
                            branch_end_39:;
                        }
                        branch_end_38:;
                    }
                    branch_end_37:;
                }
                branch_end_36:;
            }
            branch_end_35:;
        }
        branch_end_34:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a57c3d2c77b2b77c6e21e91e233c61ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a57c3d2c77b2b77c6e21e91e233c61ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a57c3d2c77b2b77c6e21e91e233c61ec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a57c3d2c77b2b77c6e21e91e233c61ec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a57c3d2c77b2b77c6e21e91e233c61ec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a57c3d2c77b2b77c6e21e91e233c61ec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a57c3d2c77b2b77c6e21e91e233c61ec,
        type_description_1,
        par_fun,
        par_x0,
        par_args,
        par_method,
        par_jac,
        par_hess,
        par_hessp,
        par_bounds,
        par_constraints,
        par_tol,
        par_callback,
        par_options,
        var_meth
    );


    // Release cached frame.
    if ( frame_a57c3d2c77b2b77c6e21e91e233c61ec == cache_frame_a57c3d2c77b2b77c6e21e91e233c61ec )
    {
        Py_DECREF( frame_a57c3d2c77b2b77c6e21e91e233c61ec );
    }
    cache_frame_a57c3d2c77b2b77c6e21e91e233c61ec = NULL;

    assertFrameObject( frame_a57c3d2c77b2b77c6e21e91e233c61ec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_minimize$$$function_1_minimize );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_hess );
    Py_DECREF( par_hess );
    par_hess = NULL;

    CHECK_OBJECT( (PyObject *)par_hessp );
    Py_DECREF( par_hessp );
    par_hessp = NULL;

    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    CHECK_OBJECT( (PyObject *)par_constraints );
    Py_DECREF( par_constraints );
    par_constraints = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

    CHECK_OBJECT( (PyObject *)var_meth );
    Py_DECREF( var_meth );
    var_meth = NULL;

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

    Py_XDECREF( par_fun );
    par_fun = NULL;

    Py_XDECREF( par_x0 );
    par_x0 = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_hess );
    Py_DECREF( par_hess );
    par_hess = NULL;

    CHECK_OBJECT( (PyObject *)par_hessp );
    Py_DECREF( par_hessp );
    par_hessp = NULL;

    Py_XDECREF( par_bounds );
    par_bounds = NULL;

    Py_XDECREF( par_constraints );
    par_constraints = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_meth );
    var_meth = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_minimize$$$function_1_minimize );
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


static PyObject *impl_scipy$optimize$_minimize$$$function_2_minimize_scalar( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fun = python_pars[ 0 ];
    PyObject *par_bracket = python_pars[ 1 ];
    PyObject *par_bounds = python_pars[ 2 ];
    PyObject *par_args = python_pars[ 3 ];
    PyObject *par_method = python_pars[ 4 ];
    PyObject *par_tol = python_pars[ 5 ];
    PyObject *par_options = python_pars[ 6 ];
    PyObject *var_meth = NULL;
    PyObject *var_disp = NULL;
    struct Nuitka_FrameObject *frame_800d751d8acf434849d31833ebb64369;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_800d751d8acf434849d31833ebb64369 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_800d751d8acf434849d31833ebb64369, codeobj_800d751d8acf434849d31833ebb64369, module_scipy$optimize$_minimize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_800d751d8acf434849d31833ebb64369 = cache_frame_800d751d8acf434849d31833ebb64369;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_800d751d8acf434849d31833ebb64369 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_800d751d8acf434849d31833ebb64369 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_args );
        tmp_isinstance_inst_1 = par_args;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 746;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 746;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_args );
            tmp_tuple_element_1 = par_args;
            tmp_assign_source_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_1, 0, tmp_tuple_element_1 );
            {
                PyObject *old = par_args;
                assert( old != NULL );
                par_args = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_callable );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_callable );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "callable" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 749;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_method );
        tmp_args_element_name_1 = par_method;
        frame_800d751d8acf434849d31833ebb64369->m_frame.f_lineno = 749;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 749;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 749;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = const_str_plain__custom;
            assert( var_meth == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_meth = tmp_assign_source_2;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_method );
            tmp_called_instance_1 = par_method;
            frame_800d751d8acf434849d31833ebb64369->m_frame.f_lineno = 752;
            tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 752;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_meth == NULL );
            var_meth = tmp_assign_source_3;
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_options );
        tmp_compexpr_left_1 = par_options;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = PyDict_New();
            {
                PyObject *old = par_options;
                assert( old != NULL );
                par_options = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_left_2 = par_tol;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_4 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_dict_seq_1;
            CHECK_OBJECT( par_options );
            tmp_dict_seq_1 = par_options;
            tmp_assign_source_5 = TO_DICT( tmp_dict_seq_1, NULL );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 757;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_options;
                assert( old != NULL );
                par_options = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_5;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_key_name_1;
            PyObject *tmp_dict_name_1;
            CHECK_OBJECT( var_meth );
            tmp_compexpr_left_3 = var_meth;
            tmp_compexpr_right_3 = const_str_plain_bounded;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 758;
                type_description_1 = "ooooooooo";
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
            tmp_key_name_1 = const_str_plain_xatol;
            CHECK_OBJECT( par_options );
            tmp_dict_name_1 = par_options;
            tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 758;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_mvar_value_3;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_warn );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 759;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_2;
                tmp_args_element_name_2 = const_str_digest_9651963c5184f389b704c05cfb123044;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 760;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_3 = tmp_mvar_value_3;
                frame_800d751d8acf434849d31833ebb64369->m_frame.f_lineno = 759;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 759;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            CHECK_OBJECT( par_tol );
            tmp_dictset_value = par_tol;
            CHECK_OBJECT( par_options );
            tmp_dictset_dict = par_options;
            tmp_dictset_key = const_str_plain_xatol;
            tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
            assert( !(tmp_res != 0) );
            goto branch_end_5;
            branch_no_5:;
            {
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                CHECK_OBJECT( var_meth );
                tmp_compexpr_left_4 = var_meth;
                tmp_compexpr_right_4 = const_str_plain__custom;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 762;
                    type_description_1 = "ooooooooo";
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
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_call_result_3;
                    PyObject *tmp_args_element_name_4;
                    PyObject *tmp_args_element_name_5;
                    CHECK_OBJECT( par_options );
                    tmp_called_instance_2 = par_options;
                    tmp_args_element_name_4 = const_str_plain_tol;
                    CHECK_OBJECT( par_tol );
                    tmp_args_element_name_5 = par_tol;
                    frame_800d751d8acf434849d31833ebb64369->m_frame.f_lineno = 763;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                        tmp_call_result_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_setdefault, call_args );
                    }

                    if ( tmp_call_result_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 763;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_3 );
                }
                goto branch_end_6;
                branch_no_6:;
                {
                    PyObject *tmp_called_instance_3;
                    PyObject *tmp_call_result_4;
                    PyObject *tmp_args_element_name_6;
                    PyObject *tmp_args_element_name_7;
                    CHECK_OBJECT( par_options );
                    tmp_called_instance_3 = par_options;
                    tmp_args_element_name_6 = const_str_plain_xtol;
                    CHECK_OBJECT( par_tol );
                    tmp_args_element_name_7 = par_tol;
                    frame_800d751d8acf434849d31833ebb64369->m_frame.f_lineno = 765;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                        tmp_call_result_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_setdefault, call_args );
                    }

                    if ( tmp_call_result_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 765;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_4 );
                }
                branch_end_6:;
            }
            branch_end_5:;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( var_meth );
        tmp_compexpr_left_5 = var_meth;
        tmp_compexpr_right_5 = const_str_plain__custom;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 767;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_dircall_arg4_1;
            CHECK_OBJECT( par_method );
            tmp_dircall_arg1_1 = par_method;
            CHECK_OBJECT( par_fun );
            tmp_tuple_element_2 = par_fun;
            tmp_dircall_arg2_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
            tmp_dict_key_1 = const_str_plain_args;
            CHECK_OBJECT( par_args );
            tmp_dict_value_1 = par_args;
            tmp_dircall_arg3_1 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_bracket;
            CHECK_OBJECT( par_bracket );
            tmp_dict_value_2 = par_bracket;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_bounds;
            CHECK_OBJECT( par_bounds );
            tmp_dict_value_3 = par_bounds;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            if ( par_options == NULL )
            {
                Py_DECREF( tmp_dircall_arg2_1 );
                Py_DECREF( tmp_dircall_arg3_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 768;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg4_1 = par_options;
            Py_INCREF( tmp_dircall_arg1_1 );
            Py_INCREF( tmp_dircall_arg4_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
            }
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 768;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_7;
        branch_no_7:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT( var_meth );
            tmp_compexpr_left_6 = var_meth;
            tmp_compexpr_right_6 = const_str_plain_brent;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 769;
                type_description_1 = "ooooooooo";
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
                PyObject *tmp_dircall_arg1_2;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_dircall_arg2_2;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_dircall_arg3_2;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_scalar_brent );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_scalar_brent );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_scalar_brent" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 770;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_dircall_arg1_2 = tmp_mvar_value_4;
                CHECK_OBJECT( par_fun );
                tmp_tuple_element_3 = par_fun;
                tmp_dircall_arg2_2 = PyTuple_New( 3 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( par_bracket );
                tmp_tuple_element_3 = par_bracket;
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_3 );
                CHECK_OBJECT( par_args );
                tmp_tuple_element_3 = par_args;
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_2, 2, tmp_tuple_element_3 );
                if ( par_options == NULL )
                {
                    Py_DECREF( tmp_dircall_arg2_2 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 770;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_dircall_arg3_2 = par_options;
                Py_INCREF( tmp_dircall_arg1_2 );
                Py_INCREF( tmp_dircall_arg3_2 );

                {
                    PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
                    tmp_return_value = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
                }
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 770;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_8;
            branch_no_8:;
            {
                nuitka_bool tmp_condition_result_9;
                PyObject *tmp_compexpr_left_7;
                PyObject *tmp_compexpr_right_7;
                CHECK_OBJECT( var_meth );
                tmp_compexpr_left_7 = var_meth;
                tmp_compexpr_right_7 = const_str_plain_bounded;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 771;
                    type_description_1 = "ooooooooo";
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
                    nuitka_bool tmp_condition_result_10;
                    PyObject *tmp_compexpr_left_8;
                    PyObject *tmp_compexpr_right_8;
                    CHECK_OBJECT( par_bounds );
                    tmp_compexpr_left_8 = par_bounds;
                    tmp_compexpr_right_8 = Py_None;
                    tmp_condition_result_10 = ( tmp_compexpr_left_8 == tmp_compexpr_right_8 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_raise_type_1;
                        PyObject *tmp_make_exception_arg_1;
                        tmp_make_exception_arg_1 = const_str_digest_8d0d5a5b00935c558fd21d8fa45bf036;
                        frame_800d751d8acf434849d31833ebb64369->m_frame.f_lineno = 773;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_1 };
                            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                        }

                        assert( !(tmp_raise_type_1 == NULL) );
                        exception_type = tmp_raise_type_1;
                        exception_lineno = 773;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_no_10:;
                }
                {
                    PyObject *tmp_assign_source_6;
                    PyObject *tmp_called_instance_4;
                    if ( par_options == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 777;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_instance_4 = par_options;
                    frame_800d751d8acf434849d31833ebb64369->m_frame.f_lineno = 777;
                    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_disp_tuple, 0 ) );

                    if ( tmp_assign_source_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 777;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_disp == NULL );
                    var_disp = tmp_assign_source_6;
                }
                {
                    nuitka_bool tmp_condition_result_11;
                    PyObject *tmp_isinstance_inst_2;
                    PyObject *tmp_isinstance_cls_2;
                    CHECK_OBJECT( var_disp );
                    tmp_isinstance_inst_2 = var_disp;
                    tmp_isinstance_cls_2 = (PyObject *)&PyBool_Type;
                    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 778;
                        type_description_1 = "ooooooooo";
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
                        PyObject *tmp_ass_subvalue_1;
                        PyObject *tmp_left_name_1;
                        PyObject *tmp_right_name_1;
                        PyObject *tmp_int_arg_1;
                        PyObject *tmp_ass_subscribed_1;
                        PyObject *tmp_ass_subscript_1;
                        tmp_left_name_1 = const_int_pos_2;
                        CHECK_OBJECT( var_disp );
                        tmp_int_arg_1 = var_disp;
                        tmp_right_name_1 = PyNumber_Int( tmp_int_arg_1 );
                        if ( tmp_right_name_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 779;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_ass_subvalue_1 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
                        Py_DECREF( tmp_right_name_1 );
                        if ( tmp_ass_subvalue_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 779;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        if ( par_options == NULL )
                        {
                            Py_DECREF( tmp_ass_subvalue_1 );
                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 779;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_ass_subscribed_1 = par_options;
                        tmp_ass_subscript_1 = const_str_plain_disp;
                        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                        Py_DECREF( tmp_ass_subvalue_1 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 779;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                    }
                    branch_no_11:;
                }
                {
                    PyObject *tmp_dircall_arg1_3;
                    PyObject *tmp_mvar_value_5;
                    PyObject *tmp_dircall_arg2_3;
                    PyObject *tmp_tuple_element_4;
                    PyObject *tmp_dircall_arg3_3;
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_scalar_bounded );

                    if (unlikely( tmp_mvar_value_5 == NULL ))
                    {
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_scalar_bounded );
                    }

                    if ( tmp_mvar_value_5 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_scalar_bounded" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 780;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_dircall_arg1_3 = tmp_mvar_value_5;
                    CHECK_OBJECT( par_fun );
                    tmp_tuple_element_4 = par_fun;
                    tmp_dircall_arg2_3 = PyTuple_New( 3 );
                    Py_INCREF( tmp_tuple_element_4 );
                    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_4 );
                    CHECK_OBJECT( par_bounds );
                    tmp_tuple_element_4 = par_bounds;
                    Py_INCREF( tmp_tuple_element_4 );
                    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 1, tmp_tuple_element_4 );
                    CHECK_OBJECT( par_args );
                    tmp_tuple_element_4 = par_args;
                    Py_INCREF( tmp_tuple_element_4 );
                    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 2, tmp_tuple_element_4 );
                    if ( par_options == NULL )
                    {
                        Py_DECREF( tmp_dircall_arg2_3 );
                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 780;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_dircall_arg3_3 = par_options;
                    Py_INCREF( tmp_dircall_arg1_3 );
                    Py_INCREF( tmp_dircall_arg3_3 );

                    {
                        PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3};
                        tmp_return_value = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
                    }
                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 780;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                goto branch_end_9;
                branch_no_9:;
                {
                    nuitka_bool tmp_condition_result_12;
                    PyObject *tmp_compexpr_left_9;
                    PyObject *tmp_compexpr_right_9;
                    CHECK_OBJECT( var_meth );
                    tmp_compexpr_left_9 = var_meth;
                    tmp_compexpr_right_9 = const_str_plain_golden;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 781;
                        type_description_1 = "ooooooooo";
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
                        PyObject *tmp_dircall_arg1_4;
                        PyObject *tmp_mvar_value_6;
                        PyObject *tmp_dircall_arg2_4;
                        PyObject *tmp_tuple_element_5;
                        PyObject *tmp_dircall_arg3_4;
                        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_scalar_golden );

                        if (unlikely( tmp_mvar_value_6 == NULL ))
                        {
                            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_scalar_golden );
                        }

                        if ( tmp_mvar_value_6 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_scalar_golden" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 782;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_dircall_arg1_4 = tmp_mvar_value_6;
                        CHECK_OBJECT( par_fun );
                        tmp_tuple_element_5 = par_fun;
                        tmp_dircall_arg2_4 = PyTuple_New( 3 );
                        Py_INCREF( tmp_tuple_element_5 );
                        PyTuple_SET_ITEM( tmp_dircall_arg2_4, 0, tmp_tuple_element_5 );
                        CHECK_OBJECT( par_bracket );
                        tmp_tuple_element_5 = par_bracket;
                        Py_INCREF( tmp_tuple_element_5 );
                        PyTuple_SET_ITEM( tmp_dircall_arg2_4, 1, tmp_tuple_element_5 );
                        CHECK_OBJECT( par_args );
                        tmp_tuple_element_5 = par_args;
                        Py_INCREF( tmp_tuple_element_5 );
                        PyTuple_SET_ITEM( tmp_dircall_arg2_4, 2, tmp_tuple_element_5 );
                        if ( par_options == NULL )
                        {
                            Py_DECREF( tmp_dircall_arg2_4 );
                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 782;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_dircall_arg3_4 = par_options;
                        Py_INCREF( tmp_dircall_arg1_4 );
                        Py_INCREF( tmp_dircall_arg3_4 );

                        {
                            PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_4, tmp_dircall_arg3_4};
                            tmp_return_value = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
                        }
                        if ( tmp_return_value == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 782;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        goto frame_return_exit_1;
                    }
                    goto branch_end_12;
                    branch_no_12:;
                    {
                        PyObject *tmp_raise_type_2;
                        PyObject *tmp_make_exception_arg_2;
                        PyObject *tmp_left_name_2;
                        PyObject *tmp_right_name_2;
                        tmp_left_name_2 = const_str_digest_b21697a8dbf086a46d9ca589af9912aa;
                        CHECK_OBJECT( par_method );
                        tmp_right_name_2 = par_method;
                        tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                        if ( tmp_make_exception_arg_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 784;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_800d751d8acf434849d31833ebb64369->m_frame.f_lineno = 784;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_2 };
                            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                        }

                        Py_DECREF( tmp_make_exception_arg_2 );
                        assert( !(tmp_raise_type_2 == NULL) );
                        exception_type = tmp_raise_type_2;
                        exception_lineno = 784;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_end_12:;
                }
                branch_end_9:;
            }
            branch_end_8:;
        }
        branch_end_7:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_800d751d8acf434849d31833ebb64369 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_800d751d8acf434849d31833ebb64369 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_800d751d8acf434849d31833ebb64369 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_800d751d8acf434849d31833ebb64369, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_800d751d8acf434849d31833ebb64369->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_800d751d8acf434849d31833ebb64369, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_800d751d8acf434849d31833ebb64369,
        type_description_1,
        par_fun,
        par_bracket,
        par_bounds,
        par_args,
        par_method,
        par_tol,
        par_options,
        var_meth,
        var_disp
    );


    // Release cached frame.
    if ( frame_800d751d8acf434849d31833ebb64369 == cache_frame_800d751d8acf434849d31833ebb64369 )
    {
        Py_DECREF( frame_800d751d8acf434849d31833ebb64369 );
    }
    cache_frame_800d751d8acf434849d31833ebb64369 = NULL;

    assertFrameObject( frame_800d751d8acf434849d31833ebb64369 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_minimize$$$function_2_minimize_scalar );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_bracket );
    Py_DECREF( par_bracket );
    par_bracket = NULL;

    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

    CHECK_OBJECT( (PyObject *)var_meth );
    Py_DECREF( var_meth );
    var_meth = NULL;

    Py_XDECREF( var_disp );
    var_disp = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_bracket );
    Py_DECREF( par_bracket );
    par_bracket = NULL;

    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_meth );
    var_meth = NULL;

    Py_XDECREF( var_disp );
    var_disp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_minimize$$$function_2_minimize_scalar );
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


static PyObject *impl_scipy$optimize$_minimize$$$function_3_standardize_bounds( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_bounds = python_pars[ 0 ];
    PyObject *par_x0 = python_pars[ 1 ];
    PyObject *par_meth = python_pars[ 2 ];
    PyObject *var_lb = NULL;
    PyObject *var_ub = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_14279a22dc65e2a7cb8c070d7f5b5b7d;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_14279a22dc65e2a7cb8c070d7f5b5b7d = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_14279a22dc65e2a7cb8c070d7f5b5b7d, codeobj_14279a22dc65e2a7cb8c070d7f5b5b7d, module_scipy$optimize$_minimize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_14279a22dc65e2a7cb8c070d7f5b5b7d = cache_frame_14279a22dc65e2a7cb8c070d7f5b5b7d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_14279a22dc65e2a7cb8c070d7f5b5b7d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_14279a22dc65e2a7cb8c070d7f5b5b7d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_meth );
        tmp_compexpr_left_1 = par_meth;
        tmp_compexpr_right_1 = const_str_digest_e27e349d28fa7d1be2332d50a5d0e34b;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 789;
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            PyObject *tmp_mvar_value_1;
            CHECK_OBJECT( par_bounds );
            tmp_isinstance_inst_1 = par_bounds;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_Bounds );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Bounds );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Bounds" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 790;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_cls_1 = tmp_mvar_value_1;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 790;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 790;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            // Tried code:
            {
                PyObject *tmp_assign_source_1;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_1;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_old_bound_to_new );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_bound_to_new );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "old_bound_to_new" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 791;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }

                tmp_called_name_1 = tmp_mvar_value_2;
                CHECK_OBJECT( par_bounds );
                tmp_args_element_name_1 = par_bounds;
                frame_14279a22dc65e2a7cb8c070d7f5b5b7d->m_frame.f_lineno = 791;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                if ( tmp_iter_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 791;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
                Py_DECREF( tmp_iter_arg_1 );
                if ( tmp_assign_source_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 791;
                    type_description_1 = "ooooo";
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


                    type_description_1 = "ooooo";
                    exception_lineno = 791;
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


                    type_description_1 = "ooooo";
                    exception_lineno = 791;
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

                            type_description_1 = "ooooo";
                            exception_lineno = 791;
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
                    exception_lineno = 791;
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
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_args_element_name_3;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_Bounds );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Bounds );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Bounds" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 792;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_3;
                CHECK_OBJECT( var_lb );
                tmp_args_element_name_2 = var_lb;
                CHECK_OBJECT( var_ub );
                tmp_args_element_name_3 = var_ub;
                frame_14279a22dc65e2a7cb8c070d7f5b5b7d->m_frame.f_lineno = 792;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                if ( tmp_assign_source_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 792;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_bounds;
                    assert( old != NULL );
                    par_bounds = tmp_assign_source_6;
                    Py_DECREF( old );
                }

            }
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_meth );
            tmp_compexpr_left_2 = par_meth;
            tmp_compexpr_right_2 = const_tuple_912f31eee7cd3bda74803669f4c50038_tuple;
            tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 793;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_isinstance_inst_2;
                PyObject *tmp_isinstance_cls_2;
                PyObject *tmp_mvar_value_4;
                CHECK_OBJECT( par_bounds );
                tmp_isinstance_inst_2 = par_bounds;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_Bounds );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Bounds );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Bounds" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 794;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_isinstance_cls_2 = tmp_mvar_value_4;
                tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 794;
                    type_description_1 = "ooooo";
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
                    PyObject *tmp_called_name_3;
                    PyObject *tmp_mvar_value_5;
                    PyObject *tmp_args_element_name_4;
                    PyObject *tmp_source_name_1;
                    PyObject *tmp_args_element_name_5;
                    PyObject *tmp_source_name_2;
                    PyObject *tmp_args_element_name_6;
                    PyObject *tmp_subscribed_name_1;
                    PyObject *tmp_source_name_3;
                    PyObject *tmp_subscript_name_1;
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_new_bounds_to_old );

                    if (unlikely( tmp_mvar_value_5 == NULL ))
                    {
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_new_bounds_to_old );
                    }

                    if ( tmp_mvar_value_5 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "new_bounds_to_old" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 795;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_3 = tmp_mvar_value_5;
                    CHECK_OBJECT( par_bounds );
                    tmp_source_name_1 = par_bounds;
                    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_lb );
                    if ( tmp_args_element_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 795;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_bounds );
                    tmp_source_name_2 = par_bounds;
                    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ub );
                    if ( tmp_args_element_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_args_element_name_4 );

                        exception_lineno = 795;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_x0 );
                    tmp_source_name_3 = par_x0;
                    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
                    if ( tmp_subscribed_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_args_element_name_4 );
                        Py_DECREF( tmp_args_element_name_5 );

                        exception_lineno = 795;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_subscript_name_1 = const_int_0;
                    tmp_args_element_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
                    Py_DECREF( tmp_subscribed_name_1 );
                    if ( tmp_args_element_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_args_element_name_4 );
                        Py_DECREF( tmp_args_element_name_5 );

                        exception_lineno = 795;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_14279a22dc65e2a7cb8c070d7f5b5b7d->m_frame.f_lineno = 795;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
                        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_4 );
                    Py_DECREF( tmp_args_element_name_5 );
                    Py_DECREF( tmp_args_element_name_6 );
                    if ( tmp_assign_source_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 795;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_bounds;
                        assert( old != NULL );
                        par_bounds = tmp_assign_source_7;
                        Py_DECREF( old );
                    }

                }
                branch_no_4:;
            }
            branch_no_3:;
        }
        branch_end_1:;
    }
    if ( par_bounds == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bounds" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 796;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_bounds;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_14279a22dc65e2a7cb8c070d7f5b5b7d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_14279a22dc65e2a7cb8c070d7f5b5b7d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_14279a22dc65e2a7cb8c070d7f5b5b7d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_14279a22dc65e2a7cb8c070d7f5b5b7d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_14279a22dc65e2a7cb8c070d7f5b5b7d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_14279a22dc65e2a7cb8c070d7f5b5b7d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_14279a22dc65e2a7cb8c070d7f5b5b7d,
        type_description_1,
        par_bounds,
        par_x0,
        par_meth,
        var_lb,
        var_ub
    );


    // Release cached frame.
    if ( frame_14279a22dc65e2a7cb8c070d7f5b5b7d == cache_frame_14279a22dc65e2a7cb8c070d7f5b5b7d )
    {
        Py_DECREF( frame_14279a22dc65e2a7cb8c070d7f5b5b7d );
    }
    cache_frame_14279a22dc65e2a7cb8c070d7f5b5b7d = NULL;

    assertFrameObject( frame_14279a22dc65e2a7cb8c070d7f5b5b7d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_minimize$$$function_3_standardize_bounds );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_bounds );
    par_bounds = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_meth );
    Py_DECREF( par_meth );
    par_meth = NULL;

    Py_XDECREF( var_lb );
    var_lb = NULL;

    Py_XDECREF( var_ub );
    var_ub = NULL;

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

    Py_XDECREF( par_bounds );
    par_bounds = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_meth );
    Py_DECREF( par_meth );
    par_meth = NULL;

    Py_XDECREF( var_lb );
    var_lb = NULL;

    Py_XDECREF( var_ub );
    var_ub = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_minimize$$$function_3_standardize_bounds );
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


static PyObject *impl_scipy$optimize$_minimize$$$function_4_standardize_constraints( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_constraints = python_pars[ 0 ];
    PyObject *par_x0 = python_pars[ 1 ];
    PyObject *par_meth = python_pars[ 2 ];
    PyObject *var_all_constraint_types = NULL;
    PyObject *var_new_constraint_types = NULL;
    PyObject *var_i = NULL;
    PyObject *var_con = NULL;
    PyObject *var_old_constraints = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c3c437deddd1a060188e0d37194c13e6;
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
    static struct Nuitka_FrameObject *cache_frame_c3c437deddd1a060188e0d37194c13e6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c3c437deddd1a060188e0d37194c13e6, codeobj_c3c437deddd1a060188e0d37194c13e6, module_scipy$optimize$_minimize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c3c437deddd1a060188e0d37194c13e6 = cache_frame_c3c437deddd1a060188e0d37194c13e6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c3c437deddd1a060188e0d37194c13e6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c3c437deddd1a060188e0d37194c13e6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_NonlinearConstraint );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NonlinearConstraint );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NonlinearConstraint" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 801;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_assign_source_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_LinearConstraint );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinearConstraint );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_assign_source_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinearConstraint" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 801;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_1, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = (PyObject *)&PyDict_Type;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_1, 2, tmp_tuple_element_1 );
        assert( var_all_constraint_types == NULL );
        var_all_constraint_types = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_all_constraint_types );
        tmp_subscribed_name_1 = var_all_constraint_types;
        tmp_subscript_name_1 = const_slice_none_int_neg_1_none;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 802;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_new_constraint_types == NULL );
        var_new_constraint_types = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_constraints );
        tmp_isinstance_inst_1 = par_constraints;
        CHECK_OBJECT( var_all_constraint_types );
        tmp_isinstance_cls_1 = var_all_constraint_types;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 803;
            type_description_1 = "oooooooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_list_element_1;
            CHECK_OBJECT( par_constraints );
            tmp_list_element_1 = par_constraints;
            tmp_assign_source_3 = PyList_New( 1 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
            {
                PyObject *old = par_constraints;
                assert( old != NULL );
                par_constraints = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_list_arg_1;
        CHECK_OBJECT( par_constraints );
        tmp_list_arg_1 = par_constraints;
        tmp_assign_source_4 = PySequence_List( tmp_list_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 805;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_constraints;
            assert( old != NULL );
            par_constraints = tmp_assign_source_4;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_meth );
        tmp_compexpr_left_1 = par_meth;
        tmp_compexpr_right_1 = const_str_digest_e27e349d28fa7d1be2332d50a5d0e34b;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 807;
            type_description_1 = "oooooooo";
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_name_1 = (PyObject *)&PyEnum_Type;
            CHECK_OBJECT( par_constraints );
            tmp_args_element_name_1 = par_constraints;
            frame_c3c437deddd1a060188e0d37194c13e6->m_frame.f_lineno = 808;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 808;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 808;
                type_description_1 = "oooooooo";
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
                    type_description_1 = "oooooooo";
                    exception_lineno = 808;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_6;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 808;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__source_iter;
                tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
                Py_XDECREF( old );
            }

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


                type_description_1 = "oooooooo";
                exception_lineno = 808;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__element_1;
                tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
                Py_XDECREF( old );
            }

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


                type_description_1 = "oooooooo";
                exception_lineno = 808;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__element_2;
                tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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
                        exception_lineno = 808;
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
                exception_lineno = 808;
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
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_10;
                Py_INCREF( var_i );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
            {
                PyObject *old = var_con;
                var_con = tmp_assign_source_11;
                Py_INCREF( var_con );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            CHECK_OBJECT( var_con );
            tmp_isinstance_inst_2 = var_con;
            CHECK_OBJECT( var_new_constraint_types );
            tmp_isinstance_cls_2 = var_new_constraint_types;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 809;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 809;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
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
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_old_constraint_to_new );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_constraint_to_new );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "old_constraint_to_new" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 810;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_2;
                }

                tmp_called_name_2 = tmp_mvar_value_3;
                CHECK_OBJECT( var_i );
                tmp_args_element_name_2 = var_i;
                CHECK_OBJECT( var_con );
                tmp_args_element_name_3 = var_con;
                frame_c3c437deddd1a060188e0d37194c13e6->m_frame.f_lineno = 810;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                    tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                if ( tmp_ass_subvalue_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 810;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( par_constraints );
                tmp_ass_subscribed_1 = par_constraints;
                CHECK_OBJECT( var_i );
                tmp_ass_subscript_1 = var_i;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subvalue_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 810;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_2;
                }
            }
            branch_no_3:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 808;
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
        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_list_arg_2;
            tmp_called_name_3 = (PyObject *)&PyEnum_Type;
            CHECK_OBJECT( par_constraints );
            tmp_list_arg_2 = par_constraints;
            tmp_args_element_name_4 = PySequence_List( tmp_list_arg_2 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 813;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_c3c437deddd1a060188e0d37194c13e6->m_frame.f_lineno = 813;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 813;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 813;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_2__for_iterator == NULL );
            tmp_for_loop_2__for_iterator = tmp_assign_source_12;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_for_loop_2__for_iterator );
            tmp_next_source_2 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_13 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooo";
                    exception_lineno = 813;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_13;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT( tmp_for_loop_2__iter_value );
            tmp_iter_arg_4 = tmp_for_loop_2__iter_value;
            tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_4 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 813;
                type_description_1 = "oooooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__source_iter;
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_14;
                Py_XDECREF( old );
            }

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


                type_description_1 = "oooooooo";
                exception_lineno = 813;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_1;
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_15;
                Py_XDECREF( old );
            }

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


                type_description_1 = "oooooooo";
                exception_lineno = 813;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_2;
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_16;
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

                        type_description_1 = "oooooooo";
                        exception_lineno = 813;
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

                type_description_1 = "oooooooo";
                exception_lineno = 813;
                goto try_except_handler_7;
            }
        }
        goto try_end_4;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_6;
        // End of try:
        try_end_4:;
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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_5;
        // End of try:
        try_end_5:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_17 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_17;
                Py_INCREF( var_i );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_18 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_con;
                var_con = tmp_assign_source_18;
                Py_INCREF( var_con );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_isinstance_inst_3;
            PyObject *tmp_isinstance_cls_3;
            CHECK_OBJECT( var_con );
            tmp_isinstance_inst_3 = var_con;
            CHECK_OBJECT( var_new_constraint_types );
            tmp_isinstance_cls_3 = var_new_constraint_types;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 814;
                type_description_1 = "oooooooo";
                goto try_except_handler_5;
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
                PyObject *tmp_assign_source_19;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_args_element_name_6;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_new_constraint_to_old );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_new_constraint_to_old );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "new_constraint_to_old" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 815;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_5;
                }

                tmp_called_name_4 = tmp_mvar_value_4;
                CHECK_OBJECT( var_con );
                tmp_args_element_name_5 = var_con;
                CHECK_OBJECT( par_x0 );
                tmp_args_element_name_6 = par_x0;
                frame_c3c437deddd1a060188e0d37194c13e6->m_frame.f_lineno = 815;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                }

                if ( tmp_assign_source_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 815;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_5;
                }
                {
                    PyObject *old = var_old_constraints;
                    var_old_constraints = tmp_assign_source_19;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_ass_subvalue_2;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_ass_subscribed_2;
                PyObject *tmp_ass_subscript_2;
                CHECK_OBJECT( var_old_constraints );
                tmp_subscribed_name_2 = var_old_constraints;
                tmp_subscript_name_2 = const_int_0;
                tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
                if ( tmp_ass_subvalue_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 816;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT( par_constraints );
                tmp_ass_subscribed_2 = par_constraints;
                CHECK_OBJECT( var_i );
                tmp_ass_subscript_2 = var_i;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
                Py_DECREF( tmp_ass_subvalue_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 816;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_5;
                }
            }
            {
                PyObject *tmp_called_name_5;
                PyObject *tmp_source_name_1;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                CHECK_OBJECT( par_constraints );
                tmp_source_name_1 = par_constraints;
                tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_extend );
                if ( tmp_called_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 817;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT( var_old_constraints );
                tmp_subscribed_name_3 = var_old_constraints;
                tmp_subscript_name_3 = const_slice_int_pos_1_none_none;
                tmp_args_element_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                if ( tmp_args_element_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_5 );

                    exception_lineno = 817;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_5;
                }
                frame_c3c437deddd1a060188e0d37194c13e6->m_frame.f_lineno = 817;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7 };
                    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
                }

                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_args_element_name_7 );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 817;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_5;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            branch_no_4:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 813;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        goto try_end_6;
        // Exception handler code:
        try_except_handler_5:;
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
        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c3c437deddd1a060188e0d37194c13e6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c3c437deddd1a060188e0d37194c13e6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c3c437deddd1a060188e0d37194c13e6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c3c437deddd1a060188e0d37194c13e6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c3c437deddd1a060188e0d37194c13e6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c3c437deddd1a060188e0d37194c13e6,
        type_description_1,
        par_constraints,
        par_x0,
        par_meth,
        var_all_constraint_types,
        var_new_constraint_types,
        var_i,
        var_con,
        var_old_constraints
    );


    // Release cached frame.
    if ( frame_c3c437deddd1a060188e0d37194c13e6 == cache_frame_c3c437deddd1a060188e0d37194c13e6 )
    {
        Py_DECREF( frame_c3c437deddd1a060188e0d37194c13e6 );
    }
    cache_frame_c3c437deddd1a060188e0d37194c13e6 = NULL;

    assertFrameObject( frame_c3c437deddd1a060188e0d37194c13e6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_constraints );
    tmp_return_value = par_constraints;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_minimize$$$function_4_standardize_constraints );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_constraints );
    Py_DECREF( par_constraints );
    par_constraints = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_meth );
    Py_DECREF( par_meth );
    par_meth = NULL;

    CHECK_OBJECT( (PyObject *)var_all_constraint_types );
    Py_DECREF( var_all_constraint_types );
    var_all_constraint_types = NULL;

    CHECK_OBJECT( (PyObject *)var_new_constraint_types );
    Py_DECREF( var_new_constraint_types );
    var_new_constraint_types = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_con );
    var_con = NULL;

    Py_XDECREF( var_old_constraints );
    var_old_constraints = NULL;

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

    Py_XDECREF( par_constraints );
    par_constraints = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_meth );
    Py_DECREF( par_meth );
    par_meth = NULL;

    Py_XDECREF( var_all_constraint_types );
    var_all_constraint_types = NULL;

    Py_XDECREF( var_new_constraint_types );
    var_new_constraint_types = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_con );
    var_con = NULL;

    Py_XDECREF( var_old_constraints );
    var_old_constraints = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_minimize$$$function_4_standardize_constraints );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function_1_minimize( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_minimize$$$function_1_minimize,
        const_str_plain_minimize,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a57c3d2c77b2b77c6e21e91e233c61ec,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_minimize,
        const_str_digest_863fc7cd57512d75f0fa3a49a5bf2347,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function_2_minimize_scalar( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_minimize$$$function_2_minimize_scalar,
        const_str_plain_minimize_scalar,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_800d751d8acf434849d31833ebb64369,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_minimize,
        const_str_digest_cf43b93af9d0a8b9649eef9e473daaf9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function_3_standardize_bounds(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_minimize$$$function_3_standardize_bounds,
        const_str_plain_standardize_bounds,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_14279a22dc65e2a7cb8c070d7f5b5b7d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_minimize,
        const_str_digest_c1a2e72a50223220bee614374a6c0b52,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function_4_standardize_constraints(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_minimize$$$function_4_standardize_constraints,
        const_str_plain_standardize_constraints,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c3c437deddd1a060188e0d37194c13e6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_minimize,
        const_str_digest_9274bf2c59096d8ba7dbeb0419e9be0c,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_minimize =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._minimize",
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

MOD_INIT_DECL( scipy$optimize$_minimize )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_minimize );
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
    puts("scipy.optimize._minimize: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._minimize: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._minimize: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_minimize" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_minimize = Py_InitModule4(
        "scipy.optimize._minimize",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_minimize = PyModule_Create( &mdef_scipy$optimize$_minimize );
#endif

    moduledict_scipy$optimize$_minimize = MODULE_DICT( module_scipy$optimize$_minimize );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_minimize,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_minimize,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_minimize,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_minimize,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_minimize );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_753c701e6a332a0f84c5e5ae08fd2679, module_scipy$optimize$_minimize );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_d1706e25f1ce226511da7f868220610a;
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
        tmp_assign_source_1 = const_str_digest_d64588770c3febb768625b6bb688fe61;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_d1706e25f1ce226511da7f868220610a = MAKE_MODULE_FRAME( codeobj_d1706e25f1ce226511da7f868220610a, module_scipy$optimize$_minimize );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d1706e25f1ce226511da7f868220610a );
    assert( Py_REFCNT( frame_d1706e25f1ce226511da7f868220610a ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_d1706e25f1ce226511da7f868220610a->m_frame.f_lineno = 9;
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


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_assign_source_8 = LIST_COPY( const_list_str_plain_minimize_str_plain_minimize_scalar_list );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_warnings;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_warn_tuple;
        tmp_level_name_1 = const_int_0;
        frame_d1706e25f1ce226511da7f868220610a->m_frame.f_lineno = 15;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_warn );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_warn, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_numpy;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_d1706e25f1ce226511da7f868220610a->m_frame.f_lineno = 17;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_c88389693d9d476899c1c6e170568469;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_callable_tuple;
        tmp_level_name_3 = const_int_0;
        frame_d1706e25f1ce226511da7f868220610a->m_frame.f_lineno = 19;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_callable );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_callable, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_optimize;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_25e6aee4221265b68ab0be395ebcc132_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_d1706e25f1ce226511da7f868220610a->m_frame.f_lineno = 22;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain__minimize_neldermead,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain__minimize_neldermead );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_neldermead, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain__minimize_powell,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain__minimize_powell );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_powell, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain__minimize_cg,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain__minimize_cg );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_cg, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain__minimize_bfgs,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain__minimize_bfgs );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_bfgs, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain__minimize_newtoncg,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain__minimize_newtoncg );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_newtoncg, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_11 ) )
        {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain__minimize_scalar_brent,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain__minimize_scalar_brent );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_scalar_brent, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_12 ) )
        {
           tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain__minimize_scalar_bounded,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain__minimize_scalar_bounded );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_scalar_bounded, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_13 ) )
        {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain__minimize_scalar_golden,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain__minimize_scalar_golden );
        }

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_scalar_golden, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_14 ) )
        {
           tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain_MemoizeJac,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_MemoizeJac );
        }

        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_MemoizeJac, tmp_assign_source_21 );
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain__trustregion_dogleg;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain__minimize_dogleg_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_d1706e25f1ce226511da7f868220610a->m_frame.f_lineno = 26;
        tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_15 ) )
        {
           tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain__minimize_dogleg,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain__minimize_dogleg );
        }

        Py_DECREF( tmp_import_name_from_15 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_dogleg, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain__trustregion_ncg;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain__minimize_trust_ncg_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_d1706e25f1ce226511da7f868220610a->m_frame.f_lineno = 27;
        tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_16 ) )
        {
           tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain__minimize_trust_ncg,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain__minimize_trust_ncg );
        }

        Py_DECREF( tmp_import_name_from_16 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_trust_ncg, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain__trustregion_krylov;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain__minimize_trust_krylov_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_d1706e25f1ce226511da7f868220610a->m_frame.f_lineno = 28;
        tmp_import_name_from_17 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_17 ) )
        {
           tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain__minimize_trust_krylov,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain__minimize_trust_krylov );
        }

        Py_DECREF( tmp_import_name_from_17 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_trust_krylov, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain__trustregion_exact;
        tmp_globals_name_8 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain__minimize_trustregion_exact_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_d1706e25f1ce226511da7f868220610a->m_frame.f_lineno = 29;
        tmp_import_name_from_18 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_18 ) )
        {
           tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain__minimize_trustregion_exact,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain__minimize_trustregion_exact );
        }

        Py_DECREF( tmp_import_name_from_18 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_trustregion_exact, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain__trustregion_constr;
        tmp_globals_name_9 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain__minimize_trustregion_constr_tuple;
        tmp_level_name_9 = const_int_pos_1;
        frame_d1706e25f1ce226511da7f868220610a->m_frame.f_lineno = 30;
        tmp_import_name_from_19 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_import_name_from_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_19 ) )
        {
           tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain__minimize_trustregion_constr,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain__minimize_trustregion_constr );
        }

        Py_DECREF( tmp_import_name_from_19 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_trustregion_constr, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_plain_lbfgsb;
        tmp_globals_name_10 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain__minimize_lbfgsb_tuple;
        tmp_level_name_10 = const_int_pos_1;
        frame_d1706e25f1ce226511da7f868220610a->m_frame.f_lineno = 33;
        tmp_import_name_from_20 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_import_name_from_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_20 ) )
        {
           tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain__minimize_lbfgsb,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain__minimize_lbfgsb );
        }

        Py_DECREF( tmp_import_name_from_20 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_lbfgsb, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_plain_tnc;
        tmp_globals_name_11 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_str_plain__minimize_tnc_tuple;
        tmp_level_name_11 = const_int_pos_1;
        frame_d1706e25f1ce226511da7f868220610a->m_frame.f_lineno = 34;
        tmp_import_name_from_21 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
        if ( tmp_import_name_from_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_21 ) )
        {
           tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain__minimize_tnc,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain__minimize_tnc );
        }

        Py_DECREF( tmp_import_name_from_21 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_tnc, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_12;
        PyObject *tmp_locals_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = const_str_plain_cobyla;
        tmp_globals_name_12 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_name_12 = Py_None;
        tmp_fromlist_name_12 = const_tuple_str_plain__minimize_cobyla_tuple;
        tmp_level_name_12 = const_int_pos_1;
        frame_d1706e25f1ce226511da7f868220610a->m_frame.f_lineno = 35;
        tmp_import_name_from_22 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
        if ( tmp_import_name_from_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_22 ) )
        {
           tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain__minimize_cobyla,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain__minimize_cobyla );
        }

        Py_DECREF( tmp_import_name_from_22 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_cobyla, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_name_13;
        PyObject *tmp_locals_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = const_str_plain_slsqp;
        tmp_globals_name_13 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_name_13 = Py_None;
        tmp_fromlist_name_13 = const_tuple_str_plain__minimize_slsqp_tuple;
        tmp_level_name_13 = const_int_pos_1;
        frame_d1706e25f1ce226511da7f868220610a->m_frame.f_lineno = 36;
        tmp_import_name_from_23 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
        if ( tmp_import_name_from_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_23 ) )
        {
           tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain__minimize_slsqp,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain__minimize_slsqp );
        }

        Py_DECREF( tmp_import_name_from_23 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain__minimize_slsqp, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_name_name_14;
        PyObject *tmp_globals_name_14;
        PyObject *tmp_locals_name_14;
        PyObject *tmp_fromlist_name_14;
        PyObject *tmp_level_name_14;
        tmp_name_name_14 = const_str_plain__constraints;
        tmp_globals_name_14 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_name_14 = Py_None;
        tmp_fromlist_name_14 = const_tuple_1c5d95777d8ef6d328f71aa083ed78cd_tuple;
        tmp_level_name_14 = const_int_pos_1;
        frame_d1706e25f1ce226511da7f868220610a->m_frame.f_lineno = 37;
        tmp_assign_source_31 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_31;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_24 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_24 ) )
        {
           tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain_old_bound_to_new,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_old_bound_to_new );
        }

        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_old_bound_to_new, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_25 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_25 ) )
        {
           tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain_new_bounds_to_old,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_new_bounds_to_old );
        }

        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_new_bounds_to_old, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_26 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_26 ) )
        {
           tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain_old_constraint_to_new,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_old_constraint_to_new );
        }

        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_old_constraint_to_new, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_27 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_27 ) )
        {
           tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain_new_constraint_to_old,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_new_constraint_to_old );
        }

        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_new_constraint_to_old, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_28 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_28 ) )
        {
           tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain_NonlinearConstraint,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain_NonlinearConstraint );
        }

        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_NonlinearConstraint, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_29 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_29 ) )
        {
           tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain_LinearConstraint,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain_LinearConstraint );
        }

        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_LinearConstraint, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_30 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_30 ) )
        {
           tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                const_str_plain_Bounds,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_30, const_str_plain_Bounds );
        }

        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_Bounds, tmp_assign_source_38 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d1706e25f1ce226511da7f868220610a );
#endif
    popFrameStack();

    assertFrameObject( frame_d1706e25f1ce226511da7f868220610a );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d1706e25f1ce226511da7f868220610a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d1706e25f1ce226511da7f868220610a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d1706e25f1ce226511da7f868220610a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d1706e25f1ce226511da7f868220610a, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_084d2f95b0faa70e48ac09f904a1065a_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_39 = MAKE_FUNCTION_scipy$optimize$_minimize$$$function_1_minimize( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_minimize, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_none_tuple_empty_str_plain_brent_none_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_40 = MAKE_FUNCTION_scipy$optimize$_minimize$$$function_2_minimize_scalar( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_minimize_scalar, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_FUNCTION_scipy$optimize$_minimize$$$function_3_standardize_bounds(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_standardize_bounds, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_FUNCTION_scipy$optimize$_minimize$$$function_4_standardize_constraints(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain_standardize_constraints, tmp_assign_source_42 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_minimize );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
