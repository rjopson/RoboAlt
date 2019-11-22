/* Generated code for Python module 'scipy.optimize._lsq.trf_linear'
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

/* The "_module_scipy$optimize$_lsq$trf_linear" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_lsq$trf_linear;
PyDictObject *moduledict_scipy$optimize$_lsq$trf_linear;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_abs_diag_R;
static PyObject *const_str_digest_ab47e4550adf05b8e9c87cc23370453a;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_7cc06022f03da5613523e5d81a5b155a_tuple;
static PyObject *const_str_plain_copy_R;
extern PyObject *const_str_plain_inf;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_OptimizeResult;
extern PyObject *const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_bool;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_trf_linear;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_reflective_transformation;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_m;
extern PyObject *const_tuple_str_plain_lsmr_tuple;
static PyObject *const_str_plain_backtracking;
extern PyObject *const_str_plain_perm;
extern PyObject *const_str_plain_atol;
extern PyObject *const_str_plain_qr;
extern PyObject *const_str_plain_EPS;
extern PyObject *const_str_plain_optimality;
extern PyObject *const_str_plain_astype;
extern PyObject *const_float_0_5;
extern PyObject *const_str_plain_auto;
static PyObject *const_str_plain_QTb;
extern PyObject *const_str_plain_find_active_constraints;
extern PyObject *const_str_plain_regularized_lsq_operator;
extern PyObject *const_str_plain_evaluate_quadratic;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_diag;
extern PyObject *const_str_plain_rtol;
extern PyObject *const_str_plain_build_quadratic_1d;
extern PyObject *const_float_0_1;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_status;
static PyObject *const_str_digest_738662035d52108c68681765bdddef27;
extern PyObject *const_float_minus_0_1;
extern PyObject *const_str_plain_n;
static PyObject *const_tuple_str_plain_qr_str_plain_solve_triangular_tuple;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_right_multiplied_operator;
extern PyObject *const_str_plain_solve_triangular;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_g;
extern PyObject *const_str_plain_minimize_quadratic_1d;
extern PyObject *const_str_plain_compute_grad;
extern PyObject *const_str_plain_alpha;
extern PyObject *const_str_digest_7128459563c13bb5328700e5c2372d59;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
extern PyObject *const_str_plain_fun;
extern PyObject *const_str_plain_economic;
extern PyObject *const_str_plain_norm;
static PyObject *const_tuple_87efbfe8c5c12441f046ca1d852fa225_tuple;
extern PyObject *const_str_plain_ub;
extern PyObject *const_str_plain_nit;
static PyObject *const_str_digest_29ac42750ac44bfb235fc3fa0b836d65;
extern PyObject *const_str_plain_theta;
extern PyObject *const_str_plain_select_step;
static PyObject *const_tuple_str_plain_givens_elimination_tuple;
extern PyObject *const_dict_4d00801cbb538f761d0649b12a6bb7a7;
extern PyObject *const_str_plain_abs;
static PyObject *const_str_plain_cost_change;
extern PyObject *const_str_plain_nonzero;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_lsmr;
extern PyObject *const_str_plain_rstep;
static PyObject *const_dict_5ea4d698a7aedc6eda7ae3bd07579784;
extern PyObject *const_str_digest_8783708b6421c71a0892a844e756fb02;
extern PyObject *const_str_plain_vstack;
extern PyObject *const_str_plain_CL_scaling_vector;
extern PyObject *const_str_plain_active_mask;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_print_header_linear;
extern PyObject *const_str_plain_ord;
static PyObject *const_str_digest_7f2c2a7b9730b57afe019b1f7f45dea6;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_pivoting;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_step;
extern PyObject *const_str_plain_c;
static PyObject *const_str_digest_88c713e4276b342a3d57c07d6a97af50;
extern PyObject *const_str_plain_step_size_to_bound;
static PyObject *const_tuple_aa3f3cf3369e9bc6540453be8065abd9_tuple;
static PyObject *const_str_plain_givens_elimination;
extern PyObject *const_str_plain_ix_;
extern PyObject *const_str_plain_exact;
extern PyObject *const_str_plain_print_iteration_linear;
static PyObject *const_str_plain_regularized_lsq_with_qr;
extern PyObject *const_str_plain_initial_cost;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_threshold;
extern PyObject *const_str_plain__;
static PyObject *const_dict_b47cc4e2af5f5a52abdf7bc37c53f7ed;
extern PyObject *const_str_plain_dot;
static PyObject *const_tuple_53041f9b128185901d5b6ba997a45e48_tuple;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_float_0_01;
static PyObject *const_str_digest_30f5020472a9aef90c1919d032c2e9a0;
extern PyObject *const_tuple_str_plain_OptimizeResult_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_cost;
extern PyObject *const_str_plain_make_strictly_feasible;
extern PyObject *const_str_plain_lb;
extern PyObject *const_str_plain_R;
extern PyObject *const_str_plain_in_bounds;
extern PyObject *const_str_plain_T;
static PyObject *const_str_plain_p_dot_g;
extern PyObject *const_str_plain_active;
static PyObject *const_tuple_29be6375133ad24d2ede57d81a99c830_tuple;
extern PyObject *const_str_plain_s0;
extern PyObject *const_tuple_str_plain_norm_tuple;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_A;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_digest_a0dfa9cb56b41095d297f9de64891d65;
extern PyObject *const_str_plain_x_new;
extern PyObject *const_float_0_005;
extern PyObject *const_str_plain_common;
extern PyObject *const_int_pos_100;
extern PyObject *const_str_plain_btol;
static PyObject *const_str_plain_nns;
extern PyObject *const_tuple_type_bool_tuple;
static PyObject *const_dict_577e871802a52931bcc1cbab7aa45b64;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_abs_diag_R = UNSTREAM_STRING_ASCII( &constant_bin[ 4951471 ], 10, 1 );
    const_str_digest_ab47e4550adf05b8e9c87cc23370453a = UNSTREAM_STRING_ASCII( &constant_bin[ 4951481 ], 30, 0 );
    const_tuple_7cc06022f03da5613523e5d81a5b155a_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_7cc06022f03da5613523e5d81a5b155a_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_7cc06022f03da5613523e5d81a5b155a_tuple, 1, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    PyTuple_SET_ITEM( const_tuple_7cc06022f03da5613523e5d81a5b155a_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_7cc06022f03da5613523e5d81a5b155a_tuple, 3, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_7cc06022f03da5613523e5d81a5b155a_tuple, 4, const_str_plain_theta ); Py_INCREF( const_str_plain_theta );
    const_str_plain_p_dot_g = UNSTREAM_STRING_ASCII( &constant_bin[ 4951511 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_7cc06022f03da5613523e5d81a5b155a_tuple, 5, const_str_plain_p_dot_g ); Py_INCREF( const_str_plain_p_dot_g );
    PyTuple_SET_ITEM( const_tuple_7cc06022f03da5613523e5d81a5b155a_tuple, 6, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_7cc06022f03da5613523e5d81a5b155a_tuple, 7, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    PyTuple_SET_ITEM( const_tuple_7cc06022f03da5613523e5d81a5b155a_tuple, 8, const_str_plain_alpha ); Py_INCREF( const_str_plain_alpha );
    PyTuple_SET_ITEM( const_tuple_7cc06022f03da5613523e5d81a5b155a_tuple, 9, const_str_plain_x_new ); Py_INCREF( const_str_plain_x_new );
    PyTuple_SET_ITEM( const_tuple_7cc06022f03da5613523e5d81a5b155a_tuple, 10, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    PyTuple_SET_ITEM( const_tuple_7cc06022f03da5613523e5d81a5b155a_tuple, 11, const_str_plain_step ); Py_INCREF( const_str_plain_step );
    const_str_plain_cost_change = UNSTREAM_STRING_ASCII( &constant_bin[ 4894766 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_7cc06022f03da5613523e5d81a5b155a_tuple, 12, const_str_plain_cost_change ); Py_INCREF( const_str_plain_cost_change );
    PyTuple_SET_ITEM( const_tuple_7cc06022f03da5613523e5d81a5b155a_tuple, 13, const_str_plain_active ); Py_INCREF( const_str_plain_active );
    const_str_plain_copy_R = UNSTREAM_STRING_ASCII( &constant_bin[ 4951518 ], 6, 1 );
    const_str_plain_backtracking = UNSTREAM_STRING_ASCII( &constant_bin[ 3982222 ], 12, 1 );
    const_str_plain_QTb = UNSTREAM_STRING_ASCII( &constant_bin[ 4951524 ], 3, 1 );
    const_str_digest_738662035d52108c68681765bdddef27 = UNSTREAM_STRING_ASCII( &constant_bin[ 4951527 ], 969, 0 );
    const_tuple_str_plain_qr_str_plain_solve_triangular_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_qr_str_plain_solve_triangular_tuple, 0, const_str_plain_qr ); Py_INCREF( const_str_plain_qr );
    PyTuple_SET_ITEM( const_tuple_str_plain_qr_str_plain_solve_triangular_tuple, 1, const_str_plain_solve_triangular ); Py_INCREF( const_str_plain_solve_triangular );
    const_tuple_87efbfe8c5c12441f046ca1d852fa225_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_87efbfe8c5c12441f046ca1d852fa225_tuple, 0, const_str_plain_EPS ); Py_INCREF( const_str_plain_EPS );
    PyTuple_SET_ITEM( const_tuple_87efbfe8c5c12441f046ca1d852fa225_tuple, 1, const_str_plain_step_size_to_bound ); Py_INCREF( const_str_plain_step_size_to_bound );
    PyTuple_SET_ITEM( const_tuple_87efbfe8c5c12441f046ca1d852fa225_tuple, 2, const_str_plain_find_active_constraints ); Py_INCREF( const_str_plain_find_active_constraints );
    PyTuple_SET_ITEM( const_tuple_87efbfe8c5c12441f046ca1d852fa225_tuple, 3, const_str_plain_in_bounds ); Py_INCREF( const_str_plain_in_bounds );
    PyTuple_SET_ITEM( const_tuple_87efbfe8c5c12441f046ca1d852fa225_tuple, 4, const_str_plain_make_strictly_feasible ); Py_INCREF( const_str_plain_make_strictly_feasible );
    PyTuple_SET_ITEM( const_tuple_87efbfe8c5c12441f046ca1d852fa225_tuple, 5, const_str_plain_build_quadratic_1d ); Py_INCREF( const_str_plain_build_quadratic_1d );
    PyTuple_SET_ITEM( const_tuple_87efbfe8c5c12441f046ca1d852fa225_tuple, 6, const_str_plain_evaluate_quadratic ); Py_INCREF( const_str_plain_evaluate_quadratic );
    PyTuple_SET_ITEM( const_tuple_87efbfe8c5c12441f046ca1d852fa225_tuple, 7, const_str_plain_minimize_quadratic_1d ); Py_INCREF( const_str_plain_minimize_quadratic_1d );
    PyTuple_SET_ITEM( const_tuple_87efbfe8c5c12441f046ca1d852fa225_tuple, 8, const_str_plain_CL_scaling_vector ); Py_INCREF( const_str_plain_CL_scaling_vector );
    PyTuple_SET_ITEM( const_tuple_87efbfe8c5c12441f046ca1d852fa225_tuple, 9, const_str_plain_reflective_transformation ); Py_INCREF( const_str_plain_reflective_transformation );
    PyTuple_SET_ITEM( const_tuple_87efbfe8c5c12441f046ca1d852fa225_tuple, 10, const_str_plain_print_header_linear ); Py_INCREF( const_str_plain_print_header_linear );
    PyTuple_SET_ITEM( const_tuple_87efbfe8c5c12441f046ca1d852fa225_tuple, 11, const_str_plain_print_iteration_linear ); Py_INCREF( const_str_plain_print_iteration_linear );
    PyTuple_SET_ITEM( const_tuple_87efbfe8c5c12441f046ca1d852fa225_tuple, 12, const_str_plain_compute_grad ); Py_INCREF( const_str_plain_compute_grad );
    PyTuple_SET_ITEM( const_tuple_87efbfe8c5c12441f046ca1d852fa225_tuple, 13, const_str_plain_regularized_lsq_operator ); Py_INCREF( const_str_plain_regularized_lsq_operator );
    PyTuple_SET_ITEM( const_tuple_87efbfe8c5c12441f046ca1d852fa225_tuple, 14, const_str_plain_right_multiplied_operator ); Py_INCREF( const_str_plain_right_multiplied_operator );
    const_str_digest_29ac42750ac44bfb235fc3fa0b836d65 = UNSTREAM_STRING_ASCII( &constant_bin[ 4952496 ], 39, 0 );
    const_tuple_str_plain_givens_elimination_tuple = PyTuple_New( 1 );
    const_str_plain_givens_elimination = UNSTREAM_STRING_ASCII( &constant_bin[ 4952535 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_givens_elimination_tuple, 0, const_str_plain_givens_elimination ); Py_INCREF( const_str_plain_givens_elimination );
    const_dict_5ea4d698a7aedc6eda7ae3bd07579784 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_5ea4d698a7aedc6eda7ae3bd07579784, const_str_plain_rstep, const_float_0_1 );
    assert( PyDict_Size( const_dict_5ea4d698a7aedc6eda7ae3bd07579784 ) == 1 );
    const_str_digest_7f2c2a7b9730b57afe019b1f7f45dea6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4952553 ], 61, 0 );
    const_str_digest_88c713e4276b342a3d57c07d6a97af50 = UNSTREAM_STRING_ASCII( &constant_bin[ 4952614 ], 87, 0 );
    const_tuple_aa3f3cf3369e9bc6540453be8065abd9_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_aa3f3cf3369e9bc6540453be8065abd9_tuple, 0, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_aa3f3cf3369e9bc6540453be8065abd9_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_aa3f3cf3369e9bc6540453be8065abd9_tuple, 2, const_str_plain_R ); Py_INCREF( const_str_plain_R );
    PyTuple_SET_ITEM( const_tuple_aa3f3cf3369e9bc6540453be8065abd9_tuple, 3, const_str_plain_QTb ); Py_INCREF( const_str_plain_QTb );
    PyTuple_SET_ITEM( const_tuple_aa3f3cf3369e9bc6540453be8065abd9_tuple, 4, const_str_plain_perm ); Py_INCREF( const_str_plain_perm );
    PyTuple_SET_ITEM( const_tuple_aa3f3cf3369e9bc6540453be8065abd9_tuple, 5, const_str_plain_diag ); Py_INCREF( const_str_plain_diag );
    PyTuple_SET_ITEM( const_tuple_aa3f3cf3369e9bc6540453be8065abd9_tuple, 6, const_str_plain_copy_R ); Py_INCREF( const_str_plain_copy_R );
    PyTuple_SET_ITEM( const_tuple_aa3f3cf3369e9bc6540453be8065abd9_tuple, 7, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_aa3f3cf3369e9bc6540453be8065abd9_tuple, 8, const_str_plain_abs_diag_R ); Py_INCREF( const_str_plain_abs_diag_R );
    PyTuple_SET_ITEM( const_tuple_aa3f3cf3369e9bc6540453be8065abd9_tuple, 9, const_str_plain_threshold ); Py_INCREF( const_str_plain_threshold );
    const_str_plain_nns = UNSTREAM_STRING_ASCII( &constant_bin[ 4952701 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_aa3f3cf3369e9bc6540453be8065abd9_tuple, 10, const_str_plain_nns ); Py_INCREF( const_str_plain_nns );
    PyTuple_SET_ITEM( const_tuple_aa3f3cf3369e9bc6540453be8065abd9_tuple, 11, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_regularized_lsq_with_qr = UNSTREAM_STRING_ASCII( &constant_bin[ 4952704 ], 23, 1 );
    const_dict_b47cc4e2af5f5a52abdf7bc37c53f7ed = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_b47cc4e2af5f5a52abdf7bc37c53f7ed, const_str_plain_copy_R, Py_False );
    assert( PyDict_Size( const_dict_b47cc4e2af5f5a52abdf7bc37c53f7ed ) == 1 );
    const_tuple_53041f9b128185901d5b6ba997a45e48_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4952727 ], 321 );
    const_str_digest_30f5020472a9aef90c1919d032c2e9a0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4953048 ], 33, 0 );
    const_tuple_29be6375133ad24d2ede57d81a99c830_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4953081 ], 190 );
    const_dict_577e871802a52931bcc1cbab7aa45b64 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_577e871802a52931bcc1cbab7aa45b64, const_str_plain_mode, const_str_plain_economic );
    PyDict_SetItem( const_dict_577e871802a52931bcc1cbab7aa45b64, const_str_plain_pivoting, Py_True );
    assert( PyDict_Size( const_dict_577e871802a52931bcc1cbab7aa45b64 ) == 2 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_lsq$trf_linear( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_fb21ffa70d6308617c2a95754423f1e3;
static PyCodeObject *codeobj_902dc52ed0a5cbe247c315f72f156e46;
static PyCodeObject *codeobj_6b9d522e331ef35741cf290984accc1b;
static PyCodeObject *codeobj_5ca30250c19b6f5cad0755ee3e4b5bf4;
static PyCodeObject *codeobj_18551173f3b3a121ef03d742dcd11c42;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_30f5020472a9aef90c1919d032c2e9a0 );
    codeobj_fb21ffa70d6308617c2a95754423f1e3 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_29ac42750ac44bfb235fc3fa0b836d65, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_902dc52ed0a5cbe247c315f72f156e46 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_backtracking, 72, const_tuple_7cc06022f03da5613523e5d81a5b155a_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6b9d522e331ef35741cf290984accc1b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_regularized_lsq_with_qr, 20, const_tuple_aa3f3cf3369e9bc6540453be8065abd9_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5ca30250c19b6f5cad0755ee3e4b5bf4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_select_step, 93, const_tuple_29be6375133ad24d2ede57d81a99c830_tuple, 10, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_18551173f3b3a121ef03d742dcd11c42 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_trf_linear, 145, const_tuple_53041f9b128185901d5b6ba997a45e48_tuple, 10, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$trf_linear$$$function_1_regularized_lsq_with_qr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$trf_linear$$$function_2_backtracking(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$trf_linear$$$function_3_select_step(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$trf_linear$$$function_4_trf_linear(  );


// The module function definitions.
static PyObject *impl_scipy$optimize$_lsq$trf_linear$$$function_1_regularized_lsq_with_qr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_R = python_pars[ 2 ];
    PyObject *par_QTb = python_pars[ 3 ];
    PyObject *par_perm = python_pars[ 4 ];
    PyObject *par_diag = python_pars[ 5 ];
    PyObject *par_copy_R = python_pars[ 6 ];
    PyObject *var_v = NULL;
    PyObject *var_abs_diag_R = NULL;
    PyObject *var_threshold = NULL;
    PyObject *var_nns = NULL;
    PyObject *var_x = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6b9d522e331ef35741cf290984accc1b;
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
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6b9d522e331ef35741cf290984accc1b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6b9d522e331ef35741cf290984accc1b, codeobj_6b9d522e331ef35741cf290984accc1b, module_scipy$optimize$_lsq$trf_linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6b9d522e331ef35741cf290984accc1b = cache_frame_6b9d522e331ef35741cf290984accc1b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6b9d522e331ef35741cf290984accc1b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6b9d522e331ef35741cf290984accc1b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_copy_R );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_copy_R );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oooooooooooo";
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
            CHECK_OBJECT( par_R );
            tmp_called_instance_1 = par_R;
            frame_6b9d522e331ef35741cf290984accc1b->m_frame.f_lineno = 54;
            tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_R;
                assert( old != NULL );
                par_R = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_QTb );
        tmp_called_instance_2 = par_QTb;
        frame_6b9d522e331ef35741cf290984accc1b->m_frame.f_lineno = 55;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_copy );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_givens_elimination );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_givens_elimination );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "givens_elimination" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 57;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_R );
        tmp_args_element_name_1 = par_R;
        CHECK_OBJECT( var_v );
        tmp_args_element_name_2 = var_v;
        CHECK_OBJECT( par_diag );
        tmp_subscribed_name_1 = par_diag;
        CHECK_OBJECT( par_perm );
        tmp_subscript_name_1 = par_perm;
        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6b9d522e331ef35741cf290984accc1b->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 59;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_abs );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 59;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_R );
        tmp_args_element_name_5 = par_R;
        frame_6b9d522e331ef35741cf290984accc1b->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_diag, call_args );
        }

        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 59;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6b9d522e331ef35741cf290984accc1b->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_abs_diag_R == NULL );
        var_abs_diag_R = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_EPS );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EPS );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EPS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 60;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_2 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_3 != NULL );
        CHECK_OBJECT( par_m );
        tmp_args_element_name_6 = par_m;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_7 = par_n;
        frame_6b9d522e331ef35741cf290984accc1b->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 60;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_5;
        CHECK_OBJECT( var_abs_diag_R );
        tmp_args_element_name_8 = var_abs_diag_R;
        frame_6b9d522e331ef35741cf290984accc1b->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_right_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_max, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 60;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_threshold == NULL );
        var_threshold = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 61;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_2 = tmp_mvar_value_6;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_nonzero );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_abs_diag_R );
        tmp_compexpr_left_1 = var_abs_diag_R;
        CHECK_OBJECT( var_threshold );
        tmp_compexpr_right_1 = var_threshold;
        tmp_args_element_name_9 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 61;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        frame_6b9d522e331ef35741cf290984accc1b->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0, 1 );
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 61;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
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

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 61;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooooo";
            exception_lineno = 61;
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
        assert( var_nns == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_nns = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT( par_R );
        tmp_subscribed_name_2 = par_R;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 63;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_7;
        CHECK_OBJECT( var_nns );
        tmp_args_element_name_10 = var_nns;
        CHECK_OBJECT( var_nns );
        tmp_args_element_name_11 = var_nns;
        frame_6b9d522e331ef35741cf290984accc1b->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_subscript_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_ix_, call_args );
        }

        if ( tmp_subscript_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_R;
            assert( old != NULL );
            par_R = tmp_assign_source_8;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( var_v );
        tmp_subscribed_name_3 = var_v;
        CHECK_OBJECT( var_nns );
        tmp_subscript_name_3 = var_nns;
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_v;
            assert( old != NULL );
            var_v = tmp_assign_source_9;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 66;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_8;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_12 = par_n;
        frame_6b9d522e331ef35741cf290984accc1b->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_zeros, call_args );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_10;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_solve_triangular );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_triangular );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_triangular" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 67;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_9;
        CHECK_OBJECT( par_R );
        tmp_args_element_name_13 = par_R;
        CHECK_OBJECT( var_v );
        tmp_args_element_name_14 = var_v;
        frame_6b9d522e331ef35741cf290984accc1b->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x );
        tmp_ass_subscribed_1 = var_x;
        CHECK_OBJECT( par_perm );
        tmp_subscribed_name_4 = par_perm;
        CHECK_OBJECT( var_nns );
        tmp_subscript_name_4 = var_nns;
        tmp_ass_subscript_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_ass_subscript_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 67;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b9d522e331ef35741cf290984accc1b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b9d522e331ef35741cf290984accc1b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6b9d522e331ef35741cf290984accc1b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6b9d522e331ef35741cf290984accc1b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6b9d522e331ef35741cf290984accc1b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6b9d522e331ef35741cf290984accc1b,
        type_description_1,
        par_m,
        par_n,
        par_R,
        par_QTb,
        par_perm,
        par_diag,
        par_copy_R,
        var_v,
        var_abs_diag_R,
        var_threshold,
        var_nns,
        var_x
    );


    // Release cached frame.
    if ( frame_6b9d522e331ef35741cf290984accc1b == cache_frame_6b9d522e331ef35741cf290984accc1b )
    {
        Py_DECREF( frame_6b9d522e331ef35741cf290984accc1b );
    }
    cache_frame_6b9d522e331ef35741cf290984accc1b = NULL;

    assertFrameObject( frame_6b9d522e331ef35741cf290984accc1b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_x );
    tmp_return_value = var_x;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$trf_linear$$$function_1_regularized_lsq_with_qr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_R );
    Py_DECREF( par_R );
    par_R = NULL;

    CHECK_OBJECT( (PyObject *)par_QTb );
    Py_DECREF( par_QTb );
    par_QTb = NULL;

    CHECK_OBJECT( (PyObject *)par_perm );
    Py_DECREF( par_perm );
    par_perm = NULL;

    CHECK_OBJECT( (PyObject *)par_diag );
    Py_DECREF( par_diag );
    par_diag = NULL;

    CHECK_OBJECT( (PyObject *)par_copy_R );
    Py_DECREF( par_copy_R );
    par_copy_R = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)var_abs_diag_R );
    Py_DECREF( var_abs_diag_R );
    var_abs_diag_R = NULL;

    CHECK_OBJECT( (PyObject *)var_threshold );
    Py_DECREF( var_threshold );
    var_threshold = NULL;

    CHECK_OBJECT( (PyObject *)var_nns );
    Py_DECREF( var_nns );
    var_nns = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    Py_XDECREF( par_R );
    par_R = NULL;

    CHECK_OBJECT( (PyObject *)par_QTb );
    Py_DECREF( par_QTb );
    par_QTb = NULL;

    CHECK_OBJECT( (PyObject *)par_perm );
    Py_DECREF( par_perm );
    par_perm = NULL;

    CHECK_OBJECT( (PyObject *)par_diag );
    Py_DECREF( par_diag );
    par_diag = NULL;

    CHECK_OBJECT( (PyObject *)par_copy_R );
    Py_DECREF( par_copy_R );
    par_copy_R = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_abs_diag_R );
    var_abs_diag_R = NULL;

    Py_XDECREF( var_threshold );
    var_threshold = NULL;

    Py_XDECREF( var_nns );
    var_nns = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$trf_linear$$$function_1_regularized_lsq_with_qr );
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


static PyObject *impl_scipy$optimize$_lsq$trf_linear$$$function_2_backtracking( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_g = python_pars[ 1 ];
    PyObject *par_x = python_pars[ 2 ];
    PyObject *par_p = python_pars[ 3 ];
    PyObject *par_theta = python_pars[ 4 ];
    PyObject *par_p_dot_g = python_pars[ 5 ];
    PyObject *par_lb = python_pars[ 6 ];
    PyObject *par_ub = python_pars[ 7 ];
    PyObject *var_alpha = NULL;
    PyObject *var_x_new = NULL;
    PyObject *var__ = NULL;
    PyObject *var_step = NULL;
    PyObject *var_cost_change = NULL;
    PyObject *var_active = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_902dc52ed0a5cbe247c315f72f156e46;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_902dc52ed0a5cbe247c315f72f156e46 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_pos_1;
        assert( var_alpha == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_alpha = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_902dc52ed0a5cbe247c315f72f156e46, codeobj_902dc52ed0a5cbe247c315f72f156e46, module_scipy$optimize$_lsq$trf_linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_902dc52ed0a5cbe247c315f72f156e46 = cache_frame_902dc52ed0a5cbe247c315f72f156e46;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_902dc52ed0a5cbe247c315f72f156e46 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_902dc52ed0a5cbe247c315f72f156e46 ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_reflective_transformation );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reflective_transformation );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "reflective_transformation" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_left_name_1 = par_x;
        CHECK_OBJECT( var_alpha );
        tmp_left_name_2 = var_alpha;
        CHECK_OBJECT( par_p );
        tmp_right_name_2 = par_p;
        tmp_right_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_2 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_3 = par_ub;
        frame_902dc52ed0a5cbe247c315f72f156e46->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 76;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 76;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 76;
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

            type_description_1 = "oooooooooooooo";
            exception_lineno = 76;
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_x_new;
            var_x_new = tmp_assign_source_5;
            Py_INCREF( var_x_new );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_6;
            Py_INCREF( var__ );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_x_new );
        tmp_left_name_3 = var_x_new;
        CHECK_OBJECT( par_x );
        tmp_right_name_3 = par_x;
        tmp_assign_source_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_step;
            var_step = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_evaluate_quadratic );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_evaluate_quadratic );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "evaluate_quadratic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_4 = par_A;
        CHECK_OBJECT( par_g );
        tmp_args_element_name_5 = par_g;
        CHECK_OBJECT( var_step );
        tmp_args_element_name_6 = var_step;
        frame_902dc52ed0a5cbe247c315f72f156e46->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_cost_change;
            var_cost_change = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( var_cost_change );
        tmp_compexpr_left_1 = var_cost_change;
        tmp_left_name_5 = const_float_minus_0_1;
        CHECK_OBJECT( var_alpha );
        tmp_right_name_4 = var_alpha;
        tmp_left_name_4 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_5, tmp_right_name_4 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_p_dot_g );
        tmp_right_name_5 = par_p_dot_g;
        tmp_compexpr_right_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "oooooooooooooo";
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( var_alpha );
        tmp_left_name_6 = var_alpha;
        tmp_right_name_6 = const_float_0_5;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = tmp_left_name_6;
        var_alpha = tmp_assign_source_9;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_find_active_constraints );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_find_active_constraints );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "find_active_constraints" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 83;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_x_new );
        tmp_args_element_name_7 = var_x_new;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_8 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_9 = par_ub;
        frame_902dc52ed0a5cbe247c315f72f156e46->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_active == NULL );
        var_active = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        int tmp_truth_name_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 84;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_4;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_any );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_active );
        tmp_compexpr_left_2 = var_active;
        tmp_compexpr_right_2 = const_int_0;
        tmp_args_element_name_10 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 84;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_902dc52ed0a5cbe247c315f72f156e46->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 84;
            type_description_1 = "oooooooooooooo";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_left_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_8;
            PyObject *tmp_right_name_9;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_reflective_transformation );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reflective_transformation );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "reflective_transformation" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 85;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_called_name_5 = tmp_mvar_value_5;
            CHECK_OBJECT( par_x );
            tmp_left_name_7 = par_x;
            CHECK_OBJECT( par_theta );
            tmp_left_name_9 = par_theta;
            CHECK_OBJECT( var_alpha );
            tmp_right_name_8 = var_alpha;
            tmp_left_name_8 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_8 );
            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( par_p );
            tmp_right_name_9 = par_p;
            tmp_right_name_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_9 );
            Py_DECREF( tmp_left_name_8 );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_args_element_name_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_args_element_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( par_lb );
            tmp_args_element_name_12 = par_lb;
            CHECK_OBJECT( par_ub );
            tmp_args_element_name_13 = par_ub;
            frame_902dc52ed0a5cbe247c315f72f156e46->m_frame.f_lineno = 85;
            {
                PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "oooooooooooooo";
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


                type_description_1 = "oooooooooooooo";
                exception_lineno = 85;
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


                type_description_1 = "oooooooooooooo";
                exception_lineno = 85;
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

                        type_description_1 = "oooooooooooooo";
                        exception_lineno = 85;
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

                type_description_1 = "oooooooooooooo";
                exception_lineno = 85;
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
            {
                PyObject *old = var_x_new;
                assert( old != NULL );
                var_x_new = tmp_assign_source_14;
                Py_INCREF( var_x_new );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_15 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var__;
                assert( old != NULL );
                var__ = tmp_assign_source_15;
                Py_INCREF( var__ );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_make_strictly_feasible );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_make_strictly_feasible );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "make_strictly_feasible" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 86;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_6 = tmp_mvar_value_6;
            CHECK_OBJECT( var_x_new );
            tmp_tuple_element_1 = var_x_new;
            tmp_args_name_1 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_lb );
            tmp_tuple_element_1 = par_lb;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( par_ub );
            tmp_tuple_element_1 = par_ub;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_4d00801cbb538f761d0649b12a6bb7a7 );
            frame_902dc52ed0a5cbe247c315f72f156e46->m_frame.f_lineno = 86;
            tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 86;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_x_new;
                assert( old != NULL );
                var_x_new = tmp_assign_source_16;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            CHECK_OBJECT( var_x_new );
            tmp_left_name_10 = var_x_new;
            CHECK_OBJECT( par_x );
            tmp_right_name_10 = par_x;
            tmp_assign_source_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 87;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_step;
                assert( old != NULL );
                var_step = tmp_assign_source_17;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_args_element_name_16;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_evaluate_quadratic );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_evaluate_quadratic );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "evaluate_quadratic" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 88;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_7;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_14 = par_A;
            CHECK_OBJECT( par_g );
            tmp_args_element_name_15 = par_g;
            CHECK_OBJECT( var_step );
            tmp_args_element_name_16 = var_step;
            frame_902dc52ed0a5cbe247c315f72f156e46->m_frame.f_lineno = 88;
            {
                PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16 };
                tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
            }

            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_18 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_cost_change;
                assert( old != NULL );
                var_cost_change = tmp_assign_source_18;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_902dc52ed0a5cbe247c315f72f156e46 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_902dc52ed0a5cbe247c315f72f156e46 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_902dc52ed0a5cbe247c315f72f156e46, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_902dc52ed0a5cbe247c315f72f156e46->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_902dc52ed0a5cbe247c315f72f156e46, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_902dc52ed0a5cbe247c315f72f156e46,
        type_description_1,
        par_A,
        par_g,
        par_x,
        par_p,
        par_theta,
        par_p_dot_g,
        par_lb,
        par_ub,
        var_alpha,
        var_x_new,
        var__,
        var_step,
        var_cost_change,
        var_active
    );


    // Release cached frame.
    if ( frame_902dc52ed0a5cbe247c315f72f156e46 == cache_frame_902dc52ed0a5cbe247c315f72f156e46 )
    {
        Py_DECREF( frame_902dc52ed0a5cbe247c315f72f156e46 );
    }
    cache_frame_902dc52ed0a5cbe247c315f72f156e46 = NULL;

    assertFrameObject( frame_902dc52ed0a5cbe247c315f72f156e46 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( par_x );
        tmp_tuple_element_2 = par_x;
        tmp_return_value = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_step );
        tmp_tuple_element_2 = var_step;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( var_cost_change );
        tmp_tuple_element_2 = var_cost_change;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$trf_linear$$$function_2_backtracking );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_theta );
    Py_DECREF( par_theta );
    par_theta = NULL;

    CHECK_OBJECT( (PyObject *)par_p_dot_g );
    Py_DECREF( par_p_dot_g );
    par_p_dot_g = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)var_alpha );
    Py_DECREF( var_alpha );
    var_alpha = NULL;

    CHECK_OBJECT( (PyObject *)var_x_new );
    Py_DECREF( var_x_new );
    var_x_new = NULL;

    CHECK_OBJECT( (PyObject *)var__ );
    Py_DECREF( var__ );
    var__ = NULL;

    CHECK_OBJECT( (PyObject *)var_step );
    Py_DECREF( var_step );
    var_step = NULL;

    CHECK_OBJECT( (PyObject *)var_cost_change );
    Py_DECREF( var_cost_change );
    var_cost_change = NULL;

    CHECK_OBJECT( (PyObject *)var_active );
    Py_DECREF( var_active );
    var_active = NULL;

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

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_theta );
    Py_DECREF( par_theta );
    par_theta = NULL;

    CHECK_OBJECT( (PyObject *)par_p_dot_g );
    Py_DECREF( par_p_dot_g );
    par_p_dot_g = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)var_alpha );
    Py_DECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_x_new );
    var_x_new = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_cost_change );
    var_cost_change = NULL;

    Py_XDECREF( var_active );
    var_active = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$trf_linear$$$function_2_backtracking );
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


static PyObject *impl_scipy$optimize$_lsq$trf_linear$$$function_3_select_step( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_A_h = python_pars[ 1 ];
    PyObject *par_g_h = python_pars[ 2 ];
    PyObject *par_c_h = python_pars[ 3 ];
    PyObject *par_p = python_pars[ 4 ];
    PyObject *par_p_h = python_pars[ 5 ];
    PyObject *par_d = python_pars[ 6 ];
    PyObject *par_lb = python_pars[ 7 ];
    PyObject *par_ub = python_pars[ 8 ];
    PyObject *par_theta = python_pars[ 9 ];
    PyObject *var_p_stride = NULL;
    PyObject *var_hits = NULL;
    PyObject *var_r_h = NULL;
    PyObject *var_r = NULL;
    PyObject *var_x_on_bound = NULL;
    PyObject *var_r_stride_u = NULL;
    PyObject *var__ = NULL;
    PyObject *var_r_stride_l = NULL;
    PyObject *var_a = NULL;
    PyObject *var_b = NULL;
    PyObject *var_c = NULL;
    PyObject *var_r_stride = NULL;
    PyObject *var_r_value = NULL;
    PyObject *var_p_value = NULL;
    PyObject *var_ag_h = NULL;
    PyObject *var_ag = NULL;
    PyObject *var_ag_stride_u = NULL;
    PyObject *var_ag_stride = NULL;
    PyObject *var_ag_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    struct Nuitka_FrameObject *frame_5ca30250c19b6f5cad0755ee3e4b5bf4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    static struct Nuitka_FrameObject *cache_frame_5ca30250c19b6f5cad0755ee3e4b5bf4 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5ca30250c19b6f5cad0755ee3e4b5bf4, codeobj_5ca30250c19b6f5cad0755ee3e4b5bf4, module_scipy$optimize$_lsq$trf_linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5ca30250c19b6f5cad0755ee3e4b5bf4 = cache_frame_5ca30250c19b6f5cad0755ee3e4b5bf4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5ca30250c19b6f5cad0755ee3e4b5bf4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5ca30250c19b6f5cad0755ee3e4b5bf4 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_in_bounds );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_in_bounds );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "in_bounds" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_left_name_1 = par_x;
        CHECK_OBJECT( par_p );
        tmp_right_name_1 = par_p;
        tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_2 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_3 = par_ub;
        frame_5ca30250c19b6f5cad0755ee3e4b5bf4->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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
        CHECK_OBJECT( par_p );
        tmp_return_value = par_p;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_step_size_to_bound );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_step_size_to_bound );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "step_size_to_bound" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_4 = par_x;
        CHECK_OBJECT( par_p );
        tmp_args_element_name_5 = par_p;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_6 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_7 = par_ub;
        frame_5ca30250c19b6f5cad0755ee3e4b5bf4->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 98;
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 98;
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

                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    exception_lineno = 98;
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

            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 98;
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
        assert( var_p_stride == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_p_stride = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_hits == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_hits = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 99;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_p_h );
        tmp_args_element_name_8 = par_p_h;
        frame_5ca30250c19b6f5cad0755ee3e4b5bf4->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_copy, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r_h == NULL );
        var_r_h = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( var_r_h );
        tmp_assign_source_7 = var_r_h;
        assert( tmp_inplace_assign_subscr_1__target == NULL );
        Py_INCREF( tmp_assign_source_7 );
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( var_hits );
        tmp_called_instance_2 = var_hits;
        frame_5ca30250c19b6f5cad0755ee3e4b5bf4->m_frame.f_lineno = 100;
        tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_astype, &PyTuple_GET_ITEM( const_tuple_type_bool_tuple, 0 ) );

        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_inplace_assign_subscr_1__subscript == NULL );
        tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_8;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_subscribed_name_1 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_subscript_name_1 = tmp_inplace_assign_subscr_1__subscript;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_2 = const_int_neg_1;
        tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_ass_subscript_1 = tmp_inplace_assign_subscr_1__subscript;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    Py_XDECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( par_d );
        tmp_left_name_3 = par_d;
        CHECK_OBJECT( var_r_h );
        tmp_right_name_3 = var_r_h;
        tmp_assign_source_9 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( par_p );
        tmp_left_name_4 = par_p;
        CHECK_OBJECT( var_p_stride );
        tmp_right_name_4 = var_p_stride;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = tmp_left_name_4;
        par_p = tmp_assign_source_10;

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( par_p_h );
        tmp_left_name_5 = par_p_h;
        CHECK_OBJECT( var_p_stride );
        tmp_right_name_5 = var_p_stride;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = tmp_left_name_5;
        par_p_h = tmp_assign_source_11;

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( par_x );
        tmp_left_name_6 = par_x;
        CHECK_OBJECT( par_p );
        tmp_right_name_6 = par_p;
        tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x_on_bound == NULL );
        var_x_on_bound = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_step_size_to_bound );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_step_size_to_bound );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "step_size_to_bound" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 109;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( var_x_on_bound );
        tmp_args_element_name_9 = var_x_on_bound;
        CHECK_OBJECT( var_r );
        tmp_args_element_name_10 = var_r;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_11 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_12 = par_ub;
        frame_5ca30250c19b6f5cad0755ee3e4b5bf4->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 109;
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 109;
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_15;
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

                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    exception_lineno = 109;
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

            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 109;
            goto try_except_handler_6;
        }
    }
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_1;
        assert( var_r_stride_u == NULL );
        Py_INCREF( tmp_assign_source_16 );
        var_r_stride_u = tmp_assign_source_16;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_2;
        assert( var__ == NULL );
        Py_INCREF( tmp_assign_source_17 );
        var__ = tmp_assign_source_17;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        tmp_left_name_8 = const_int_pos_1;
        CHECK_OBJECT( par_theta );
        tmp_right_name_7 = par_theta;
        tmp_left_name_7 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_8, tmp_right_name_7 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_r_stride_u );
        tmp_right_name_8 = var_r_stride_u;
        tmp_assign_source_18 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_7 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r_stride_l == NULL );
        var_r_stride_l = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT( var_r_stride_u );
        tmp_left_name_9 = var_r_stride_u;
        CHECK_OBJECT( par_theta );
        tmp_right_name_9 = par_theta;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = tmp_left_name_9;
        var_r_stride_u = tmp_assign_source_19;

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_r_stride_u );
        tmp_compexpr_left_1 = var_r_stride_u;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
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
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_build_quadratic_1d );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_build_quadratic_1d );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "build_quadratic_1d" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 116;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }

            tmp_called_name_4 = tmp_mvar_value_5;
            CHECK_OBJECT( par_A_h );
            tmp_tuple_element_1 = par_A_h;
            tmp_args_name_1 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_g_h );
            tmp_tuple_element_1 = par_g_h;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( var_r_h );
            tmp_tuple_element_1 = var_r_h;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_s0;
            CHECK_OBJECT( par_p_h );
            tmp_dict_value_1 = par_p_h;
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_diag;
            CHECK_OBJECT( par_c_h );
            tmp_dict_value_2 = par_c_h;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_5ca30250c19b6f5cad0755ee3e4b5bf4->m_frame.f_lineno = 116;
            tmp_iter_arg_3 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__source_iter == NULL );
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_20;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_5, 0, 3 );
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


                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 116;
                goto try_except_handler_8;
            }
            assert( tmp_tuple_unpack_3__element_1 == NULL );
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_21;
        }
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_6, 1, 3 );
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


                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 116;
                goto try_except_handler_8;
            }
            assert( tmp_tuple_unpack_3__element_2 == NULL );
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_22;
        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_7, 2, 3 );
            if ( tmp_assign_source_23 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 116;
                goto try_except_handler_8;
            }
            assert( tmp_tuple_unpack_3__element_3 == NULL );
            tmp_tuple_unpack_3__element_3 = tmp_assign_source_23;
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

                        type_description_1 = "ooooooooooooooooooooooooooooo";
                        exception_lineno = 116;
                        goto try_except_handler_8;
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

                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 116;
                goto try_except_handler_8;
            }
        }
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        try_end_6:;
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

        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_3__element_3 );
        tmp_tuple_unpack_3__element_3 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_1;
        // End of try:
        try_end_7:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        {
            PyObject *tmp_assign_source_24;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_24 = tmp_tuple_unpack_3__element_1;
            assert( var_a == NULL );
            Py_INCREF( tmp_assign_source_24 );
            var_a = tmp_assign_source_24;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_25 = tmp_tuple_unpack_3__element_2;
            assert( var_b == NULL );
            Py_INCREF( tmp_assign_source_25 );
            var_b = tmp_assign_source_25;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_3 );
            tmp_assign_source_26 = tmp_tuple_unpack_3__element_3;
            assert( var_c == NULL );
            Py_INCREF( tmp_assign_source_26 );
            var_c = tmp_assign_source_26;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_3 );
        tmp_tuple_unpack_3__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_minimize_quadratic_1d );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_minimize_quadratic_1d );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "minimize_quadratic_1d" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 117;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }

            tmp_called_name_5 = tmp_mvar_value_6;
            CHECK_OBJECT( var_a );
            tmp_tuple_element_2 = var_a;
            tmp_args_name_2 = PyTuple_New( 4 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_b );
            tmp_tuple_element_2 = var_b;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( var_r_stride_l );
            tmp_tuple_element_2 = var_r_stride_l;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( var_r_stride_u );
            tmp_tuple_element_2 = var_r_stride_u;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 3, tmp_tuple_element_2 );
            tmp_dict_key_3 = const_str_plain_c;
            CHECK_OBJECT( var_c );
            tmp_dict_value_3 = var_c;
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_5ca30250c19b6f5cad0755ee3e4b5bf4->m_frame.f_lineno = 117;
            tmp_iter_arg_4 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_iter_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 117;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_4 );
            Py_DECREF( tmp_iter_arg_4 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 117;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            assert( tmp_tuple_unpack_4__source_iter == NULL );
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_27;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_28 = UNPACK_NEXT( tmp_unpack_8, 0, 2 );
            if ( tmp_assign_source_28 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 117;
                goto try_except_handler_10;
            }
            assert( tmp_tuple_unpack_4__element_1 == NULL );
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_unpack_9;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_29 = UNPACK_NEXT( tmp_unpack_9, 1, 2 );
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


                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 117;
                goto try_except_handler_10;
            }
            assert( tmp_tuple_unpack_4__element_2 == NULL );
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_29;
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

                        type_description_1 = "ooooooooooooooooooooooooooooo";
                        exception_lineno = 117;
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

                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 117;
                goto try_except_handler_10;
            }
        }
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
        Py_DECREF( tmp_tuple_unpack_4__source_iter );
        tmp_tuple_unpack_4__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        try_end_8:;
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

        Py_XDECREF( tmp_tuple_unpack_4__element_1 );
        tmp_tuple_unpack_4__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_4__element_2 );
        tmp_tuple_unpack_4__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_1;
        // End of try:
        try_end_9:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
        Py_DECREF( tmp_tuple_unpack_4__source_iter );
        tmp_tuple_unpack_4__source_iter = NULL;

        {
            PyObject *tmp_assign_source_30;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
            tmp_assign_source_30 = tmp_tuple_unpack_4__element_1;
            assert( var_r_stride == NULL );
            Py_INCREF( tmp_assign_source_30 );
            var_r_stride = tmp_assign_source_30;
        }
        Py_XDECREF( tmp_tuple_unpack_4__element_1 );
        tmp_tuple_unpack_4__element_1 = NULL;

        {
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
            tmp_assign_source_31 = tmp_tuple_unpack_4__element_2;
            assert( var_r_value == NULL );
            Py_INCREF( tmp_assign_source_31 );
            var_r_value = tmp_assign_source_31;
        }
        Py_XDECREF( tmp_tuple_unpack_4__element_2 );
        tmp_tuple_unpack_4__element_2 = NULL;

        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            CHECK_OBJECT( par_p_h );
            tmp_left_name_10 = par_p_h;
            CHECK_OBJECT( var_r_h );
            tmp_left_name_11 = var_r_h;
            CHECK_OBJECT( var_r_stride );
            tmp_right_name_11 = var_r_stride;
            tmp_right_name_10 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
            if ( tmp_right_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_32 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
            Py_DECREF( tmp_right_name_10 );
            if ( tmp_assign_source_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_r_h;
                assert( old != NULL );
                var_r_h = tmp_assign_source_32;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_12;
            CHECK_OBJECT( par_d );
            tmp_left_name_12 = par_d;
            CHECK_OBJECT( var_r_h );
            tmp_right_name_12 = var_r_h;
            tmp_assign_source_33 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
            if ( tmp_assign_source_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_r;
                assert( old != NULL );
                var_r = tmp_assign_source_33;
                Py_DECREF( old );
            }

        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 122;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_7;
            tmp_assign_source_34 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
            if ( tmp_assign_source_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 122;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_r_value == NULL );
            var_r_value = tmp_assign_source_34;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        CHECK_OBJECT( par_p_h );
        tmp_left_name_13 = par_p_h;
        CHECK_OBJECT( par_theta );
        tmp_right_name_13 = par_theta;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_13, tmp_right_name_13 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_35 = tmp_left_name_13;
        par_p_h = tmp_assign_source_35;

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        CHECK_OBJECT( par_p );
        tmp_left_name_14 = par_p;
        CHECK_OBJECT( par_theta );
        tmp_right_name_14 = par_theta;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_14, tmp_right_name_14 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_36 = tmp_left_name_14;
        par_p = tmp_assign_source_36;

    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_evaluate_quadratic );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_evaluate_quadratic );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "evaluate_quadratic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_8;
        CHECK_OBJECT( par_A_h );
        tmp_tuple_element_3 = par_A_h;
        tmp_args_name_3 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_g_h );
        tmp_tuple_element_3 = par_g_h;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_3 );
        CHECK_OBJECT( par_p_h );
        tmp_tuple_element_3 = par_p_h;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_3, 2, tmp_tuple_element_3 );
        tmp_dict_key_4 = const_str_plain_diag;
        CHECK_OBJECT( par_c_h );
        tmp_dict_value_4 = par_c_h;
        tmp_kw_name_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        frame_5ca30250c19b6f5cad0755ee3e4b5bf4->m_frame.f_lineno = 127;
        tmp_assign_source_37 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_p_value == NULL );
        var_p_value = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_g_h );
        tmp_operand_name_1 = par_g_h;
        tmp_assign_source_38 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ag_h == NULL );
        var_ag_h = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        CHECK_OBJECT( par_d );
        tmp_left_name_15 = par_d;
        CHECK_OBJECT( var_ag_h );
        tmp_right_name_15 = var_ag_h;
        tmp_assign_source_39 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ag == NULL );
        var_ag = tmp_assign_source_39;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_step_size_to_bound );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_step_size_to_bound );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "step_size_to_bound" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_called_name_7 = tmp_mvar_value_9;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_13 = par_x;
        CHECK_OBJECT( var_ag );
        tmp_args_element_name_14 = var_ag;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_15 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_16 = par_ub;
        frame_5ca30250c19b6f5cad0755ee3e4b5bf4->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16 };
            tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_7, call_args );
        }

        if ( tmp_iter_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_40 = MAKE_ITERATOR( tmp_iter_arg_5 );
        Py_DECREF( tmp_iter_arg_5 );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_5__source_iter == NULL );
        tmp_tuple_unpack_5__source_iter = tmp_assign_source_40;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_41 = UNPACK_NEXT( tmp_unpack_10, 0, 2 );
        if ( tmp_assign_source_41 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 131;
            goto try_except_handler_12;
        }
        assert( tmp_tuple_unpack_5__element_1 == NULL );
        tmp_tuple_unpack_5__element_1 = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_11 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_42 = UNPACK_NEXT( tmp_unpack_11, 1, 2 );
        if ( tmp_assign_source_42 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 131;
            goto try_except_handler_12;
        }
        assert( tmp_tuple_unpack_5__element_2 == NULL );
        tmp_tuple_unpack_5__element_2 = tmp_assign_source_42;
    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_5 ); assert( HAS_ITERNEXT( tmp_iterator_name_5 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_5 )->tp_iternext)( tmp_iterator_name_5 );

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

                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    exception_lineno = 131;
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

            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 131;
            goto try_except_handler_12;
        }
    }
    goto try_end_10;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
    Py_DECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_11;
    // End of try:
    try_end_10:;
    goto try_end_11;
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

    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
    Py_DECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    {
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
        tmp_assign_source_43 = tmp_tuple_unpack_5__element_1;
        assert( var_ag_stride_u == NULL );
        Py_INCREF( tmp_assign_source_43 );
        var_ag_stride_u = tmp_assign_source_43;
    }
    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
        tmp_assign_source_44 = tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = var__;
            assert( old != NULL );
            var__ = tmp_assign_source_44;
            Py_INCREF( var__ );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        CHECK_OBJECT( var_ag_stride_u );
        tmp_left_name_16 = var_ag_stride_u;
        CHECK_OBJECT( par_theta );
        tmp_right_name_16 = par_theta;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_16, tmp_right_name_16 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_45 = tmp_left_name_16;
        var_ag_stride_u = tmp_assign_source_45;

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_build_quadratic_1d );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_build_quadratic_1d );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "build_quadratic_1d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_called_name_8 = tmp_mvar_value_10;
        CHECK_OBJECT( par_A_h );
        tmp_tuple_element_4 = par_A_h;
        tmp_args_name_4 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( par_g_h );
        tmp_tuple_element_4 = par_g_h;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_4 );
        CHECK_OBJECT( var_ag_h );
        tmp_tuple_element_4 = var_ag_h;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_4 );
        tmp_dict_key_5 = const_str_plain_diag;
        CHECK_OBJECT( par_c_h );
        tmp_dict_value_5 = par_c_h;
        tmp_kw_name_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        frame_5ca30250c19b6f5cad0755ee3e4b5bf4->m_frame.f_lineno = 133;
        tmp_iter_arg_6 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_4, tmp_kw_name_4 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_iter_arg_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assign_source_46 = MAKE_ITERATOR( tmp_iter_arg_6 );
        Py_DECREF( tmp_iter_arg_6 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        assert( tmp_tuple_unpack_6__source_iter == NULL );
        tmp_tuple_unpack_6__source_iter = tmp_assign_source_46;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
        tmp_unpack_12 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_47 = UNPACK_NEXT( tmp_unpack_12, 0, 2 );
        if ( tmp_assign_source_47 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 133;
            goto try_except_handler_14;
        }
        assert( tmp_tuple_unpack_6__element_1 == NULL );
        tmp_tuple_unpack_6__element_1 = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
        tmp_unpack_13 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_48 = UNPACK_NEXT( tmp_unpack_13, 1, 2 );
        if ( tmp_assign_source_48 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 133;
            goto try_except_handler_14;
        }
        assert( tmp_tuple_unpack_6__element_2 == NULL );
        tmp_tuple_unpack_6__element_2 = tmp_assign_source_48;
    }
    {
        PyObject *tmp_iterator_name_6;
        CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
        tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_6 ); assert( HAS_ITERNEXT( tmp_iterator_name_6 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_6 )->tp_iternext)( tmp_iterator_name_6 );

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

                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    exception_lineno = 133;
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

            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 133;
            goto try_except_handler_14;
        }
    }
    goto try_end_12;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
    Py_DECREF( tmp_tuple_unpack_6__source_iter );
    tmp_tuple_unpack_6__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_13;
    // End of try:
    try_end_12:;
    goto try_end_13;
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

    Py_XDECREF( tmp_tuple_unpack_6__element_1 );
    tmp_tuple_unpack_6__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_6__element_2 );
    tmp_tuple_unpack_6__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
    Py_DECREF( tmp_tuple_unpack_6__source_iter );
    tmp_tuple_unpack_6__source_iter = NULL;

    {
        PyObject *tmp_assign_source_49;
        CHECK_OBJECT( tmp_tuple_unpack_6__element_1 );
        tmp_assign_source_49 = tmp_tuple_unpack_6__element_1;
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_49;
            Py_INCREF( var_a );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_6__element_1 );
    tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT( tmp_tuple_unpack_6__element_2 );
        tmp_assign_source_50 = tmp_tuple_unpack_6__element_2;
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_50;
            Py_INCREF( var_b );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_6__element_2 );
    tmp_tuple_unpack_6__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_minimize_quadratic_1d );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_minimize_quadratic_1d );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "minimize_quadratic_1d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_called_name_9 = tmp_mvar_value_11;
        CHECK_OBJECT( var_a );
        tmp_args_element_name_17 = var_a;
        CHECK_OBJECT( var_b );
        tmp_args_element_name_18 = var_b;
        tmp_args_element_name_19 = const_int_0;
        CHECK_OBJECT( var_ag_stride_u );
        tmp_args_element_name_20 = var_ag_stride_u;
        frame_5ca30250c19b6f5cad0755ee3e4b5bf4->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
            tmp_iter_arg_7 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_9, call_args );
        }

        if ( tmp_iter_arg_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_assign_source_51 = MAKE_ITERATOR( tmp_iter_arg_7 );
        Py_DECREF( tmp_iter_arg_7 );
        if ( tmp_assign_source_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert( tmp_tuple_unpack_7__source_iter == NULL );
        tmp_tuple_unpack_7__source_iter = tmp_assign_source_51;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_14 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_52 = UNPACK_NEXT( tmp_unpack_14, 0, 2 );
        if ( tmp_assign_source_52 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 134;
            goto try_except_handler_16;
        }
        assert( tmp_tuple_unpack_7__element_1 == NULL );
        tmp_tuple_unpack_7__element_1 = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_15 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_53 = UNPACK_NEXT( tmp_unpack_15, 1, 2 );
        if ( tmp_assign_source_53 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 134;
            goto try_except_handler_16;
        }
        assert( tmp_tuple_unpack_7__element_2 == NULL );
        tmp_tuple_unpack_7__element_2 = tmp_assign_source_53;
    }
    {
        PyObject *tmp_iterator_name_7;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_iterator_name_7 = tmp_tuple_unpack_7__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_7 ); assert( HAS_ITERNEXT( tmp_iterator_name_7 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_7 )->tp_iternext)( tmp_iterator_name_7 );

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

                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    exception_lineno = 134;
                    goto try_except_handler_16;
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

            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 134;
            goto try_except_handler_16;
        }
    }
    goto try_end_14;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
    Py_DECREF( tmp_tuple_unpack_7__source_iter );
    tmp_tuple_unpack_7__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_15;
    // End of try:
    try_end_14:;
    goto try_end_15;
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

    Py_XDECREF( tmp_tuple_unpack_7__element_1 );
    tmp_tuple_unpack_7__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_2 );
    tmp_tuple_unpack_7__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
    Py_DECREF( tmp_tuple_unpack_7__source_iter );
    tmp_tuple_unpack_7__source_iter = NULL;

    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_1 );
        tmp_assign_source_54 = tmp_tuple_unpack_7__element_1;
        assert( var_ag_stride == NULL );
        Py_INCREF( tmp_assign_source_54 );
        var_ag_stride = tmp_assign_source_54;
    }
    Py_XDECREF( tmp_tuple_unpack_7__element_1 );
    tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_2 );
        tmp_assign_source_55 = tmp_tuple_unpack_7__element_2;
        assert( var_ag_value == NULL );
        Py_INCREF( tmp_assign_source_55 );
        var_ag_value = tmp_assign_source_55;
    }
    Py_XDECREF( tmp_tuple_unpack_7__element_2 );
    tmp_tuple_unpack_7__element_2 = NULL;

    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_17;
        CHECK_OBJECT( var_ag );
        tmp_left_name_17 = var_ag;
        CHECK_OBJECT( var_ag_stride );
        tmp_right_name_17 = var_ag_stride;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_17, tmp_right_name_17 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_56 = tmp_left_name_17;
        var_ag = tmp_assign_source_56;

    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_p_value );
        tmp_compexpr_left_2 = var_p_value;
        CHECK_OBJECT( var_r_value );
        tmp_compexpr_right_2 = var_r_value;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
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
        CHECK_OBJECT( var_p_value );
        tmp_compexpr_left_3 = var_p_value;
        CHECK_OBJECT( var_ag_value );
        tmp_compexpr_right_3 = var_ag_value;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_p );
        tmp_return_value = par_p;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_4;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( var_r_value );
            tmp_compexpr_left_4 = var_r_value;
            CHECK_OBJECT( var_p_value );
            tmp_compexpr_right_4 = var_p_value;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 139;
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
            CHECK_OBJECT( var_r_value );
            tmp_compexpr_left_5 = var_r_value;
            CHECK_OBJECT( var_ag_value );
            tmp_compexpr_right_5 = var_ag_value;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 139;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_4 = tmp_and_right_value_2;
            goto and_end_2;
            and_left_2:;
            tmp_condition_result_4 = tmp_and_left_value_2;
            and_end_2:;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            CHECK_OBJECT( var_r );
            tmp_return_value = var_r;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            goto branch_end_4;
            branch_no_4:;
            CHECK_OBJECT( var_ag );
            tmp_return_value = var_ag;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_end_4:;
        }
        branch_end_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5ca30250c19b6f5cad0755ee3e4b5bf4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5ca30250c19b6f5cad0755ee3e4b5bf4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5ca30250c19b6f5cad0755ee3e4b5bf4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5ca30250c19b6f5cad0755ee3e4b5bf4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5ca30250c19b6f5cad0755ee3e4b5bf4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5ca30250c19b6f5cad0755ee3e4b5bf4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5ca30250c19b6f5cad0755ee3e4b5bf4,
        type_description_1,
        par_x,
        par_A_h,
        par_g_h,
        par_c_h,
        par_p,
        par_p_h,
        par_d,
        par_lb,
        par_ub,
        par_theta,
        var_p_stride,
        var_hits,
        var_r_h,
        var_r,
        var_x_on_bound,
        var_r_stride_u,
        var__,
        var_r_stride_l,
        var_a,
        var_b,
        var_c,
        var_r_stride,
        var_r_value,
        var_p_value,
        var_ag_h,
        var_ag,
        var_ag_stride_u,
        var_ag_stride,
        var_ag_value
    );


    // Release cached frame.
    if ( frame_5ca30250c19b6f5cad0755ee3e4b5bf4 == cache_frame_5ca30250c19b6f5cad0755ee3e4b5bf4 )
    {
        Py_DECREF( frame_5ca30250c19b6f5cad0755ee3e4b5bf4 );
    }
    cache_frame_5ca30250c19b6f5cad0755ee3e4b5bf4 = NULL;

    assertFrameObject( frame_5ca30250c19b6f5cad0755ee3e4b5bf4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$trf_linear$$$function_3_select_step );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_A_h );
    Py_DECREF( par_A_h );
    par_A_h = NULL;

    CHECK_OBJECT( (PyObject *)par_g_h );
    Py_DECREF( par_g_h );
    par_g_h = NULL;

    CHECK_OBJECT( (PyObject *)par_c_h );
    Py_DECREF( par_c_h );
    par_c_h = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_p_h );
    Py_DECREF( par_p_h );
    par_p_h = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_theta );
    Py_DECREF( par_theta );
    par_theta = NULL;

    Py_XDECREF( var_p_stride );
    var_p_stride = NULL;

    Py_XDECREF( var_hits );
    var_hits = NULL;

    Py_XDECREF( var_r_h );
    var_r_h = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_x_on_bound );
    var_x_on_bound = NULL;

    Py_XDECREF( var_r_stride_u );
    var_r_stride_u = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_r_stride_l );
    var_r_stride_l = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_r_stride );
    var_r_stride = NULL;

    Py_XDECREF( var_r_value );
    var_r_value = NULL;

    Py_XDECREF( var_p_value );
    var_p_value = NULL;

    Py_XDECREF( var_ag_h );
    var_ag_h = NULL;

    Py_XDECREF( var_ag );
    var_ag = NULL;

    Py_XDECREF( var_ag_stride_u );
    var_ag_stride_u = NULL;

    Py_XDECREF( var_ag_stride );
    var_ag_stride = NULL;

    Py_XDECREF( var_ag_value );
    var_ag_value = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_A_h );
    Py_DECREF( par_A_h );
    par_A_h = NULL;

    CHECK_OBJECT( (PyObject *)par_g_h );
    Py_DECREF( par_g_h );
    par_g_h = NULL;

    CHECK_OBJECT( (PyObject *)par_c_h );
    Py_DECREF( par_c_h );
    par_c_h = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_p_h );
    Py_DECREF( par_p_h );
    par_p_h = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_theta );
    Py_DECREF( par_theta );
    par_theta = NULL;

    Py_XDECREF( var_p_stride );
    var_p_stride = NULL;

    Py_XDECREF( var_hits );
    var_hits = NULL;

    Py_XDECREF( var_r_h );
    var_r_h = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_x_on_bound );
    var_x_on_bound = NULL;

    Py_XDECREF( var_r_stride_u );
    var_r_stride_u = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_r_stride_l );
    var_r_stride_l = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_r_stride );
    var_r_stride = NULL;

    Py_XDECREF( var_r_value );
    var_r_value = NULL;

    Py_XDECREF( var_p_value );
    var_p_value = NULL;

    Py_XDECREF( var_ag_h );
    var_ag_h = NULL;

    Py_XDECREF( var_ag );
    var_ag = NULL;

    Py_XDECREF( var_ag_stride_u );
    var_ag_stride_u = NULL;

    Py_XDECREF( var_ag_stride );
    var_ag_stride = NULL;

    Py_XDECREF( var_ag_value );
    var_ag_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$trf_linear$$$function_3_select_step );
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


static PyObject *impl_scipy$optimize$_lsq$trf_linear$$$function_4_trf_linear( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *par_x_lsq = python_pars[ 2 ];
    PyObject *par_lb = python_pars[ 3 ];
    PyObject *par_ub = python_pars[ 4 ];
    PyObject *par_tol = python_pars[ 5 ];
    PyObject *par_lsq_solver = python_pars[ 6 ];
    PyObject *par_lsmr_tol = python_pars[ 7 ];
    PyObject *par_max_iter = python_pars[ 8 ];
    PyObject *par_verbose = python_pars[ 9 ];
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_x = NULL;
    PyObject *var__ = NULL;
    PyObject *var_QT = NULL;
    PyObject *var_R = NULL;
    PyObject *var_perm = NULL;
    PyObject *var_QTr = NULL;
    PyObject *var_k = NULL;
    PyObject *var_r_aug = NULL;
    PyObject *var_auto_lsmr_tol = NULL;
    PyObject *var_r = NULL;
    PyObject *var_g = NULL;
    PyObject *var_cost = NULL;
    PyObject *var_initial_cost = NULL;
    PyObject *var_termination_status = NULL;
    PyObject *var_step_norm = NULL;
    PyObject *var_cost_change = NULL;
    PyObject *var_iteration = NULL;
    PyObject *var_v = NULL;
    PyObject *var_dv = NULL;
    PyObject *var_g_scaled = NULL;
    PyObject *var_g_norm = NULL;
    PyObject *var_diag_h = NULL;
    PyObject *var_diag_root_h = NULL;
    PyObject *var_d = NULL;
    PyObject *var_g_h = NULL;
    PyObject *var_A_h = NULL;
    PyObject *var_p_h = NULL;
    PyObject *var_lsmr_op = NULL;
    PyObject *var_eta = NULL;
    PyObject *var_p = NULL;
    PyObject *var_p_dot_g = NULL;
    PyObject *var_theta = NULL;
    PyObject *var_step = NULL;
    PyObject *var_active_mask = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__element_3 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    struct Nuitka_FrameObject *frame_18551173f3b3a121ef03d742dcd11c42;
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
    int tmp_res;
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
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_18551173f3b3a121ef03d742dcd11c42 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_18551173f3b3a121ef03d742dcd11c42, codeobj_18551173f3b3a121ef03d742dcd11c42, module_scipy$optimize$_lsq$trf_linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_18551173f3b3a121ef03d742dcd11c42 = cache_frame_18551173f3b3a121ef03d742dcd11c42;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_18551173f3b3a121ef03d742dcd11c42 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_18551173f3b3a121ef03d742dcd11c42 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 147;
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 147;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 147;
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

            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 147;
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
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_m = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_n = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_reflective_transformation );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reflective_transformation );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "reflective_transformation" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x_lsq );
        tmp_args_element_name_1 = par_x_lsq;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_2 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_3 = par_ub;
        frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 148;
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 148;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 148;
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

            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 148;
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
        assert( var_x == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_x = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
        assert( var__ == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var__ = tmp_assign_source_10;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_make_strictly_feasible );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_make_strictly_feasible );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "make_strictly_feasible" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_x );
        tmp_tuple_element_1 = var_x;
        tmp_args_name_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_lb );
        tmp_tuple_element_1 = par_lb;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_ub );
        tmp_tuple_element_1 = par_ub;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_5ea4d698a7aedc6eda7ae3bd07579784 );
        frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 149;
        tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_x;
            assert( old != NULL );
            var_x = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_lsq_solver );
        tmp_compexpr_left_1 = par_lsq_solver;
        tmp_compexpr_right_1 = const_str_plain_exact;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_qr );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_qr );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "qr" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 152;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( par_A );
            tmp_tuple_element_2 = par_A;
            tmp_args_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_577e871802a52931bcc1cbab7aa45b64 );
            frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 152;
            tmp_iter_arg_3 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 152;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 152;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_3__source_iter == NULL );
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_12;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_5, 0, 3 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 152;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_1 == NULL );
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_6, 1, 3 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 152;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_2 == NULL );
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_7, 2, 3 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 152;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_3 == NULL );
            tmp_tuple_unpack_3__element_3 = tmp_assign_source_15;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 152;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 152;
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

        Py_XDECREF( tmp_tuple_unpack_3__element_3 );
        tmp_tuple_unpack_3__element_3 = NULL;

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
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_16 = tmp_tuple_unpack_3__element_1;
            assert( var_QT == NULL );
            Py_INCREF( tmp_assign_source_16 );
            var_QT = tmp_assign_source_16;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_17 = tmp_tuple_unpack_3__element_2;
            assert( var_R == NULL );
            Py_INCREF( tmp_assign_source_17 );
            var_R = tmp_assign_source_17;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_3 );
            tmp_assign_source_18 = tmp_tuple_unpack_3__element_3;
            assert( var_perm == NULL );
            Py_INCREF( tmp_assign_source_18 );
            var_perm = tmp_assign_source_18;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_3 );
        tmp_tuple_unpack_3__element_3 = NULL;

        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( var_QT );
            tmp_source_name_2 = var_QT;
            tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_T );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 153;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_QT;
                assert( old != NULL );
                var_QT = tmp_assign_source_19;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_m );
            tmp_compexpr_left_2 = var_m;
            CHECK_OBJECT( var_n );
            tmp_compexpr_right_2 = var_n;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 155;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
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
                PyObject *tmp_assign_source_20;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_3;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_called_name_5;
                PyObject *tmp_source_name_4;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 156;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_3 = tmp_mvar_value_4;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_vstack );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 156;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_R );
                tmp_tuple_element_3 = var_R;
                tmp_args_element_name_4 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_element_name_4, 0, tmp_tuple_element_3 );
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_5 == NULL )
                {
                    Py_DECREF( tmp_called_name_4 );
                    Py_DECREF( tmp_args_element_name_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 156;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_4 = tmp_mvar_value_5;
                tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_zeros );
                if ( tmp_called_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );
                    Py_DECREF( tmp_args_element_name_4 );

                    exception_lineno = 156;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_n );
                tmp_left_name_1 = var_n;
                CHECK_OBJECT( var_m );
                tmp_right_name_1 = var_m;
                tmp_tuple_element_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_tuple_element_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );
                    Py_DECREF( tmp_args_element_name_4 );
                    Py_DECREF( tmp_called_name_5 );

                    exception_lineno = 156;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_5 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_4 );
                CHECK_OBJECT( var_n );
                tmp_tuple_element_4 = var_n;
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_4 );
                frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 156;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5 };
                    tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
                }

                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_args_element_name_5 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );
                    Py_DECREF( tmp_args_element_name_4 );

                    exception_lineno = 156;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_args_element_name_4, 1, tmp_tuple_element_3 );
                frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 156;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_4 );
                if ( tmp_assign_source_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 156;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_R;
                    assert( old != NULL );
                    var_R = tmp_assign_source_20;
                    Py_DECREF( old );
                }

            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 158;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_6;
            CHECK_OBJECT( var_n );
            tmp_args_element_name_6 = var_n;
            frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 158;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_assign_source_21 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_zeros, call_args );
            }

            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_QTr == NULL );
            var_QTr = tmp_assign_source_21;
        }
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_min );
            assert( tmp_called_name_6 != NULL );
            CHECK_OBJECT( var_m );
            tmp_args_element_name_7 = var_m;
            CHECK_OBJECT( var_n );
            tmp_args_element_name_8 = var_n;
            frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 159;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 159;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_k == NULL );
            var_k = tmp_assign_source_22;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_lsq_solver );
            tmp_compexpr_left_3 = par_lsq_solver;
            tmp_compexpr_right_3 = const_str_plain_lsmr;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 160;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
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
                PyObject *tmp_assign_source_23;
                PyObject *tmp_called_name_7;
                PyObject *tmp_source_name_5;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_args_element_name_9;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 161;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_5 = tmp_mvar_value_7;
                tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_zeros );
                if ( tmp_called_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 161;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_m );
                tmp_left_name_2 = var_m;
                CHECK_OBJECT( var_n );
                tmp_right_name_2 = var_n;
                tmp_args_element_name_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                if ( tmp_args_element_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );

                    exception_lineno = 161;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 161;
                {
                    PyObject *call_args[] = { tmp_args_element_name_9 };
                    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                }

                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_element_name_9 );
                if ( tmp_assign_source_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 161;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_r_aug == NULL );
                var_r_aug = tmp_assign_source_23;
            }
            {
                PyObject *tmp_assign_source_24;
                tmp_assign_source_24 = Py_False;
                assert( var_auto_lsmr_tol == NULL );
                Py_INCREF( tmp_assign_source_24 );
                var_auto_lsmr_tol = tmp_assign_source_24;
            }
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                CHECK_OBJECT( par_lsmr_tol );
                tmp_compexpr_left_4 = par_lsmr_tol;
                tmp_compexpr_right_4 = Py_None;
                tmp_condition_result_4 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_25;
                    PyObject *tmp_left_name_3;
                    PyObject *tmp_right_name_3;
                    tmp_left_name_3 = const_float_0_01;
                    CHECK_OBJECT( par_tol );
                    tmp_right_name_3 = par_tol;
                    tmp_assign_source_25 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
                    if ( tmp_assign_source_25 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 164;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_lsmr_tol;
                        assert( old != NULL );
                        par_lsmr_tol = tmp_assign_source_25;
                        Py_DECREF( old );
                    }

                }
                goto branch_end_4;
                branch_no_4:;
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    CHECK_OBJECT( par_lsmr_tol );
                    tmp_compexpr_left_5 = par_lsmr_tol;
                    tmp_compexpr_right_5 = const_str_plain_auto;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 165;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
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
                        tmp_assign_source_26 = Py_True;
                        {
                            PyObject *old = var_auto_lsmr_tol;
                            assert( old != NULL );
                            var_auto_lsmr_tol = tmp_assign_source_26;
                            Py_INCREF( var_auto_lsmr_tol );
                            Py_DECREF( old );
                        }

                    }
                    branch_no_5:;
                }
                branch_end_4:;
            }
            branch_no_3:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_left_name_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( par_A );
        tmp_called_instance_2 = par_A;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_10 = var_x;
        frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_left_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_right_name_4 = par_b;
        tmp_assign_source_27 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_compute_grad );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compute_grad );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compute_grad" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_8;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_11 = par_A;
        CHECK_OBJECT( var_r );
        tmp_args_element_name_12 = var_r;
        frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
        }

        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_g == NULL );
        var_g = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        tmp_left_name_5 = const_float_0_5;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_9;
        CHECK_OBJECT( var_r );
        tmp_args_element_name_13 = var_r;
        CHECK_OBJECT( var_r );
        tmp_args_element_name_14 = var_r;
        frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_right_name_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_29 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cost == NULL );
        var_cost = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT( var_cost );
        tmp_assign_source_30 = var_cost;
        assert( var_initial_cost == NULL );
        Py_INCREF( tmp_assign_source_30 );
        var_initial_cost = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = Py_None;
        assert( var_termination_status == NULL );
        Py_INCREF( tmp_assign_source_31 );
        var_termination_status = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = Py_None;
        assert( var_step_norm == NULL );
        Py_INCREF( tmp_assign_source_32 );
        var_step_norm = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = Py_None;
        assert( var_cost_change == NULL );
        Py_INCREF( tmp_assign_source_33 );
        var_cost_change = tmp_assign_source_33;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_max_iter );
        tmp_compexpr_left_6 = par_max_iter;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_6 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_34;
            tmp_assign_source_34 = const_int_pos_100;
            {
                PyObject *old = par_max_iter;
                assert( old != NULL );
                par_max_iter = tmp_assign_source_34;
                Py_INCREF( par_max_iter );
                Py_DECREF( old );
            }

        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( par_verbose );
        tmp_compexpr_left_7 = par_verbose;
        tmp_compexpr_right_7 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_call_result_1;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_print_header_linear );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_print_header_linear );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "print_header_linear" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 181;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_9 = tmp_mvar_value_10;
            frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 181;
            tmp_call_result_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_9 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_7:;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT( par_max_iter );
        tmp_xrange_low_1 = par_max_iter;
        tmp_iter_arg_4 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_35 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_35;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_36 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_36 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 183;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_36;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_37 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_iteration;
            var_iteration = tmp_assign_source_37;
            Py_INCREF( var_iteration );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_CL_scaling_vector );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CL_scaling_vector );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CL_scaling_vector" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_name_10 = tmp_mvar_value_11;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_15 = var_x;
        CHECK_OBJECT( var_g );
        tmp_args_element_name_16 = var_g;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_17 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_18 = par_ub;
        frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
            tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_10, call_args );
        }

        if ( tmp_iter_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_38 = MAKE_ITERATOR( tmp_iter_arg_5 );
        Py_DECREF( tmp_iter_arg_5 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_38;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_39 = UNPACK_NEXT( tmp_unpack_8, 0, 2 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 184;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_39;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_40 = UNPACK_NEXT( tmp_unpack_9, 1, 2 );
        if ( tmp_assign_source_40 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 184;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_40;
            Py_XDECREF( old );
        }

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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 184;
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

            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 184;
            goto try_except_handler_10;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
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

    goto try_except_handler_9;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
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

    goto try_except_handler_8;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
        tmp_assign_source_41 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_41;
            Py_INCREF( var_v );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
        tmp_assign_source_42 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_dv;
            var_dv = tmp_assign_source_42;
            Py_INCREF( var_dv );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( var_g );
        tmp_left_name_6 = var_g;
        CHECK_OBJECT( var_v );
        tmp_right_name_6 = var_v;
        tmp_assign_source_43 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_g_scaled;
            var_g_scaled = tmp_assign_source_43;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_13;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_norm );

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

            exception_lineno = 186;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_name_11 = tmp_mvar_value_12;
        CHECK_OBJECT( var_g_scaled );
        tmp_tuple_element_5 = var_g_scaled;
        tmp_args_name_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
        tmp_dict_key_1 = const_str_plain_ord;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_args_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 186;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_source_name_6 = tmp_mvar_value_13;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_inf );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_3 );

            exception_lineno = 186;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_kw_name_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 186;
        tmp_assign_source_44 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_g_norm;
            var_g_norm = tmp_assign_source_44;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        CHECK_OBJECT( var_g_norm );
        tmp_compexpr_left_8 = var_g_norm;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_8 = par_tol;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
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
            PyObject *tmp_assign_source_45;
            tmp_assign_source_45 = const_int_pos_1;
            {
                PyObject *old = var_termination_status;
                var_termination_status = tmp_assign_source_45;
                Py_INCREF( var_termination_status );
                Py_XDECREF( old );
            }

        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        CHECK_OBJECT( par_verbose );
        tmp_compexpr_left_9 = par_verbose;
        tmp_compexpr_right_9 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
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
            PyObject *tmp_called_name_12;
            PyObject *tmp_mvar_value_14;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_args_element_name_23;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_print_iteration_linear );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_print_iteration_linear );
            }

            if ( tmp_mvar_value_14 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "print_iteration_linear" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 191;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_called_name_12 = tmp_mvar_value_14;
            CHECK_OBJECT( var_iteration );
            tmp_args_element_name_19 = var_iteration;
            CHECK_OBJECT( var_cost );
            tmp_args_element_name_20 = var_cost;
            CHECK_OBJECT( var_cost_change );
            tmp_args_element_name_21 = var_cost_change;
            CHECK_OBJECT( var_step_norm );
            tmp_args_element_name_22 = var_step_norm;
            CHECK_OBJECT( var_g_norm );
            tmp_args_element_name_23 = var_g_norm;
            frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 191;
            {
                PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_12, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 191;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        if ( var_termination_status == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "termination_status" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 194;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_compexpr_left_10 = var_termination_status;
        tmp_compexpr_right_10 = Py_None;
        tmp_condition_result_10 = ( tmp_compexpr_left_10 != tmp_compexpr_right_10 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        goto loop_end_1;
        branch_no_10:;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_g );
        tmp_left_name_7 = var_g;
        CHECK_OBJECT( var_dv );
        tmp_right_name_7 = var_dv;
        tmp_assign_source_46 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_diag_h;
            var_diag_h = tmp_assign_source_46;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT( var_diag_h );
        tmp_left_name_8 = var_diag_h;
        tmp_right_name_8 = const_float_0_5;
        tmp_assign_source_47 = POWER_OPERATION( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_diag_root_h;
            var_diag_root_h = tmp_assign_source_47;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT( var_v );
        tmp_left_name_9 = var_v;
        tmp_right_name_9 = const_float_0_5;
        tmp_assign_source_48 = POWER_OPERATION( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_d;
            var_d = tmp_assign_source_48;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        CHECK_OBJECT( var_d );
        tmp_left_name_10 = var_d;
        CHECK_OBJECT( var_g );
        tmp_right_name_10 = var_g;
        tmp_assign_source_49 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_assign_source_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_g_h;
            var_g_h = tmp_assign_source_49;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_right_multiplied_operator );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_right_multiplied_operator );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "right_multiplied_operator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_name_13 = tmp_mvar_value_15;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_24 = par_A;
        CHECK_OBJECT( var_d );
        tmp_args_element_name_25 = var_d;
        frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = { tmp_args_element_name_24, tmp_args_element_name_25 };
            tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
        }

        if ( tmp_assign_source_50 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_A_h;
            var_A_h = tmp_assign_source_50;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        CHECK_OBJECT( par_lsq_solver );
        tmp_compexpr_left_11 = par_lsq_solver;
        tmp_compexpr_right_11 = const_str_plain_exact;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
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
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_26;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_step_name_1;
            if ( var_QT == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "QT" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 204;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_called_instance_4 = var_QT;
            CHECK_OBJECT( var_r );
            tmp_args_element_name_26 = var_r;
            frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 204;
            {
                PyObject *call_args[] = { tmp_args_element_name_26 };
                tmp_ass_subvalue_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_dot, call_args );
            }

            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            if ( var_QTr == NULL )
            {
                Py_DECREF( tmp_ass_subvalue_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "QTr" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 204;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_ass_subscribed_1 = var_QTr;
            tmp_start_name_1 = Py_None;
            if ( var_k == NULL )
            {
                Py_DECREF( tmp_ass_subvalue_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "k" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 204;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_stop_name_1 = var_k;
            tmp_step_name_1 = Py_None;
            tmp_ass_subscript_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            assert( !(tmp_ass_subscript_1 == NULL) );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
        }
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_14;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_kw_name_4;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_regularized_lsq_with_qr );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_regularized_lsq_with_qr );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "regularized_lsq_with_qr" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 205;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_called_name_14 = tmp_mvar_value_16;
            CHECK_OBJECT( var_m );
            tmp_tuple_element_6 = var_m;
            tmp_args_name_4 = PyTuple_New( 6 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( var_n );
            tmp_tuple_element_6 = var_n;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
            if ( var_R == NULL )
            {
                Py_DECREF( tmp_args_name_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "R" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 205;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_left_name_11 = var_R;
            CHECK_OBJECT( var_d );
            tmp_subscribed_name_1 = var_d;
            if ( var_perm == NULL )
            {
                Py_DECREF( tmp_args_name_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "perm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 205;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_subscript_name_1 = var_perm;
            tmp_right_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_right_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_name_4 );

                exception_lineno = 205;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_tuple_element_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
            Py_DECREF( tmp_right_name_11 );
            if ( tmp_tuple_element_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_name_4 );

                exception_lineno = 205;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
            if ( var_QTr == NULL )
            {
                Py_DECREF( tmp_args_name_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "QTr" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 205;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_tuple_element_6 = var_QTr;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 3, tmp_tuple_element_6 );
            if ( var_perm == NULL )
            {
                Py_DECREF( tmp_args_name_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "perm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 205;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_tuple_element_6 = var_perm;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 4, tmp_tuple_element_6 );
            CHECK_OBJECT( var_diag_root_h );
            tmp_tuple_element_6 = var_diag_root_h;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 5, tmp_tuple_element_6 );
            tmp_kw_name_4 = PyDict_Copy( const_dict_b47cc4e2af5f5a52abdf7bc37c53f7ed );
            frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 205;
            tmp_operand_name_1 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            Py_DECREF( tmp_kw_name_4 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_assign_source_51 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_assign_source_51 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = var_p_h;
                var_p_h = tmp_assign_source_51;
                Py_XDECREF( old );
            }

        }
        goto branch_end_11;
        branch_no_11:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_12;
            PyObject *tmp_compexpr_right_12;
            CHECK_OBJECT( par_lsq_solver );
            tmp_compexpr_left_12 = par_lsq_solver;
            tmp_compexpr_right_12 = const_str_plain_lsmr;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 207;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
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
                PyObject *tmp_assign_source_52;
                PyObject *tmp_called_name_15;
                PyObject *tmp_mvar_value_17;
                PyObject *tmp_args_element_name_27;
                PyObject *tmp_args_element_name_28;
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_regularized_lsq_operator );

                if (unlikely( tmp_mvar_value_17 == NULL ))
                {
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_regularized_lsq_operator );
                }

                if ( tmp_mvar_value_17 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "regularized_lsq_operator" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 208;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_8;
                }

                tmp_called_name_15 = tmp_mvar_value_17;
                CHECK_OBJECT( var_A_h );
                tmp_args_element_name_27 = var_A_h;
                CHECK_OBJECT( var_diag_root_h );
                tmp_args_element_name_28 = var_diag_root_h;
                frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 208;
                {
                    PyObject *call_args[] = { tmp_args_element_name_27, tmp_args_element_name_28 };
                    tmp_assign_source_52 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
                }

                if ( tmp_assign_source_52 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 208;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                {
                    PyObject *old = var_lsmr_op;
                    var_lsmr_op = tmp_assign_source_52;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_ass_subvalue_2;
                PyObject *tmp_ass_subscribed_2;
                PyObject *tmp_ass_subscript_2;
                PyObject *tmp_start_name_2;
                PyObject *tmp_stop_name_2;
                PyObject *tmp_step_name_2;
                CHECK_OBJECT( var_r );
                tmp_ass_subvalue_2 = var_r;
                if ( var_r_aug == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r_aug" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 209;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_8;
                }

                tmp_ass_subscribed_2 = var_r_aug;
                tmp_start_name_2 = Py_None;
                CHECK_OBJECT( var_m );
                tmp_stop_name_2 = var_m;
                tmp_step_name_2 = Py_None;
                tmp_ass_subscript_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
                assert( !(tmp_ass_subscript_2 == NULL) );
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
                Py_DECREF( tmp_ass_subscript_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 209;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
            }
            {
                nuitka_bool tmp_condition_result_13;
                int tmp_truth_name_1;
                if ( var_auto_lsmr_tol == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "auto_lsmr_tol" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 210;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_8;
                }

                tmp_truth_name_1 = CHECK_IF_TRUE( var_auto_lsmr_tol );
                if ( tmp_truth_name_1 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 210;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                tmp_condition_result_13 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_53;
                    PyObject *tmp_left_name_12;
                    PyObject *tmp_right_name_12;
                    PyObject *tmp_called_name_16;
                    PyObject *tmp_args_element_name_29;
                    PyObject *tmp_args_element_name_30;
                    tmp_left_name_12 = const_float_0_01;
                    tmp_called_name_16 = LOOKUP_BUILTIN( const_str_plain_min );
                    assert( tmp_called_name_16 != NULL );
                    tmp_args_element_name_29 = const_float_0_5;
                    CHECK_OBJECT( var_g_norm );
                    tmp_args_element_name_30 = var_g_norm;
                    frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 211;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_29, tmp_args_element_name_30 };
                        tmp_right_name_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, call_args );
                    }

                    if ( tmp_right_name_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 211;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_8;
                    }
                    tmp_assign_source_53 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
                    Py_DECREF( tmp_right_name_12 );
                    if ( tmp_assign_source_53 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 211;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_8;
                    }
                    {
                        PyObject *old = var_eta;
                        var_eta = tmp_assign_source_53;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_54;
                    PyObject *tmp_called_name_17;
                    PyObject *tmp_args_element_name_31;
                    PyObject *tmp_mvar_value_18;
                    PyObject *tmp_args_element_name_32;
                    PyObject *tmp_called_name_18;
                    PyObject *tmp_args_element_name_33;
                    PyObject *tmp_args_element_name_34;
                    PyObject *tmp_left_name_13;
                    PyObject *tmp_right_name_13;
                    tmp_called_name_17 = LOOKUP_BUILTIN( const_str_plain_max );
                    assert( tmp_called_name_17 != NULL );
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_EPS );

                    if (unlikely( tmp_mvar_value_18 == NULL ))
                    {
                        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EPS );
                    }

                    if ( tmp_mvar_value_18 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EPS" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 212;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_8;
                    }

                    tmp_args_element_name_31 = tmp_mvar_value_18;
                    tmp_called_name_18 = LOOKUP_BUILTIN( const_str_plain_min );
                    assert( tmp_called_name_18 != NULL );
                    tmp_args_element_name_33 = const_float_0_1;
                    CHECK_OBJECT( var_eta );
                    tmp_left_name_13 = var_eta;
                    CHECK_OBJECT( var_g_norm );
                    tmp_right_name_13 = var_g_norm;
                    tmp_args_element_name_34 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
                    if ( tmp_args_element_name_34 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 212;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_8;
                    }
                    frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 212;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_33, tmp_args_element_name_34 };
                        tmp_args_element_name_32 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_34 );
                    if ( tmp_args_element_name_32 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 212;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_8;
                    }
                    frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 212;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_31, tmp_args_element_name_32 };
                        tmp_assign_source_54 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_32 );
                    if ( tmp_assign_source_54 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 212;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_8;
                    }
                    {
                        PyObject *old = par_lsmr_tol;
                        par_lsmr_tol = tmp_assign_source_54;
                        Py_XDECREF( old );
                    }

                }
                branch_no_13:;
            }
            {
                PyObject *tmp_assign_source_55;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_called_name_19;
                PyObject *tmp_mvar_value_19;
                PyObject *tmp_args_name_5;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_kw_name_5;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                PyObject *tmp_subscript_name_2;
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_lsmr );

                if (unlikely( tmp_mvar_value_19 == NULL ))
                {
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lsmr );
                }

                if ( tmp_mvar_value_19 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "lsmr" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 213;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_8;
                }

                tmp_called_name_19 = tmp_mvar_value_19;
                CHECK_OBJECT( var_lsmr_op );
                tmp_tuple_element_7 = var_lsmr_op;
                tmp_args_name_5 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_7 );
                PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_7 );
                if ( var_r_aug == NULL )
                {
                    Py_DECREF( tmp_args_name_5 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r_aug" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 213;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_8;
                }

                tmp_tuple_element_7 = var_r_aug;
                Py_INCREF( tmp_tuple_element_7 );
                PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_7 );
                tmp_dict_key_2 = const_str_plain_atol;
                if ( par_lsmr_tol == NULL )
                {
                    Py_DECREF( tmp_args_name_5 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lsmr_tol" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 213;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_8;
                }

                tmp_dict_value_2 = par_lsmr_tol;
                tmp_kw_name_5 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_3 = const_str_plain_btol;
                if ( par_lsmr_tol == NULL )
                {
                    Py_DECREF( tmp_args_name_5 );
                    Py_DECREF( tmp_kw_name_5 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lsmr_tol" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 213;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_8;
                }

                tmp_dict_value_3 = par_lsmr_tol;
                tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_3, tmp_dict_value_3 );
                assert( !(tmp_res != 0) );
                frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 213;
                tmp_subscribed_name_2 = CALL_FUNCTION( tmp_called_name_19, tmp_args_name_5, tmp_kw_name_5 );
                Py_DECREF( tmp_args_name_5 );
                Py_DECREF( tmp_kw_name_5 );
                if ( tmp_subscribed_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 213;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                tmp_subscript_name_2 = const_int_0;
                tmp_operand_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
                Py_DECREF( tmp_subscribed_name_2 );
                if ( tmp_operand_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 213;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                tmp_assign_source_55 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
                Py_DECREF( tmp_operand_name_2 );
                if ( tmp_assign_source_55 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 213;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                {
                    PyObject *old = var_p_h;
                    var_p_h = tmp_assign_source_55;
                    Py_XDECREF( old );
                }

            }
            branch_no_12:;
        }
        branch_end_11:;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        CHECK_OBJECT( var_d );
        tmp_left_name_14 = var_d;
        if ( var_p_h == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p_h" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_right_name_14 = var_p_h;
        tmp_assign_source_56 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        if ( tmp_assign_source_56 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_56;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_args_element_name_36;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 217;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_instance_5 = tmp_mvar_value_20;
        CHECK_OBJECT( var_p );
        tmp_args_element_name_35 = var_p;
        CHECK_OBJECT( var_g );
        tmp_args_element_name_36 = var_g;
        frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = { tmp_args_element_name_35, tmp_args_element_name_36 };
            tmp_assign_source_57 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_57 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_p_dot_g;
            var_p_dot_g = tmp_assign_source_57;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        CHECK_OBJECT( var_p_dot_g );
        tmp_compexpr_left_13 = var_p_dot_g;
        tmp_compexpr_right_13 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
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
            PyObject *tmp_assign_source_58;
            tmp_assign_source_58 = const_int_neg_1;
            {
                PyObject *old = var_termination_status;
                var_termination_status = tmp_assign_source_58;
                Py_INCREF( var_termination_status );
                Py_XDECREF( old );
            }

        }
        branch_no_14:;
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        PyObject *tmp_called_name_20;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_args_element_name_38;
        tmp_left_name_15 = const_int_pos_1;
        tmp_called_name_20 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_20 != NULL );
        tmp_args_element_name_37 = const_float_0_005;
        CHECK_OBJECT( var_g_norm );
        tmp_args_element_name_38 = var_g_norm;
        frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = { tmp_args_element_name_37, tmp_args_element_name_38 };
            tmp_right_name_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_20, call_args );
        }

        if ( tmp_right_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_59 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_15, tmp_right_name_15 );
        Py_DECREF( tmp_right_name_15 );
        if ( tmp_assign_source_59 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_theta;
            var_theta = tmp_assign_source_59;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_name_21;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_39;
        PyObject *tmp_args_element_name_40;
        PyObject *tmp_args_element_name_41;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_args_element_name_44;
        PyObject *tmp_args_element_name_45;
        PyObject *tmp_args_element_name_46;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_args_element_name_48;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_select_step );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select_step );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "select_step" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_name_21 = tmp_mvar_value_21;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_39 = var_x;
        CHECK_OBJECT( var_A_h );
        tmp_args_element_name_40 = var_A_h;
        CHECK_OBJECT( var_g_h );
        tmp_args_element_name_41 = var_g_h;
        CHECK_OBJECT( var_diag_h );
        tmp_args_element_name_42 = var_diag_h;
        CHECK_OBJECT( var_p );
        tmp_args_element_name_43 = var_p;
        if ( var_p_h == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p_h" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_name_44 = var_p_h;
        CHECK_OBJECT( var_d );
        tmp_args_element_name_45 = var_d;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_46 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_47 = par_ub;
        CHECK_OBJECT( var_theta );
        tmp_args_element_name_48 = var_theta;
        frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 222;
        {
            PyObject *call_args[] = { tmp_args_element_name_39, tmp_args_element_name_40, tmp_args_element_name_41, tmp_args_element_name_42, tmp_args_element_name_43, tmp_args_element_name_44, tmp_args_element_name_45, tmp_args_element_name_46, tmp_args_element_name_47, tmp_args_element_name_48 };
            tmp_assign_source_60 = CALL_FUNCTION_WITH_ARGS10( tmp_called_name_21, call_args );
        }

        if ( tmp_assign_source_60 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_step;
            var_step = tmp_assign_source_60;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_name_22;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_args_element_name_51;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_evaluate_quadratic );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_evaluate_quadratic );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "evaluate_quadratic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 223;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_name_22 = tmp_mvar_value_22;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_49 = par_A;
        CHECK_OBJECT( var_g );
        tmp_args_element_name_50 = var_g;
        CHECK_OBJECT( var_step );
        tmp_args_element_name_51 = var_step;
        frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = { tmp_args_element_name_49, tmp_args_element_name_50, tmp_args_element_name_51 };
            tmp_operand_name_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_22, call_args );
        }

        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_61 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_assign_source_61 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_cost_change;
            assert( old != NULL );
            var_cost_change = tmp_assign_source_61;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        CHECK_OBJECT( var_cost_change );
        tmp_compexpr_left_14 = var_cost_change;
        tmp_compexpr_right_14 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_15;
        }
        else
        {
            goto branch_no_15;
        }
        branch_yes_15:;
        // Tried code:
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_called_name_23;
            PyObject *tmp_mvar_value_23;
            PyObject *tmp_args_element_name_52;
            PyObject *tmp_args_element_name_53;
            PyObject *tmp_args_element_name_54;
            PyObject *tmp_args_element_name_55;
            PyObject *tmp_args_element_name_56;
            PyObject *tmp_args_element_name_57;
            PyObject *tmp_args_element_name_58;
            PyObject *tmp_args_element_name_59;
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_backtracking );

            if (unlikely( tmp_mvar_value_23 == NULL ))
            {
                tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_backtracking );
            }

            if ( tmp_mvar_value_23 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "backtracking" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 229;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }

            tmp_called_name_23 = tmp_mvar_value_23;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_52 = par_A;
            CHECK_OBJECT( var_g );
            tmp_args_element_name_53 = var_g;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_54 = var_x;
            CHECK_OBJECT( var_p );
            tmp_args_element_name_55 = var_p;
            CHECK_OBJECT( var_theta );
            tmp_args_element_name_56 = var_theta;
            CHECK_OBJECT( var_p_dot_g );
            tmp_args_element_name_57 = var_p_dot_g;
            CHECK_OBJECT( par_lb );
            tmp_args_element_name_58 = par_lb;
            CHECK_OBJECT( par_ub );
            tmp_args_element_name_59 = par_ub;
            frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 229;
            {
                PyObject *call_args[] = { tmp_args_element_name_52, tmp_args_element_name_53, tmp_args_element_name_54, tmp_args_element_name_55, tmp_args_element_name_56, tmp_args_element_name_57, tmp_args_element_name_58, tmp_args_element_name_59 };
                tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS8( tmp_called_name_23, call_args );
            }

            if ( tmp_iter_arg_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 229;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            tmp_assign_source_62 = MAKE_ITERATOR( tmp_iter_arg_6 );
            Py_DECREF( tmp_iter_arg_6 );
            if ( tmp_assign_source_62 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 229;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__source_iter;
                tmp_tuple_unpack_5__source_iter = tmp_assign_source_62;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_63;
            PyObject *tmp_unpack_10;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_63 = UNPACK_NEXT( tmp_unpack_10, 0, 3 );
            if ( tmp_assign_source_63 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 229;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__element_1;
                tmp_tuple_unpack_5__element_1 = tmp_assign_source_63;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_unpack_11;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_11 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_64 = UNPACK_NEXT( tmp_unpack_11, 1, 3 );
            if ( tmp_assign_source_64 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 229;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__element_2;
                tmp_tuple_unpack_5__element_2 = tmp_assign_source_64;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_unpack_12;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_12 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_65 = UNPACK_NEXT( tmp_unpack_12, 2, 3 );
            if ( tmp_assign_source_65 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 229;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__element_3;
                tmp_tuple_unpack_5__element_3 = tmp_assign_source_65;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_iterator_name_5;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_5 ); assert( HAS_ITERNEXT( tmp_iterator_name_5 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_5 )->tp_iternext)( tmp_iterator_name_5 );

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

                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 229;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 229;
                goto try_except_handler_12;
            }
        }
        goto try_end_9;
        // Exception handler code:
        try_except_handler_12:;
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

        goto try_except_handler_11;
        // End of try:
        try_end_9:;
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

        Py_XDECREF( tmp_tuple_unpack_5__element_1 );
        tmp_tuple_unpack_5__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_5__element_2 );
        tmp_tuple_unpack_5__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_5__element_3 );
        tmp_tuple_unpack_5__element_3 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_8;
        // End of try:
        try_end_10:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
        Py_DECREF( tmp_tuple_unpack_5__source_iter );
        tmp_tuple_unpack_5__source_iter = NULL;

        {
            PyObject *tmp_assign_source_66;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
            tmp_assign_source_66 = tmp_tuple_unpack_5__element_1;
            {
                PyObject *old = var_x;
                assert( old != NULL );
                var_x = tmp_assign_source_66;
                Py_INCREF( var_x );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_5__element_1 );
        tmp_tuple_unpack_5__element_1 = NULL;

        {
            PyObject *tmp_assign_source_67;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
            tmp_assign_source_67 = tmp_tuple_unpack_5__element_2;
            {
                PyObject *old = var_step;
                assert( old != NULL );
                var_step = tmp_assign_source_67;
                Py_INCREF( var_step );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_5__element_2 );
        tmp_tuple_unpack_5__element_2 = NULL;

        {
            PyObject *tmp_assign_source_68;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_3 );
            tmp_assign_source_68 = tmp_tuple_unpack_5__element_3;
            {
                PyObject *old = var_cost_change;
                assert( old != NULL );
                var_cost_change = tmp_assign_source_68;
                Py_INCREF( var_cost_change );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_5__element_3 );
        tmp_tuple_unpack_5__element_3 = NULL;

        goto branch_end_15;
        branch_no_15:;
        {
            PyObject *tmp_assign_source_69;
            PyObject *tmp_called_name_24;
            PyObject *tmp_mvar_value_24;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_left_name_16;
            PyObject *tmp_right_name_16;
            PyObject *tmp_kw_name_6;
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_make_strictly_feasible );

            if (unlikely( tmp_mvar_value_24 == NULL ))
            {
                tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_make_strictly_feasible );
            }

            if ( tmp_mvar_value_24 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "make_strictly_feasible" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 232;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_called_name_24 = tmp_mvar_value_24;
            CHECK_OBJECT( var_x );
            tmp_left_name_16 = var_x;
            CHECK_OBJECT( var_step );
            tmp_right_name_16 = var_step;
            tmp_tuple_element_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_16 );
            if ( tmp_tuple_element_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 232;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_args_name_6 = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( par_lb );
            tmp_tuple_element_8 = par_lb;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_8 );
            CHECK_OBJECT( par_ub );
            tmp_tuple_element_8 = par_ub;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_8 );
            tmp_kw_name_6 = PyDict_Copy( const_dict_4d00801cbb538f761d0649b12a6bb7a7 );
            frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 232;
            tmp_assign_source_69 = CALL_FUNCTION( tmp_called_name_24, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_args_name_6 );
            Py_DECREF( tmp_kw_name_6 );
            if ( tmp_assign_source_69 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 232;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = var_x;
                assert( old != NULL );
                var_x = tmp_assign_source_69;
                Py_DECREF( old );
            }

        }
        branch_end_15:;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_name_25;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_args_element_name_60;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 234;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_name_25 = tmp_mvar_value_25;
        CHECK_OBJECT( var_step );
        tmp_args_element_name_60 = var_step;
        frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = { tmp_args_element_name_60 };
            tmp_assign_source_70 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
        }

        if ( tmp_assign_source_70 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_step_norm;
            assert( old != NULL );
            var_step_norm = tmp_assign_source_70;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_left_name_17;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_61;
        PyObject *tmp_right_name_17;
        CHECK_OBJECT( par_A );
        tmp_called_instance_6 = par_A;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_61 = var_x;
        frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = { tmp_args_element_name_61 };
            tmp_left_name_17 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT( par_b );
        tmp_right_name_17 = par_b;
        tmp_assign_source_71 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_17 );
        Py_DECREF( tmp_left_name_17 );
        if ( tmp_assign_source_71 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_r;
            assert( old != NULL );
            var_r = tmp_assign_source_71;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_name_26;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_args_element_name_62;
        PyObject *tmp_args_element_name_63;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_compute_grad );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compute_grad );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compute_grad" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_name_26 = tmp_mvar_value_26;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_62 = par_A;
        CHECK_OBJECT( var_r );
        tmp_args_element_name_63 = var_r;
        frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 236;
        {
            PyObject *call_args[] = { tmp_args_element_name_62, tmp_args_element_name_63 };
            tmp_assign_source_72 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_26, call_args );
        }

        if ( tmp_assign_source_72 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_g;
            assert( old != NULL );
            var_g = tmp_assign_source_72;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_18;
        CHECK_OBJECT( var_cost_change );
        tmp_compexpr_left_15 = var_cost_change;
        CHECK_OBJECT( par_tol );
        tmp_left_name_18 = par_tol;
        CHECK_OBJECT( var_cost );
        tmp_right_name_18 = var_cost;
        tmp_compexpr_right_15 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
        if ( tmp_compexpr_right_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
        Py_DECREF( tmp_compexpr_right_15 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
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
            PyObject *tmp_assign_source_73;
            tmp_assign_source_73 = const_int_pos_2;
            {
                PyObject *old = var_termination_status;
                var_termination_status = tmp_assign_source_73;
                Py_INCREF( var_termination_status );
                Py_XDECREF( old );
            }

        }
        branch_no_16:;
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_args_element_name_64;
        PyObject *tmp_args_element_name_65;
        tmp_left_name_19 = const_float_0_5;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_instance_7 = tmp_mvar_value_27;
        CHECK_OBJECT( var_r );
        tmp_args_element_name_64 = var_r;
        CHECK_OBJECT( var_r );
        tmp_args_element_name_65 = var_r;
        frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = { tmp_args_element_name_64, tmp_args_element_name_65 };
            tmp_right_name_19 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_74 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_19, tmp_right_name_19 );
        Py_DECREF( tmp_right_name_19 );
        if ( tmp_assign_source_74 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_cost;
            assert( old != NULL );
            var_cost = tmp_assign_source_74;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        if ( var_termination_status == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "termination_status" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_16 = var_termination_status;
        tmp_compexpr_right_16 = Py_None;
        tmp_condition_result_17 = ( tmp_compexpr_left_16 == tmp_compexpr_right_16 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_75;
            tmp_assign_source_75 = const_int_0;
            {
                PyObject *old = var_termination_status;
                var_termination_status = tmp_assign_source_75;
                Py_INCREF( var_termination_status );
                Py_XDECREF( old );
            }

        }
        branch_no_17:;
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_name_27;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_args_name_7;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kw_name_7;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_find_active_constraints );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_find_active_constraints );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "find_active_constraints" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_27 = tmp_mvar_value_28;
        CHECK_OBJECT( var_x );
        tmp_tuple_element_9 = var_x;
        tmp_args_name_7 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_9 );
        CHECK_OBJECT( par_lb );
        tmp_tuple_element_9 = par_lb;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_9 );
        CHECK_OBJECT( par_ub );
        tmp_tuple_element_9 = par_ub;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_args_name_7, 2, tmp_tuple_element_9 );
        tmp_dict_key_4 = const_str_plain_rtol;
        CHECK_OBJECT( par_tol );
        tmp_dict_value_4 = par_tol;
        tmp_kw_name_7 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 246;
        tmp_assign_source_76 = CALL_FUNCTION( tmp_called_name_27, tmp_args_name_7, tmp_kw_name_7 );
        Py_DECREF( tmp_args_name_7 );
        Py_DECREF( tmp_kw_name_7 );
        if ( tmp_assign_source_76 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_active_mask == NULL );
        var_active_mask = tmp_assign_source_76;
    }
    {
        PyObject *tmp_called_name_28;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_kw_name_8;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_20;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_OptimizeResult );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeResult );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 248;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_28 = tmp_mvar_value_29;
        tmp_dict_key_5 = const_str_plain_x;
        CHECK_OBJECT( var_x );
        tmp_dict_value_5 = var_x;
        tmp_kw_name_8 = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_fun;
        CHECK_OBJECT( var_r );
        tmp_dict_value_6 = var_r;
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_cost;
        CHECK_OBJECT( var_cost );
        tmp_dict_value_7 = var_cost;
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_optimality;
        if ( var_g_norm == NULL )
        {
            Py_DECREF( tmp_kw_name_8 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g_norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_8 = var_g_norm;
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_str_plain_active_mask;
        CHECK_OBJECT( var_active_mask );
        tmp_dict_value_9 = var_active_mask;
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_10 = const_str_plain_nit;
        if ( var_iteration == NULL )
        {
            Py_DECREF( tmp_kw_name_8 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "iteration" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 250;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_20 = var_iteration;
        tmp_right_name_20 = const_int_pos_1;
        tmp_dict_value_10 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_20, tmp_right_name_20 );
        if ( tmp_dict_value_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_8 );

            exception_lineno = 250;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_10, tmp_dict_value_10 );
        Py_DECREF( tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_11 = const_str_plain_status;
        if ( var_termination_status == NULL )
        {
            Py_DECREF( tmp_kw_name_8 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "termination_status" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 250;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_11 = var_termination_status;
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_11, tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_12 = const_str_plain_initial_cost;
        CHECK_OBJECT( var_initial_cost );
        tmp_dict_value_12 = var_initial_cost;
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_12, tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        frame_18551173f3b3a121ef03d742dcd11c42->m_frame.f_lineno = 248;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_28, tmp_kw_name_8 );
        Py_DECREF( tmp_kw_name_8 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_18551173f3b3a121ef03d742dcd11c42 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_18551173f3b3a121ef03d742dcd11c42 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_18551173f3b3a121ef03d742dcd11c42 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_18551173f3b3a121ef03d742dcd11c42, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_18551173f3b3a121ef03d742dcd11c42->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_18551173f3b3a121ef03d742dcd11c42, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_18551173f3b3a121ef03d742dcd11c42,
        type_description_1,
        par_A,
        par_b,
        par_x_lsq,
        par_lb,
        par_ub,
        par_tol,
        par_lsq_solver,
        par_lsmr_tol,
        par_max_iter,
        par_verbose,
        var_m,
        var_n,
        var_x,
        var__,
        var_QT,
        var_R,
        var_perm,
        var_QTr,
        var_k,
        var_r_aug,
        var_auto_lsmr_tol,
        var_r,
        var_g,
        var_cost,
        var_initial_cost,
        var_termination_status,
        var_step_norm,
        var_cost_change,
        var_iteration,
        var_v,
        var_dv,
        var_g_scaled,
        var_g_norm,
        var_diag_h,
        var_diag_root_h,
        var_d,
        var_g_h,
        var_A_h,
        var_p_h,
        var_lsmr_op,
        var_eta,
        var_p,
        var_p_dot_g,
        var_theta,
        var_step,
        var_active_mask
    );


    // Release cached frame.
    if ( frame_18551173f3b3a121ef03d742dcd11c42 == cache_frame_18551173f3b3a121ef03d742dcd11c42 )
    {
        Py_DECREF( frame_18551173f3b3a121ef03d742dcd11c42 );
    }
    cache_frame_18551173f3b3a121ef03d742dcd11c42 = NULL;

    assertFrameObject( frame_18551173f3b3a121ef03d742dcd11c42 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$trf_linear$$$function_4_trf_linear );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_x_lsq );
    Py_DECREF( par_x_lsq );
    par_x_lsq = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_lsq_solver );
    Py_DECREF( par_lsq_solver );
    par_lsq_solver = NULL;

    Py_XDECREF( par_lsmr_tol );
    par_lsmr_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_max_iter );
    Py_DECREF( par_max_iter );
    par_max_iter = NULL;

    CHECK_OBJECT( (PyObject *)par_verbose );
    Py_DECREF( par_verbose );
    par_verbose = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var__ );
    Py_DECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_QT );
    var_QT = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    Py_XDECREF( var_perm );
    var_perm = NULL;

    Py_XDECREF( var_QTr );
    var_QTr = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_r_aug );
    var_r_aug = NULL;

    Py_XDECREF( var_auto_lsmr_tol );
    var_auto_lsmr_tol = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)var_g );
    Py_DECREF( var_g );
    var_g = NULL;

    CHECK_OBJECT( (PyObject *)var_cost );
    Py_DECREF( var_cost );
    var_cost = NULL;

    CHECK_OBJECT( (PyObject *)var_initial_cost );
    Py_DECREF( var_initial_cost );
    var_initial_cost = NULL;

    Py_XDECREF( var_termination_status );
    var_termination_status = NULL;

    CHECK_OBJECT( (PyObject *)var_step_norm );
    Py_DECREF( var_step_norm );
    var_step_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_cost_change );
    Py_DECREF( var_cost_change );
    var_cost_change = NULL;

    Py_XDECREF( var_iteration );
    var_iteration = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_dv );
    var_dv = NULL;

    Py_XDECREF( var_g_scaled );
    var_g_scaled = NULL;

    Py_XDECREF( var_g_norm );
    var_g_norm = NULL;

    Py_XDECREF( var_diag_h );
    var_diag_h = NULL;

    Py_XDECREF( var_diag_root_h );
    var_diag_root_h = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_g_h );
    var_g_h = NULL;

    Py_XDECREF( var_A_h );
    var_A_h = NULL;

    Py_XDECREF( var_p_h );
    var_p_h = NULL;

    Py_XDECREF( var_lsmr_op );
    var_lsmr_op = NULL;

    Py_XDECREF( var_eta );
    var_eta = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_p_dot_g );
    var_p_dot_g = NULL;

    Py_XDECREF( var_theta );
    var_theta = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    CHECK_OBJECT( (PyObject *)var_active_mask );
    Py_DECREF( var_active_mask );
    var_active_mask = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_x_lsq );
    Py_DECREF( par_x_lsq );
    par_x_lsq = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_lsq_solver );
    Py_DECREF( par_lsq_solver );
    par_lsq_solver = NULL;

    Py_XDECREF( par_lsmr_tol );
    par_lsmr_tol = NULL;

    Py_XDECREF( par_max_iter );
    par_max_iter = NULL;

    CHECK_OBJECT( (PyObject *)par_verbose );
    Py_DECREF( par_verbose );
    par_verbose = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_QT );
    var_QT = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    Py_XDECREF( var_perm );
    var_perm = NULL;

    Py_XDECREF( var_QTr );
    var_QTr = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_r_aug );
    var_r_aug = NULL;

    Py_XDECREF( var_auto_lsmr_tol );
    var_auto_lsmr_tol = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_cost );
    var_cost = NULL;

    Py_XDECREF( var_initial_cost );
    var_initial_cost = NULL;

    Py_XDECREF( var_termination_status );
    var_termination_status = NULL;

    Py_XDECREF( var_step_norm );
    var_step_norm = NULL;

    Py_XDECREF( var_cost_change );
    var_cost_change = NULL;

    Py_XDECREF( var_iteration );
    var_iteration = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_dv );
    var_dv = NULL;

    Py_XDECREF( var_g_scaled );
    var_g_scaled = NULL;

    Py_XDECREF( var_g_norm );
    var_g_norm = NULL;

    Py_XDECREF( var_diag_h );
    var_diag_h = NULL;

    Py_XDECREF( var_diag_root_h );
    var_diag_root_h = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_g_h );
    var_g_h = NULL;

    Py_XDECREF( var_A_h );
    var_A_h = NULL;

    Py_XDECREF( var_p_h );
    var_p_h = NULL;

    Py_XDECREF( var_lsmr_op );
    var_lsmr_op = NULL;

    Py_XDECREF( var_eta );
    var_eta = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_p_dot_g );
    var_p_dot_g = NULL;

    Py_XDECREF( var_theta );
    var_theta = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_active_mask );
    var_active_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$trf_linear$$$function_4_trf_linear );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$trf_linear$$$function_1_regularized_lsq_with_qr( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$trf_linear$$$function_1_regularized_lsq_with_qr,
        const_str_plain_regularized_lsq_with_qr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6b9d522e331ef35741cf290984accc1b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$trf_linear,
        const_str_digest_738662035d52108c68681765bdddef27,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$trf_linear$$$function_2_backtracking(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$trf_linear$$$function_2_backtracking,
        const_str_plain_backtracking,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_902dc52ed0a5cbe247c315f72f156e46,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$trf_linear,
        const_str_digest_7f2c2a7b9730b57afe019b1f7f45dea6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$trf_linear$$$function_3_select_step(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$trf_linear$$$function_3_select_step,
        const_str_plain_select_step,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5ca30250c19b6f5cad0755ee3e4b5bf4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$trf_linear,
        const_str_digest_7128459563c13bb5328700e5c2372d59,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$trf_linear$$$function_4_trf_linear(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$trf_linear$$$function_4_trf_linear,
        const_str_plain_trf_linear,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_18551173f3b3a121ef03d742dcd11c42,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$trf_linear,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_lsq$trf_linear =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._lsq.trf_linear",
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

MOD_INIT_DECL( scipy$optimize$_lsq$trf_linear )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_lsq$trf_linear );
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
    puts("scipy.optimize._lsq.trf_linear: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._lsq.trf_linear: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._lsq.trf_linear: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_lsq$trf_linear" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_lsq$trf_linear = Py_InitModule4(
        "scipy.optimize._lsq.trf_linear",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_lsq$trf_linear = PyModule_Create( &mdef_scipy$optimize$_lsq$trf_linear );
#endif

    moduledict_scipy$optimize$_lsq$trf_linear = MODULE_DICT( module_scipy$optimize$_lsq$trf_linear );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_lsq$trf_linear,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_lsq$trf_linear,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_lsq$trf_linear,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_lsq$trf_linear,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_lsq$trf_linear );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_ab47e4550adf05b8e9c87cc23370453a, module_scipy$optimize$_lsq$trf_linear );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_fb21ffa70d6308617c2a95754423f1e3;
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
        tmp_assign_source_1 = const_str_digest_88c713e4276b342a3d57c07d6a97af50;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_fb21ffa70d6308617c2a95754423f1e3 = MAKE_MODULE_FRAME( codeobj_fb21ffa70d6308617c2a95754423f1e3, module_scipy$optimize$_lsq$trf_linear );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_fb21ffa70d6308617c2a95754423f1e3 );
    assert( Py_REFCNT( frame_fb21ffa70d6308617c2a95754423f1e3 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_fb21ffa70d6308617c2a95754423f1e3->m_frame.f_lineno = 3;
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


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_fb21ffa70d6308617c2a95754423f1e3->m_frame.f_lineno = 5;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_norm_tuple;
        tmp_level_name_2 = const_int_0;
        frame_fb21ffa70d6308617c2a95754423f1e3->m_frame.f_lineno = 6;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_norm );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_qr_str_plain_solve_triangular_tuple;
        tmp_level_name_3 = const_int_0;
        frame_fb21ffa70d6308617c2a95754423f1e3->m_frame.f_lineno = 7;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_qr );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_qr, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_solve_triangular );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_solve_triangular, tmp_assign_source_12 );
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_8783708b6421c71a0892a844e756fb02;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_lsmr_tuple;
        tmp_level_name_4 = const_int_0;
        frame_fb21ffa70d6308617c2a95754423f1e3->m_frame.f_lineno = 8;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_lsmr );
        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_lsmr, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_a0dfa9cb56b41095d297f9de64891d65;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_OptimizeResult_tuple;
        tmp_level_name_5 = const_int_0;
        frame_fb21ffa70d6308617c2a95754423f1e3->m_frame.f_lineno = 9;
        tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_OptimizeResult );
        Py_DECREF( tmp_import_name_from_8 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_OptimizeResult, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_givens_elimination;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_givens_elimination_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_fb21ffa70d6308617c2a95754423f1e3->m_frame.f_lineno = 11;
        tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear,
                const_str_plain_givens_elimination,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_givens_elimination );
        }

        Py_DECREF( tmp_import_name_from_9 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_givens_elimination, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_common;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_87efbfe8c5c12441f046ca1d852fa225_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_fb21ffa70d6308617c2a95754423f1e3->m_frame.f_lineno = 12;
        tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear,
                const_str_plain_EPS,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_EPS );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_EPS, tmp_assign_source_17 );
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
                (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear,
                const_str_plain_step_size_to_bound,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_step_size_to_bound );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_step_size_to_bound, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_12 ) )
        {
           tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear,
                const_str_plain_find_active_constraints,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_find_active_constraints );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_find_active_constraints, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_13 ) )
        {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear,
                const_str_plain_in_bounds,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_in_bounds );
        }

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_in_bounds, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_14 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_14 ) )
        {
           tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear,
                const_str_plain_make_strictly_feasible,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_make_strictly_feasible );
        }

        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_make_strictly_feasible, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_15 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_15 ) )
        {
           tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear,
                const_str_plain_build_quadratic_1d,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_build_quadratic_1d );
        }

        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_build_quadratic_1d, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_16 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_16 ) )
        {
           tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear,
                const_str_plain_evaluate_quadratic,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_evaluate_quadratic );
        }

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_evaluate_quadratic, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_17 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_17 ) )
        {
           tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear,
                const_str_plain_minimize_quadratic_1d,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_minimize_quadratic_1d );
        }

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_minimize_quadratic_1d, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_18 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_18 ) )
        {
           tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear,
                const_str_plain_CL_scaling_vector,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_CL_scaling_vector );
        }

        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_CL_scaling_vector, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_19 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_19 ) )
        {
           tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear,
                const_str_plain_reflective_transformation,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_reflective_transformation );
        }

        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_reflective_transformation, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_20 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_20 ) )
        {
           tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear,
                const_str_plain_print_header_linear,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_print_header_linear );
        }

        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_print_header_linear, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_21 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_21 ) )
        {
           tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear,
                const_str_plain_print_iteration_linear,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_print_iteration_linear );
        }

        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_print_iteration_linear, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_22 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_22 ) )
        {
           tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear,
                const_str_plain_compute_grad,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_compute_grad );
        }

        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_compute_grad, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_23 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_23 ) )
        {
           tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear,
                const_str_plain_regularized_lsq_operator,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_regularized_lsq_operator );
        }

        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_regularized_lsq_operator, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_24 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_24 ) )
        {
           tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf_linear,
                const_str_plain_right_multiplied_operator,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_right_multiplied_operator );
        }

        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_right_multiplied_operator, tmp_assign_source_31 );
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
    RESTORE_FRAME_EXCEPTION( frame_fb21ffa70d6308617c2a95754423f1e3 );
#endif
    popFrameStack();

    assertFrameObject( frame_fb21ffa70d6308617c2a95754423f1e3 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb21ffa70d6308617c2a95754423f1e3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fb21ffa70d6308617c2a95754423f1e3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fb21ffa70d6308617c2a95754423f1e3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fb21ffa70d6308617c2a95754423f1e3, exception_lineno );
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
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_true_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_32 = MAKE_FUNCTION_scipy$optimize$_lsq$trf_linear$$$function_1_regularized_lsq_with_qr( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_regularized_lsq_with_qr, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_FUNCTION_scipy$optimize$_lsq$trf_linear$$$function_2_backtracking(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_backtracking, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_scipy$optimize$_lsq$trf_linear$$$function_3_select_step(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_select_step, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_FUNCTION_scipy$optimize$_lsq$trf_linear$$$function_4_trf_linear(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain_trf_linear, tmp_assign_source_35 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf_linear, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_lsq$trf_linear );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
