/* Generated code for Python module 'scipy.optimize._lsq.trf'
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

/* The "_module_scipy$optimize$_lsq$trf" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_lsq$trf;
PyDictObject *moduledict_scipy$optimize$_lsq$trf;

/* The declarations of module constants used, if any. */
static PyObject *const_tuple_str_plain_svd_str_plain_qr_tuple;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_isfinite;
extern PyObject *const_str_plain_inf;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_full_matrices;
extern PyObject *const_str_plain_OptimizeResult;
extern PyObject *const_str_plain_cost_only;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_zeros_like;
extern PyObject *const_dict_9e1b4601096819506f8f581e889fa028;
static PyObject *const_tuple_str_plain_regularize_true_tuple;
extern PyObject *const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
extern PyObject *const_str_plain_bool;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_njev;
extern PyObject *const_str_plain_jac;
extern PyObject *const_str_plain_division;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_size;
extern PyObject *const_tuple_str_plain_lsmr_tuple;
extern PyObject *const_str_plain_intersect_trust_region;
static PyObject *const_tuple_9266136d2d8f6bcbd511fe21385d5261_tuple;
extern PyObject *const_str_plain_qr;
extern PyObject *const_float_0_25;
extern PyObject *const_str_plain_optimality;
extern PyObject *const_str_plain_astype;
extern PyObject *const_str_plain_check_termination;
extern PyObject *const_float_0_5;
static PyObject *const_str_plain_initial_alpha;
extern PyObject *const_str_plain_find_active_constraints;
extern PyObject *const_str_plain_regularized_lsq_operator;
extern PyObject *const_str_plain_evaluate_quadratic;
extern PyObject *const_str_plain_nfev;
extern PyObject *const_str_plain_print_header_nonlinear;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_diag;
extern PyObject *const_str_plain_solve_lsq_trust_region;
extern PyObject *const_float_0_95;
extern PyObject *const_str_plain_scale_for_robust_loss_function;
extern PyObject *const_str_plain_build_quadratic_1d;
extern PyObject *const_str_plain_rtol;
extern PyObject *const_str_digest_c88389693d9d476899c1c6e170568469;
extern PyObject *const_str_plain_x_scale;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_right_multiplied_operator;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_regularize;
extern PyObject *const_str_plain_string_types;
extern PyObject *const_str_plain_minimize_quadratic_1d;
extern PyObject *const_str_plain_x0;
extern PyObject *const_str_plain_compute_grad;
extern PyObject *const_str_plain_all;
static PyObject *const_str_plain_damp;
extern PyObject *const_str_plain_print_iteration_nonlinear;
extern PyObject *const_str_plain_max_nfev;
extern PyObject *const_str_digest_7128459563c13bb5328700e5c2372d59;
extern PyObject *const_str_plain_compute_jac_scale;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_xtol;
extern PyObject *const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
extern PyObject *const_str_plain_fun;
static PyObject *const_str_plain_tr_options;
extern PyObject *const_str_plain_economic;
extern PyObject *const_str_plain_norm;
static PyObject *const_str_plain_trf_bounds;
extern PyObject *const_str_plain_svd;
extern PyObject *const_str_plain_ub;
extern PyObject *const_str_plain_ftol;
static PyObject *const_tuple_b179e795b3b0827c0a224742ef402c69_tuple;
static PyObject *const_str_digest_3a7aa7397ce3f36b858c692b5ab4fb7a;
static PyObject *const_str_digest_bcd993d14fb0d17cac54ee744de67613;
extern PyObject *const_str_plain_select_step;
extern PyObject *const_str_plain_gtol;
extern PyObject *const_dict_4d00801cbb538f761d0649b12a6bb7a7;
static PyObject *const_str_plain_trf_no_bounds;
extern PyObject *const_str_plain_loss_function;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_lsmr;
extern PyObject *const_str_plain_verbose;
extern PyObject *const_str_plain_rstep;
extern PyObject *const_str_digest_8783708b6421c71a0892a844e756fb02;
static PyObject *const_tuple_73db8f175c2789fc7be046dd2e917c68_tuple;
extern PyObject *const_str_plain_vstack;
static PyObject *const_tuple_7df16ed13ac0f7ce6c4e9526a2759158_tuple;
extern PyObject *const_str_plain_CL_scaling_vector;
extern PyObject *const_str_plain_grad;
extern PyObject *const_str_plain_pop;
extern PyObject *const_str_plain_active_mask;
static PyObject *const_float_0_995;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_damp_float_0_0_tuple;
extern PyObject *const_str_plain_ord;
static PyObject *const_str_plain_tr_solver;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_str_plain_string_types_tuple;
extern PyObject *const_str_plain_c;
extern PyObject *const_dict_879d90f7995f6ab655dbe7fad38230a5;
extern PyObject *const_str_plain_step_size_to_bound;
extern PyObject *const_str_plain_f0;
static PyObject *const_str_plain_J0;
extern PyObject *const_str_plain_trf;
extern PyObject *const_str_plain_exact;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_tuple_str_plain_OptimizeResult_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_update_tr_radius;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_cost;
static PyObject *const_str_digest_fb13162cce80dbf41f60ed4bcbf88a87;
extern PyObject *const_str_plain_solve_trust_region_2d;
extern PyObject *const_str_plain_make_strictly_feasible;
extern PyObject *const_str_plain_lb;
extern PyObject *const_str_plain_in_bounds;
static PyObject *const_tuple_1887832e552ac2d9d0d51da6e9f4daff_tuple;
extern PyObject *const_str_plain_T;
static PyObject *const_str_digest_ebdf05d634aa7bf0aded7cdf5324c846;
extern PyObject *const_str_plain_s0;
extern PyObject *const_tuple_str_plain_norm_tuple;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_dict_09ef4d9552d8b86e4ec711df1e8d781f;
extern PyObject *const_str_digest_a0dfa9cb56b41095d297f9de64891d65;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_common;
extern PyObject *const_int_pos_100;
extern PyObject *const_tuple_type_bool_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_svd_str_plain_qr_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_svd_str_plain_qr_tuple, 0, const_str_plain_svd ); Py_INCREF( const_str_plain_svd );
    PyTuple_SET_ITEM( const_tuple_str_plain_svd_str_plain_qr_tuple, 1, const_str_plain_qr ); Py_INCREF( const_str_plain_qr );
    const_tuple_str_plain_regularize_true_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_regularize_true_tuple, 0, const_str_plain_regularize ); Py_INCREF( const_str_plain_regularize );
    PyTuple_SET_ITEM( const_tuple_str_plain_regularize_true_tuple, 1, Py_True ); Py_INCREF( Py_True );
    const_tuple_9266136d2d8f6bcbd511fe21385d5261_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4944989 ], 498 );
    const_str_plain_initial_alpha = UNSTREAM_STRING_ASCII( &constant_bin[ 4898591 ], 13, 1 );
    const_str_plain_damp = UNSTREAM_STRING_ASCII( &constant_bin[ 4113202 ], 4, 1 );
    const_str_plain_tr_options = UNSTREAM_STRING_ASCII( &constant_bin[ 4904422 ], 10, 1 );
    const_str_plain_trf_bounds = UNSTREAM_STRING_ASCII( &constant_bin[ 4945487 ], 10, 1 );
    const_tuple_b179e795b3b0827c0a224742ef402c69_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4945497 ], 204 );
    const_str_digest_3a7aa7397ce3f36b858c692b5ab4fb7a = UNSTREAM_STRING_ASCII( &constant_bin[ 4945701 ], 4661, 0 );
    const_str_digest_bcd993d14fb0d17cac54ee744de67613 = UNSTREAM_STRING_ASCII( &constant_bin[ 4950362 ], 26, 0 );
    const_str_plain_trf_no_bounds = UNSTREAM_STRING_ASCII( &constant_bin[ 4950388 ], 13, 1 );
    const_tuple_73db8f175c2789fc7be046dd2e917c68_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_73db8f175c2789fc7be046dd2e917c68_tuple, 0, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_73db8f175c2789fc7be046dd2e917c68_tuple, 1, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_73db8f175c2789fc7be046dd2e917c68_tuple, 2, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    PyTuple_SET_ITEM( const_tuple_73db8f175c2789fc7be046dd2e917c68_tuple, 3, const_str_plain_f0 ); Py_INCREF( const_str_plain_f0 );
    const_str_plain_J0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2113195 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_73db8f175c2789fc7be046dd2e917c68_tuple, 4, const_str_plain_J0 ); Py_INCREF( const_str_plain_J0 );
    PyTuple_SET_ITEM( const_tuple_73db8f175c2789fc7be046dd2e917c68_tuple, 5, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_73db8f175c2789fc7be046dd2e917c68_tuple, 6, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    PyTuple_SET_ITEM( const_tuple_73db8f175c2789fc7be046dd2e917c68_tuple, 7, const_str_plain_ftol ); Py_INCREF( const_str_plain_ftol );
    PyTuple_SET_ITEM( const_tuple_73db8f175c2789fc7be046dd2e917c68_tuple, 8, const_str_plain_xtol ); Py_INCREF( const_str_plain_xtol );
    PyTuple_SET_ITEM( const_tuple_73db8f175c2789fc7be046dd2e917c68_tuple, 9, const_str_plain_gtol ); Py_INCREF( const_str_plain_gtol );
    PyTuple_SET_ITEM( const_tuple_73db8f175c2789fc7be046dd2e917c68_tuple, 10, const_str_plain_max_nfev ); Py_INCREF( const_str_plain_max_nfev );
    PyTuple_SET_ITEM( const_tuple_73db8f175c2789fc7be046dd2e917c68_tuple, 11, const_str_plain_x_scale ); Py_INCREF( const_str_plain_x_scale );
    PyTuple_SET_ITEM( const_tuple_73db8f175c2789fc7be046dd2e917c68_tuple, 12, const_str_plain_loss_function ); Py_INCREF( const_str_plain_loss_function );
    const_str_plain_tr_solver = UNSTREAM_STRING_ASCII( &constant_bin[ 4904411 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_73db8f175c2789fc7be046dd2e917c68_tuple, 13, const_str_plain_tr_solver ); Py_INCREF( const_str_plain_tr_solver );
    PyTuple_SET_ITEM( const_tuple_73db8f175c2789fc7be046dd2e917c68_tuple, 14, const_str_plain_tr_options ); Py_INCREF( const_str_plain_tr_options );
    PyTuple_SET_ITEM( const_tuple_73db8f175c2789fc7be046dd2e917c68_tuple, 15, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    const_tuple_7df16ed13ac0f7ce6c4e9526a2759158_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4950401 ], 441 );
    const_float_0_995 = UNSTREAM_FLOAT( &constant_bin[ 4950842 ] );
    const_tuple_str_plain_damp_float_0_0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_damp_float_0_0_tuple, 0, const_str_plain_damp ); Py_INCREF( const_str_plain_damp );
    PyTuple_SET_ITEM( const_tuple_str_plain_damp_float_0_0_tuple, 1, const_float_0_0 ); Py_INCREF( const_float_0_0 );
    const_str_digest_fb13162cce80dbf41f60ed4bcbf88a87 = UNSTREAM_STRING_ASCII( &constant_bin[ 4950850 ], 23, 0 );
    const_tuple_1887832e552ac2d9d0d51da6e9f4daff_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4950873 ], 566 );
    const_str_digest_ebdf05d634aa7bf0aded7cdf5324c846 = UNSTREAM_STRING_ASCII( &constant_bin[ 4951439 ], 32, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_lsq$trf( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_7324bff478b3afddbff6798d2903bf7a;
static PyCodeObject *codeobj_3d2cbb38e1711d7089bc53bb65c56f2c;
static PyCodeObject *codeobj_519ffbf7bcf106104232afe1166fadfb;
static PyCodeObject *codeobj_83d55fe0a901222fd33ed240137bb468;
static PyCodeObject *codeobj_d100cc64c2930f0bda854c4884ee547d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_bcd993d14fb0d17cac54ee744de67613 );
    codeobj_7324bff478b3afddbff6798d2903bf7a = MAKE_CODEOBJ( module_filename_obj, const_str_digest_ebdf05d634aa7bf0aded7cdf5324c846, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_3d2cbb38e1711d7089bc53bb65c56f2c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_select_step, 131, const_tuple_b179e795b3b0827c0a224742ef402c69_tuple, 11, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_519ffbf7bcf106104232afe1166fadfb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_trf, 115, const_tuple_73db8f175c2789fc7be046dd2e917c68_tuple, 16, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_83d55fe0a901222fd33ed240137bb468 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_trf_bounds, 208, const_tuple_1887832e552ac2d9d0d51da6e9f4daff_tuple, 16, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d100cc64c2930f0bda854c4884ee547d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_trf_no_bounds, 408, const_tuple_9266136d2d8f6bcbd511fe21385d5261_tuple, 14, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_pos_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$trf$$$function_1_trf(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$trf$$$function_2_select_step(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$trf$$$function_3_trf_bounds(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$trf$$$function_4_trf_no_bounds(  );


// The module function definitions.
static PyObject *impl_scipy$optimize$_lsq$trf$$$function_1_trf( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fun = python_pars[ 0 ];
    PyObject *par_jac = python_pars[ 1 ];
    PyObject *par_x0 = python_pars[ 2 ];
    PyObject *par_f0 = python_pars[ 3 ];
    PyObject *par_J0 = python_pars[ 4 ];
    PyObject *par_lb = python_pars[ 5 ];
    PyObject *par_ub = python_pars[ 6 ];
    PyObject *par_ftol = python_pars[ 7 ];
    PyObject *par_xtol = python_pars[ 8 ];
    PyObject *par_gtol = python_pars[ 9 ];
    PyObject *par_max_nfev = python_pars[ 10 ];
    PyObject *par_x_scale = python_pars[ 11 ];
    PyObject *par_loss_function = python_pars[ 12 ];
    PyObject *par_tr_solver = python_pars[ 13 ];
    PyObject *par_tr_options = python_pars[ 14 ];
    PyObject *par_verbose = python_pars[ 15 ];
    struct Nuitka_FrameObject *frame_519ffbf7bcf106104232afe1166fadfb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_519ffbf7bcf106104232afe1166fadfb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_519ffbf7bcf106104232afe1166fadfb, codeobj_519ffbf7bcf106104232afe1166fadfb, module_scipy$optimize$_lsq$trf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_519ffbf7bcf106104232afe1166fadfb = cache_frame_519ffbf7bcf106104232afe1166fadfb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_519ffbf7bcf106104232afe1166fadfb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_519ffbf7bcf106104232afe1166fadfb ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        int tmp_truth_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 121;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_all );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_lb );
        tmp_compexpr_left_1 = par_lb;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 121;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inf );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 121;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 121;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 121;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_519ffbf7bcf106104232afe1166fadfb->m_frame.f_lineno = 121;
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


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 121;
            type_description_1 = "oooooooooooooooo";
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
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 121;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_all );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ub );
        tmp_compexpr_left_2 = par_ub;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 121;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_inf );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 121;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 121;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_519ffbf7bcf106104232afe1166fadfb->m_frame.f_lineno = 121;
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


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 121;
            type_description_1 = "oooooooooooooooo";
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
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
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
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_trf_no_bounds );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_trf_no_bounds );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "trf_no_bounds" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 122;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_5;
            CHECK_OBJECT( par_fun );
            tmp_args_element_name_3 = par_fun;
            CHECK_OBJECT( par_jac );
            tmp_args_element_name_4 = par_jac;
            CHECK_OBJECT( par_x0 );
            tmp_args_element_name_5 = par_x0;
            CHECK_OBJECT( par_f0 );
            tmp_args_element_name_6 = par_f0;
            CHECK_OBJECT( par_J0 );
            tmp_args_element_name_7 = par_J0;
            CHECK_OBJECT( par_ftol );
            tmp_args_element_name_8 = par_ftol;
            CHECK_OBJECT( par_xtol );
            tmp_args_element_name_9 = par_xtol;
            CHECK_OBJECT( par_gtol );
            tmp_args_element_name_10 = par_gtol;
            CHECK_OBJECT( par_max_nfev );
            tmp_args_element_name_11 = par_max_nfev;
            CHECK_OBJECT( par_x_scale );
            tmp_args_element_name_12 = par_x_scale;
            CHECK_OBJECT( par_loss_function );
            tmp_args_element_name_13 = par_loss_function;
            CHECK_OBJECT( par_tr_solver );
            tmp_args_element_name_14 = par_tr_solver;
            CHECK_OBJECT( par_tr_options );
            tmp_args_element_name_15 = par_tr_options;
            CHECK_OBJECT( par_verbose );
            tmp_args_element_name_16 = par_verbose;
            frame_519ffbf7bcf106104232afe1166fadfb->m_frame.f_lineno = 122;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS14( tmp_called_name_3, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 122;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_6;
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
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_args_element_name_28;
            PyObject *tmp_args_element_name_29;
            PyObject *tmp_args_element_name_30;
            PyObject *tmp_args_element_name_31;
            PyObject *tmp_args_element_name_32;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_trf_bounds );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_trf_bounds );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "trf_bounds" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 126;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_6;
            CHECK_OBJECT( par_fun );
            tmp_args_element_name_17 = par_fun;
            CHECK_OBJECT( par_jac );
            tmp_args_element_name_18 = par_jac;
            CHECK_OBJECT( par_x0 );
            tmp_args_element_name_19 = par_x0;
            CHECK_OBJECT( par_f0 );
            tmp_args_element_name_20 = par_f0;
            CHECK_OBJECT( par_J0 );
            tmp_args_element_name_21 = par_J0;
            CHECK_OBJECT( par_lb );
            tmp_args_element_name_22 = par_lb;
            CHECK_OBJECT( par_ub );
            tmp_args_element_name_23 = par_ub;
            CHECK_OBJECT( par_ftol );
            tmp_args_element_name_24 = par_ftol;
            CHECK_OBJECT( par_xtol );
            tmp_args_element_name_25 = par_xtol;
            CHECK_OBJECT( par_gtol );
            tmp_args_element_name_26 = par_gtol;
            CHECK_OBJECT( par_max_nfev );
            tmp_args_element_name_27 = par_max_nfev;
            CHECK_OBJECT( par_x_scale );
            tmp_args_element_name_28 = par_x_scale;
            CHECK_OBJECT( par_loss_function );
            tmp_args_element_name_29 = par_loss_function;
            CHECK_OBJECT( par_tr_solver );
            tmp_args_element_name_30 = par_tr_solver;
            CHECK_OBJECT( par_tr_options );
            tmp_args_element_name_31 = par_tr_options;
            CHECK_OBJECT( par_verbose );
            tmp_args_element_name_32 = par_verbose;
            frame_519ffbf7bcf106104232afe1166fadfb->m_frame.f_lineno = 126;
            {
                PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29, tmp_args_element_name_30, tmp_args_element_name_31, tmp_args_element_name_32 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS16( tmp_called_name_4, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 126;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_519ffbf7bcf106104232afe1166fadfb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_519ffbf7bcf106104232afe1166fadfb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_519ffbf7bcf106104232afe1166fadfb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_519ffbf7bcf106104232afe1166fadfb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_519ffbf7bcf106104232afe1166fadfb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_519ffbf7bcf106104232afe1166fadfb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_519ffbf7bcf106104232afe1166fadfb,
        type_description_1,
        par_fun,
        par_jac,
        par_x0,
        par_f0,
        par_J0,
        par_lb,
        par_ub,
        par_ftol,
        par_xtol,
        par_gtol,
        par_max_nfev,
        par_x_scale,
        par_loss_function,
        par_tr_solver,
        par_tr_options,
        par_verbose
    );


    // Release cached frame.
    if ( frame_519ffbf7bcf106104232afe1166fadfb == cache_frame_519ffbf7bcf106104232afe1166fadfb )
    {
        Py_DECREF( frame_519ffbf7bcf106104232afe1166fadfb );
    }
    cache_frame_519ffbf7bcf106104232afe1166fadfb = NULL;

    assertFrameObject( frame_519ffbf7bcf106104232afe1166fadfb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$trf$$$function_1_trf );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_f0 );
    Py_DECREF( par_f0 );
    par_f0 = NULL;

    CHECK_OBJECT( (PyObject *)par_J0 );
    Py_DECREF( par_J0 );
    par_J0 = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_gtol );
    Py_DECREF( par_gtol );
    par_gtol = NULL;

    CHECK_OBJECT( (PyObject *)par_max_nfev );
    Py_DECREF( par_max_nfev );
    par_max_nfev = NULL;

    CHECK_OBJECT( (PyObject *)par_x_scale );
    Py_DECREF( par_x_scale );
    par_x_scale = NULL;

    CHECK_OBJECT( (PyObject *)par_loss_function );
    Py_DECREF( par_loss_function );
    par_loss_function = NULL;

    CHECK_OBJECT( (PyObject *)par_tr_solver );
    Py_DECREF( par_tr_solver );
    par_tr_solver = NULL;

    CHECK_OBJECT( (PyObject *)par_tr_options );
    Py_DECREF( par_tr_options );
    par_tr_options = NULL;

    CHECK_OBJECT( (PyObject *)par_verbose );
    Py_DECREF( par_verbose );
    par_verbose = NULL;

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

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_f0 );
    Py_DECREF( par_f0 );
    par_f0 = NULL;

    CHECK_OBJECT( (PyObject *)par_J0 );
    Py_DECREF( par_J0 );
    par_J0 = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_gtol );
    Py_DECREF( par_gtol );
    par_gtol = NULL;

    CHECK_OBJECT( (PyObject *)par_max_nfev );
    Py_DECREF( par_max_nfev );
    par_max_nfev = NULL;

    CHECK_OBJECT( (PyObject *)par_x_scale );
    Py_DECREF( par_x_scale );
    par_x_scale = NULL;

    CHECK_OBJECT( (PyObject *)par_loss_function );
    Py_DECREF( par_loss_function );
    par_loss_function = NULL;

    CHECK_OBJECT( (PyObject *)par_tr_solver );
    Py_DECREF( par_tr_solver );
    par_tr_solver = NULL;

    CHECK_OBJECT( (PyObject *)par_tr_options );
    Py_DECREF( par_tr_options );
    par_tr_options = NULL;

    CHECK_OBJECT( (PyObject *)par_verbose );
    Py_DECREF( par_verbose );
    par_verbose = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$trf$$$function_1_trf );
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


static PyObject *impl_scipy$optimize$_lsq$trf$$$function_2_select_step( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_J_h = python_pars[ 1 ];
    PyObject *par_diag_h = python_pars[ 2 ];
    PyObject *par_g_h = python_pars[ 3 ];
    PyObject *par_p = python_pars[ 4 ];
    PyObject *par_p_h = python_pars[ 5 ];
    PyObject *par_d = python_pars[ 6 ];
    PyObject *par_Delta = python_pars[ 7 ];
    PyObject *par_lb = python_pars[ 8 ];
    PyObject *par_ub = python_pars[ 9 ];
    PyObject *par_theta = python_pars[ 10 ];
    PyObject *var_p_value = NULL;
    PyObject *var_p_stride = NULL;
    PyObject *var_hits = NULL;
    PyObject *var_r_h = NULL;
    PyObject *var_r = NULL;
    PyObject *var_x_on_bound = NULL;
    PyObject *var__ = NULL;
    PyObject *var_to_tr = NULL;
    PyObject *var_to_bound = NULL;
    PyObject *var_r_stride = NULL;
    PyObject *var_r_stride_l = NULL;
    PyObject *var_r_stride_u = NULL;
    PyObject *var_a = NULL;
    PyObject *var_b = NULL;
    PyObject *var_c = NULL;
    PyObject *var_r_value = NULL;
    PyObject *var_ag_h = NULL;
    PyObject *var_ag = NULL;
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
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__element_3 = NULL;
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
    PyObject *tmp_tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_tuple_unpack_8__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3d2cbb38e1711d7089bc53bb65c56f2c;
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
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    static struct Nuitka_FrameObject *cache_frame_3d2cbb38e1711d7089bc53bb65c56f2c = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3d2cbb38e1711d7089bc53bb65c56f2c, codeobj_3d2cbb38e1711d7089bc53bb65c56f2c, module_scipy$optimize$_lsq$trf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3d2cbb38e1711d7089bc53bb65c56f2c = cache_frame_3d2cbb38e1711d7089bc53bb65c56f2c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3d2cbb38e1711d7089bc53bb65c56f2c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3d2cbb38e1711d7089bc53bb65c56f2c ) == 2 ); // Frame stack

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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_in_bounds );

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

            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
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


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_2 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_3 = par_ub;
        frame_3d2cbb38e1711d7089bc53bb65c56f2c->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_evaluate_quadratic );

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

                exception_lineno = 134;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_J_h );
            tmp_tuple_element_1 = par_J_h;
            tmp_args_name_1 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_g_h );
            tmp_tuple_element_1 = par_g_h;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( par_p_h );
            tmp_tuple_element_1 = par_p_h;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_diag;
            CHECK_OBJECT( par_diag_h );
            tmp_dict_value_1 = par_diag_h;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_3d2cbb38e1711d7089bc53bb65c56f2c->m_frame.f_lineno = 134;
            tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 134;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_p_value == NULL );
            var_p_value = tmp_assign_source_1;
        }
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT( par_p );
            tmp_tuple_element_2 = par_p;
            tmp_return_value = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_p_h );
            tmp_tuple_element_2 = par_p_h;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( var_p_value );
            tmp_operand_name_1 = var_p_value;
            tmp_tuple_element_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 135;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_step_size_to_bound );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_step_size_to_bound );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "step_size_to_bound" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_4 = par_x;
        CHECK_OBJECT( par_p );
        tmp_args_element_name_5 = par_p;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_6 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_7 = par_ub;
        frame_3d2cbb38e1711d7089bc53bb65c56f2c->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 137;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 137;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    exception_lineno = 137;
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

            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 137;
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
        assert( var_p_stride == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_p_stride = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_hits == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_hits = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_4;
        CHECK_OBJECT( par_p_h );
        tmp_args_element_name_8 = par_p_h;
        frame_3d2cbb38e1711d7089bc53bb65c56f2c->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_copy, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r_h == NULL );
        var_r_h = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( var_r_h );
        tmp_assign_source_8 = var_r_h;
        assert( tmp_inplace_assign_subscr_1__target == NULL );
        Py_INCREF( tmp_assign_source_8 );
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( var_hits );
        tmp_called_instance_2 = var_hits;
        frame_3d2cbb38e1711d7089bc53bb65c56f2c->m_frame.f_lineno = 141;
        tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_astype, &PyTuple_GET_ITEM( const_tuple_type_bool_tuple, 0 ) );

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_inplace_assign_subscr_1__subscript == NULL );
        tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_9;
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


            exception_lineno = 141;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_2 = const_int_neg_1;
        tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
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


            exception_lineno = 141;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( par_d );
        tmp_left_name_3 = par_d;
        CHECK_OBJECT( var_r_h );
        tmp_right_name_3 = var_r_h;
        tmp_assign_source_10 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
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


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = tmp_left_name_4;
        par_p = tmp_assign_source_11;

    }
    {
        PyObject *tmp_assign_source_12;
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


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = tmp_left_name_5;
        par_p_h = tmp_assign_source_12;

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( par_x );
        tmp_left_name_6 = par_x;
        CHECK_OBJECT( par_p );
        tmp_right_name_6 = par_p;
        tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x_on_bound == NULL );
        var_x_on_bound = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_intersect_trust_region );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_intersect_trust_region );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "intersect_trust_region" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_name_4 = tmp_mvar_value_5;
        CHECK_OBJECT( par_p_h );
        tmp_args_element_name_9 = par_p_h;
        CHECK_OBJECT( var_r_h );
        tmp_args_element_name_10 = var_r_h;
        CHECK_OBJECT( par_Delta );
        tmp_args_element_name_11 = par_Delta;
        frame_3d2cbb38e1711d7089bc53bb65c56f2c->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 151;
            goto try_except_handler_6;
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 151;
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_16;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    exception_lineno = 151;
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

            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 151;
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
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_1;
        assert( var__ == NULL );
        Py_INCREF( tmp_assign_source_17 );
        var__ = tmp_assign_source_17;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_18 = tmp_tuple_unpack_2__element_2;
        assert( var_to_tr == NULL );
        Py_INCREF( tmp_assign_source_18 );
        var_to_tr = tmp_assign_source_18;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_step_size_to_bound );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_step_size_to_bound );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "step_size_to_bound" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_name_5 = tmp_mvar_value_6;
        CHECK_OBJECT( var_x_on_bound );
        tmp_args_element_name_12 = var_x_on_bound;
        CHECK_OBJECT( var_r );
        tmp_args_element_name_13 = var_r;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_14 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_15 = par_ub;
        frame_3d2cbb38e1711d7089bc53bb65c56f2c->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_5, call_args );
        }

        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__source_iter == NULL );
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 152;
            goto try_except_handler_8;
        }
        assert( tmp_tuple_unpack_3__element_1 == NULL );
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 152;
            goto try_except_handler_8;
        }
        assert( tmp_tuple_unpack_3__element_2 == NULL );
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_21;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    exception_lineno = 152;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 152;
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
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_22 = tmp_tuple_unpack_3__element_1;
        assert( var_to_bound == NULL );
        Py_INCREF( tmp_assign_source_22 );
        var_to_bound = tmp_assign_source_22;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
        tmp_assign_source_23 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var__;
            assert( old != NULL );
            var__ = tmp_assign_source_23;
            Py_INCREF( var__ );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_6 != NULL );
        CHECK_OBJECT( var_to_bound );
        tmp_args_element_name_16 = var_to_bound;
        CHECK_OBJECT( var_to_tr );
        tmp_args_element_name_17 = var_to_tr;
        frame_3d2cbb38e1711d7089bc53bb65c56f2c->m_frame.f_lineno = 158;
        {
            PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r_stride == NULL );
        var_r_stride = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_r_stride );
        tmp_compexpr_left_1 = var_r_stride;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_25;
            PyObject *tmp_left_name_7;
            PyObject *tmp_left_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_7;
            PyObject *tmp_right_name_8;
            PyObject *tmp_right_name_9;
            tmp_left_name_9 = const_int_pos_1;
            CHECK_OBJECT( par_theta );
            tmp_right_name_7 = par_theta;
            tmp_left_name_8 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_9, tmp_right_name_7 );
            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 160;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_p_stride );
            tmp_right_name_8 = var_p_stride;
            tmp_left_name_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
            Py_DECREF( tmp_left_name_8 );
            if ( tmp_left_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 160;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_r_stride );
            tmp_right_name_9 = var_r_stride;
            tmp_assign_source_25 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_9 );
            Py_DECREF( tmp_left_name_7 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 160;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_r_stride_l == NULL );
            var_r_stride_l = tmp_assign_source_25;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_r_stride );
            tmp_compexpr_left_2 = var_r_stride;
            CHECK_OBJECT( var_to_bound );
            tmp_compexpr_right_2 = var_to_bound;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
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
                PyObject *tmp_assign_source_26;
                PyObject *tmp_left_name_10;
                PyObject *tmp_right_name_10;
                CHECK_OBJECT( par_theta );
                tmp_left_name_10 = par_theta;
                CHECK_OBJECT( var_to_bound );
                tmp_right_name_10 = var_to_bound;
                tmp_assign_source_26 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
                if ( tmp_assign_source_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 162;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_r_stride_u == NULL );
                var_r_stride_u = tmp_assign_source_26;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_assign_source_27;
                CHECK_OBJECT( var_to_tr );
                tmp_assign_source_27 = var_to_tr;
                assert( var_r_stride_u == NULL );
                Py_INCREF( tmp_assign_source_27 );
                var_r_stride_u = tmp_assign_source_27;
            }
            branch_end_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = const_int_0;
            assert( var_r_stride_l == NULL );
            Py_INCREF( tmp_assign_source_28 );
            var_r_stride_l = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = const_int_neg_1;
            assert( var_r_stride_u == NULL );
            Py_INCREF( tmp_assign_source_29 );
            var_r_stride_u = tmp_assign_source_29;
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_r_stride_l );
        tmp_compexpr_left_3 = var_r_stride_l;
        if ( var_r_stride_u == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r_stride_u" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 170;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_3 = var_r_stride_u;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_build_quadratic_1d );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_build_quadratic_1d );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "build_quadratic_1d" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 171;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }

            tmp_called_name_7 = tmp_mvar_value_7;
            CHECK_OBJECT( par_J_h );
            tmp_tuple_element_3 = par_J_h;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( par_g_h );
            tmp_tuple_element_3 = par_g_h;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            CHECK_OBJECT( var_r_h );
            tmp_tuple_element_3 = var_r_h;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
            tmp_dict_key_2 = const_str_plain_s0;
            CHECK_OBJECT( par_p_h );
            tmp_dict_value_2 = par_p_h;
            tmp_kw_name_2 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_diag;
            CHECK_OBJECT( par_diag_h );
            tmp_dict_value_3 = par_diag_h;
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_3d2cbb38e1711d7089bc53bb65c56f2c->m_frame.f_lineno = 171;
            tmp_iter_arg_4 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_iter_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            tmp_assign_source_30 = MAKE_ITERATOR( tmp_iter_arg_4 );
            Py_DECREF( tmp_iter_arg_4 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            assert( tmp_tuple_unpack_4__source_iter == NULL );
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_30;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_31 = UNPACK_NEXT( tmp_unpack_7, 0, 3 );
            if ( tmp_assign_source_31 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 171;
                goto try_except_handler_10;
            }
            assert( tmp_tuple_unpack_4__element_1 == NULL );
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_31;
        }
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_32 = UNPACK_NEXT( tmp_unpack_8, 1, 3 );
            if ( tmp_assign_source_32 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 171;
                goto try_except_handler_10;
            }
            assert( tmp_tuple_unpack_4__element_2 == NULL );
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_32;
        }
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_unpack_9;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_33 = UNPACK_NEXT( tmp_unpack_9, 2, 3 );
            if ( tmp_assign_source_33 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 171;
                goto try_except_handler_10;
            }
            assert( tmp_tuple_unpack_4__element_3 == NULL );
            tmp_tuple_unpack_4__element_3 = tmp_assign_source_33;
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

                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        exception_lineno = 171;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 171;
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

        Py_XDECREF( tmp_tuple_unpack_4__element_3 );
        tmp_tuple_unpack_4__element_3 = NULL;

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
            PyObject *tmp_assign_source_34;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
            tmp_assign_source_34 = tmp_tuple_unpack_4__element_1;
            assert( var_a == NULL );
            Py_INCREF( tmp_assign_source_34 );
            var_a = tmp_assign_source_34;
        }
        Py_XDECREF( tmp_tuple_unpack_4__element_1 );
        tmp_tuple_unpack_4__element_1 = NULL;

        {
            PyObject *tmp_assign_source_35;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
            tmp_assign_source_35 = tmp_tuple_unpack_4__element_2;
            assert( var_b == NULL );
            Py_INCREF( tmp_assign_source_35 );
            var_b = tmp_assign_source_35;
        }
        Py_XDECREF( tmp_tuple_unpack_4__element_2 );
        tmp_tuple_unpack_4__element_2 = NULL;

        {
            PyObject *tmp_assign_source_36;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_3 );
            tmp_assign_source_36 = tmp_tuple_unpack_4__element_3;
            assert( var_c == NULL );
            Py_INCREF( tmp_assign_source_36 );
            var_c = tmp_assign_source_36;
        }
        Py_XDECREF( tmp_tuple_unpack_4__element_3 );
        tmp_tuple_unpack_4__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_minimize_quadratic_1d );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_minimize_quadratic_1d );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "minimize_quadratic_1d" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 172;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }

            tmp_called_name_8 = tmp_mvar_value_8;
            CHECK_OBJECT( var_a );
            tmp_tuple_element_4 = var_a;
            tmp_args_name_3 = PyTuple_New( 4 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( var_b );
            tmp_tuple_element_4 = var_b;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
            CHECK_OBJECT( var_r_stride_l );
            tmp_tuple_element_4 = var_r_stride_l;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 2, tmp_tuple_element_4 );
            if ( var_r_stride_u == NULL )
            {
                Py_DECREF( tmp_args_name_3 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r_stride_u" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 173;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }

            tmp_tuple_element_4 = var_r_stride_u;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 3, tmp_tuple_element_4 );
            tmp_dict_key_4 = const_str_plain_c;
            CHECK_OBJECT( var_c );
            tmp_dict_value_4 = var_c;
            tmp_kw_name_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            frame_3d2cbb38e1711d7089bc53bb65c56f2c->m_frame.f_lineno = 172;
            tmp_iter_arg_5 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_iter_arg_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 172;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            tmp_assign_source_37 = MAKE_ITERATOR( tmp_iter_arg_5 );
            Py_DECREF( tmp_iter_arg_5 );
            if ( tmp_assign_source_37 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 172;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            assert( tmp_tuple_unpack_5__source_iter == NULL );
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_37;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_unpack_10;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_38 = UNPACK_NEXT( tmp_unpack_10, 0, 2 );
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


                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 172;
                goto try_except_handler_12;
            }
            assert( tmp_tuple_unpack_5__element_1 == NULL );
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_38;
        }
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_unpack_11;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_11 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_39 = UNPACK_NEXT( tmp_unpack_11, 1, 2 );
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


                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 172;
                goto try_except_handler_12;
            }
            assert( tmp_tuple_unpack_5__element_2 == NULL );
            tmp_tuple_unpack_5__element_2 = tmp_assign_source_39;
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

                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        exception_lineno = 172;
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

                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 172;
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
            PyObject *tmp_assign_source_40;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
            tmp_assign_source_40 = tmp_tuple_unpack_5__element_1;
            {
                PyObject *old = var_r_stride;
                assert( old != NULL );
                var_r_stride = tmp_assign_source_40;
                Py_INCREF( var_r_stride );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_5__element_1 );
        tmp_tuple_unpack_5__element_1 = NULL;

        {
            PyObject *tmp_assign_source_41;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
            tmp_assign_source_41 = tmp_tuple_unpack_5__element_2;
            assert( var_r_value == NULL );
            Py_INCREF( tmp_assign_source_41 );
            var_r_value = tmp_assign_source_41;
        }
        Py_XDECREF( tmp_tuple_unpack_5__element_2 );
        tmp_tuple_unpack_5__element_2 = NULL;

        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            CHECK_OBJECT( var_r_h );
            tmp_left_name_11 = var_r_h;
            CHECK_OBJECT( var_r_stride );
            tmp_right_name_11 = var_r_stride;
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_11, tmp_right_name_11 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 174;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_42 = tmp_left_name_11;
            var_r_h = tmp_assign_source_42;

        }
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_12;
            CHECK_OBJECT( var_r_h );
            tmp_left_name_12 = var_r_h;
            CHECK_OBJECT( par_p_h );
            tmp_right_name_12 = par_p_h;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_12, tmp_right_name_12 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_43 = tmp_left_name_12;
            var_r_h = tmp_assign_source_43;

        }
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_left_name_13;
            PyObject *tmp_right_name_13;
            CHECK_OBJECT( var_r_h );
            tmp_left_name_13 = var_r_h;
            CHECK_OBJECT( par_d );
            tmp_right_name_13 = par_d;
            tmp_assign_source_44 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
            if ( tmp_assign_source_44 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_r;
                assert( old != NULL );
                var_r = tmp_assign_source_44;
                Py_DECREF( old );
            }

        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_9;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 178;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_9;
            tmp_assign_source_45 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
            if ( tmp_assign_source_45 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_r_value == NULL );
            var_r_value = tmp_assign_source_45;
        }
        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_46;
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


            exception_lineno = 181;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_46 = tmp_left_name_14;
        par_p = tmp_assign_source_46;

    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        CHECK_OBJECT( par_p_h );
        tmp_left_name_15 = par_p_h;
        CHECK_OBJECT( par_theta );
        tmp_right_name_15 = par_theta;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_15, tmp_right_name_15 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_47 = tmp_left_name_15;
        par_p_h = tmp_assign_source_47;

    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_evaluate_quadratic );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_evaluate_quadratic );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "evaluate_quadratic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_10;
        CHECK_OBJECT( par_J_h );
        tmp_tuple_element_5 = par_J_h;
        tmp_args_name_4 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( par_g_h );
        tmp_tuple_element_5 = par_g_h;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_5 );
        CHECK_OBJECT( par_p_h );
        tmp_tuple_element_5 = par_p_h;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_5 );
        tmp_dict_key_5 = const_str_plain_diag;
        CHECK_OBJECT( par_diag_h );
        tmp_dict_value_5 = par_diag_h;
        tmp_kw_name_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        frame_3d2cbb38e1711d7089bc53bb65c56f2c->m_frame.f_lineno = 183;
        tmp_assign_source_48 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_4, tmp_kw_name_4 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_p_value == NULL );
        var_p_value = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( par_g_h );
        tmp_operand_name_2 = par_g_h;
        tmp_assign_source_49 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        if ( tmp_assign_source_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ag_h == NULL );
        var_ag_h = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        CHECK_OBJECT( par_d );
        tmp_left_name_16 = par_d;
        CHECK_OBJECT( var_ag_h );
        tmp_right_name_16 = var_ag_h;
        tmp_assign_source_50 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_16 );
        if ( tmp_assign_source_50 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ag == NULL );
        var_ag = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_17;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_18;
        CHECK_OBJECT( par_Delta );
        tmp_left_name_17 = par_Delta;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_11;
        CHECK_OBJECT( var_ag_h );
        tmp_args_element_name_18 = var_ag_h;
        frame_3d2cbb38e1711d7089bc53bb65c56f2c->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_right_name_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        if ( tmp_right_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_51 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_17 );
        Py_DECREF( tmp_right_name_17 );
        if ( tmp_assign_source_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_to_tr;
            assert( old != NULL );
            var_to_tr = tmp_assign_source_51;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_step_size_to_bound );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_step_size_to_bound );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "step_size_to_bound" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_called_name_11 = tmp_mvar_value_12;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_19 = par_x;
        CHECK_OBJECT( var_ag );
        tmp_args_element_name_20 = var_ag;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_21 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_22 = par_ub;
        frame_3d2cbb38e1711d7089bc53bb65c56f2c->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22 };
            tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_11, call_args );
        }

        if ( tmp_iter_arg_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assign_source_52 = MAKE_ITERATOR( tmp_iter_arg_6 );
        Py_DECREF( tmp_iter_arg_6 );
        if ( tmp_assign_source_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        assert( tmp_tuple_unpack_6__source_iter == NULL );
        tmp_tuple_unpack_6__source_iter = tmp_assign_source_52;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
        tmp_unpack_12 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_53 = UNPACK_NEXT( tmp_unpack_12, 0, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 189;
            goto try_except_handler_14;
        }
        assert( tmp_tuple_unpack_6__element_1 == NULL );
        tmp_tuple_unpack_6__element_1 = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
        tmp_unpack_13 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_54 = UNPACK_NEXT( tmp_unpack_13, 1, 2 );
        if ( tmp_assign_source_54 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 189;
            goto try_except_handler_14;
        }
        assert( tmp_tuple_unpack_6__element_2 == NULL );
        tmp_tuple_unpack_6__element_2 = tmp_assign_source_54;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    exception_lineno = 189;
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

            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 189;
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
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT( tmp_tuple_unpack_6__element_1 );
        tmp_assign_source_55 = tmp_tuple_unpack_6__element_1;
        {
            PyObject *old = var_to_bound;
            assert( old != NULL );
            var_to_bound = tmp_assign_source_55;
            Py_INCREF( var_to_bound );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_6__element_1 );
    tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT( tmp_tuple_unpack_6__element_2 );
        tmp_assign_source_56 = tmp_tuple_unpack_6__element_2;
        {
            PyObject *old = var__;
            assert( old != NULL );
            var__ = tmp_assign_source_56;
            Py_INCREF( var__ );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_6__element_2 );
    tmp_tuple_unpack_6__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_to_bound );
        tmp_compexpr_left_4 = var_to_bound;
        CHECK_OBJECT( var_to_tr );
        tmp_compexpr_right_4 = var_to_tr;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_57;
            PyObject *tmp_left_name_18;
            PyObject *tmp_right_name_18;
            CHECK_OBJECT( par_theta );
            tmp_left_name_18 = par_theta;
            CHECK_OBJECT( var_to_bound );
            tmp_right_name_18 = var_to_bound;
            tmp_assign_source_57 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
            if ( tmp_assign_source_57 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 191;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_ag_stride == NULL );
            var_ag_stride = tmp_assign_source_57;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_58;
            CHECK_OBJECT( var_to_tr );
            tmp_assign_source_58 = var_to_tr;
            assert( var_ag_stride == NULL );
            Py_INCREF( tmp_assign_source_58 );
            var_ag_stride = tmp_assign_source_58;
        }
        branch_end_5:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kw_name_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_build_quadratic_1d );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_build_quadratic_1d );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "build_quadratic_1d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 195;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_called_name_12 = tmp_mvar_value_13;
        CHECK_OBJECT( par_J_h );
        tmp_tuple_element_6 = par_J_h;
        tmp_args_name_5 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( par_g_h );
        tmp_tuple_element_6 = par_g_h;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_6 );
        CHECK_OBJECT( var_ag_h );
        tmp_tuple_element_6 = var_ag_h;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_name_5, 2, tmp_tuple_element_6 );
        tmp_dict_key_6 = const_str_plain_diag;
        CHECK_OBJECT( par_diag_h );
        tmp_dict_value_6 = par_diag_h;
        tmp_kw_name_5 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        frame_3d2cbb38e1711d7089bc53bb65c56f2c->m_frame.f_lineno = 195;
        tmp_iter_arg_7 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_5, tmp_kw_name_5 );
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_5 );
        if ( tmp_iter_arg_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_assign_source_59 = MAKE_ITERATOR( tmp_iter_arg_7 );
        Py_DECREF( tmp_iter_arg_7 );
        if ( tmp_assign_source_59 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert( tmp_tuple_unpack_7__source_iter == NULL );
        tmp_tuple_unpack_7__source_iter = tmp_assign_source_59;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_14 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_60 = UNPACK_NEXT( tmp_unpack_14, 0, 2 );
        if ( tmp_assign_source_60 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 195;
            goto try_except_handler_16;
        }
        assert( tmp_tuple_unpack_7__element_1 == NULL );
        tmp_tuple_unpack_7__element_1 = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_15 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_61 = UNPACK_NEXT( tmp_unpack_15, 1, 2 );
        if ( tmp_assign_source_61 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 195;
            goto try_except_handler_16;
        }
        assert( tmp_tuple_unpack_7__element_2 == NULL );
        tmp_tuple_unpack_7__element_2 = tmp_assign_source_61;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    exception_lineno = 195;
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

            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 195;
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
        PyObject *tmp_assign_source_62;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_1 );
        tmp_assign_source_62 = tmp_tuple_unpack_7__element_1;
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_62;
            Py_INCREF( var_a );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_7__element_1 );
    tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_2 );
        tmp_assign_source_63 = tmp_tuple_unpack_7__element_2;
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_63;
            Py_INCREF( var_b );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_7__element_2 );
    tmp_tuple_unpack_7__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_minimize_quadratic_1d );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_minimize_quadratic_1d );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "minimize_quadratic_1d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 196;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_called_name_13 = tmp_mvar_value_14;
        CHECK_OBJECT( var_a );
        tmp_args_element_name_23 = var_a;
        CHECK_OBJECT( var_b );
        tmp_args_element_name_24 = var_b;
        tmp_args_element_name_25 = const_int_0;
        CHECK_OBJECT( var_ag_stride );
        tmp_args_element_name_26 = var_ag_stride;
        frame_3d2cbb38e1711d7089bc53bb65c56f2c->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26 };
            tmp_iter_arg_8 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_13, call_args );
        }

        if ( tmp_iter_arg_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_64 = MAKE_ITERATOR( tmp_iter_arg_8 );
        Py_DECREF( tmp_iter_arg_8 );
        if ( tmp_assign_source_64 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        assert( tmp_tuple_unpack_8__source_iter == NULL );
        tmp_tuple_unpack_8__source_iter = tmp_assign_source_64;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
        tmp_unpack_16 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_65 = UNPACK_NEXT( tmp_unpack_16, 0, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 196;
            goto try_except_handler_18;
        }
        assert( tmp_tuple_unpack_8__element_1 == NULL );
        tmp_tuple_unpack_8__element_1 = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
        tmp_unpack_17 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_66 = UNPACK_NEXT( tmp_unpack_17, 1, 2 );
        if ( tmp_assign_source_66 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 196;
            goto try_except_handler_18;
        }
        assert( tmp_tuple_unpack_8__element_2 == NULL );
        tmp_tuple_unpack_8__element_2 = tmp_assign_source_66;
    }
    {
        PyObject *tmp_iterator_name_8;
        CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
        tmp_iterator_name_8 = tmp_tuple_unpack_8__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_8 ); assert( HAS_ITERNEXT( tmp_iterator_name_8 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_8 )->tp_iternext)( tmp_iterator_name_8 );

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

                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    exception_lineno = 196;
                    goto try_except_handler_18;
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

            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 196;
            goto try_except_handler_18;
        }
    }
    goto try_end_16;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
    Py_DECREF( tmp_tuple_unpack_8__source_iter );
    tmp_tuple_unpack_8__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_17;
    // End of try:
    try_end_16:;
    goto try_end_17;
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

    Py_XDECREF( tmp_tuple_unpack_8__element_1 );
    tmp_tuple_unpack_8__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_2 );
    tmp_tuple_unpack_8__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
    Py_DECREF( tmp_tuple_unpack_8__source_iter );
    tmp_tuple_unpack_8__source_iter = NULL;

    {
        PyObject *tmp_assign_source_67;
        CHECK_OBJECT( tmp_tuple_unpack_8__element_1 );
        tmp_assign_source_67 = tmp_tuple_unpack_8__element_1;
        {
            PyObject *old = var_ag_stride;
            assert( old != NULL );
            var_ag_stride = tmp_assign_source_67;
            Py_INCREF( var_ag_stride );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_8__element_1 );
    tmp_tuple_unpack_8__element_1 = NULL;

    {
        PyObject *tmp_assign_source_68;
        CHECK_OBJECT( tmp_tuple_unpack_8__element_2 );
        tmp_assign_source_68 = tmp_tuple_unpack_8__element_2;
        assert( var_ag_value == NULL );
        Py_INCREF( tmp_assign_source_68 );
        var_ag_value = tmp_assign_source_68;
    }
    Py_XDECREF( tmp_tuple_unpack_8__element_2 );
    tmp_tuple_unpack_8__element_2 = NULL;

    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        CHECK_OBJECT( var_ag_h );
        tmp_left_name_19 = var_ag_h;
        CHECK_OBJECT( var_ag_stride );
        tmp_right_name_19 = var_ag_stride;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_19, tmp_right_name_19 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_69 = tmp_left_name_19;
        var_ag_h = tmp_assign_source_69;

    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_20;
        CHECK_OBJECT( var_ag );
        tmp_left_name_20 = var_ag;
        CHECK_OBJECT( var_ag_stride );
        tmp_right_name_20 = var_ag_stride;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_20, tmp_right_name_20 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_70 = tmp_left_name_20;
        var_ag = tmp_assign_source_70;

    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( var_p_value );
        tmp_compexpr_left_5 = var_p_value;
        CHECK_OBJECT( var_r_value );
        tmp_compexpr_right_5 = var_r_value;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
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
        tmp_compexpr_left_6 = var_p_value;
        CHECK_OBJECT( var_ag_value );
        tmp_compexpr_right_6 = var_ag_value;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_6 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_6 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_operand_name_3;
            CHECK_OBJECT( par_p );
            tmp_tuple_element_7 = par_p;
            tmp_return_value = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( par_p_h );
            tmp_tuple_element_7 = par_p_h;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_7 );
            CHECK_OBJECT( var_p_value );
            tmp_operand_name_3 = var_p_value;
            tmp_tuple_element_7 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
            if ( tmp_tuple_element_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 201;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_7 );
            goto frame_return_exit_1;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            nuitka_bool tmp_condition_result_7;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            CHECK_OBJECT( var_r_value );
            tmp_compexpr_left_7 = var_r_value;
            CHECK_OBJECT( var_p_value );
            tmp_compexpr_right_7 = var_p_value;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 202;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
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
            tmp_compexpr_left_8 = var_r_value;
            CHECK_OBJECT( var_ag_value );
            tmp_compexpr_right_8 = var_ag_value;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 202;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_7 = tmp_and_right_value_2;
            goto and_end_2;
            and_left_2:;
            tmp_condition_result_7 = tmp_and_left_value_2;
            and_end_2:;
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
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_operand_name_4;
                CHECK_OBJECT( var_r );
                tmp_tuple_element_8 = var_r;
                tmp_return_value = PyTuple_New( 3 );
                Py_INCREF( tmp_tuple_element_8 );
                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_8 );
                CHECK_OBJECT( var_r_h );
                tmp_tuple_element_8 = var_r_h;
                Py_INCREF( tmp_tuple_element_8 );
                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_8 );
                CHECK_OBJECT( var_r_value );
                tmp_operand_name_4 = var_r_value;
                tmp_tuple_element_8 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_4 );
                if ( tmp_tuple_element_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_return_value );

                    exception_lineno = 203;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_8 );
                goto frame_return_exit_1;
            }
            goto branch_end_7;
            branch_no_7:;
            {
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_operand_name_5;
                CHECK_OBJECT( var_ag );
                tmp_tuple_element_9 = var_ag;
                tmp_return_value = PyTuple_New( 3 );
                Py_INCREF( tmp_tuple_element_9 );
                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_9 );
                CHECK_OBJECT( var_ag_h );
                tmp_tuple_element_9 = var_ag_h;
                Py_INCREF( tmp_tuple_element_9 );
                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_9 );
                CHECK_OBJECT( var_ag_value );
                tmp_operand_name_5 = var_ag_value;
                tmp_tuple_element_9 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_5 );
                if ( tmp_tuple_element_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_return_value );

                    exception_lineno = 205;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_9 );
                goto frame_return_exit_1;
            }
            branch_end_7:;
        }
        branch_end_6:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d2cbb38e1711d7089bc53bb65c56f2c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d2cbb38e1711d7089bc53bb65c56f2c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d2cbb38e1711d7089bc53bb65c56f2c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3d2cbb38e1711d7089bc53bb65c56f2c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3d2cbb38e1711d7089bc53bb65c56f2c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3d2cbb38e1711d7089bc53bb65c56f2c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3d2cbb38e1711d7089bc53bb65c56f2c,
        type_description_1,
        par_x,
        par_J_h,
        par_diag_h,
        par_g_h,
        par_p,
        par_p_h,
        par_d,
        par_Delta,
        par_lb,
        par_ub,
        par_theta,
        var_p_value,
        var_p_stride,
        var_hits,
        var_r_h,
        var_r,
        var_x_on_bound,
        var__,
        var_to_tr,
        var_to_bound,
        var_r_stride,
        var_r_stride_l,
        var_r_stride_u,
        var_a,
        var_b,
        var_c,
        var_r_value,
        var_ag_h,
        var_ag,
        var_ag_stride,
        var_ag_value
    );


    // Release cached frame.
    if ( frame_3d2cbb38e1711d7089bc53bb65c56f2c == cache_frame_3d2cbb38e1711d7089bc53bb65c56f2c )
    {
        Py_DECREF( frame_3d2cbb38e1711d7089bc53bb65c56f2c );
    }
    cache_frame_3d2cbb38e1711d7089bc53bb65c56f2c = NULL;

    assertFrameObject( frame_3d2cbb38e1711d7089bc53bb65c56f2c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$trf$$$function_2_select_step );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_J_h );
    Py_DECREF( par_J_h );
    par_J_h = NULL;

    CHECK_OBJECT( (PyObject *)par_diag_h );
    Py_DECREF( par_diag_h );
    par_diag_h = NULL;

    CHECK_OBJECT( (PyObject *)par_g_h );
    Py_DECREF( par_g_h );
    par_g_h = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_p_h );
    Py_DECREF( par_p_h );
    par_p_h = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)par_Delta );
    Py_DECREF( par_Delta );
    par_Delta = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_theta );
    Py_DECREF( par_theta );
    par_theta = NULL;

    CHECK_OBJECT( (PyObject *)var_p_value );
    Py_DECREF( var_p_value );
    var_p_value = NULL;

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

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_to_tr );
    var_to_tr = NULL;

    Py_XDECREF( var_to_bound );
    var_to_bound = NULL;

    Py_XDECREF( var_r_stride );
    var_r_stride = NULL;

    Py_XDECREF( var_r_stride_l );
    var_r_stride_l = NULL;

    Py_XDECREF( var_r_stride_u );
    var_r_stride_u = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_r_value );
    var_r_value = NULL;

    Py_XDECREF( var_ag_h );
    var_ag_h = NULL;

    Py_XDECREF( var_ag );
    var_ag = NULL;

    Py_XDECREF( var_ag_stride );
    var_ag_stride = NULL;

    Py_XDECREF( var_ag_value );
    var_ag_value = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_J_h );
    Py_DECREF( par_J_h );
    par_J_h = NULL;

    CHECK_OBJECT( (PyObject *)par_diag_h );
    Py_DECREF( par_diag_h );
    par_diag_h = NULL;

    CHECK_OBJECT( (PyObject *)par_g_h );
    Py_DECREF( par_g_h );
    par_g_h = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_p_h );
    Py_DECREF( par_p_h );
    par_p_h = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)par_Delta );
    Py_DECREF( par_Delta );
    par_Delta = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_theta );
    Py_DECREF( par_theta );
    par_theta = NULL;

    Py_XDECREF( var_p_value );
    var_p_value = NULL;

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

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_to_tr );
    var_to_tr = NULL;

    Py_XDECREF( var_to_bound );
    var_to_bound = NULL;

    Py_XDECREF( var_r_stride );
    var_r_stride = NULL;

    Py_XDECREF( var_r_stride_l );
    var_r_stride_l = NULL;

    Py_XDECREF( var_r_stride_u );
    var_r_stride_u = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_r_value );
    var_r_value = NULL;

    Py_XDECREF( var_ag_h );
    var_ag_h = NULL;

    Py_XDECREF( var_ag );
    var_ag = NULL;

    Py_XDECREF( var_ag_stride );
    var_ag_stride = NULL;

    Py_XDECREF( var_ag_value );
    var_ag_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$trf$$$function_2_select_step );
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


static PyObject *impl_scipy$optimize$_lsq$trf$$$function_3_trf_bounds( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fun = python_pars[ 0 ];
    PyObject *par_jac = python_pars[ 1 ];
    PyObject *par_x0 = python_pars[ 2 ];
    PyObject *par_f0 = python_pars[ 3 ];
    PyObject *par_J0 = python_pars[ 4 ];
    PyObject *par_lb = python_pars[ 5 ];
    PyObject *par_ub = python_pars[ 6 ];
    PyObject *par_ftol = python_pars[ 7 ];
    PyObject *par_xtol = python_pars[ 8 ];
    PyObject *par_gtol = python_pars[ 9 ];
    PyObject *par_max_nfev = python_pars[ 10 ];
    PyObject *par_x_scale = python_pars[ 11 ];
    PyObject *par_loss_function = python_pars[ 12 ];
    PyObject *par_tr_solver = python_pars[ 13 ];
    PyObject *par_tr_options = python_pars[ 14 ];
    PyObject *par_verbose = python_pars[ 15 ];
    PyObject *var_x = NULL;
    PyObject *var_f = NULL;
    PyObject *var_f_true = NULL;
    PyObject *var_nfev = NULL;
    PyObject *var_J = NULL;
    PyObject *var_njev = NULL;
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_rho = NULL;
    PyObject *var_cost = NULL;
    PyObject *var_g = NULL;
    PyObject *var_jac_scale = NULL;
    PyObject *var_scale = NULL;
    PyObject *var_scale_inv = NULL;
    PyObject *var_v = NULL;
    PyObject *var_dv = NULL;
    PyObject *var_Delta = NULL;
    PyObject *var_g_norm = NULL;
    PyObject *var_f_augmented = NULL;
    PyObject *var_J_augmented = NULL;
    PyObject *var_reg_term = NULL;
    PyObject *var_regularize = NULL;
    PyObject *var_alpha = NULL;
    PyObject *var_termination_status = NULL;
    PyObject *var_iteration = NULL;
    PyObject *var_step_norm = NULL;
    PyObject *var_actual_reduction = NULL;
    PyObject *var_d = NULL;
    PyObject *var_diag_h = NULL;
    PyObject *var_g_h = NULL;
    PyObject *var_J_h = NULL;
    PyObject *var_U = NULL;
    PyObject *var_s = NULL;
    PyObject *var_V = NULL;
    PyObject *var_uf = NULL;
    PyObject *var_a = NULL;
    PyObject *var_b = NULL;
    PyObject *var_to_tr = NULL;
    PyObject *var_ag_value = NULL;
    PyObject *var_lsmr_op = NULL;
    PyObject *var_gn_h = NULL;
    PyObject *var_S = NULL;
    PyObject *var__ = NULL;
    PyObject *var_JS = NULL;
    PyObject *var_B_S = NULL;
    PyObject *var_g_S = NULL;
    PyObject *var_theta = NULL;
    PyObject *var_p_h = NULL;
    PyObject *var_n_iter = NULL;
    PyObject *var_p_S = NULL;
    PyObject *var_p = NULL;
    PyObject *var_step = NULL;
    PyObject *var_step_h = NULL;
    PyObject *var_predicted_reduction = NULL;
    PyObject *var_x_new = NULL;
    PyObject *var_f_new = NULL;
    PyObject *var_step_h_norm = NULL;
    PyObject *var_cost_new = NULL;
    PyObject *var_correction = NULL;
    PyObject *var_Delta_new = NULL;
    PyObject *var_ratio = NULL;
    PyObject *var_active_mask = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    PyObject *tmp_tuple_unpack_10__element_1 = NULL;
    PyObject *tmp_tuple_unpack_10__element_2 = NULL;
    PyObject *tmp_tuple_unpack_10__element_3 = NULL;
    PyObject *tmp_tuple_unpack_10__source_iter = NULL;
    PyObject *tmp_tuple_unpack_11__element_1 = NULL;
    PyObject *tmp_tuple_unpack_11__element_2 = NULL;
    PyObject *tmp_tuple_unpack_11__source_iter = NULL;
    PyObject *tmp_tuple_unpack_12__element_1 = NULL;
    PyObject *tmp_tuple_unpack_12__element_2 = NULL;
    PyObject *tmp_tuple_unpack_12__element_3 = NULL;
    PyObject *tmp_tuple_unpack_12__source_iter = NULL;
    PyObject *tmp_tuple_unpack_13__element_1 = NULL;
    PyObject *tmp_tuple_unpack_13__element_2 = NULL;
    PyObject *tmp_tuple_unpack_13__source_iter = NULL;
    PyObject *tmp_tuple_unpack_14__element_1 = NULL;
    PyObject *tmp_tuple_unpack_14__element_2 = NULL;
    PyObject *tmp_tuple_unpack_14__source_iter = NULL;
    PyObject *tmp_tuple_unpack_15__element_1 = NULL;
    PyObject *tmp_tuple_unpack_15__element_2 = NULL;
    PyObject *tmp_tuple_unpack_15__source_iter = NULL;
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
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__element_3 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_tuple_unpack_8__source_iter = NULL;
    PyObject *tmp_tuple_unpack_9__element_1 = NULL;
    PyObject *tmp_tuple_unpack_9__element_2 = NULL;
    PyObject *tmp_tuple_unpack_9__source_iter = NULL;
    struct Nuitka_FrameObject *frame_83d55fe0a901222fd33ed240137bb468;
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
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    bool tmp_result;
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
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
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
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_83d55fe0a901222fd33ed240137bb468 = NULL;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_83d55fe0a901222fd33ed240137bb468, codeobj_83d55fe0a901222fd33ed240137bb468, module_scipy$optimize$_lsq$trf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_83d55fe0a901222fd33ed240137bb468 = cache_frame_83d55fe0a901222fd33ed240137bb468;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_83d55fe0a901222fd33ed240137bb468 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_83d55fe0a901222fd33ed240137bb468 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_x0 );
        tmp_called_instance_1 = par_x0;
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 210;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( par_f0 );
        tmp_assign_source_2 = par_f0;
        assert( var_f == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_f = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( var_f );
        tmp_called_instance_2 = var_f;
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 213;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_copy );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_f_true == NULL );
        var_f_true = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_int_pos_1;
        assert( var_nfev == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_nfev = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( par_J0 );
        tmp_assign_source_5 = par_J0;
        assert( var_J == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_J = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_int_pos_1;
        assert( var_njev == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_njev = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_J );
        tmp_source_name_1 = var_J;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 218;
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 218;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 218;
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

            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 218;
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
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_m = tmp_assign_source_10;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_n = tmp_assign_source_11;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_loss_function );
        tmp_compexpr_left_1 = par_loss_function;
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
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_loss_function );
            tmp_called_name_1 = par_loss_function;
            CHECK_OBJECT( var_f );
            tmp_args_element_name_1 = var_f;
            frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 221;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_rho == NULL );
            var_rho = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            tmp_left_name_1 = const_float_0_5;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 222;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_1;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sum );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 222;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_rho );
            tmp_subscribed_name_1 = var_rho;
            tmp_subscript_name_1 = const_int_0;
            tmp_args_element_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 222;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 222;
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


                exception_lineno = 222;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_13 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 222;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_cost == NULL );
            var_cost = tmp_assign_source_13;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_scale_for_robust_loss_function );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scale_for_robust_loss_function );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scale_for_robust_loss_function" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 223;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_called_name_3 = tmp_mvar_value_2;
            CHECK_OBJECT( var_J );
            tmp_args_element_name_3 = var_J;
            CHECK_OBJECT( var_f );
            tmp_args_element_name_4 = var_f;
            CHECK_OBJECT( var_rho );
            tmp_args_element_name_5 = var_rho;
            frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 223;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
            }

            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 223;
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 223;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_16;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 223;
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

                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 223;
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
            {
                PyObject *old = var_J;
                assert( old != NULL );
                var_J = tmp_assign_source_17;
                Py_INCREF( var_J );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_18 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_f;
                assert( old != NULL );
                var_f = tmp_assign_source_18;
                Py_INCREF( var_f );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            tmp_left_name_2 = const_float_0_5;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 225;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_3;
            CHECK_OBJECT( var_f );
            tmp_args_element_name_6 = var_f;
            CHECK_OBJECT( var_f );
            tmp_args_element_name_7 = var_f;
            frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 225;
            {
                PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_right_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_dot, call_args );
            }

            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 225;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_19 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 225;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_cost == NULL );
            var_cost = tmp_assign_source_19;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_compute_grad );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compute_grad );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compute_grad" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 227;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( var_J );
        tmp_args_element_name_8 = var_J;
        CHECK_OBJECT( var_f );
        tmp_args_element_name_9 = var_f;
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 227;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_g == NULL );
        var_g = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_x_scale );
        tmp_isinstance_inst_1 = par_x_scale;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_string_types );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_string_types );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "string_types" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_5;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        CHECK_OBJECT( par_x_scale );
        tmp_compexpr_left_2 = par_x_scale;
        tmp_compexpr_right_2 = const_str_plain_jac;
        tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_and_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF( tmp_and_left_value_1 );
        tmp_assign_source_21 = tmp_and_left_value_1;
        and_end_1:;
        assert( var_jac_scale == NULL );
        var_jac_scale = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_jac_scale );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_jac_scale );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_10;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_compute_jac_scale );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compute_jac_scale );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compute_jac_scale" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 231;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_called_name_5 = tmp_mvar_value_6;
            CHECK_OBJECT( var_J );
            tmp_args_element_name_10 = var_J;
            frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 231;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_3__source_iter == NULL );
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_22;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 231;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_1 == NULL );
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_23;
        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_24 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 231;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_2 == NULL );
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_24;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 231;
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

                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 231;
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
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_25 = tmp_tuple_unpack_3__element_1;
            assert( var_scale == NULL );
            Py_INCREF( tmp_assign_source_25 );
            var_scale = tmp_assign_source_25;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_26 = tmp_tuple_unpack_3__element_2;
            assert( var_scale_inv == NULL );
            Py_INCREF( tmp_assign_source_26 );
            var_scale_inv = tmp_assign_source_26;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        goto branch_end_2;
        branch_no_2:;
        // Tried code:
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( par_x_scale );
            tmp_tuple_element_1 = par_x_scale;
            tmp_iter_arg_4 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_iter_arg_4, 0, tmp_tuple_element_1 );
            tmp_left_name_3 = const_int_pos_1;
            CHECK_OBJECT( par_x_scale );
            tmp_right_name_3 = par_x_scale;
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_4 );

                exception_lineno = 233;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            PyTuple_SET_ITEM( tmp_iter_arg_4, 1, tmp_tuple_element_1 );
            tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_4 );
            Py_DECREF( tmp_iter_arg_4 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 233;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            assert( tmp_tuple_unpack_4__source_iter == NULL );
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_27;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_28 = UNPACK_NEXT( tmp_unpack_7, 0, 2 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 233;
                goto try_except_handler_9;
            }
            assert( tmp_tuple_unpack_4__element_1 == NULL );
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_29 = UNPACK_NEXT( tmp_unpack_8, 1, 2 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 233;
                goto try_except_handler_9;
            }
            assert( tmp_tuple_unpack_4__element_2 == NULL );
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_29;
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
            PyObject *tmp_assign_source_30;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
            tmp_assign_source_30 = tmp_tuple_unpack_4__element_1;
            assert( var_scale == NULL );
            Py_INCREF( tmp_assign_source_30 );
            var_scale = tmp_assign_source_30;
        }
        Py_XDECREF( tmp_tuple_unpack_4__element_1 );
        tmp_tuple_unpack_4__element_1 = NULL;

        {
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
            tmp_assign_source_31 = tmp_tuple_unpack_4__element_2;
            assert( var_scale_inv == NULL );
            Py_INCREF( tmp_assign_source_31 );
            var_scale_inv = tmp_assign_source_31;
        }
        Py_XDECREF( tmp_tuple_unpack_4__element_2 );
        tmp_tuple_unpack_4__element_2 = NULL;

        branch_end_2:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_CL_scaling_vector );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CL_scaling_vector );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CL_scaling_vector" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 235;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_called_name_6 = tmp_mvar_value_7;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_11 = var_x;
        CHECK_OBJECT( var_g );
        tmp_args_element_name_12 = var_g;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_13 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_14 = par_ub;
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_6, call_args );
        }

        if ( tmp_iter_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_32 = MAKE_ITERATOR( tmp_iter_arg_5 );
        Py_DECREF( tmp_iter_arg_5 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        assert( tmp_tuple_unpack_5__source_iter == NULL );
        tmp_tuple_unpack_5__source_iter = tmp_assign_source_32;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_33 = UNPACK_NEXT( tmp_unpack_9, 0, 2 );
        if ( tmp_assign_source_33 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 235;
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_5__element_1 == NULL );
        tmp_tuple_unpack_5__element_1 = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_34 = UNPACK_NEXT( tmp_unpack_10, 1, 2 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 235;
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_5__element_2 == NULL );
        tmp_tuple_unpack_5__element_2 = tmp_assign_source_34;
    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_iterator_name_4 = tmp_tuple_unpack_5__source_iter;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 235;
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

            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 235;
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
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
        tmp_assign_source_35 = tmp_tuple_unpack_5__element_1;
        assert( var_v == NULL );
        Py_INCREF( tmp_assign_source_35 );
        var_v = tmp_assign_source_35;
    }
    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
        tmp_assign_source_36 = tmp_tuple_unpack_5__element_2;
        assert( var_dv == NULL );
        Py_INCREF( tmp_assign_source_36 );
        var_dv = tmp_assign_source_36;
    }
    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT( var_v );
        tmp_assign_source_37 = var_v;
        assert( tmp_inplace_assign_subscr_1__target == NULL );
        Py_INCREF( tmp_assign_source_37 );
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_37;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_dv );
        tmp_compexpr_left_3 = var_dv;
        tmp_compexpr_right_3 = const_int_0;
        tmp_assign_source_38 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert( tmp_inplace_assign_subscr_1__subscript == NULL );
        tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_38;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_4;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_subscribed_name_2 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_subscript_name_2 = tmp_inplace_assign_subscr_1__subscript;
        tmp_left_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT( var_scale_inv );
        tmp_subscribed_name_3 = var_scale_inv;
        CHECK_OBJECT( var_dv );
        tmp_compexpr_left_4 = var_dv;
        tmp_compexpr_right_4 = const_int_0;
        tmp_subscript_name_3 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_subscript_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_right_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
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


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_8;
        CHECK_OBJECT( par_x0 );
        tmp_left_name_6 = par_x0;
        CHECK_OBJECT( var_scale_inv );
        tmp_right_name_5 = var_scale_inv;
        tmp_left_name_5 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_5 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_v );
        tmp_left_name_7 = var_v;
        tmp_right_name_7 = const_float_0_5;
        tmp_right_name_6 = POWER_OPERATION( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_15 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_args_element_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_15 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Delta == NULL );
        var_Delta = tmp_assign_source_39;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( var_Delta );
        tmp_compexpr_left_5 = var_Delta;
        tmp_compexpr_right_5 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_40;
            tmp_assign_source_40 = const_float_1_0;
            {
                PyObject *old = var_Delta;
                assert( old != NULL );
                var_Delta = tmp_assign_source_40;
                Py_INCREF( var_Delta );
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_norm );

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

            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_9;
        CHECK_OBJECT( var_g );
        tmp_left_name_8 = var_g;
        CHECK_OBJECT( var_v );
        tmp_right_name_8 = var_v;
        tmp_tuple_element_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        tmp_dict_key_1 = const_str_plain_ord;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_10;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_inf );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 241;
        tmp_assign_source_41 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_g_norm == NULL );
        var_g_norm = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_11;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_zeros );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_m );
        tmp_left_name_9 = var_m;
        CHECK_OBJECT( var_n );
        tmp_right_name_9 = var_n;
        tmp_args_element_name_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_args_element_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 243;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_16 );
        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_f_augmented == NULL );
        var_f_augmented = tmp_assign_source_42;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_tr_solver );
        tmp_compexpr_left_6 = par_tr_solver;
        tmp_compexpr_right_6 = const_str_plain_exact;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_name_10;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 245;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_12;
            tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_empty );
            if ( tmp_called_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 245;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_m );
            tmp_left_name_10 = var_m;
            CHECK_OBJECT( var_n );
            tmp_right_name_10 = var_n;
            tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_10 );

                exception_lineno = 245;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_17 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_element_name_17, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( var_n );
            tmp_tuple_element_3 = var_n;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_element_name_17, 1, tmp_tuple_element_3 );
            frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 245;
            {
                PyObject *call_args[] = { tmp_args_element_name_17 };
                tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_17 );
            if ( tmp_assign_source_43 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 245;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_J_augmented == NULL );
            var_J_augmented = tmp_assign_source_43;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT( par_tr_solver );
            tmp_compexpr_left_7 = par_tr_solver;
            tmp_compexpr_right_7 = const_str_plain_lsmr;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 246;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
                PyObject *tmp_assign_source_44;
                tmp_assign_source_44 = const_float_0_0;
                assert( var_reg_term == NULL );
                Py_INCREF( tmp_assign_source_44 );
                var_reg_term = tmp_assign_source_44;
            }
            {
                PyObject *tmp_assign_source_45;
                PyObject *tmp_called_instance_4;
                CHECK_OBJECT( par_tr_options );
                tmp_called_instance_4 = par_tr_options;
                frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 248;
                tmp_assign_source_45 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_regularize_true_tuple, 0 ) );

                if ( tmp_assign_source_45 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 248;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_regularize == NULL );
                var_regularize = tmp_assign_source_45;
            }
            branch_no_5:;
        }
        branch_end_4:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        CHECK_OBJECT( par_max_nfev );
        tmp_compexpr_left_8 = par_max_nfev;
        tmp_compexpr_right_8 = Py_None;
        tmp_condition_result_6 = ( tmp_compexpr_left_8 == tmp_compexpr_right_8 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_46;
            PyObject *tmp_left_name_11;
            PyObject *tmp_source_name_6;
            PyObject *tmp_right_name_11;
            CHECK_OBJECT( par_x0 );
            tmp_source_name_6 = par_x0;
            tmp_left_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_size );
            if ( tmp_left_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_11 = const_int_pos_100;
            tmp_assign_source_46 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_11, tmp_right_name_11 );
            Py_DECREF( tmp_left_name_11 );
            if ( tmp_assign_source_46 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_max_nfev;
                assert( old != NULL );
                par_max_nfev = tmp_assign_source_46;
                Py_DECREF( old );
            }

        }
        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = const_float_0_0;
        assert( var_alpha == NULL );
        Py_INCREF( tmp_assign_source_47 );
        var_alpha = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = Py_None;
        assert( var_termination_status == NULL );
        Py_INCREF( tmp_assign_source_48 );
        var_termination_status = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = const_int_0;
        assert( var_iteration == NULL );
        Py_INCREF( tmp_assign_source_49 );
        var_iteration = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = Py_None;
        assert( var_step_norm == NULL );
        Py_INCREF( tmp_assign_source_50 );
        var_step_norm = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = Py_None;
        assert( var_actual_reduction == NULL );
        Py_INCREF( tmp_assign_source_51 );
        var_actual_reduction = tmp_assign_source_51;
    }
    {
        nuitka_bool tmp_condition_result_7;
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


            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_called_name_11;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_call_result_1;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_print_header_nonlinear );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_print_header_nonlinear );
            }

            if ( tmp_mvar_value_13 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "print_header_nonlinear" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 261;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_11 = tmp_mvar_value_13;
            frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 261;
            tmp_call_result_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_11 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 261;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_7:;
    }
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_args_element_name_21;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_CL_scaling_vector );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CL_scaling_vector );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CL_scaling_vector" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_called_name_12 = tmp_mvar_value_14;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_args_element_name_18 = var_x;
        if ( var_g == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_args_element_name_19 = var_g;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_20 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_21 = par_ub;
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 264;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
            tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_12, call_args );
        }

        if ( tmp_iter_arg_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assign_source_52 = MAKE_ITERATOR( tmp_iter_arg_6 );
        Py_DECREF( tmp_iter_arg_6 );
        if ( tmp_assign_source_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__source_iter;
            tmp_tuple_unpack_6__source_iter = tmp_assign_source_52;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
        tmp_unpack_11 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_53 = UNPACK_NEXT( tmp_unpack_11, 0, 2 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 264;
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_1;
            tmp_tuple_unpack_6__element_1 = tmp_assign_source_53;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
        tmp_unpack_12 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_54 = UNPACK_NEXT( tmp_unpack_12, 1, 2 );
        if ( tmp_assign_source_54 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 264;
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_2;
            tmp_tuple_unpack_6__element_2 = tmp_assign_source_54;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
        tmp_iterator_name_5 = tmp_tuple_unpack_6__source_iter;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 264;
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

            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 264;
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
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT( tmp_tuple_unpack_6__element_1 );
        tmp_assign_source_55 = tmp_tuple_unpack_6__element_1;
        {
            PyObject *old = var_v;
            assert( old != NULL );
            var_v = tmp_assign_source_55;
            Py_INCREF( var_v );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_6__element_1 );
    tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT( tmp_tuple_unpack_6__element_2 );
        tmp_assign_source_56 = tmp_tuple_unpack_6__element_2;
        {
            PyObject *old = var_dv;
            assert( old != NULL );
            var_dv = tmp_assign_source_56;
            Py_INCREF( var_dv );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_6__element_2 );
    tmp_tuple_unpack_6__element_2 = NULL;

    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_16;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_norm );

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

            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_15;
        if ( var_g == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_12 = var_g;
        CHECK_OBJECT( var_v );
        tmp_right_name_12 = var_v;
        tmp_tuple_element_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
        tmp_dict_key_2 = const_str_plain_ord;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_16 == NULL )
        {
            Py_DECREF( tmp_args_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_16;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_inf );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_2 );

            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 266;
        tmp_assign_source_57 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_57 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_g_norm;
            assert( old != NULL );
            var_g_norm = tmp_assign_source_57;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        CHECK_OBJECT( var_g_norm );
        tmp_compexpr_left_10 = var_g_norm;
        CHECK_OBJECT( par_gtol );
        tmp_compexpr_right_10 = par_gtol;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_58;
            tmp_assign_source_58 = const_int_pos_1;
            {
                PyObject *old = var_termination_status;
                var_termination_status = tmp_assign_source_58;
                Py_INCREF( var_termination_status );
                Py_XDECREF( old );
            }

        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        CHECK_OBJECT( par_verbose );
        tmp_compexpr_left_11 = par_verbose;
        tmp_compexpr_right_11 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_called_name_14;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_args_element_name_23;
            PyObject *tmp_args_element_name_24;
            PyObject *tmp_args_element_name_25;
            PyObject *tmp_args_element_name_26;
            PyObject *tmp_args_element_name_27;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_print_iteration_nonlinear );

            if (unlikely( tmp_mvar_value_17 == NULL ))
            {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_print_iteration_nonlinear );
            }

            if ( tmp_mvar_value_17 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "print_iteration_nonlinear" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 271;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_14 = tmp_mvar_value_17;
            CHECK_OBJECT( var_iteration );
            tmp_args_element_name_22 = var_iteration;
            if ( var_nfev == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nfev" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 271;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_23 = var_nfev;
            if ( var_cost == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cost" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 271;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_24 = var_cost;
            if ( var_actual_reduction == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "actual_reduction" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 271;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_25 = var_actual_reduction;
            if ( var_step_norm == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "step_norm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 272;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_26 = var_step_norm;
            CHECK_OBJECT( var_g_norm );
            tmp_args_element_name_27 = var_g_norm;
            frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 271;
            {
                PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_14, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 271;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        if ( var_termination_status == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "termination_status" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 274;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_12 = var_termination_status;
        tmp_compexpr_right_12 = Py_None;
        tmp_or_left_value_1 = ( tmp_compexpr_left_12 != tmp_compexpr_right_12 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        if ( var_nfev == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nfev" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 274;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_13 = var_nfev;
        CHECK_OBJECT( par_max_nfev );
        tmp_compexpr_right_13 = par_max_nfev;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_10 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_10 = tmp_or_left_value_1;
        or_end_1:;
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
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT( var_v );
        tmp_assign_source_59 = var_v;
        {
            PyObject *old = tmp_inplace_assign_subscr_2__target;
            tmp_inplace_assign_subscr_2__target = tmp_assign_source_59;
            Py_INCREF( tmp_inplace_assign_subscr_2__target );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        CHECK_OBJECT( var_dv );
        tmp_compexpr_left_14 = var_dv;
        tmp_compexpr_right_14 = const_int_0;
        tmp_assign_source_60 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
        if ( tmp_assign_source_60 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_inplace_assign_subscr_2__subscript;
            tmp_inplace_assign_subscr_2__subscript = tmp_assign_source_60;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_13;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_right_name_13;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
        tmp_subscribed_name_4 = tmp_inplace_assign_subscr_2__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
        tmp_subscript_name_4 = tmp_inplace_assign_subscr_2__subscript;
        tmp_left_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        if ( var_scale_inv == NULL )
        {
            Py_DECREF( tmp_left_name_13 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scale_inv" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_subscribed_name_5 = var_scale_inv;
        CHECK_OBJECT( var_dv );
        tmp_compexpr_left_15 = var_dv;
        tmp_compexpr_right_15 = const_int_0;
        tmp_subscript_name_5 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
        if ( tmp_subscript_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_right_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscript_name_5 );
        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_ass_subvalue_2 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_left_name_13, tmp_right_name_13 );
        Py_DECREF( tmp_left_name_13 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
        tmp_ass_subscribed_2 = tmp_inplace_assign_subscr_2__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
        tmp_ass_subscript_2 = tmp_inplace_assign_subscr_2__subscript;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
    Py_DECREF( tmp_inplace_assign_subscr_2__target );
    tmp_inplace_assign_subscr_2__target = NULL;

    Py_XDECREF( tmp_inplace_assign_subscr_2__subscript );
    tmp_inplace_assign_subscr_2__subscript = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
    Py_DECREF( tmp_inplace_assign_subscr_2__target );
    tmp_inplace_assign_subscr_2__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
    tmp_inplace_assign_subscr_2__subscript = NULL;

    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_left_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_14;
        PyObject *tmp_right_name_15;
        CHECK_OBJECT( var_v );
        tmp_left_name_15 = var_v;
        tmp_right_name_14 = const_float_0_5;
        tmp_left_name_14 = POWER_OPERATION( tmp_left_name_15, tmp_right_name_14 );
        if ( tmp_left_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_scale == NULL )
        {
            Py_DECREF( tmp_left_name_14 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scale" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 289;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_15 = var_scale;
        tmp_assign_source_61 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_15 );
        Py_DECREF( tmp_left_name_14 );
        if ( tmp_assign_source_61 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_d;
            var_d = tmp_assign_source_61;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_left_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_16;
        PyObject *tmp_right_name_17;
        if ( var_g == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 292;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_17 = var_g;
        CHECK_OBJECT( var_dv );
        tmp_right_name_16 = var_dv;
        tmp_left_name_16 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_16 );
        if ( tmp_left_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_scale == NULL )
        {
            Py_DECREF( tmp_left_name_16 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scale" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 292;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_17 = var_scale;
        tmp_assign_source_62 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_17 );
        Py_DECREF( tmp_left_name_16 );
        if ( tmp_assign_source_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_diag_h;
            var_diag_h = tmp_assign_source_62;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_18;
        CHECK_OBJECT( var_d );
        tmp_left_name_18 = var_d;
        if ( var_g == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 297;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_18 = var_g;
        tmp_assign_source_63 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
        if ( tmp_assign_source_63 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_g_h;
            var_g_h = tmp_assign_source_63;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        if ( var_f == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 299;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_3 = var_f;
        CHECK_OBJECT( var_f_augmented );
        tmp_ass_subscribed_3 = var_f_augmented;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_1 = var_m;
        tmp_step_name_1 = Py_None;
        tmp_ass_subscript_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_ass_subscript_3 == NULL) );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subscript_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 299;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        CHECK_OBJECT( par_tr_solver );
        tmp_compexpr_left_16 = par_tr_solver;
        tmp_compexpr_right_16 = const_str_plain_exact;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_16, tmp_compexpr_right_16 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_left_name_19;
            PyObject *tmp_right_name_19;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            PyObject *tmp_start_name_2;
            PyObject *tmp_stop_name_2;
            PyObject *tmp_step_name_2;
            if ( var_J == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 301;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_19 = var_J;
            CHECK_OBJECT( var_d );
            tmp_right_name_19 = var_d;
            tmp_ass_subvalue_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_19 );
            if ( tmp_ass_subvalue_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 301;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_J_augmented == NULL )
            {
                Py_DECREF( tmp_ass_subvalue_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J_augmented" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 301;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_ass_subscribed_4 = var_J_augmented;
            tmp_start_name_2 = Py_None;
            CHECK_OBJECT( var_m );
            tmp_stop_name_2 = var_m;
            tmp_step_name_2 = Py_None;
            tmp_ass_subscript_4 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
            assert( !(tmp_ass_subscript_4 == NULL) );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
            Py_DECREF( tmp_ass_subscript_4 );
            Py_DECREF( tmp_ass_subvalue_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 301;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_start_name_3;
            PyObject *tmp_stop_name_3;
            PyObject *tmp_step_name_3;
            if ( var_J_augmented == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J_augmented" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 302;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_6 = var_J_augmented;
            tmp_start_name_3 = Py_None;
            CHECK_OBJECT( var_m );
            tmp_stop_name_3 = var_m;
            tmp_step_name_3 = Py_None;
            tmp_subscript_name_6 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
            assert( !(tmp_subscript_name_6 == NULL) );
            tmp_assign_source_64 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            Py_DECREF( tmp_subscript_name_6 );
            if ( tmp_assign_source_64 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 302;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_J_h;
                var_J_h = tmp_assign_source_64;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_called_name_15;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_18;
            PyObject *tmp_args_element_name_28;
            PyObject *tmp_left_name_20;
            PyObject *tmp_right_name_20;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            PyObject *tmp_start_name_4;
            PyObject *tmp_stop_name_4;
            PyObject *tmp_step_name_4;
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 303;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_18;
            tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_diag );
            if ( tmp_called_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 303;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_diag_h );
            tmp_left_name_20 = var_diag_h;
            tmp_right_name_20 = const_float_0_5;
            tmp_args_element_name_28 = POWER_OPERATION( tmp_left_name_20, tmp_right_name_20 );
            if ( tmp_args_element_name_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_15 );

                exception_lineno = 303;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 303;
            {
                PyObject *call_args[] = { tmp_args_element_name_28 };
                tmp_ass_subvalue_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
            }

            Py_DECREF( tmp_called_name_15 );
            Py_DECREF( tmp_args_element_name_28 );
            if ( tmp_ass_subvalue_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 303;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_J_augmented == NULL )
            {
                Py_DECREF( tmp_ass_subvalue_5 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J_augmented" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 303;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_ass_subscribed_5 = var_J_augmented;
            CHECK_OBJECT( var_m );
            tmp_start_name_4 = var_m;
            tmp_stop_name_4 = Py_None;
            tmp_step_name_4 = Py_None;
            tmp_ass_subscript_5 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
            assert( !(tmp_ass_subscript_5 == NULL) );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
            Py_DECREF( tmp_ass_subscript_5 );
            Py_DECREF( tmp_ass_subvalue_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 303;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_iter_arg_7;
            PyObject *tmp_called_name_16;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kw_name_3;
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_svd );

            if (unlikely( tmp_mvar_value_19 == NULL ))
            {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_svd );
            }

            if ( tmp_mvar_value_19 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "svd" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 304;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }

            tmp_called_name_16 = tmp_mvar_value_19;
            if ( var_J_augmented == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J_augmented" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 304;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }

            tmp_tuple_element_5 = var_J_augmented;
            tmp_args_name_3 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
            tmp_kw_name_3 = PyDict_Copy( const_dict_879d90f7995f6ab655dbe7fad38230a5 );
            frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 304;
            tmp_iter_arg_7 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_iter_arg_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 304;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            tmp_assign_source_65 = MAKE_ITERATOR( tmp_iter_arg_7 );
            Py_DECREF( tmp_iter_arg_7 );
            if ( tmp_assign_source_65 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 304;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            {
                PyObject *old = tmp_tuple_unpack_7__source_iter;
                tmp_tuple_unpack_7__source_iter = tmp_assign_source_65;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_unpack_13;
            CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
            tmp_unpack_13 = tmp_tuple_unpack_7__source_iter;
            tmp_assign_source_66 = UNPACK_NEXT( tmp_unpack_13, 0, 3 );
            if ( tmp_assign_source_66 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 304;
                goto try_except_handler_17;
            }
            {
                PyObject *old = tmp_tuple_unpack_7__element_1;
                tmp_tuple_unpack_7__element_1 = tmp_assign_source_66;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_unpack_14;
            CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
            tmp_unpack_14 = tmp_tuple_unpack_7__source_iter;
            tmp_assign_source_67 = UNPACK_NEXT( tmp_unpack_14, 1, 3 );
            if ( tmp_assign_source_67 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 304;
                goto try_except_handler_17;
            }
            {
                PyObject *old = tmp_tuple_unpack_7__element_2;
                tmp_tuple_unpack_7__element_2 = tmp_assign_source_67;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_unpack_15;
            CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
            tmp_unpack_15 = tmp_tuple_unpack_7__source_iter;
            tmp_assign_source_68 = UNPACK_NEXT( tmp_unpack_15, 2, 3 );
            if ( tmp_assign_source_68 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 304;
                goto try_except_handler_17;
            }
            {
                PyObject *old = tmp_tuple_unpack_7__element_3;
                tmp_tuple_unpack_7__element_3 = tmp_assign_source_68;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_iterator_name_6;
            CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
            tmp_iterator_name_6 = tmp_tuple_unpack_7__source_iter;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 304;
                        goto try_except_handler_17;
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

                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 304;
                goto try_except_handler_17;
            }
        }
        goto try_end_15;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
        Py_DECREF( tmp_tuple_unpack_7__source_iter );
        tmp_tuple_unpack_7__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_16;
        // End of try:
        try_end_15:;
        goto try_end_16;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_7__element_1 );
        tmp_tuple_unpack_7__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_7__element_2 );
        tmp_tuple_unpack_7__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_7__element_3 );
        tmp_tuple_unpack_7__element_3 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto frame_exception_exit_1;
        // End of try:
        try_end_16:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
        Py_DECREF( tmp_tuple_unpack_7__source_iter );
        tmp_tuple_unpack_7__source_iter = NULL;

        {
            PyObject *tmp_assign_source_69;
            CHECK_OBJECT( tmp_tuple_unpack_7__element_1 );
            tmp_assign_source_69 = tmp_tuple_unpack_7__element_1;
            {
                PyObject *old = var_U;
                var_U = tmp_assign_source_69;
                Py_INCREF( var_U );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_7__element_1 );
        tmp_tuple_unpack_7__element_1 = NULL;

        {
            PyObject *tmp_assign_source_70;
            CHECK_OBJECT( tmp_tuple_unpack_7__element_2 );
            tmp_assign_source_70 = tmp_tuple_unpack_7__element_2;
            {
                PyObject *old = var_s;
                var_s = tmp_assign_source_70;
                Py_INCREF( var_s );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_7__element_2 );
        tmp_tuple_unpack_7__element_2 = NULL;

        {
            PyObject *tmp_assign_source_71;
            CHECK_OBJECT( tmp_tuple_unpack_7__element_3 );
            tmp_assign_source_71 = tmp_tuple_unpack_7__element_3;
            {
                PyObject *old = var_V;
                var_V = tmp_assign_source_71;
                Py_INCREF( var_V );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_7__element_3 );
        tmp_tuple_unpack_7__element_3 = NULL;

        {
            PyObject *tmp_assign_source_72;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( var_V );
            tmp_source_name_9 = var_V;
            tmp_assign_source_72 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_T );
            if ( tmp_assign_source_72 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_V;
                assert( old != NULL );
                var_V = tmp_assign_source_72;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_73;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_element_name_29;
            CHECK_OBJECT( var_U );
            tmp_source_name_10 = var_U;
            tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_T );
            if ( tmp_called_instance_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_f_augmented );
            tmp_args_element_name_29 = var_f_augmented;
            frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 306;
            {
                PyObject *call_args[] = { tmp_args_element_name_29 };
                tmp_assign_source_73 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_dot, call_args );
            }

            Py_DECREF( tmp_called_instance_5 );
            if ( tmp_assign_source_73 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_uf;
                var_uf = tmp_assign_source_73;
                Py_XDECREF( old );
            }

        }
        goto branch_end_11;
        branch_no_11:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_17;
            PyObject *tmp_compexpr_right_17;
            CHECK_OBJECT( par_tr_solver );
            tmp_compexpr_left_17 = par_tr_solver;
            tmp_compexpr_right_17 = const_str_plain_lsmr;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_17, tmp_compexpr_right_17 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
                PyObject *tmp_assign_source_74;
                PyObject *tmp_called_name_17;
                PyObject *tmp_mvar_value_20;
                PyObject *tmp_args_element_name_30;
                PyObject *tmp_args_element_name_31;
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_right_multiplied_operator );

                if (unlikely( tmp_mvar_value_20 == NULL ))
                {
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_right_multiplied_operator );
                }

                if ( tmp_mvar_value_20 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "right_multiplied_operator" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 308;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_17 = tmp_mvar_value_20;
                if ( var_J == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 308;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_30 = var_J;
                CHECK_OBJECT( var_d );
                tmp_args_element_name_31 = var_d;
                frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 308;
                {
                    PyObject *call_args[] = { tmp_args_element_name_30, tmp_args_element_name_31 };
                    tmp_assign_source_74 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
                }

                if ( tmp_assign_source_74 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 308;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_J_h;
                    var_J_h = tmp_assign_source_74;
                    Py_XDECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_13;
                int tmp_truth_name_2;
                if ( var_regularize == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "regularize" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 310;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_truth_name_2 = CHECK_IF_TRUE( var_regularize );
                if ( tmp_truth_name_2 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 310;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_13 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_13;
                }
                else
                {
                    goto branch_no_13;
                }
                branch_yes_13:;
                // Tried code:
                {
                    PyObject *tmp_assign_source_75;
                    PyObject *tmp_iter_arg_8;
                    PyObject *tmp_called_name_18;
                    PyObject *tmp_mvar_value_21;
                    PyObject *tmp_args_name_4;
                    PyObject *tmp_tuple_element_6;
                    PyObject *tmp_operand_name_1;
                    PyObject *tmp_kw_name_4;
                    PyObject *tmp_dict_key_3;
                    PyObject *tmp_dict_value_3;
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_build_quadratic_1d );

                    if (unlikely( tmp_mvar_value_21 == NULL ))
                    {
                        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_build_quadratic_1d );
                    }

                    if ( tmp_mvar_value_21 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "build_quadratic_1d" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 311;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_18;
                    }

                    tmp_called_name_18 = tmp_mvar_value_21;
                    CHECK_OBJECT( var_J_h );
                    tmp_tuple_element_6 = var_J_h;
                    tmp_args_name_4 = PyTuple_New( 3 );
                    Py_INCREF( tmp_tuple_element_6 );
                    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
                    CHECK_OBJECT( var_g_h );
                    tmp_tuple_element_6 = var_g_h;
                    Py_INCREF( tmp_tuple_element_6 );
                    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
                    CHECK_OBJECT( var_g_h );
                    tmp_operand_name_1 = var_g_h;
                    tmp_tuple_element_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
                    if ( tmp_tuple_element_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_args_name_4 );

                        exception_lineno = 311;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_18;
                    }
                    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
                    tmp_dict_key_3 = const_str_plain_diag;
                    CHECK_OBJECT( var_diag_h );
                    tmp_dict_value_3 = var_diag_h;
                    tmp_kw_name_4 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_3, tmp_dict_value_3 );
                    assert( !(tmp_res != 0) );
                    frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 311;
                    tmp_iter_arg_8 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_4, tmp_kw_name_4 );
                    Py_DECREF( tmp_args_name_4 );
                    Py_DECREF( tmp_kw_name_4 );
                    if ( tmp_iter_arg_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 311;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_18;
                    }
                    tmp_assign_source_75 = MAKE_ITERATOR( tmp_iter_arg_8 );
                    Py_DECREF( tmp_iter_arg_8 );
                    if ( tmp_assign_source_75 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 311;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_18;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_8__source_iter;
                        tmp_tuple_unpack_8__source_iter = tmp_assign_source_75;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_76;
                    PyObject *tmp_unpack_16;
                    CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
                    tmp_unpack_16 = tmp_tuple_unpack_8__source_iter;
                    tmp_assign_source_76 = UNPACK_NEXT( tmp_unpack_16, 0, 2 );
                    if ( tmp_assign_source_76 == NULL )
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


                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 311;
                        goto try_except_handler_19;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_8__element_1;
                        tmp_tuple_unpack_8__element_1 = tmp_assign_source_76;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_77;
                    PyObject *tmp_unpack_17;
                    CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
                    tmp_unpack_17 = tmp_tuple_unpack_8__source_iter;
                    tmp_assign_source_77 = UNPACK_NEXT( tmp_unpack_17, 1, 2 );
                    if ( tmp_assign_source_77 == NULL )
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


                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 311;
                        goto try_except_handler_19;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_8__element_2;
                        tmp_tuple_unpack_8__element_2 = tmp_assign_source_77;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_iterator_name_7;
                    CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
                    tmp_iterator_name_7 = tmp_tuple_unpack_8__source_iter;
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

                                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                                exception_lineno = 311;
                                goto try_except_handler_19;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 311;
                        goto try_except_handler_19;
                    }
                }
                goto try_end_17;
                // Exception handler code:
                try_except_handler_19:;
                exception_keeper_type_17 = exception_type;
                exception_keeper_value_17 = exception_value;
                exception_keeper_tb_17 = exception_tb;
                exception_keeper_lineno_17 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
                Py_DECREF( tmp_tuple_unpack_8__source_iter );
                tmp_tuple_unpack_8__source_iter = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_17;
                exception_value = exception_keeper_value_17;
                exception_tb = exception_keeper_tb_17;
                exception_lineno = exception_keeper_lineno_17;

                goto try_except_handler_18;
                // End of try:
                try_end_17:;
                goto try_end_18;
                // Exception handler code:
                try_except_handler_18:;
                exception_keeper_type_18 = exception_type;
                exception_keeper_value_18 = exception_value;
                exception_keeper_tb_18 = exception_tb;
                exception_keeper_lineno_18 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( tmp_tuple_unpack_8__element_1 );
                tmp_tuple_unpack_8__element_1 = NULL;

                Py_XDECREF( tmp_tuple_unpack_8__element_2 );
                tmp_tuple_unpack_8__element_2 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_18;
                exception_value = exception_keeper_value_18;
                exception_tb = exception_keeper_tb_18;
                exception_lineno = exception_keeper_lineno_18;

                goto frame_exception_exit_1;
                // End of try:
                try_end_18:;
                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
                Py_DECREF( tmp_tuple_unpack_8__source_iter );
                tmp_tuple_unpack_8__source_iter = NULL;

                {
                    PyObject *tmp_assign_source_78;
                    CHECK_OBJECT( tmp_tuple_unpack_8__element_1 );
                    tmp_assign_source_78 = tmp_tuple_unpack_8__element_1;
                    {
                        PyObject *old = var_a;
                        var_a = tmp_assign_source_78;
                        Py_INCREF( var_a );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_8__element_1 );
                tmp_tuple_unpack_8__element_1 = NULL;

                {
                    PyObject *tmp_assign_source_79;
                    CHECK_OBJECT( tmp_tuple_unpack_8__element_2 );
                    tmp_assign_source_79 = tmp_tuple_unpack_8__element_2;
                    {
                        PyObject *old = var_b;
                        var_b = tmp_assign_source_79;
                        Py_INCREF( var_b );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_8__element_2 );
                tmp_tuple_unpack_8__element_2 = NULL;

                {
                    PyObject *tmp_assign_source_80;
                    PyObject *tmp_left_name_21;
                    PyObject *tmp_right_name_21;
                    PyObject *tmp_called_name_19;
                    PyObject *tmp_mvar_value_22;
                    PyObject *tmp_args_element_name_32;
                    CHECK_OBJECT( var_Delta );
                    tmp_left_name_21 = var_Delta;
                    tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_norm );

                    if (unlikely( tmp_mvar_value_22 == NULL ))
                    {
                        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
                    }

                    if ( tmp_mvar_value_22 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 312;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_19 = tmp_mvar_value_22;
                    CHECK_OBJECT( var_g_h );
                    tmp_args_element_name_32 = var_g_h;
                    frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 312;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_32 };
                        tmp_right_name_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
                    }

                    if ( tmp_right_name_21 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 312;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_80 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_21, tmp_right_name_21 );
                    Py_DECREF( tmp_right_name_21 );
                    if ( tmp_assign_source_80 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 312;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_to_tr;
                        var_to_tr = tmp_assign_source_80;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_81;
                    PyObject *tmp_subscribed_name_7;
                    PyObject *tmp_called_name_20;
                    PyObject *tmp_mvar_value_23;
                    PyObject *tmp_args_element_name_33;
                    PyObject *tmp_args_element_name_34;
                    PyObject *tmp_args_element_name_35;
                    PyObject *tmp_args_element_name_36;
                    PyObject *tmp_subscript_name_7;
                    tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_minimize_quadratic_1d );

                    if (unlikely( tmp_mvar_value_23 == NULL ))
                    {
                        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_minimize_quadratic_1d );
                    }

                    if ( tmp_mvar_value_23 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "minimize_quadratic_1d" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 313;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_20 = tmp_mvar_value_23;
                    CHECK_OBJECT( var_a );
                    tmp_args_element_name_33 = var_a;
                    CHECK_OBJECT( var_b );
                    tmp_args_element_name_34 = var_b;
                    tmp_args_element_name_35 = const_int_0;
                    CHECK_OBJECT( var_to_tr );
                    tmp_args_element_name_36 = var_to_tr;
                    frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 313;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_33, tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36 };
                        tmp_subscribed_name_7 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_20, call_args );
                    }

                    if ( tmp_subscribed_name_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 313;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_subscript_name_7 = const_int_pos_1;
                    tmp_assign_source_81 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 1 );
                    Py_DECREF( tmp_subscribed_name_7 );
                    if ( tmp_assign_source_81 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 313;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_ag_value;
                        var_ag_value = tmp_assign_source_81;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_82;
                    PyObject *tmp_left_name_22;
                    PyObject *tmp_operand_name_2;
                    PyObject *tmp_right_name_22;
                    PyObject *tmp_left_name_23;
                    PyObject *tmp_right_name_23;
                    CHECK_OBJECT( var_ag_value );
                    tmp_operand_name_2 = var_ag_value;
                    tmp_left_name_22 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
                    if ( tmp_left_name_22 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 314;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_Delta );
                    tmp_left_name_23 = var_Delta;
                    tmp_right_name_23 = const_int_pos_2;
                    tmp_right_name_22 = POWER_OPERATION( tmp_left_name_23, tmp_right_name_23 );
                    if ( tmp_right_name_22 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_22 );

                        exception_lineno = 314;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_82 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_22, tmp_right_name_22 );
                    Py_DECREF( tmp_left_name_22 );
                    Py_DECREF( tmp_right_name_22 );
                    if ( tmp_assign_source_82 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 314;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_reg_term;
                        var_reg_term = tmp_assign_source_82;
                        Py_XDECREF( old );
                    }

                }
                branch_no_13:;
            }
            {
                PyObject *tmp_assign_source_83;
                PyObject *tmp_called_name_21;
                PyObject *tmp_mvar_value_24;
                PyObject *tmp_args_element_name_37;
                PyObject *tmp_args_element_name_38;
                PyObject *tmp_left_name_24;
                PyObject *tmp_left_name_25;
                PyObject *tmp_right_name_24;
                PyObject *tmp_right_name_25;
                tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_regularized_lsq_operator );

                if (unlikely( tmp_mvar_value_24 == NULL ))
                {
                    tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_regularized_lsq_operator );
                }

                if ( tmp_mvar_value_24 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "regularized_lsq_operator" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 316;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_21 = tmp_mvar_value_24;
                CHECK_OBJECT( var_J_h );
                tmp_args_element_name_37 = var_J_h;
                CHECK_OBJECT( var_diag_h );
                tmp_left_name_25 = var_diag_h;
                if ( var_reg_term == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "reg_term" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 316;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_right_name_24 = var_reg_term;
                tmp_left_name_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_25, tmp_right_name_24 );
                if ( tmp_left_name_24 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 316;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_25 = const_float_0_5;
                tmp_args_element_name_38 = POWER_OPERATION( tmp_left_name_24, tmp_right_name_25 );
                Py_DECREF( tmp_left_name_24 );
                if ( tmp_args_element_name_38 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 316;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 316;
                {
                    PyObject *call_args[] = { tmp_args_element_name_37, tmp_args_element_name_38 };
                    tmp_assign_source_83 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_21, call_args );
                }

                Py_DECREF( tmp_args_element_name_38 );
                if ( tmp_assign_source_83 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 316;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_lsmr_op;
                    var_lsmr_op = tmp_assign_source_83;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_84;
                PyObject *tmp_subscribed_name_8;
                PyObject *tmp_dircall_arg1_1;
                PyObject *tmp_mvar_value_25;
                PyObject *tmp_dircall_arg2_1;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_dircall_arg3_1;
                PyObject *tmp_subscript_name_8;
                tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_lsmr );

                if (unlikely( tmp_mvar_value_25 == NULL ))
                {
                    tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lsmr );
                }

                if ( tmp_mvar_value_25 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "lsmr" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 317;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_dircall_arg1_1 = tmp_mvar_value_25;
                CHECK_OBJECT( var_lsmr_op );
                tmp_tuple_element_7 = var_lsmr_op;
                tmp_dircall_arg2_1 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_7 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_7 );
                CHECK_OBJECT( var_f_augmented );
                tmp_tuple_element_7 = var_f_augmented;
                Py_INCREF( tmp_tuple_element_7 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_7 );
                CHECK_OBJECT( par_tr_options );
                tmp_dircall_arg3_1 = par_tr_options;
                Py_INCREF( tmp_dircall_arg1_1 );
                Py_INCREF( tmp_dircall_arg3_1 );

                {
                    PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                    tmp_subscribed_name_8 = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
                }
                if ( tmp_subscribed_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 317;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_subscript_name_8 = const_int_0;
                tmp_assign_source_84 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, 0 );
                Py_DECREF( tmp_subscribed_name_8 );
                if ( tmp_assign_source_84 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 317;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_gn_h;
                    var_gn_h = tmp_assign_source_84;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_85;
                PyObject *tmp_source_name_11;
                PyObject *tmp_called_instance_6;
                PyObject *tmp_mvar_value_26;
                PyObject *tmp_args_element_name_39;
                PyObject *tmp_tuple_element_8;
                tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 318;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_6 = tmp_mvar_value_26;
                CHECK_OBJECT( var_g_h );
                tmp_tuple_element_8 = var_g_h;
                tmp_args_element_name_39 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_8 );
                PyTuple_SET_ITEM( tmp_args_element_name_39, 0, tmp_tuple_element_8 );
                CHECK_OBJECT( var_gn_h );
                tmp_tuple_element_8 = var_gn_h;
                Py_INCREF( tmp_tuple_element_8 );
                PyTuple_SET_ITEM( tmp_args_element_name_39, 1, tmp_tuple_element_8 );
                frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 318;
                {
                    PyObject *call_args[] = { tmp_args_element_name_39 };
                    tmp_source_name_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_vstack, call_args );
                }

                Py_DECREF( tmp_args_element_name_39 );
                if ( tmp_source_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 318;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_85 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_T );
                Py_DECREF( tmp_source_name_11 );
                if ( tmp_assign_source_85 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 318;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_S;
                    var_S = tmp_assign_source_85;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_86;
                PyObject *tmp_iter_arg_9;
                PyObject *tmp_called_name_22;
                PyObject *tmp_mvar_value_27;
                PyObject *tmp_args_name_5;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_kw_name_5;
                tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_qr );

                if (unlikely( tmp_mvar_value_27 == NULL ))
                {
                    tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_qr );
                }

                if ( tmp_mvar_value_27 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "qr" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 319;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_20;
                }

                tmp_called_name_22 = tmp_mvar_value_27;
                CHECK_OBJECT( var_S );
                tmp_tuple_element_9 = var_S;
                tmp_args_name_5 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_9 );
                PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_9 );
                tmp_kw_name_5 = PyDict_Copy( const_dict_09ef4d9552d8b86e4ec711df1e8d781f );
                frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 319;
                tmp_iter_arg_9 = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_5, tmp_kw_name_5 );
                Py_DECREF( tmp_args_name_5 );
                Py_DECREF( tmp_kw_name_5 );
                if ( tmp_iter_arg_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 319;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_20;
                }
                tmp_assign_source_86 = MAKE_ITERATOR( tmp_iter_arg_9 );
                Py_DECREF( tmp_iter_arg_9 );
                if ( tmp_assign_source_86 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 319;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_20;
                }
                {
                    PyObject *old = tmp_tuple_unpack_9__source_iter;
                    tmp_tuple_unpack_9__source_iter = tmp_assign_source_86;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_87;
                PyObject *tmp_unpack_18;
                CHECK_OBJECT( tmp_tuple_unpack_9__source_iter );
                tmp_unpack_18 = tmp_tuple_unpack_9__source_iter;
                tmp_assign_source_87 = UNPACK_NEXT( tmp_unpack_18, 0, 2 );
                if ( tmp_assign_source_87 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 319;
                    goto try_except_handler_21;
                }
                {
                    PyObject *old = tmp_tuple_unpack_9__element_1;
                    tmp_tuple_unpack_9__element_1 = tmp_assign_source_87;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_88;
                PyObject *tmp_unpack_19;
                CHECK_OBJECT( tmp_tuple_unpack_9__source_iter );
                tmp_unpack_19 = tmp_tuple_unpack_9__source_iter;
                tmp_assign_source_88 = UNPACK_NEXT( tmp_unpack_19, 1, 2 );
                if ( tmp_assign_source_88 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 319;
                    goto try_except_handler_21;
                }
                {
                    PyObject *old = tmp_tuple_unpack_9__element_2;
                    tmp_tuple_unpack_9__element_2 = tmp_assign_source_88;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_iterator_name_8;
                CHECK_OBJECT( tmp_tuple_unpack_9__source_iter );
                tmp_iterator_name_8 = tmp_tuple_unpack_9__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT( tmp_iterator_name_8 ); assert( HAS_ITERNEXT( tmp_iterator_name_8 ) );

                tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_8 )->tp_iternext)( tmp_iterator_name_8 );

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

                            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                            exception_lineno = 319;
                            goto try_except_handler_21;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 319;
                    goto try_except_handler_21;
                }
            }
            goto try_end_19;
            // Exception handler code:
            try_except_handler_21:;
            exception_keeper_type_19 = exception_type;
            exception_keeper_value_19 = exception_value;
            exception_keeper_tb_19 = exception_tb;
            exception_keeper_lineno_19 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_9__source_iter );
            Py_DECREF( tmp_tuple_unpack_9__source_iter );
            tmp_tuple_unpack_9__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_19;
            exception_value = exception_keeper_value_19;
            exception_tb = exception_keeper_tb_19;
            exception_lineno = exception_keeper_lineno_19;

            goto try_except_handler_20;
            // End of try:
            try_end_19:;
            goto try_end_20;
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

            Py_XDECREF( tmp_tuple_unpack_9__element_1 );
            tmp_tuple_unpack_9__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_9__element_2 );
            tmp_tuple_unpack_9__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_20;
            exception_value = exception_keeper_value_20;
            exception_tb = exception_keeper_tb_20;
            exception_lineno = exception_keeper_lineno_20;

            goto frame_exception_exit_1;
            // End of try:
            try_end_20:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_9__source_iter );
            Py_DECREF( tmp_tuple_unpack_9__source_iter );
            tmp_tuple_unpack_9__source_iter = NULL;

            {
                PyObject *tmp_assign_source_89;
                CHECK_OBJECT( tmp_tuple_unpack_9__element_1 );
                tmp_assign_source_89 = tmp_tuple_unpack_9__element_1;
                {
                    PyObject *old = var_S;
                    assert( old != NULL );
                    var_S = tmp_assign_source_89;
                    Py_INCREF( var_S );
                    Py_DECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_9__element_1 );
            tmp_tuple_unpack_9__element_1 = NULL;

            {
                PyObject *tmp_assign_source_90;
                CHECK_OBJECT( tmp_tuple_unpack_9__element_2 );
                tmp_assign_source_90 = tmp_tuple_unpack_9__element_2;
                {
                    PyObject *old = var__;
                    var__ = tmp_assign_source_90;
                    Py_INCREF( var__ );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_9__element_2 );
            tmp_tuple_unpack_9__element_2 = NULL;

            {
                PyObject *tmp_assign_source_91;
                PyObject *tmp_called_instance_7;
                PyObject *tmp_args_element_name_40;
                CHECK_OBJECT( var_J_h );
                tmp_called_instance_7 = var_J_h;
                CHECK_OBJECT( var_S );
                tmp_args_element_name_40 = var_S;
                frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 320;
                {
                    PyObject *call_args[] = { tmp_args_element_name_40 };
                    tmp_assign_source_91 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_dot, call_args );
                }

                if ( tmp_assign_source_91 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 320;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_JS;
                    var_JS = tmp_assign_source_91;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_92;
                PyObject *tmp_left_name_26;
                PyObject *tmp_called_name_23;
                PyObject *tmp_source_name_12;
                PyObject *tmp_mvar_value_28;
                PyObject *tmp_args_element_name_41;
                PyObject *tmp_source_name_13;
                PyObject *tmp_args_element_name_42;
                PyObject *tmp_right_name_26;
                PyObject *tmp_called_name_24;
                PyObject *tmp_source_name_14;
                PyObject *tmp_mvar_value_29;
                PyObject *tmp_args_element_name_43;
                PyObject *tmp_left_name_27;
                PyObject *tmp_source_name_15;
                PyObject *tmp_right_name_27;
                PyObject *tmp_args_element_name_44;
                tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_28 == NULL ))
                {
                    tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_28 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 321;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_12 = tmp_mvar_value_28;
                tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_dot );
                if ( tmp_called_name_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 321;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_JS );
                tmp_source_name_13 = var_JS;
                tmp_args_element_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_T );
                if ( tmp_args_element_name_41 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_23 );

                    exception_lineno = 321;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_JS );
                tmp_args_element_name_42 = var_JS;
                frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 321;
                {
                    PyObject *call_args[] = { tmp_args_element_name_41, tmp_args_element_name_42 };
                    tmp_left_name_26 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_23, call_args );
                }

                Py_DECREF( tmp_called_name_23 );
                Py_DECREF( tmp_args_element_name_41 );
                if ( tmp_left_name_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 321;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_29 == NULL ))
                {
                    tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_29 == NULL )
                {
                    Py_DECREF( tmp_left_name_26 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 321;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_14 = tmp_mvar_value_29;
                tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_dot );
                if ( tmp_called_name_24 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_26 );

                    exception_lineno = 321;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_S );
                tmp_source_name_15 = var_S;
                tmp_left_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_T );
                if ( tmp_left_name_27 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_26 );
                    Py_DECREF( tmp_called_name_24 );

                    exception_lineno = 321;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_diag_h );
                tmp_right_name_27 = var_diag_h;
                tmp_args_element_name_43 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_27, tmp_right_name_27 );
                Py_DECREF( tmp_left_name_27 );
                if ( tmp_args_element_name_43 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_26 );
                    Py_DECREF( tmp_called_name_24 );

                    exception_lineno = 321;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_S );
                tmp_args_element_name_44 = var_S;
                frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 321;
                {
                    PyObject *call_args[] = { tmp_args_element_name_43, tmp_args_element_name_44 };
                    tmp_right_name_26 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_24, call_args );
                }

                Py_DECREF( tmp_called_name_24 );
                Py_DECREF( tmp_args_element_name_43 );
                if ( tmp_right_name_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_26 );

                    exception_lineno = 321;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_92 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_26, tmp_right_name_26 );
                Py_DECREF( tmp_left_name_26 );
                Py_DECREF( tmp_right_name_26 );
                if ( tmp_assign_source_92 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 321;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_B_S;
                    var_B_S = tmp_assign_source_92;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_93;
                PyObject *tmp_called_instance_8;
                PyObject *tmp_source_name_16;
                PyObject *tmp_args_element_name_45;
                CHECK_OBJECT( var_S );
                tmp_source_name_16 = var_S;
                tmp_called_instance_8 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_T );
                if ( tmp_called_instance_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 322;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_g_h );
                tmp_args_element_name_45 = var_g_h;
                frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 322;
                {
                    PyObject *call_args[] = { tmp_args_element_name_45 };
                    tmp_assign_source_93 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_dot, call_args );
                }

                Py_DECREF( tmp_called_instance_8 );
                if ( tmp_assign_source_93 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 322;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_g_S;
                    var_g_S = tmp_assign_source_93;
                    Py_XDECREF( old );
                }

            }
            branch_no_12:;
        }
        branch_end_11:;
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_name_25;
        PyObject *tmp_args_element_name_46;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_left_name_28;
        PyObject *tmp_right_name_28;
        tmp_called_name_25 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_25 != NULL );
        tmp_args_element_name_46 = const_float_0_995;
        tmp_left_name_28 = const_int_pos_1;
        CHECK_OBJECT( var_g_norm );
        tmp_right_name_28 = var_g_norm;
        tmp_args_element_name_47 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_28, tmp_right_name_28 );
        if ( tmp_args_element_name_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 325;
        {
            PyObject *call_args[] = { tmp_args_element_name_46, tmp_args_element_name_47 };
            tmp_assign_source_94 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_25, call_args );
        }

        Py_DECREF( tmp_args_element_name_47 );
        if ( tmp_assign_source_94 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_theta;
            var_theta = tmp_assign_source_94;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = const_int_neg_1;
        {
            PyObject *old = var_actual_reduction;
            var_actual_reduction = tmp_assign_source_95;
            Py_INCREF( var_actual_reduction );
            Py_XDECREF( old );
        }

    }
    loop_start_2:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_operand_name_3;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_18;
        PyObject *tmp_compexpr_right_18;
        PyObject *tmp_compexpr_left_19;
        PyObject *tmp_compexpr_right_19;
        CHECK_OBJECT( var_actual_reduction );
        tmp_compexpr_left_18 = var_actual_reduction;
        tmp_compexpr_right_18 = const_int_0;
        tmp_and_left_value_2 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_18, tmp_compexpr_right_18 );
        if ( tmp_and_left_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
        if ( tmp_and_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_2 );

            exception_lineno = 328;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF( tmp_and_left_value_2 );
        if ( var_nfev == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nfev" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 328;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_19 = var_nfev;
        CHECK_OBJECT( par_max_nfev );
        tmp_compexpr_right_19 = par_max_nfev;
        tmp_and_right_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_19, tmp_compexpr_right_19 );
        if ( tmp_and_right_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_3 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_operand_name_3 = tmp_and_left_value_2;
        and_end_2:;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
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
        goto loop_end_2;
        branch_no_14:;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_20;
        PyObject *tmp_compexpr_right_20;
        CHECK_OBJECT( par_tr_solver );
        tmp_compexpr_left_20 = par_tr_solver;
        tmp_compexpr_right_20 = const_str_plain_exact;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_20, tmp_compexpr_right_20 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_assign_source_96;
            PyObject *tmp_iter_arg_10;
            PyObject *tmp_called_name_26;
            PyObject *tmp_mvar_value_30;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_6;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_solve_lsq_trust_region );

            if (unlikely( tmp_mvar_value_30 == NULL ))
            {
                tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_lsq_trust_region );
            }

            if ( tmp_mvar_value_30 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_lsq_trust_region" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 330;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_22;
            }

            tmp_called_name_26 = tmp_mvar_value_30;
            CHECK_OBJECT( var_n );
            tmp_tuple_element_10 = var_n;
            tmp_args_name_6 = PyTuple_New( 6 );
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_10 );
            CHECK_OBJECT( var_m );
            tmp_tuple_element_10 = var_m;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_10 );
            if ( var_uf == NULL )
            {
                Py_DECREF( tmp_args_name_6 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "uf" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 331;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_22;
            }

            tmp_tuple_element_10 = var_uf;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_10 );
            if ( var_s == NULL )
            {
                Py_DECREF( tmp_args_name_6 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 331;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_22;
            }

            tmp_tuple_element_10 = var_s;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_6, 3, tmp_tuple_element_10 );
            if ( var_V == NULL )
            {
                Py_DECREF( tmp_args_name_6 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "V" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 331;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_22;
            }

            tmp_tuple_element_10 = var_V;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_6, 4, tmp_tuple_element_10 );
            CHECK_OBJECT( var_Delta );
            tmp_tuple_element_10 = var_Delta;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_6, 5, tmp_tuple_element_10 );
            tmp_dict_key_4 = const_str_plain_initial_alpha;
            if ( var_alpha == NULL )
            {
                Py_DECREF( tmp_args_name_6 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "alpha" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 331;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_22;
            }

            tmp_dict_value_4 = var_alpha;
            tmp_kw_name_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 330;
            tmp_iter_arg_10 = CALL_FUNCTION( tmp_called_name_26, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_args_name_6 );
            Py_DECREF( tmp_kw_name_6 );
            if ( tmp_iter_arg_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 330;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_22;
            }
            tmp_assign_source_96 = MAKE_ITERATOR( tmp_iter_arg_10 );
            Py_DECREF( tmp_iter_arg_10 );
            if ( tmp_assign_source_96 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 330;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_22;
            }
            {
                PyObject *old = tmp_tuple_unpack_10__source_iter;
                tmp_tuple_unpack_10__source_iter = tmp_assign_source_96;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_97;
            PyObject *tmp_unpack_20;
            CHECK_OBJECT( tmp_tuple_unpack_10__source_iter );
            tmp_unpack_20 = tmp_tuple_unpack_10__source_iter;
            tmp_assign_source_97 = UNPACK_NEXT( tmp_unpack_20, 0, 3 );
            if ( tmp_assign_source_97 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 330;
                goto try_except_handler_23;
            }
            {
                PyObject *old = tmp_tuple_unpack_10__element_1;
                tmp_tuple_unpack_10__element_1 = tmp_assign_source_97;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_98;
            PyObject *tmp_unpack_21;
            CHECK_OBJECT( tmp_tuple_unpack_10__source_iter );
            tmp_unpack_21 = tmp_tuple_unpack_10__source_iter;
            tmp_assign_source_98 = UNPACK_NEXT( tmp_unpack_21, 1, 3 );
            if ( tmp_assign_source_98 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 330;
                goto try_except_handler_23;
            }
            {
                PyObject *old = tmp_tuple_unpack_10__element_2;
                tmp_tuple_unpack_10__element_2 = tmp_assign_source_98;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_99;
            PyObject *tmp_unpack_22;
            CHECK_OBJECT( tmp_tuple_unpack_10__source_iter );
            tmp_unpack_22 = tmp_tuple_unpack_10__source_iter;
            tmp_assign_source_99 = UNPACK_NEXT( tmp_unpack_22, 2, 3 );
            if ( tmp_assign_source_99 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 330;
                goto try_except_handler_23;
            }
            {
                PyObject *old = tmp_tuple_unpack_10__element_3;
                tmp_tuple_unpack_10__element_3 = tmp_assign_source_99;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_iterator_name_9;
            CHECK_OBJECT( tmp_tuple_unpack_10__source_iter );
            tmp_iterator_name_9 = tmp_tuple_unpack_10__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_9 ); assert( HAS_ITERNEXT( tmp_iterator_name_9 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_9 )->tp_iternext)( tmp_iterator_name_9 );

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

                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 330;
                        goto try_except_handler_23;
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

                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 330;
                goto try_except_handler_23;
            }
        }
        goto try_end_21;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_10__source_iter );
        Py_DECREF( tmp_tuple_unpack_10__source_iter );
        tmp_tuple_unpack_10__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto try_except_handler_22;
        // End of try:
        try_end_21:;
        goto try_end_22;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_10__element_1 );
        tmp_tuple_unpack_10__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_10__element_2 );
        tmp_tuple_unpack_10__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_10__element_3 );
        tmp_tuple_unpack_10__element_3 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto frame_exception_exit_1;
        // End of try:
        try_end_22:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_10__source_iter );
        Py_DECREF( tmp_tuple_unpack_10__source_iter );
        tmp_tuple_unpack_10__source_iter = NULL;

        {
            PyObject *tmp_assign_source_100;
            CHECK_OBJECT( tmp_tuple_unpack_10__element_1 );
            tmp_assign_source_100 = tmp_tuple_unpack_10__element_1;
            {
                PyObject *old = var_p_h;
                var_p_h = tmp_assign_source_100;
                Py_INCREF( var_p_h );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_10__element_1 );
        tmp_tuple_unpack_10__element_1 = NULL;

        {
            PyObject *tmp_assign_source_101;
            CHECK_OBJECT( tmp_tuple_unpack_10__element_2 );
            tmp_assign_source_101 = tmp_tuple_unpack_10__element_2;
            {
                PyObject *old = var_alpha;
                var_alpha = tmp_assign_source_101;
                Py_INCREF( var_alpha );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_10__element_2 );
        tmp_tuple_unpack_10__element_2 = NULL;

        {
            PyObject *tmp_assign_source_102;
            CHECK_OBJECT( tmp_tuple_unpack_10__element_3 );
            tmp_assign_source_102 = tmp_tuple_unpack_10__element_3;
            {
                PyObject *old = var_n_iter;
                var_n_iter = tmp_assign_source_102;
                Py_INCREF( var_n_iter );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_10__element_3 );
        tmp_tuple_unpack_10__element_3 = NULL;

        goto branch_end_15;
        branch_no_15:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_compexpr_left_21;
            PyObject *tmp_compexpr_right_21;
            CHECK_OBJECT( par_tr_solver );
            tmp_compexpr_left_21 = par_tr_solver;
            tmp_compexpr_right_21 = const_str_plain_lsmr;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_21, tmp_compexpr_right_21 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 332;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
            // Tried code:
            {
                PyObject *tmp_assign_source_103;
                PyObject *tmp_iter_arg_11;
                PyObject *tmp_called_name_27;
                PyObject *tmp_mvar_value_31;
                PyObject *tmp_args_element_name_48;
                PyObject *tmp_args_element_name_49;
                PyObject *tmp_args_element_name_50;
                tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_solve_trust_region_2d );

                if (unlikely( tmp_mvar_value_31 == NULL ))
                {
                    tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_trust_region_2d );
                }

                if ( tmp_mvar_value_31 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_trust_region_2d" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 333;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_24;
                }

                tmp_called_name_27 = tmp_mvar_value_31;
                if ( var_B_S == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "B_S" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 333;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_24;
                }

                tmp_args_element_name_48 = var_B_S;
                if ( var_g_S == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g_S" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 333;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_24;
                }

                tmp_args_element_name_49 = var_g_S;
                CHECK_OBJECT( var_Delta );
                tmp_args_element_name_50 = var_Delta;
                frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 333;
                {
                    PyObject *call_args[] = { tmp_args_element_name_48, tmp_args_element_name_49, tmp_args_element_name_50 };
                    tmp_iter_arg_11 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_27, call_args );
                }

                if ( tmp_iter_arg_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 333;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_24;
                }
                tmp_assign_source_103 = MAKE_ITERATOR( tmp_iter_arg_11 );
                Py_DECREF( tmp_iter_arg_11 );
                if ( tmp_assign_source_103 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 333;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_24;
                }
                {
                    PyObject *old = tmp_tuple_unpack_11__source_iter;
                    tmp_tuple_unpack_11__source_iter = tmp_assign_source_103;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_104;
                PyObject *tmp_unpack_23;
                CHECK_OBJECT( tmp_tuple_unpack_11__source_iter );
                tmp_unpack_23 = tmp_tuple_unpack_11__source_iter;
                tmp_assign_source_104 = UNPACK_NEXT( tmp_unpack_23, 0, 2 );
                if ( tmp_assign_source_104 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 333;
                    goto try_except_handler_25;
                }
                {
                    PyObject *old = tmp_tuple_unpack_11__element_1;
                    tmp_tuple_unpack_11__element_1 = tmp_assign_source_104;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_105;
                PyObject *tmp_unpack_24;
                CHECK_OBJECT( tmp_tuple_unpack_11__source_iter );
                tmp_unpack_24 = tmp_tuple_unpack_11__source_iter;
                tmp_assign_source_105 = UNPACK_NEXT( tmp_unpack_24, 1, 2 );
                if ( tmp_assign_source_105 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 333;
                    goto try_except_handler_25;
                }
                {
                    PyObject *old = tmp_tuple_unpack_11__element_2;
                    tmp_tuple_unpack_11__element_2 = tmp_assign_source_105;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_iterator_name_10;
                CHECK_OBJECT( tmp_tuple_unpack_11__source_iter );
                tmp_iterator_name_10 = tmp_tuple_unpack_11__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT( tmp_iterator_name_10 ); assert( HAS_ITERNEXT( tmp_iterator_name_10 ) );

                tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_10 )->tp_iternext)( tmp_iterator_name_10 );

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

                            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                            exception_lineno = 333;
                            goto try_except_handler_25;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 333;
                    goto try_except_handler_25;
                }
            }
            goto try_end_23;
            // Exception handler code:
            try_except_handler_25:;
            exception_keeper_type_23 = exception_type;
            exception_keeper_value_23 = exception_value;
            exception_keeper_tb_23 = exception_tb;
            exception_keeper_lineno_23 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_11__source_iter );
            Py_DECREF( tmp_tuple_unpack_11__source_iter );
            tmp_tuple_unpack_11__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_23;
            exception_value = exception_keeper_value_23;
            exception_tb = exception_keeper_tb_23;
            exception_lineno = exception_keeper_lineno_23;

            goto try_except_handler_24;
            // End of try:
            try_end_23:;
            goto try_end_24;
            // Exception handler code:
            try_except_handler_24:;
            exception_keeper_type_24 = exception_type;
            exception_keeper_value_24 = exception_value;
            exception_keeper_tb_24 = exception_tb;
            exception_keeper_lineno_24 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_tuple_unpack_11__element_1 );
            tmp_tuple_unpack_11__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_11__element_2 );
            tmp_tuple_unpack_11__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_24;
            exception_value = exception_keeper_value_24;
            exception_tb = exception_keeper_tb_24;
            exception_lineno = exception_keeper_lineno_24;

            goto frame_exception_exit_1;
            // End of try:
            try_end_24:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_11__source_iter );
            Py_DECREF( tmp_tuple_unpack_11__source_iter );
            tmp_tuple_unpack_11__source_iter = NULL;

            {
                PyObject *tmp_assign_source_106;
                CHECK_OBJECT( tmp_tuple_unpack_11__element_1 );
                tmp_assign_source_106 = tmp_tuple_unpack_11__element_1;
                {
                    PyObject *old = var_p_S;
                    var_p_S = tmp_assign_source_106;
                    Py_INCREF( var_p_S );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_11__element_1 );
            tmp_tuple_unpack_11__element_1 = NULL;

            {
                PyObject *tmp_assign_source_107;
                CHECK_OBJECT( tmp_tuple_unpack_11__element_2 );
                tmp_assign_source_107 = tmp_tuple_unpack_11__element_2;
                {
                    PyObject *old = var__;
                    var__ = tmp_assign_source_107;
                    Py_INCREF( var__ );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_11__element_2 );
            tmp_tuple_unpack_11__element_2 = NULL;

            {
                PyObject *tmp_assign_source_108;
                PyObject *tmp_called_instance_9;
                PyObject *tmp_args_element_name_51;
                if ( var_S == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "S" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 334;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_9 = var_S;
                CHECK_OBJECT( var_p_S );
                tmp_args_element_name_51 = var_p_S;
                frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 334;
                {
                    PyObject *call_args[] = { tmp_args_element_name_51 };
                    tmp_assign_source_108 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_dot, call_args );
                }

                if ( tmp_assign_source_108 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 334;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_p_h;
                    var_p_h = tmp_assign_source_108;
                    Py_XDECREF( old );
                }

            }
            branch_no_16:;
        }
        branch_end_15:;
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_left_name_29;
        PyObject *tmp_right_name_29;
        CHECK_OBJECT( var_d );
        tmp_left_name_29 = var_d;
        if ( var_p_h == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p_h" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 336;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_29 = var_p_h;
        tmp_assign_source_109 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_29, tmp_right_name_29 );
        if ( tmp_assign_source_109 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_109;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_iter_arg_12;
        PyObject *tmp_called_name_28;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_args_element_name_52;
        PyObject *tmp_args_element_name_53;
        PyObject *tmp_args_element_name_54;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_args_element_name_56;
        PyObject *tmp_args_element_name_57;
        PyObject *tmp_args_element_name_58;
        PyObject *tmp_args_element_name_59;
        PyObject *tmp_args_element_name_60;
        PyObject *tmp_args_element_name_61;
        PyObject *tmp_args_element_name_62;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_select_step );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select_step );
        }

        if ( tmp_mvar_value_32 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "select_step" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 337;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_called_name_28 = tmp_mvar_value_32;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 338;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_args_element_name_52 = var_x;
        if ( var_J_h == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J_h" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 338;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_args_element_name_53 = var_J_h;
        CHECK_OBJECT( var_diag_h );
        tmp_args_element_name_54 = var_diag_h;
        CHECK_OBJECT( var_g_h );
        tmp_args_element_name_55 = var_g_h;
        CHECK_OBJECT( var_p );
        tmp_args_element_name_56 = var_p;
        if ( var_p_h == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p_h" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 338;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_args_element_name_57 = var_p_h;
        CHECK_OBJECT( var_d );
        tmp_args_element_name_58 = var_d;
        CHECK_OBJECT( var_Delta );
        tmp_args_element_name_59 = var_Delta;
        CHECK_OBJECT( par_lb );
        tmp_args_element_name_60 = par_lb;
        CHECK_OBJECT( par_ub );
        tmp_args_element_name_61 = par_ub;
        CHECK_OBJECT( var_theta );
        tmp_args_element_name_62 = var_theta;
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 337;
        {
            PyObject *call_args[] = { tmp_args_element_name_52, tmp_args_element_name_53, tmp_args_element_name_54, tmp_args_element_name_55, tmp_args_element_name_56, tmp_args_element_name_57, tmp_args_element_name_58, tmp_args_element_name_59, tmp_args_element_name_60, tmp_args_element_name_61, tmp_args_element_name_62 };
            tmp_iter_arg_12 = CALL_FUNCTION_WITH_ARGS11( tmp_called_name_28, call_args );
        }

        if ( tmp_iter_arg_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_assign_source_110 = MAKE_ITERATOR( tmp_iter_arg_12 );
        Py_DECREF( tmp_iter_arg_12 );
        if ( tmp_assign_source_110 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        {
            PyObject *old = tmp_tuple_unpack_12__source_iter;
            tmp_tuple_unpack_12__source_iter = tmp_assign_source_110;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_unpack_25;
        CHECK_OBJECT( tmp_tuple_unpack_12__source_iter );
        tmp_unpack_25 = tmp_tuple_unpack_12__source_iter;
        tmp_assign_source_111 = UNPACK_NEXT( tmp_unpack_25, 0, 3 );
        if ( tmp_assign_source_111 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 337;
            goto try_except_handler_27;
        }
        {
            PyObject *old = tmp_tuple_unpack_12__element_1;
            tmp_tuple_unpack_12__element_1 = tmp_assign_source_111;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_unpack_26;
        CHECK_OBJECT( tmp_tuple_unpack_12__source_iter );
        tmp_unpack_26 = tmp_tuple_unpack_12__source_iter;
        tmp_assign_source_112 = UNPACK_NEXT( tmp_unpack_26, 1, 3 );
        if ( tmp_assign_source_112 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 337;
            goto try_except_handler_27;
        }
        {
            PyObject *old = tmp_tuple_unpack_12__element_2;
            tmp_tuple_unpack_12__element_2 = tmp_assign_source_112;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_unpack_27;
        CHECK_OBJECT( tmp_tuple_unpack_12__source_iter );
        tmp_unpack_27 = tmp_tuple_unpack_12__source_iter;
        tmp_assign_source_113 = UNPACK_NEXT( tmp_unpack_27, 2, 3 );
        if ( tmp_assign_source_113 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 337;
            goto try_except_handler_27;
        }
        {
            PyObject *old = tmp_tuple_unpack_12__element_3;
            tmp_tuple_unpack_12__element_3 = tmp_assign_source_113;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_11;
        CHECK_OBJECT( tmp_tuple_unpack_12__source_iter );
        tmp_iterator_name_11 = tmp_tuple_unpack_12__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_11 ); assert( HAS_ITERNEXT( tmp_iterator_name_11 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_11 )->tp_iternext)( tmp_iterator_name_11 );

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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 337;
                    goto try_except_handler_27;
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

            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 337;
            goto try_except_handler_27;
        }
    }
    goto try_end_25;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_12__source_iter );
    Py_DECREF( tmp_tuple_unpack_12__source_iter );
    tmp_tuple_unpack_12__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto try_except_handler_26;
    // End of try:
    try_end_25:;
    goto try_end_26;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_12__element_1 );
    tmp_tuple_unpack_12__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_12__element_2 );
    tmp_tuple_unpack_12__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_12__element_3 );
    tmp_tuple_unpack_12__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_12__source_iter );
    Py_DECREF( tmp_tuple_unpack_12__source_iter );
    tmp_tuple_unpack_12__source_iter = NULL;

    {
        PyObject *tmp_assign_source_114;
        CHECK_OBJECT( tmp_tuple_unpack_12__element_1 );
        tmp_assign_source_114 = tmp_tuple_unpack_12__element_1;
        {
            PyObject *old = var_step;
            var_step = tmp_assign_source_114;
            Py_INCREF( var_step );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_12__element_1 );
    tmp_tuple_unpack_12__element_1 = NULL;

    {
        PyObject *tmp_assign_source_115;
        CHECK_OBJECT( tmp_tuple_unpack_12__element_2 );
        tmp_assign_source_115 = tmp_tuple_unpack_12__element_2;
        {
            PyObject *old = var_step_h;
            var_step_h = tmp_assign_source_115;
            Py_INCREF( var_step_h );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_12__element_2 );
    tmp_tuple_unpack_12__element_2 = NULL;

    {
        PyObject *tmp_assign_source_116;
        CHECK_OBJECT( tmp_tuple_unpack_12__element_3 );
        tmp_assign_source_116 = tmp_tuple_unpack_12__element_3;
        {
            PyObject *old = var_predicted_reduction;
            var_predicted_reduction = tmp_assign_source_116;
            Py_INCREF( var_predicted_reduction );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_12__element_3 );
    tmp_tuple_unpack_12__element_3 = NULL;

    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_called_name_29;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_args_name_7;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_left_name_30;
        PyObject *tmp_right_name_30;
        PyObject *tmp_kw_name_7;
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_make_strictly_feasible );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_make_strictly_feasible );
        }

        if ( tmp_mvar_value_33 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "make_strictly_feasible" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 340;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_29 = tmp_mvar_value_33;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 340;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_30 = var_x;
        CHECK_OBJECT( var_step );
        tmp_right_name_30 = var_step;
        tmp_tuple_element_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_30, tmp_right_name_30 );
        if ( tmp_tuple_element_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_7 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_11 );
        CHECK_OBJECT( par_lb );
        tmp_tuple_element_11 = par_lb;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_11 );
        CHECK_OBJECT( par_ub );
        tmp_tuple_element_11 = par_ub;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_args_name_7, 2, tmp_tuple_element_11 );
        tmp_kw_name_7 = PyDict_Copy( const_dict_4d00801cbb538f761d0649b12a6bb7a7 );
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 340;
        tmp_assign_source_117 = CALL_FUNCTION( tmp_called_name_29, tmp_args_name_7, tmp_kw_name_7 );
        Py_DECREF( tmp_args_name_7 );
        Py_DECREF( tmp_kw_name_7 );
        if ( tmp_assign_source_117 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_x_new;
            var_x_new = tmp_assign_source_117;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_called_name_30;
        PyObject *tmp_args_element_name_63;
        CHECK_OBJECT( par_fun );
        tmp_called_name_30 = par_fun;
        CHECK_OBJECT( var_x_new );
        tmp_args_element_name_63 = var_x_new;
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 341;
        {
            PyObject *call_args[] = { tmp_args_element_name_63 };
            tmp_assign_source_118 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
        }

        if ( tmp_assign_source_118 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_f_new;
            var_f_new = tmp_assign_source_118;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_left_name_31;
        PyObject *tmp_right_name_31;
        if ( var_nfev == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nfev" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 342;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_31 = var_nfev;
        tmp_right_name_31 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_31, tmp_right_name_31 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_119 = tmp_left_name_31;
        var_nfev = tmp_assign_source_119;

    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_called_name_31;
        PyObject *tmp_mvar_value_34;
        PyObject *tmp_args_element_name_64;
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_34 == NULL ))
        {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_34 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 344;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_31 = tmp_mvar_value_34;
        CHECK_OBJECT( var_step_h );
        tmp_args_element_name_64 = var_step_h;
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 344;
        {
            PyObject *call_args[] = { tmp_args_element_name_64 };
            tmp_assign_source_120 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, call_args );
        }

        if ( tmp_assign_source_120 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_step_h_norm;
            var_step_h_norm = tmp_assign_source_120;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_called_name_32;
        PyObject *tmp_source_name_17;
        PyObject *tmp_mvar_value_35;
        PyObject *tmp_args_element_name_65;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_mvar_value_36;
        PyObject *tmp_args_element_name_66;
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_17 = tmp_mvar_value_35;
        tmp_called_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_all );
        if ( tmp_called_name_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_36 == NULL ))
        {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_36 == NULL )
        {
            Py_DECREF( tmp_called_name_32 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_10 = tmp_mvar_value_36;
        CHECK_OBJECT( var_f_new );
        tmp_args_element_name_66 = var_f_new;
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 346;
        {
            PyObject *call_args[] = { tmp_args_element_name_66 };
            tmp_args_element_name_65 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_isfinite, call_args );
        }

        if ( tmp_args_element_name_65 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_32 );

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 346;
        {
            PyObject *call_args[] = { tmp_args_element_name_65 };
            tmp_operand_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_32, call_args );
        }

        Py_DECREF( tmp_called_name_32 );
        Py_DECREF( tmp_args_element_name_65 );
        if ( tmp_operand_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
        Py_DECREF( tmp_operand_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_121;
            PyObject *tmp_left_name_32;
            PyObject *tmp_right_name_32;
            tmp_left_name_32 = const_float_0_25;
            CHECK_OBJECT( var_step_h_norm );
            tmp_right_name_32 = var_step_h_norm;
            tmp_assign_source_121 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_32, tmp_right_name_32 );
            if ( tmp_assign_source_121 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_Delta;
                assert( old != NULL );
                var_Delta = tmp_assign_source_121;
                Py_DECREF( old );
            }

        }
        goto loop_start_2;
        branch_no_17:;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_compexpr_left_22;
        PyObject *tmp_compexpr_right_22;
        CHECK_OBJECT( par_loss_function );
        tmp_compexpr_left_22 = par_loss_function;
        tmp_compexpr_right_22 = Py_None;
        tmp_condition_result_18 = ( tmp_compexpr_left_22 != tmp_compexpr_right_22 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_122;
            PyObject *tmp_called_name_33;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT( par_loss_function );
            tmp_called_name_33 = par_loss_function;
            CHECK_OBJECT( var_f_new );
            tmp_tuple_element_12 = var_f_new;
            tmp_args_name_8 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_12 );
            tmp_kw_name_8 = PyDict_Copy( const_dict_9e1b4601096819506f8f581e889fa028 );
            frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 352;
            tmp_assign_source_122 = CALL_FUNCTION( tmp_called_name_33, tmp_args_name_8, tmp_kw_name_8 );
            Py_DECREF( tmp_args_name_8 );
            Py_DECREF( tmp_kw_name_8 );
            if ( tmp_assign_source_122 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_cost_new;
                var_cost_new = tmp_assign_source_122;
                Py_XDECREF( old );
            }

        }
        goto branch_end_18;
        branch_no_18:;
        {
            PyObject *tmp_assign_source_123;
            PyObject *tmp_left_name_33;
            PyObject *tmp_right_name_33;
            PyObject *tmp_called_instance_11;
            PyObject *tmp_mvar_value_37;
            PyObject *tmp_args_element_name_67;
            PyObject *tmp_args_element_name_68;
            tmp_left_name_33 = const_float_0_5;
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_37 == NULL ))
            {
                tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_37 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 354;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_11 = tmp_mvar_value_37;
            CHECK_OBJECT( var_f_new );
            tmp_args_element_name_67 = var_f_new;
            CHECK_OBJECT( var_f_new );
            tmp_args_element_name_68 = var_f_new;
            frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 354;
            {
                PyObject *call_args[] = { tmp_args_element_name_67, tmp_args_element_name_68 };
                tmp_right_name_33 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_11, const_str_plain_dot, call_args );
            }

            if ( tmp_right_name_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_123 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_33, tmp_right_name_33 );
            Py_DECREF( tmp_right_name_33 );
            if ( tmp_assign_source_123 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_cost_new;
                var_cost_new = tmp_assign_source_123;
                Py_XDECREF( old );
            }

        }
        branch_end_18:;
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_left_name_34;
        PyObject *tmp_right_name_34;
        if ( var_cost == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cost" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 355;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_34 = var_cost;
        CHECK_OBJECT( var_cost_new );
        tmp_right_name_34 = var_cost_new;
        tmp_assign_source_124 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_34, tmp_right_name_34 );
        if ( tmp_assign_source_124 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 355;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_actual_reduction;
            assert( old != NULL );
            var_actual_reduction = tmp_assign_source_124;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_left_name_35;
        PyObject *tmp_right_name_35;
        PyObject *tmp_called_name_34;
        PyObject *tmp_source_name_18;
        PyObject *tmp_mvar_value_38;
        PyObject *tmp_args_element_name_69;
        PyObject *tmp_left_name_36;
        PyObject *tmp_right_name_36;
        PyObject *tmp_args_element_name_70;
        tmp_left_name_35 = const_float_0_5;
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_38 == NULL ))
        {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_38 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_18 = tmp_mvar_value_38;
        tmp_called_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_dot );
        if ( tmp_called_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_step_h );
        tmp_left_name_36 = var_step_h;
        CHECK_OBJECT( var_diag_h );
        tmp_right_name_36 = var_diag_h;
        tmp_args_element_name_69 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_36, tmp_right_name_36 );
        if ( tmp_args_element_name_69 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_34 );

            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_step_h );
        tmp_args_element_name_70 = var_step_h;
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 358;
        {
            PyObject *call_args[] = { tmp_args_element_name_69, tmp_args_element_name_70 };
            tmp_right_name_35 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_34, call_args );
        }

        Py_DECREF( tmp_called_name_34 );
        Py_DECREF( tmp_args_element_name_69 );
        if ( tmp_right_name_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_125 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_35, tmp_right_name_35 );
        Py_DECREF( tmp_right_name_35 );
        if ( tmp_assign_source_125 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_correction;
            var_correction = tmp_assign_source_125;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_iter_arg_13;
        PyObject *tmp_called_name_35;
        PyObject *tmp_mvar_value_39;
        PyObject *tmp_args_element_name_71;
        PyObject *tmp_args_element_name_72;
        PyObject *tmp_args_element_name_73;
        PyObject *tmp_args_element_name_74;
        PyObject *tmp_args_element_name_75;
        PyObject *tmp_compexpr_left_23;
        PyObject *tmp_compexpr_right_23;
        PyObject *tmp_left_name_37;
        PyObject *tmp_right_name_37;
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_update_tr_radius );

        if (unlikely( tmp_mvar_value_39 == NULL ))
        {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_update_tr_radius );
        }

        if ( tmp_mvar_value_39 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "update_tr_radius" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 360;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }

        tmp_called_name_35 = tmp_mvar_value_39;
        CHECK_OBJECT( var_Delta );
        tmp_args_element_name_71 = var_Delta;
        CHECK_OBJECT( var_actual_reduction );
        tmp_args_element_name_72 = var_actual_reduction;
        CHECK_OBJECT( var_predicted_reduction );
        tmp_args_element_name_73 = var_predicted_reduction;
        CHECK_OBJECT( var_step_h_norm );
        tmp_args_element_name_74 = var_step_h_norm;
        CHECK_OBJECT( var_step_h_norm );
        tmp_compexpr_left_23 = var_step_h_norm;
        tmp_left_name_37 = const_float_0_95;
        CHECK_OBJECT( var_Delta );
        tmp_right_name_37 = var_Delta;
        tmp_compexpr_right_23 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_37, tmp_right_name_37 );
        if ( tmp_compexpr_right_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }
        tmp_args_element_name_75 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_23, tmp_compexpr_right_23 );
        Py_DECREF( tmp_compexpr_right_23 );
        if ( tmp_args_element_name_75 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 360;
        {
            PyObject *call_args[] = { tmp_args_element_name_71, tmp_args_element_name_72, tmp_args_element_name_73, tmp_args_element_name_74, tmp_args_element_name_75 };
            tmp_iter_arg_13 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_35, call_args );
        }

        Py_DECREF( tmp_args_element_name_75 );
        if ( tmp_iter_arg_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 360;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }
        tmp_assign_source_126 = MAKE_ITERATOR( tmp_iter_arg_13 );
        Py_DECREF( tmp_iter_arg_13 );
        if ( tmp_assign_source_126 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 360;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }
        {
            PyObject *old = tmp_tuple_unpack_13__source_iter;
            tmp_tuple_unpack_13__source_iter = tmp_assign_source_126;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_unpack_28;
        CHECK_OBJECT( tmp_tuple_unpack_13__source_iter );
        tmp_unpack_28 = tmp_tuple_unpack_13__source_iter;
        tmp_assign_source_127 = UNPACK_NEXT( tmp_unpack_28, 0, 2 );
        if ( tmp_assign_source_127 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 360;
            goto try_except_handler_29;
        }
        {
            PyObject *old = tmp_tuple_unpack_13__element_1;
            tmp_tuple_unpack_13__element_1 = tmp_assign_source_127;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_unpack_29;
        CHECK_OBJECT( tmp_tuple_unpack_13__source_iter );
        tmp_unpack_29 = tmp_tuple_unpack_13__source_iter;
        tmp_assign_source_128 = UNPACK_NEXT( tmp_unpack_29, 1, 2 );
        if ( tmp_assign_source_128 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 360;
            goto try_except_handler_29;
        }
        {
            PyObject *old = tmp_tuple_unpack_13__element_2;
            tmp_tuple_unpack_13__element_2 = tmp_assign_source_128;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_12;
        CHECK_OBJECT( tmp_tuple_unpack_13__source_iter );
        tmp_iterator_name_12 = tmp_tuple_unpack_13__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_12 ); assert( HAS_ITERNEXT( tmp_iterator_name_12 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_12 )->tp_iternext)( tmp_iterator_name_12 );

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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 360;
                    goto try_except_handler_29;
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

            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 360;
            goto try_except_handler_29;
        }
    }
    goto try_end_27;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_13__source_iter );
    Py_DECREF( tmp_tuple_unpack_13__source_iter );
    tmp_tuple_unpack_13__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto try_except_handler_28;
    // End of try:
    try_end_27:;
    goto try_end_28;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_13__element_1 );
    tmp_tuple_unpack_13__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_13__element_2 );
    tmp_tuple_unpack_13__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_13__source_iter );
    Py_DECREF( tmp_tuple_unpack_13__source_iter );
    tmp_tuple_unpack_13__source_iter = NULL;

    {
        PyObject *tmp_assign_source_129;
        CHECK_OBJECT( tmp_tuple_unpack_13__element_1 );
        tmp_assign_source_129 = tmp_tuple_unpack_13__element_1;
        {
            PyObject *old = var_Delta_new;
            var_Delta_new = tmp_assign_source_129;
            Py_INCREF( var_Delta_new );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_13__element_1 );
    tmp_tuple_unpack_13__element_1 = NULL;

    {
        PyObject *tmp_assign_source_130;
        CHECK_OBJECT( tmp_tuple_unpack_13__element_2 );
        tmp_assign_source_130 = tmp_tuple_unpack_13__element_2;
        {
            PyObject *old = var_ratio;
            var_ratio = tmp_assign_source_130;
            Py_INCREF( var_ratio );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_13__element_2 );
    tmp_tuple_unpack_13__element_2 = NULL;

    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_called_name_36;
        PyObject *tmp_mvar_value_40;
        PyObject *tmp_args_element_name_76;
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_40 == NULL ))
        {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_40 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_36 = tmp_mvar_value_40;
        CHECK_OBJECT( var_step );
        tmp_args_element_name_76 = var_step;
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 364;
        {
            PyObject *call_args[] = { tmp_args_element_name_76 };
            tmp_assign_source_131 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_36, call_args );
        }

        if ( tmp_assign_source_131 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_step_norm;
            var_step_norm = tmp_assign_source_131;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_called_name_37;
        PyObject *tmp_mvar_value_41;
        PyObject *tmp_args_element_name_77;
        PyObject *tmp_args_element_name_78;
        PyObject *tmp_args_element_name_79;
        PyObject *tmp_args_element_name_80;
        PyObject *tmp_called_name_38;
        PyObject *tmp_mvar_value_42;
        PyObject *tmp_args_element_name_81;
        PyObject *tmp_args_element_name_82;
        PyObject *tmp_args_element_name_83;
        PyObject *tmp_args_element_name_84;
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_check_termination );

        if (unlikely( tmp_mvar_value_41 == NULL ))
        {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_check_termination );
        }

        if ( tmp_mvar_value_41 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "check_termination" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 365;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_37 = tmp_mvar_value_41;
        CHECK_OBJECT( var_actual_reduction );
        tmp_args_element_name_77 = var_actual_reduction;
        if ( var_cost == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cost" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_78 = var_cost;
        CHECK_OBJECT( var_step_norm );
        tmp_args_element_name_79 = var_step_norm;
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_42 == NULL ))
        {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_42 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_38 = tmp_mvar_value_42;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_81 = var_x;
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 366;
        {
            PyObject *call_args[] = { tmp_args_element_name_81 };
            tmp_args_element_name_80 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_38, call_args );
        }

        if ( tmp_args_element_name_80 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ratio );
        tmp_args_element_name_82 = var_ratio;
        CHECK_OBJECT( par_ftol );
        tmp_args_element_name_83 = par_ftol;
        CHECK_OBJECT( par_xtol );
        tmp_args_element_name_84 = par_xtol;
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 365;
        {
            PyObject *call_args[] = { tmp_args_element_name_77, tmp_args_element_name_78, tmp_args_element_name_79, tmp_args_element_name_80, tmp_args_element_name_82, tmp_args_element_name_83, tmp_args_element_name_84 };
            tmp_assign_source_132 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_37, call_args );
        }

        Py_DECREF( tmp_args_element_name_80 );
        if ( tmp_assign_source_132 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_termination_status;
            var_termination_status = tmp_assign_source_132;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_compexpr_left_24;
        PyObject *tmp_compexpr_right_24;
        CHECK_OBJECT( var_termination_status );
        tmp_compexpr_left_24 = var_termination_status;
        tmp_compexpr_right_24 = Py_None;
        tmp_condition_result_19 = ( tmp_compexpr_left_24 != tmp_compexpr_right_24 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_19;
        }
        else
        {
            goto branch_no_19;
        }
        branch_yes_19:;
        goto loop_end_2;
        branch_no_19:;
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_left_name_38;
        PyObject *tmp_right_name_38;
        PyObject *tmp_left_name_39;
        PyObject *tmp_right_name_39;
        if ( var_alpha == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "alpha" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 370;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_38 = var_alpha;
        CHECK_OBJECT( var_Delta );
        tmp_left_name_39 = var_Delta;
        CHECK_OBJECT( var_Delta_new );
        tmp_right_name_39 = var_Delta_new;
        tmp_right_name_38 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_39, tmp_right_name_39 );
        if ( tmp_right_name_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_38, tmp_right_name_38 );
        Py_DECREF( tmp_right_name_38 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_133 = tmp_left_name_38;
        var_alpha = tmp_assign_source_133;

    }
    {
        PyObject *tmp_assign_source_134;
        CHECK_OBJECT( var_Delta_new );
        tmp_assign_source_134 = var_Delta_new;
        {
            PyObject *old = var_Delta;
            assert( old != NULL );
            var_Delta = tmp_assign_source_134;
            Py_INCREF( var_Delta );
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_compexpr_left_25;
        PyObject *tmp_compexpr_right_25;
        if ( var_actual_reduction == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "actual_reduction" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_25 = var_actual_reduction;
        tmp_compexpr_right_25 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_25, tmp_compexpr_right_25 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_assign_source_135;
            if ( var_x_new == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x_new" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 374;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_assign_source_135 = var_x_new;
            {
                PyObject *old = var_x;
                var_x = tmp_assign_source_135;
                Py_INCREF( var_x );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_136;
            if ( var_f_new == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f_new" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 376;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_assign_source_136 = var_f_new;
            {
                PyObject *old = var_f;
                var_f = tmp_assign_source_136;
                Py_INCREF( var_f );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_137;
            PyObject *tmp_called_instance_12;
            CHECK_OBJECT( var_f );
            tmp_called_instance_12 = var_f;
            frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 377;
            tmp_assign_source_137 = CALL_METHOD_NO_ARGS( tmp_called_instance_12, const_str_plain_copy );
            if ( tmp_assign_source_137 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 377;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_f_true;
                var_f_true = tmp_assign_source_137;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_138;
            if ( var_cost_new == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cost_new" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 379;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_assign_source_138 = var_cost_new;
            {
                PyObject *old = var_cost;
                var_cost = tmp_assign_source_138;
                Py_INCREF( var_cost );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_139;
            PyObject *tmp_called_name_39;
            PyObject *tmp_args_element_name_85;
            PyObject *tmp_args_element_name_86;
            CHECK_OBJECT( par_jac );
            tmp_called_name_39 = par_jac;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_85 = var_x;
            CHECK_OBJECT( var_f );
            tmp_args_element_name_86 = var_f;
            frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 381;
            {
                PyObject *call_args[] = { tmp_args_element_name_85, tmp_args_element_name_86 };
                tmp_assign_source_139 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_39, call_args );
            }

            if ( tmp_assign_source_139 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 381;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_J;
                var_J = tmp_assign_source_139;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_140;
            PyObject *tmp_left_name_40;
            PyObject *tmp_right_name_40;
            if ( var_njev == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "njev" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 382;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_40 = var_njev;
            tmp_right_name_40 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_40, tmp_right_name_40 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 382;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_140 = tmp_left_name_40;
            var_njev = tmp_assign_source_140;

        }
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_compexpr_left_26;
            PyObject *tmp_compexpr_right_26;
            CHECK_OBJECT( par_loss_function );
            tmp_compexpr_left_26 = par_loss_function;
            tmp_compexpr_right_26 = Py_None;
            tmp_condition_result_21 = ( tmp_compexpr_left_26 != tmp_compexpr_right_26 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_141;
                PyObject *tmp_called_name_40;
                PyObject *tmp_args_element_name_87;
                CHECK_OBJECT( par_loss_function );
                tmp_called_name_40 = par_loss_function;
                CHECK_OBJECT( var_f );
                tmp_args_element_name_87 = var_f;
                frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 385;
                {
                    PyObject *call_args[] = { tmp_args_element_name_87 };
                    tmp_assign_source_141 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_40, call_args );
                }

                if ( tmp_assign_source_141 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 385;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_rho;
                    var_rho = tmp_assign_source_141;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_142;
                PyObject *tmp_iter_arg_14;
                PyObject *tmp_called_name_41;
                PyObject *tmp_mvar_value_43;
                PyObject *tmp_args_element_name_88;
                PyObject *tmp_args_element_name_89;
                PyObject *tmp_args_element_name_90;
                tmp_mvar_value_43 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_scale_for_robust_loss_function );

                if (unlikely( tmp_mvar_value_43 == NULL ))
                {
                    tmp_mvar_value_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scale_for_robust_loss_function );
                }

                if ( tmp_mvar_value_43 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scale_for_robust_loss_function" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 386;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_30;
                }

                tmp_called_name_41 = tmp_mvar_value_43;
                CHECK_OBJECT( var_J );
                tmp_args_element_name_88 = var_J;
                CHECK_OBJECT( var_f );
                tmp_args_element_name_89 = var_f;
                CHECK_OBJECT( var_rho );
                tmp_args_element_name_90 = var_rho;
                frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 386;
                {
                    PyObject *call_args[] = { tmp_args_element_name_88, tmp_args_element_name_89, tmp_args_element_name_90 };
                    tmp_iter_arg_14 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_41, call_args );
                }

                if ( tmp_iter_arg_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 386;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_30;
                }
                tmp_assign_source_142 = MAKE_ITERATOR( tmp_iter_arg_14 );
                Py_DECREF( tmp_iter_arg_14 );
                if ( tmp_assign_source_142 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 386;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_30;
                }
                {
                    PyObject *old = tmp_tuple_unpack_14__source_iter;
                    tmp_tuple_unpack_14__source_iter = tmp_assign_source_142;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_143;
                PyObject *tmp_unpack_30;
                CHECK_OBJECT( tmp_tuple_unpack_14__source_iter );
                tmp_unpack_30 = tmp_tuple_unpack_14__source_iter;
                tmp_assign_source_143 = UNPACK_NEXT( tmp_unpack_30, 0, 2 );
                if ( tmp_assign_source_143 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 386;
                    goto try_except_handler_31;
                }
                {
                    PyObject *old = tmp_tuple_unpack_14__element_1;
                    tmp_tuple_unpack_14__element_1 = tmp_assign_source_143;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_144;
                PyObject *tmp_unpack_31;
                CHECK_OBJECT( tmp_tuple_unpack_14__source_iter );
                tmp_unpack_31 = tmp_tuple_unpack_14__source_iter;
                tmp_assign_source_144 = UNPACK_NEXT( tmp_unpack_31, 1, 2 );
                if ( tmp_assign_source_144 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 386;
                    goto try_except_handler_31;
                }
                {
                    PyObject *old = tmp_tuple_unpack_14__element_2;
                    tmp_tuple_unpack_14__element_2 = tmp_assign_source_144;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_iterator_name_13;
                CHECK_OBJECT( tmp_tuple_unpack_14__source_iter );
                tmp_iterator_name_13 = tmp_tuple_unpack_14__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT( tmp_iterator_name_13 ); assert( HAS_ITERNEXT( tmp_iterator_name_13 ) );

                tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_13 )->tp_iternext)( tmp_iterator_name_13 );

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

                            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                            exception_lineno = 386;
                            goto try_except_handler_31;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 386;
                    goto try_except_handler_31;
                }
            }
            goto try_end_29;
            // Exception handler code:
            try_except_handler_31:;
            exception_keeper_type_29 = exception_type;
            exception_keeper_value_29 = exception_value;
            exception_keeper_tb_29 = exception_tb;
            exception_keeper_lineno_29 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_14__source_iter );
            Py_DECREF( tmp_tuple_unpack_14__source_iter );
            tmp_tuple_unpack_14__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_29;
            exception_value = exception_keeper_value_29;
            exception_tb = exception_keeper_tb_29;
            exception_lineno = exception_keeper_lineno_29;

            goto try_except_handler_30;
            // End of try:
            try_end_29:;
            goto try_end_30;
            // Exception handler code:
            try_except_handler_30:;
            exception_keeper_type_30 = exception_type;
            exception_keeper_value_30 = exception_value;
            exception_keeper_tb_30 = exception_tb;
            exception_keeper_lineno_30 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_tuple_unpack_14__element_1 );
            tmp_tuple_unpack_14__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_14__element_2 );
            tmp_tuple_unpack_14__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_30;
            exception_value = exception_keeper_value_30;
            exception_tb = exception_keeper_tb_30;
            exception_lineno = exception_keeper_lineno_30;

            goto frame_exception_exit_1;
            // End of try:
            try_end_30:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_14__source_iter );
            Py_DECREF( tmp_tuple_unpack_14__source_iter );
            tmp_tuple_unpack_14__source_iter = NULL;

            {
                PyObject *tmp_assign_source_145;
                CHECK_OBJECT( tmp_tuple_unpack_14__element_1 );
                tmp_assign_source_145 = tmp_tuple_unpack_14__element_1;
                {
                    PyObject *old = var_J;
                    assert( old != NULL );
                    var_J = tmp_assign_source_145;
                    Py_INCREF( var_J );
                    Py_DECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_14__element_1 );
            tmp_tuple_unpack_14__element_1 = NULL;

            {
                PyObject *tmp_assign_source_146;
                CHECK_OBJECT( tmp_tuple_unpack_14__element_2 );
                tmp_assign_source_146 = tmp_tuple_unpack_14__element_2;
                {
                    PyObject *old = var_f;
                    assert( old != NULL );
                    var_f = tmp_assign_source_146;
                    Py_INCREF( var_f );
                    Py_DECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_14__element_2 );
            tmp_tuple_unpack_14__element_2 = NULL;

            branch_no_21:;
        }
        {
            PyObject *tmp_assign_source_147;
            PyObject *tmp_called_name_42;
            PyObject *tmp_mvar_value_44;
            PyObject *tmp_args_element_name_91;
            PyObject *tmp_args_element_name_92;
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_compute_grad );

            if (unlikely( tmp_mvar_value_44 == NULL ))
            {
                tmp_mvar_value_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compute_grad );
            }

            if ( tmp_mvar_value_44 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compute_grad" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 388;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_42 = tmp_mvar_value_44;
            CHECK_OBJECT( var_J );
            tmp_args_element_name_91 = var_J;
            CHECK_OBJECT( var_f );
            tmp_args_element_name_92 = var_f;
            frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 388;
            {
                PyObject *call_args[] = { tmp_args_element_name_91, tmp_args_element_name_92 };
                tmp_assign_source_147 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_42, call_args );
            }

            if ( tmp_assign_source_147 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 388;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_g;
                var_g = tmp_assign_source_147;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_22;
            int tmp_truth_name_3;
            CHECK_OBJECT( var_jac_scale );
            tmp_truth_name_3 = CHECK_IF_TRUE( var_jac_scale );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 390;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_22 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_22;
            }
            else
            {
                goto branch_no_22;
            }
            branch_yes_22:;
            // Tried code:
            {
                PyObject *tmp_assign_source_148;
                PyObject *tmp_iter_arg_15;
                PyObject *tmp_called_name_43;
                PyObject *tmp_mvar_value_45;
                PyObject *tmp_args_element_name_93;
                PyObject *tmp_args_element_name_94;
                tmp_mvar_value_45 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_compute_jac_scale );

                if (unlikely( tmp_mvar_value_45 == NULL ))
                {
                    tmp_mvar_value_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compute_jac_scale );
                }

                if ( tmp_mvar_value_45 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compute_jac_scale" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 391;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_32;
                }

                tmp_called_name_43 = tmp_mvar_value_45;
                CHECK_OBJECT( var_J );
                tmp_args_element_name_93 = var_J;
                if ( var_scale_inv == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scale_inv" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 391;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_32;
                }

                tmp_args_element_name_94 = var_scale_inv;
                frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 391;
                {
                    PyObject *call_args[] = { tmp_args_element_name_93, tmp_args_element_name_94 };
                    tmp_iter_arg_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_43, call_args );
                }

                if ( tmp_iter_arg_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 391;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_32;
                }
                tmp_assign_source_148 = MAKE_ITERATOR( tmp_iter_arg_15 );
                Py_DECREF( tmp_iter_arg_15 );
                if ( tmp_assign_source_148 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 391;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_32;
                }
                {
                    PyObject *old = tmp_tuple_unpack_15__source_iter;
                    tmp_tuple_unpack_15__source_iter = tmp_assign_source_148;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_149;
                PyObject *tmp_unpack_32;
                CHECK_OBJECT( tmp_tuple_unpack_15__source_iter );
                tmp_unpack_32 = tmp_tuple_unpack_15__source_iter;
                tmp_assign_source_149 = UNPACK_NEXT( tmp_unpack_32, 0, 2 );
                if ( tmp_assign_source_149 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 391;
                    goto try_except_handler_33;
                }
                {
                    PyObject *old = tmp_tuple_unpack_15__element_1;
                    tmp_tuple_unpack_15__element_1 = tmp_assign_source_149;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_150;
                PyObject *tmp_unpack_33;
                CHECK_OBJECT( tmp_tuple_unpack_15__source_iter );
                tmp_unpack_33 = tmp_tuple_unpack_15__source_iter;
                tmp_assign_source_150 = UNPACK_NEXT( tmp_unpack_33, 1, 2 );
                if ( tmp_assign_source_150 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 391;
                    goto try_except_handler_33;
                }
                {
                    PyObject *old = tmp_tuple_unpack_15__element_2;
                    tmp_tuple_unpack_15__element_2 = tmp_assign_source_150;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_iterator_name_14;
                CHECK_OBJECT( tmp_tuple_unpack_15__source_iter );
                tmp_iterator_name_14 = tmp_tuple_unpack_15__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT( tmp_iterator_name_14 ); assert( HAS_ITERNEXT( tmp_iterator_name_14 ) );

                tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_14 )->tp_iternext)( tmp_iterator_name_14 );

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

                            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                            exception_lineno = 391;
                            goto try_except_handler_33;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 391;
                    goto try_except_handler_33;
                }
            }
            goto try_end_31;
            // Exception handler code:
            try_except_handler_33:;
            exception_keeper_type_31 = exception_type;
            exception_keeper_value_31 = exception_value;
            exception_keeper_tb_31 = exception_tb;
            exception_keeper_lineno_31 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_15__source_iter );
            Py_DECREF( tmp_tuple_unpack_15__source_iter );
            tmp_tuple_unpack_15__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_31;
            exception_value = exception_keeper_value_31;
            exception_tb = exception_keeper_tb_31;
            exception_lineno = exception_keeper_lineno_31;

            goto try_except_handler_32;
            // End of try:
            try_end_31:;
            goto try_end_32;
            // Exception handler code:
            try_except_handler_32:;
            exception_keeper_type_32 = exception_type;
            exception_keeper_value_32 = exception_value;
            exception_keeper_tb_32 = exception_tb;
            exception_keeper_lineno_32 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_tuple_unpack_15__element_1 );
            tmp_tuple_unpack_15__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_15__element_2 );
            tmp_tuple_unpack_15__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_32;
            exception_value = exception_keeper_value_32;
            exception_tb = exception_keeper_tb_32;
            exception_lineno = exception_keeper_lineno_32;

            goto frame_exception_exit_1;
            // End of try:
            try_end_32:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_15__source_iter );
            Py_DECREF( tmp_tuple_unpack_15__source_iter );
            tmp_tuple_unpack_15__source_iter = NULL;

            {
                PyObject *tmp_assign_source_151;
                CHECK_OBJECT( tmp_tuple_unpack_15__element_1 );
                tmp_assign_source_151 = tmp_tuple_unpack_15__element_1;
                {
                    PyObject *old = var_scale;
                    var_scale = tmp_assign_source_151;
                    Py_INCREF( var_scale );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_15__element_1 );
            tmp_tuple_unpack_15__element_1 = NULL;

            {
                PyObject *tmp_assign_source_152;
                CHECK_OBJECT( tmp_tuple_unpack_15__element_2 );
                tmp_assign_source_152 = tmp_tuple_unpack_15__element_2;
                {
                    PyObject *old = var_scale_inv;
                    var_scale_inv = tmp_assign_source_152;
                    Py_INCREF( var_scale_inv );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_15__element_2 );
            tmp_tuple_unpack_15__element_2 = NULL;

            branch_no_22:;
        }
        goto branch_end_20;
        branch_no_20:;
        {
            PyObject *tmp_assign_source_153;
            tmp_assign_source_153 = const_int_0;
            {
                PyObject *old = var_step_norm;
                var_step_norm = tmp_assign_source_153;
                Py_INCREF( var_step_norm );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_154;
            tmp_assign_source_154 = const_int_0;
            {
                PyObject *old = var_actual_reduction;
                var_actual_reduction = tmp_assign_source_154;
                Py_INCREF( var_actual_reduction );
                Py_XDECREF( old );
            }

        }
        branch_end_20:;
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_left_name_41;
        PyObject *tmp_right_name_41;
        CHECK_OBJECT( var_iteration );
        tmp_left_name_41 = var_iteration;
        tmp_right_name_41 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_41, tmp_right_name_41 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_155 = tmp_left_name_41;
        var_iteration = tmp_assign_source_155;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_compexpr_left_27;
        PyObject *tmp_compexpr_right_27;
        if ( var_termination_status == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "termination_status" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 398;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_27 = var_termination_status;
        tmp_compexpr_right_27 = Py_None;
        tmp_condition_result_23 = ( tmp_compexpr_left_27 == tmp_compexpr_right_27 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_156;
            tmp_assign_source_156 = const_int_0;
            {
                PyObject *old = var_termination_status;
                var_termination_status = tmp_assign_source_156;
                Py_INCREF( var_termination_status );
                Py_XDECREF( old );
            }

        }
        branch_no_23:;
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_called_name_44;
        PyObject *tmp_mvar_value_46;
        PyObject *tmp_args_name_9;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kw_name_9;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_mvar_value_46 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_find_active_constraints );

        if (unlikely( tmp_mvar_value_46 == NULL ))
        {
            tmp_mvar_value_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_find_active_constraints );
        }

        if ( tmp_mvar_value_46 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "find_active_constraints" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 401;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_44 = tmp_mvar_value_46;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 401;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_13 = var_x;
        tmp_args_name_9 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_13 );
        PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_13 );
        CHECK_OBJECT( par_lb );
        tmp_tuple_element_13 = par_lb;
        Py_INCREF( tmp_tuple_element_13 );
        PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_13 );
        CHECK_OBJECT( par_ub );
        tmp_tuple_element_13 = par_ub;
        Py_INCREF( tmp_tuple_element_13 );
        PyTuple_SET_ITEM( tmp_args_name_9, 2, tmp_tuple_element_13 );
        tmp_dict_key_5 = const_str_plain_rtol;
        CHECK_OBJECT( par_xtol );
        tmp_dict_value_5 = par_xtol;
        tmp_kw_name_9 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_9, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 401;
        tmp_assign_source_157 = CALL_FUNCTION( tmp_called_name_44, tmp_args_name_9, tmp_kw_name_9 );
        Py_DECREF( tmp_args_name_9 );
        Py_DECREF( tmp_kw_name_9 );
        if ( tmp_assign_source_157 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_active_mask == NULL );
        var_active_mask = tmp_assign_source_157;
    }
    {
        PyObject *tmp_called_name_45;
        PyObject *tmp_mvar_value_47;
        PyObject *tmp_kw_name_10;
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
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        tmp_mvar_value_47 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_OptimizeResult );

        if (unlikely( tmp_mvar_value_47 == NULL ))
        {
            tmp_mvar_value_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeResult );
        }

        if ( tmp_mvar_value_47 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 402;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_45 = tmp_mvar_value_47;
        tmp_dict_key_6 = const_str_plain_x;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 403;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_6 = var_x;
        tmp_kw_name_10 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem( tmp_kw_name_10, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_cost;
        if ( var_cost == NULL )
        {
            Py_DECREF( tmp_kw_name_10 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cost" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 403;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_7 = var_cost;
        tmp_res = PyDict_SetItem( tmp_kw_name_10, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_fun;
        if ( var_f_true == NULL )
        {
            Py_DECREF( tmp_kw_name_10 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f_true" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 403;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_8 = var_f_true;
        tmp_res = PyDict_SetItem( tmp_kw_name_10, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_str_plain_jac;
        if ( var_J == NULL )
        {
            Py_DECREF( tmp_kw_name_10 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 403;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_9 = var_J;
        tmp_res = PyDict_SetItem( tmp_kw_name_10, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_10 = const_str_plain_grad;
        if ( var_g == NULL )
        {
            Py_DECREF( tmp_kw_name_10 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 403;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_10 = var_g;
        tmp_res = PyDict_SetItem( tmp_kw_name_10, tmp_dict_key_10, tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_11 = const_str_plain_optimality;
        CHECK_OBJECT( var_g_norm );
        tmp_dict_value_11 = var_g_norm;
        tmp_res = PyDict_SetItem( tmp_kw_name_10, tmp_dict_key_11, tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_12 = const_str_plain_active_mask;
        CHECK_OBJECT( var_active_mask );
        tmp_dict_value_12 = var_active_mask;
        tmp_res = PyDict_SetItem( tmp_kw_name_10, tmp_dict_key_12, tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_13 = const_str_plain_nfev;
        if ( var_nfev == NULL )
        {
            Py_DECREF( tmp_kw_name_10 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nfev" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 404;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_13 = var_nfev;
        tmp_res = PyDict_SetItem( tmp_kw_name_10, tmp_dict_key_13, tmp_dict_value_13 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_14 = const_str_plain_njev;
        if ( var_njev == NULL )
        {
            Py_DECREF( tmp_kw_name_10 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "njev" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 404;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_14 = var_njev;
        tmp_res = PyDict_SetItem( tmp_kw_name_10, tmp_dict_key_14, tmp_dict_value_14 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_15 = const_str_plain_status;
        if ( var_termination_status == NULL )
        {
            Py_DECREF( tmp_kw_name_10 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "termination_status" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 405;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_15 = var_termination_status;
        tmp_res = PyDict_SetItem( tmp_kw_name_10, tmp_dict_key_15, tmp_dict_value_15 );
        assert( !(tmp_res != 0) );
        frame_83d55fe0a901222fd33ed240137bb468->m_frame.f_lineno = 402;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_45, tmp_kw_name_10 );
        Py_DECREF( tmp_kw_name_10 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 402;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83d55fe0a901222fd33ed240137bb468 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_83d55fe0a901222fd33ed240137bb468 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83d55fe0a901222fd33ed240137bb468 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_83d55fe0a901222fd33ed240137bb468, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_83d55fe0a901222fd33ed240137bb468->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_83d55fe0a901222fd33ed240137bb468, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_83d55fe0a901222fd33ed240137bb468,
        type_description_1,
        par_fun,
        par_jac,
        par_x0,
        par_f0,
        par_J0,
        par_lb,
        par_ub,
        par_ftol,
        par_xtol,
        par_gtol,
        par_max_nfev,
        par_x_scale,
        par_loss_function,
        par_tr_solver,
        par_tr_options,
        par_verbose,
        var_x,
        var_f,
        var_f_true,
        var_nfev,
        var_J,
        var_njev,
        var_m,
        var_n,
        var_rho,
        var_cost,
        var_g,
        var_jac_scale,
        var_scale,
        var_scale_inv,
        var_v,
        var_dv,
        var_Delta,
        var_g_norm,
        var_f_augmented,
        var_J_augmented,
        var_reg_term,
        var_regularize,
        var_alpha,
        var_termination_status,
        var_iteration,
        var_step_norm,
        var_actual_reduction,
        var_d,
        var_diag_h,
        var_g_h,
        var_J_h,
        var_U,
        var_s,
        var_V,
        var_uf,
        var_a,
        var_b,
        var_to_tr,
        var_ag_value,
        var_lsmr_op,
        var_gn_h,
        var_S,
        var__,
        var_JS,
        var_B_S,
        var_g_S,
        var_theta,
        var_p_h,
        var_n_iter,
        var_p_S,
        var_p,
        var_step,
        var_step_h,
        var_predicted_reduction,
        var_x_new,
        var_f_new,
        var_step_h_norm,
        var_cost_new,
        var_correction,
        var_Delta_new,
        var_ratio,
        var_active_mask
    );


    // Release cached frame.
    if ( frame_83d55fe0a901222fd33ed240137bb468 == cache_frame_83d55fe0a901222fd33ed240137bb468 )
    {
        Py_DECREF( frame_83d55fe0a901222fd33ed240137bb468 );
    }
    cache_frame_83d55fe0a901222fd33ed240137bb468 = NULL;

    assertFrameObject( frame_83d55fe0a901222fd33ed240137bb468 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$trf$$$function_3_trf_bounds );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_f0 );
    Py_DECREF( par_f0 );
    par_f0 = NULL;

    CHECK_OBJECT( (PyObject *)par_J0 );
    Py_DECREF( par_J0 );
    par_J0 = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_gtol );
    Py_DECREF( par_gtol );
    par_gtol = NULL;

    CHECK_OBJECT( (PyObject *)par_max_nfev );
    Py_DECREF( par_max_nfev );
    par_max_nfev = NULL;

    CHECK_OBJECT( (PyObject *)par_x_scale );
    Py_DECREF( par_x_scale );
    par_x_scale = NULL;

    CHECK_OBJECT( (PyObject *)par_loss_function );
    Py_DECREF( par_loss_function );
    par_loss_function = NULL;

    CHECK_OBJECT( (PyObject *)par_tr_solver );
    Py_DECREF( par_tr_solver );
    par_tr_solver = NULL;

    CHECK_OBJECT( (PyObject *)par_tr_options );
    Py_DECREF( par_tr_options );
    par_tr_options = NULL;

    CHECK_OBJECT( (PyObject *)par_verbose );
    Py_DECREF( par_verbose );
    par_verbose = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_f_true );
    var_f_true = NULL;

    Py_XDECREF( var_nfev );
    var_nfev = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

    Py_XDECREF( var_njev );
    var_njev = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_rho );
    var_rho = NULL;

    Py_XDECREF( var_cost );
    var_cost = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    CHECK_OBJECT( (PyObject *)var_jac_scale );
    Py_DECREF( var_jac_scale );
    var_jac_scale = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_scale_inv );
    var_scale_inv = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)var_dv );
    Py_DECREF( var_dv );
    var_dv = NULL;

    CHECK_OBJECT( (PyObject *)var_Delta );
    Py_DECREF( var_Delta );
    var_Delta = NULL;

    CHECK_OBJECT( (PyObject *)var_g_norm );
    Py_DECREF( var_g_norm );
    var_g_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_f_augmented );
    Py_DECREF( var_f_augmented );
    var_f_augmented = NULL;

    Py_XDECREF( var_J_augmented );
    var_J_augmented = NULL;

    Py_XDECREF( var_reg_term );
    var_reg_term = NULL;

    Py_XDECREF( var_regularize );
    var_regularize = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_termination_status );
    var_termination_status = NULL;

    CHECK_OBJECT( (PyObject *)var_iteration );
    Py_DECREF( var_iteration );
    var_iteration = NULL;

    Py_XDECREF( var_step_norm );
    var_step_norm = NULL;

    Py_XDECREF( var_actual_reduction );
    var_actual_reduction = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_diag_h );
    var_diag_h = NULL;

    Py_XDECREF( var_g_h );
    var_g_h = NULL;

    Py_XDECREF( var_J_h );
    var_J_h = NULL;

    Py_XDECREF( var_U );
    var_U = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_V );
    var_V = NULL;

    Py_XDECREF( var_uf );
    var_uf = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_to_tr );
    var_to_tr = NULL;

    Py_XDECREF( var_ag_value );
    var_ag_value = NULL;

    Py_XDECREF( var_lsmr_op );
    var_lsmr_op = NULL;

    Py_XDECREF( var_gn_h );
    var_gn_h = NULL;

    Py_XDECREF( var_S );
    var_S = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_JS );
    var_JS = NULL;

    Py_XDECREF( var_B_S );
    var_B_S = NULL;

    Py_XDECREF( var_g_S );
    var_g_S = NULL;

    Py_XDECREF( var_theta );
    var_theta = NULL;

    Py_XDECREF( var_p_h );
    var_p_h = NULL;

    Py_XDECREF( var_n_iter );
    var_n_iter = NULL;

    Py_XDECREF( var_p_S );
    var_p_S = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_step_h );
    var_step_h = NULL;

    Py_XDECREF( var_predicted_reduction );
    var_predicted_reduction = NULL;

    Py_XDECREF( var_x_new );
    var_x_new = NULL;

    Py_XDECREF( var_f_new );
    var_f_new = NULL;

    Py_XDECREF( var_step_h_norm );
    var_step_h_norm = NULL;

    Py_XDECREF( var_cost_new );
    var_cost_new = NULL;

    Py_XDECREF( var_correction );
    var_correction = NULL;

    Py_XDECREF( var_Delta_new );
    var_Delta_new = NULL;

    Py_XDECREF( var_ratio );
    var_ratio = NULL;

    CHECK_OBJECT( (PyObject *)var_active_mask );
    Py_DECREF( var_active_mask );
    var_active_mask = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_f0 );
    Py_DECREF( par_f0 );
    par_f0 = NULL;

    CHECK_OBJECT( (PyObject *)par_J0 );
    Py_DECREF( par_J0 );
    par_J0 = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_gtol );
    Py_DECREF( par_gtol );
    par_gtol = NULL;

    Py_XDECREF( par_max_nfev );
    par_max_nfev = NULL;

    CHECK_OBJECT( (PyObject *)par_x_scale );
    Py_DECREF( par_x_scale );
    par_x_scale = NULL;

    CHECK_OBJECT( (PyObject *)par_loss_function );
    Py_DECREF( par_loss_function );
    par_loss_function = NULL;

    CHECK_OBJECT( (PyObject *)par_tr_solver );
    Py_DECREF( par_tr_solver );
    par_tr_solver = NULL;

    CHECK_OBJECT( (PyObject *)par_tr_options );
    Py_DECREF( par_tr_options );
    par_tr_options = NULL;

    CHECK_OBJECT( (PyObject *)par_verbose );
    Py_DECREF( par_verbose );
    par_verbose = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_f_true );
    var_f_true = NULL;

    Py_XDECREF( var_nfev );
    var_nfev = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

    Py_XDECREF( var_njev );
    var_njev = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_rho );
    var_rho = NULL;

    Py_XDECREF( var_cost );
    var_cost = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_jac_scale );
    var_jac_scale = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_scale_inv );
    var_scale_inv = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_dv );
    var_dv = NULL;

    Py_XDECREF( var_Delta );
    var_Delta = NULL;

    Py_XDECREF( var_g_norm );
    var_g_norm = NULL;

    Py_XDECREF( var_f_augmented );
    var_f_augmented = NULL;

    Py_XDECREF( var_J_augmented );
    var_J_augmented = NULL;

    Py_XDECREF( var_reg_term );
    var_reg_term = NULL;

    Py_XDECREF( var_regularize );
    var_regularize = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_termination_status );
    var_termination_status = NULL;

    Py_XDECREF( var_iteration );
    var_iteration = NULL;

    Py_XDECREF( var_step_norm );
    var_step_norm = NULL;

    Py_XDECREF( var_actual_reduction );
    var_actual_reduction = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_diag_h );
    var_diag_h = NULL;

    Py_XDECREF( var_g_h );
    var_g_h = NULL;

    Py_XDECREF( var_J_h );
    var_J_h = NULL;

    Py_XDECREF( var_U );
    var_U = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_V );
    var_V = NULL;

    Py_XDECREF( var_uf );
    var_uf = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_to_tr );
    var_to_tr = NULL;

    Py_XDECREF( var_ag_value );
    var_ag_value = NULL;

    Py_XDECREF( var_lsmr_op );
    var_lsmr_op = NULL;

    Py_XDECREF( var_gn_h );
    var_gn_h = NULL;

    Py_XDECREF( var_S );
    var_S = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_JS );
    var_JS = NULL;

    Py_XDECREF( var_B_S );
    var_B_S = NULL;

    Py_XDECREF( var_g_S );
    var_g_S = NULL;

    Py_XDECREF( var_theta );
    var_theta = NULL;

    Py_XDECREF( var_p_h );
    var_p_h = NULL;

    Py_XDECREF( var_n_iter );
    var_n_iter = NULL;

    Py_XDECREF( var_p_S );
    var_p_S = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_step_h );
    var_step_h = NULL;

    Py_XDECREF( var_predicted_reduction );
    var_predicted_reduction = NULL;

    Py_XDECREF( var_x_new );
    var_x_new = NULL;

    Py_XDECREF( var_f_new );
    var_f_new = NULL;

    Py_XDECREF( var_step_h_norm );
    var_step_h_norm = NULL;

    Py_XDECREF( var_cost_new );
    var_cost_new = NULL;

    Py_XDECREF( var_correction );
    var_correction = NULL;

    Py_XDECREF( var_Delta_new );
    var_Delta_new = NULL;

    Py_XDECREF( var_ratio );
    var_ratio = NULL;

    Py_XDECREF( var_active_mask );
    var_active_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$trf$$$function_3_trf_bounds );
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


static PyObject *impl_scipy$optimize$_lsq$trf$$$function_4_trf_no_bounds( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fun = python_pars[ 0 ];
    PyObject *par_jac = python_pars[ 1 ];
    PyObject *par_x0 = python_pars[ 2 ];
    PyObject *par_f0 = python_pars[ 3 ];
    PyObject *par_J0 = python_pars[ 4 ];
    PyObject *par_ftol = python_pars[ 5 ];
    PyObject *par_xtol = python_pars[ 6 ];
    PyObject *par_gtol = python_pars[ 7 ];
    PyObject *par_max_nfev = python_pars[ 8 ];
    PyObject *par_x_scale = python_pars[ 9 ];
    PyObject *par_loss_function = python_pars[ 10 ];
    PyObject *par_tr_solver = python_pars[ 11 ];
    PyObject *par_tr_options = python_pars[ 12 ];
    PyObject *par_verbose = python_pars[ 13 ];
    PyObject *var_x = NULL;
    PyObject *var_f = NULL;
    PyObject *var_f_true = NULL;
    PyObject *var_nfev = NULL;
    PyObject *var_J = NULL;
    PyObject *var_njev = NULL;
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_rho = NULL;
    PyObject *var_cost = NULL;
    PyObject *var_g = NULL;
    PyObject *var_jac_scale = NULL;
    PyObject *var_scale = NULL;
    PyObject *var_scale_inv = NULL;
    PyObject *var_Delta = NULL;
    PyObject *var_reg_term = NULL;
    PyObject *var_damp = NULL;
    PyObject *var_regularize = NULL;
    PyObject *var_alpha = NULL;
    PyObject *var_termination_status = NULL;
    PyObject *var_iteration = NULL;
    PyObject *var_step_norm = NULL;
    PyObject *var_actual_reduction = NULL;
    PyObject *var_g_norm = NULL;
    PyObject *var_d = NULL;
    PyObject *var_g_h = NULL;
    PyObject *var_J_h = NULL;
    PyObject *var_U = NULL;
    PyObject *var_s = NULL;
    PyObject *var_V = NULL;
    PyObject *var_uf = NULL;
    PyObject *var_a = NULL;
    PyObject *var_b = NULL;
    PyObject *var_to_tr = NULL;
    PyObject *var_ag_value = NULL;
    PyObject *var_damp_full = NULL;
    PyObject *var_gn_h = NULL;
    PyObject *var_S = NULL;
    PyObject *var__ = NULL;
    PyObject *var_JS = NULL;
    PyObject *var_B_S = NULL;
    PyObject *var_g_S = NULL;
    PyObject *var_step_h = NULL;
    PyObject *var_n_iter = NULL;
    PyObject *var_p_S = NULL;
    PyObject *var_predicted_reduction = NULL;
    PyObject *var_step = NULL;
    PyObject *var_x_new = NULL;
    PyObject *var_f_new = NULL;
    PyObject *var_step_h_norm = NULL;
    PyObject *var_cost_new = NULL;
    PyObject *var_Delta_new = NULL;
    PyObject *var_ratio = NULL;
    PyObject *var_active_mask = NULL;
    PyObject *tmp_tuple_unpack_10__element_1 = NULL;
    PyObject *tmp_tuple_unpack_10__element_2 = NULL;
    PyObject *tmp_tuple_unpack_10__source_iter = NULL;
    PyObject *tmp_tuple_unpack_11__element_1 = NULL;
    PyObject *tmp_tuple_unpack_11__element_2 = NULL;
    PyObject *tmp_tuple_unpack_11__source_iter = NULL;
    PyObject *tmp_tuple_unpack_12__element_1 = NULL;
    PyObject *tmp_tuple_unpack_12__element_2 = NULL;
    PyObject *tmp_tuple_unpack_12__source_iter = NULL;
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
    PyObject *tmp_tuple_unpack_5__element_3 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_tuple_unpack_8__element_3 = NULL;
    PyObject *tmp_tuple_unpack_8__source_iter = NULL;
    PyObject *tmp_tuple_unpack_9__element_1 = NULL;
    PyObject *tmp_tuple_unpack_9__element_2 = NULL;
    PyObject *tmp_tuple_unpack_9__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d100cc64c2930f0bda854c4884ee547d;
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
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d100cc64c2930f0bda854c4884ee547d = NULL;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d100cc64c2930f0bda854c4884ee547d, codeobj_d100cc64c2930f0bda854c4884ee547d, module_scipy$optimize$_lsq$trf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d100cc64c2930f0bda854c4884ee547d = cache_frame_d100cc64c2930f0bda854c4884ee547d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d100cc64c2930f0bda854c4884ee547d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d100cc64c2930f0bda854c4884ee547d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_x0 );
        tmp_called_instance_1 = par_x0;
        frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 410;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( par_f0 );
        tmp_assign_source_2 = par_f0;
        assert( var_f == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_f = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( var_f );
        tmp_called_instance_2 = var_f;
        frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 413;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_copy );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_f_true == NULL );
        var_f_true = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_int_pos_1;
        assert( var_nfev == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_nfev = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( par_J0 );
        tmp_assign_source_5 = par_J0;
        assert( var_J == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_J = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_int_pos_1;
        assert( var_njev == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_njev = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_J );
        tmp_source_name_1 = var_J;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 418;
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 418;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 418;
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

            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 418;
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
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_m = tmp_assign_source_10;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_n = tmp_assign_source_11;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_loss_function );
        tmp_compexpr_left_1 = par_loss_function;
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
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_loss_function );
            tmp_called_name_1 = par_loss_function;
            CHECK_OBJECT( var_f );
            tmp_args_element_name_1 = var_f;
            frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 421;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 421;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_rho == NULL );
            var_rho = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            tmp_left_name_1 = const_float_0_5;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 422;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_1;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sum );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 422;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_rho );
            tmp_subscribed_name_1 = var_rho;
            tmp_subscript_name_1 = const_int_0;
            tmp_args_element_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 422;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 422;
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


                exception_lineno = 422;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_13 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 422;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_cost == NULL );
            var_cost = tmp_assign_source_13;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_scale_for_robust_loss_function );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scale_for_robust_loss_function );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scale_for_robust_loss_function" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 423;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_called_name_3 = tmp_mvar_value_2;
            CHECK_OBJECT( var_J );
            tmp_args_element_name_3 = var_J;
            CHECK_OBJECT( var_f );
            tmp_args_element_name_4 = var_f;
            CHECK_OBJECT( var_rho );
            tmp_args_element_name_5 = var_rho;
            frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 423;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
            }

            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 423;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 423;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 423;
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 423;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_16;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 423;
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

                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 423;
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
            {
                PyObject *old = var_J;
                assert( old != NULL );
                var_J = tmp_assign_source_17;
                Py_INCREF( var_J );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_18 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_f;
                assert( old != NULL );
                var_f = tmp_assign_source_18;
                Py_INCREF( var_f );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            tmp_left_name_2 = const_float_0_5;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 425;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_3;
            CHECK_OBJECT( var_f );
            tmp_args_element_name_6 = var_f;
            CHECK_OBJECT( var_f );
            tmp_args_element_name_7 = var_f;
            frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 425;
            {
                PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_right_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_dot, call_args );
            }

            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 425;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_19 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 425;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_cost == NULL );
            var_cost = tmp_assign_source_19;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_compute_grad );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compute_grad );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compute_grad" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 427;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( var_J );
        tmp_args_element_name_8 = var_J;
        CHECK_OBJECT( var_f );
        tmp_args_element_name_9 = var_f;
        frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 427;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 427;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_g == NULL );
        var_g = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_x_scale );
        tmp_isinstance_inst_1 = par_x_scale;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_string_types );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_string_types );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "string_types" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 429;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_5;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 429;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 429;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        CHECK_OBJECT( par_x_scale );
        tmp_compexpr_left_2 = par_x_scale;
        tmp_compexpr_right_2 = const_str_plain_jac;
        tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_and_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 429;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF( tmp_and_left_value_1 );
        tmp_assign_source_21 = tmp_and_left_value_1;
        and_end_1:;
        assert( var_jac_scale == NULL );
        var_jac_scale = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_jac_scale );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_jac_scale );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 430;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_10;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_compute_jac_scale );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compute_jac_scale );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compute_jac_scale" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 431;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_called_name_5 = tmp_mvar_value_6;
            CHECK_OBJECT( var_J );
            tmp_args_element_name_10 = var_J;
            frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 431;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 431;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 431;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_3__source_iter == NULL );
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_22;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 431;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_1 == NULL );
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_23;
        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_24 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 431;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_2 == NULL );
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_24;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 431;
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

                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 431;
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
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_25 = tmp_tuple_unpack_3__element_1;
            assert( var_scale == NULL );
            Py_INCREF( tmp_assign_source_25 );
            var_scale = tmp_assign_source_25;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_26 = tmp_tuple_unpack_3__element_2;
            assert( var_scale_inv == NULL );
            Py_INCREF( tmp_assign_source_26 );
            var_scale_inv = tmp_assign_source_26;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        goto branch_end_2;
        branch_no_2:;
        // Tried code:
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( par_x_scale );
            tmp_tuple_element_1 = par_x_scale;
            tmp_iter_arg_4 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_iter_arg_4, 0, tmp_tuple_element_1 );
            tmp_left_name_3 = const_int_pos_1;
            CHECK_OBJECT( par_x_scale );
            tmp_right_name_3 = par_x_scale;
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_4 );

                exception_lineno = 433;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            PyTuple_SET_ITEM( tmp_iter_arg_4, 1, tmp_tuple_element_1 );
            tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_4 );
            Py_DECREF( tmp_iter_arg_4 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 433;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            assert( tmp_tuple_unpack_4__source_iter == NULL );
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_27;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_28 = UNPACK_NEXT( tmp_unpack_7, 0, 2 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 433;
                goto try_except_handler_9;
            }
            assert( tmp_tuple_unpack_4__element_1 == NULL );
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_29 = UNPACK_NEXT( tmp_unpack_8, 1, 2 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 433;
                goto try_except_handler_9;
            }
            assert( tmp_tuple_unpack_4__element_2 == NULL );
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_29;
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
            PyObject *tmp_assign_source_30;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
            tmp_assign_source_30 = tmp_tuple_unpack_4__element_1;
            assert( var_scale == NULL );
            Py_INCREF( tmp_assign_source_30 );
            var_scale = tmp_assign_source_30;
        }
        Py_XDECREF( tmp_tuple_unpack_4__element_1 );
        tmp_tuple_unpack_4__element_1 = NULL;

        {
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
            tmp_assign_source_31 = tmp_tuple_unpack_4__element_2;
            assert( var_scale_inv == NULL );
            Py_INCREF( tmp_assign_source_31 );
            var_scale_inv = tmp_assign_source_31;
        }
        Py_XDECREF( tmp_tuple_unpack_4__element_2 );
        tmp_tuple_unpack_4__element_2 = NULL;

        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 435;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_7;
        CHECK_OBJECT( par_x0 );
        tmp_left_name_4 = par_x0;
        CHECK_OBJECT( var_scale_inv );
        tmp_right_name_4 = var_scale_inv;
        tmp_args_element_name_11 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 435;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 435;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 435;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Delta == NULL );
        var_Delta = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_Delta );
        tmp_compexpr_left_3 = var_Delta;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_33;
            tmp_assign_source_33 = const_float_1_0;
            {
                PyObject *old = var_Delta;
                assert( old != NULL );
                var_Delta = tmp_assign_source_33;
                Py_INCREF( var_Delta );
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_tr_solver );
        tmp_compexpr_left_4 = par_tr_solver;
        tmp_compexpr_right_4 = const_str_plain_lsmr;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 439;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_34;
            tmp_assign_source_34 = const_int_0;
            assert( var_reg_term == NULL );
            Py_INCREF( tmp_assign_source_34 );
            var_reg_term = tmp_assign_source_34;
        }
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT( par_tr_options );
            tmp_called_instance_4 = par_tr_options;
            frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 441;
            tmp_assign_source_35 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_damp_float_0_0_tuple, 0 ) );

            if ( tmp_assign_source_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 441;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_damp == NULL );
            var_damp = tmp_assign_source_35;
        }
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_instance_5;
            CHECK_OBJECT( par_tr_options );
            tmp_called_instance_5 = par_tr_options;
            frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 442;
            tmp_assign_source_36 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_regularize_true_tuple, 0 ) );

            if ( tmp_assign_source_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 442;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_regularize == NULL );
            var_regularize = tmp_assign_source_36;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( par_max_nfev );
        tmp_compexpr_left_5 = par_max_nfev;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_5 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_37;
            PyObject *tmp_left_name_5;
            PyObject *tmp_source_name_3;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( par_x0 );
            tmp_source_name_3 = par_x0;
            tmp_left_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_size );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 445;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_5 = const_int_pos_100;
            tmp_assign_source_37 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_5 );
            if ( tmp_assign_source_37 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 445;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_max_nfev;
                assert( old != NULL );
                par_max_nfev = tmp_assign_source_37;
                Py_DECREF( old );
            }

        }
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = const_float_0_0;
        assert( var_alpha == NULL );
        Py_INCREF( tmp_assign_source_38 );
        var_alpha = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = Py_None;
        assert( var_termination_status == NULL );
        Py_INCREF( tmp_assign_source_39 );
        var_termination_status = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = const_int_0;
        assert( var_iteration == NULL );
        Py_INCREF( tmp_assign_source_40 );
        var_iteration = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = Py_None;
        assert( var_step_norm == NULL );
        Py_INCREF( tmp_assign_source_41 );
        var_step_norm = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = Py_None;
        assert( var_actual_reduction == NULL );
        Py_INCREF( tmp_assign_source_42 );
        var_actual_reduction = tmp_assign_source_42;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_verbose );
        tmp_compexpr_left_6 = par_verbose;
        tmp_compexpr_right_6 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 454;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_call_result_1;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_print_header_nonlinear );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_print_header_nonlinear );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "print_header_nonlinear" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 455;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_8;
            frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 455;
            tmp_call_result_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 455;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_6:;
    }
    loop_start_1:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_norm );

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

            exception_lineno = 458;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_9;
        if ( var_g == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 458;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_g;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        tmp_dict_key_1 = const_str_plain_ord;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 458;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_10;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_inf );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 458;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 458;
        tmp_assign_source_43 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 458;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_g_norm;
            var_g_norm = tmp_assign_source_43;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( var_g_norm );
        tmp_compexpr_left_7 = var_g_norm;
        CHECK_OBJECT( par_gtol );
        tmp_compexpr_right_7 = par_gtol;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 459;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_44;
            tmp_assign_source_44 = const_int_pos_1;
            {
                PyObject *old = var_termination_status;
                var_termination_status = tmp_assign_source_44;
                Py_INCREF( var_termination_status );
                Py_XDECREF( old );
            }

        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        CHECK_OBJECT( par_verbose );
        tmp_compexpr_left_8 = par_verbose;
        tmp_compexpr_right_8 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 462;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_args_element_name_17;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_print_iteration_nonlinear );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_print_iteration_nonlinear );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "print_iteration_nonlinear" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 463;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_9 = tmp_mvar_value_11;
            CHECK_OBJECT( var_iteration );
            tmp_args_element_name_12 = var_iteration;
            if ( var_nfev == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nfev" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 463;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_13 = var_nfev;
            if ( var_cost == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cost" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 463;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_14 = var_cost;
            if ( var_actual_reduction == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "actual_reduction" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 463;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_15 = var_actual_reduction;
            if ( var_step_norm == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "step_norm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 464;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_16 = var_step_norm;
            CHECK_OBJECT( var_g_norm );
            tmp_args_element_name_17 = var_g_norm;
            frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 463;
            {
                PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_9, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 463;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
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

            exception_lineno = 466;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_9 = var_termination_status;
        tmp_compexpr_right_9 = Py_None;
        tmp_or_left_value_1 = ( tmp_compexpr_left_9 != tmp_compexpr_right_9 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        if ( var_nfev == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nfev" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 466;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_10 = var_nfev;
        CHECK_OBJECT( par_max_nfev );
        tmp_compexpr_right_10 = par_max_nfev;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 466;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_9 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_9 = tmp_or_left_value_1;
        or_end_1:;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        goto loop_end_1;
        branch_no_9:;
    }
    {
        PyObject *tmp_assign_source_45;
        if ( var_scale == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scale" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 469;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_45 = var_scale;
        {
            PyObject *old = var_d;
            var_d = tmp_assign_source_45;
            Py_INCREF( var_d );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( var_d );
        tmp_left_name_6 = var_d;
        if ( var_g == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 470;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_6 = var_g;
        tmp_assign_source_46 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 470;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_g_h;
            var_g_h = tmp_assign_source_46;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        CHECK_OBJECT( par_tr_solver );
        tmp_compexpr_left_11 = par_tr_solver;
        tmp_compexpr_right_11 = const_str_plain_exact;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 472;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_47;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            if ( var_J == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 473;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_7 = var_J;
            CHECK_OBJECT( var_d );
            tmp_right_name_7 = var_d;
            tmp_assign_source_47 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
            if ( tmp_assign_source_47 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 473;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_J_h;
                var_J_h = tmp_assign_source_47;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_called_name_10;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_svd );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_svd );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "svd" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 474;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_10;
            }

            tmp_called_name_10 = tmp_mvar_value_12;
            CHECK_OBJECT( var_J_h );
            tmp_tuple_element_3 = var_J_h;
            tmp_args_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_879d90f7995f6ab655dbe7fad38230a5 );
            frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 474;
            tmp_iter_arg_5 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_iter_arg_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 474;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_10;
            }
            tmp_assign_source_48 = MAKE_ITERATOR( tmp_iter_arg_5 );
            Py_DECREF( tmp_iter_arg_5 );
            if ( tmp_assign_source_48 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 474;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__source_iter;
                tmp_tuple_unpack_5__source_iter = tmp_assign_source_48;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_unpack_9;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_49 = UNPACK_NEXT( tmp_unpack_9, 0, 3 );
            if ( tmp_assign_source_49 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 474;
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__element_1;
                tmp_tuple_unpack_5__element_1 = tmp_assign_source_49;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_unpack_10;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_50 = UNPACK_NEXT( tmp_unpack_10, 1, 3 );
            if ( tmp_assign_source_50 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 474;
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__element_2;
                tmp_tuple_unpack_5__element_2 = tmp_assign_source_50;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_unpack_11;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_11 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_51 = UNPACK_NEXT( tmp_unpack_11, 2, 3 );
            if ( tmp_assign_source_51 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 474;
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__element_3;
                tmp_tuple_unpack_5__element_3 = tmp_assign_source_51;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_iterator_name_4;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_iterator_name_4 = tmp_tuple_unpack_5__source_iter;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 474;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 474;
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

        Py_XDECREF( tmp_tuple_unpack_5__element_3 );
        tmp_tuple_unpack_5__element_3 = NULL;

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
            PyObject *tmp_assign_source_52;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
            tmp_assign_source_52 = tmp_tuple_unpack_5__element_1;
            {
                PyObject *old = var_U;
                var_U = tmp_assign_source_52;
                Py_INCREF( var_U );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_5__element_1 );
        tmp_tuple_unpack_5__element_1 = NULL;

        {
            PyObject *tmp_assign_source_53;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
            tmp_assign_source_53 = tmp_tuple_unpack_5__element_2;
            {
                PyObject *old = var_s;
                var_s = tmp_assign_source_53;
                Py_INCREF( var_s );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_5__element_2 );
        tmp_tuple_unpack_5__element_2 = NULL;

        {
            PyObject *tmp_assign_source_54;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_3 );
            tmp_assign_source_54 = tmp_tuple_unpack_5__element_3;
            {
                PyObject *old = var_V;
                var_V = tmp_assign_source_54;
                Py_INCREF( var_V );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_5__element_3 );
        tmp_tuple_unpack_5__element_3 = NULL;

        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( var_V );
            tmp_source_name_5 = var_V;
            tmp_assign_source_55 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_T );
            if ( tmp_assign_source_55 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 475;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_V;
                assert( old != NULL );
                var_V = tmp_assign_source_55;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_6;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_element_name_18;
            CHECK_OBJECT( var_U );
            tmp_source_name_7 = var_U;
            tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_T );
            if ( tmp_source_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 476;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dot );
            Py_DECREF( tmp_source_name_6 );
            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 476;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_f == NULL )
            {
                Py_DECREF( tmp_called_name_11 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 476;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_18 = var_f;
            frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 476;
            {
                PyObject *call_args[] = { tmp_args_element_name_18 };
                tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            Py_DECREF( tmp_called_name_11 );
            if ( tmp_assign_source_56 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 476;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_uf;
                var_uf = tmp_assign_source_56;
                Py_XDECREF( old );
            }

        }
        goto branch_end_10;
        branch_no_10:;
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_compexpr_left_12;
            PyObject *tmp_compexpr_right_12;
            CHECK_OBJECT( par_tr_solver );
            tmp_compexpr_left_12 = par_tr_solver;
            tmp_compexpr_right_12 = const_str_plain_lsmr;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 477;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
                PyObject *tmp_assign_source_57;
                PyObject *tmp_called_name_12;
                PyObject *tmp_mvar_value_13;
                PyObject *tmp_args_element_name_19;
                PyObject *tmp_args_element_name_20;
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_right_multiplied_operator );

                if (unlikely( tmp_mvar_value_13 == NULL ))
                {
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_right_multiplied_operator );
                }

                if ( tmp_mvar_value_13 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "right_multiplied_operator" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 478;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_12 = tmp_mvar_value_13;
                if ( var_J == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 478;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_19 = var_J;
                CHECK_OBJECT( var_d );
                tmp_args_element_name_20 = var_d;
                frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 478;
                {
                    PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20 };
                    tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
                }

                if ( tmp_assign_source_57 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 478;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_J_h;
                    var_J_h = tmp_assign_source_57;
                    Py_XDECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_12;
                int tmp_truth_name_2;
                if ( var_regularize == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "regularize" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 480;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_truth_name_2 = CHECK_IF_TRUE( var_regularize );
                if ( tmp_truth_name_2 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 480;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_12 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_12;
                }
                else
                {
                    goto branch_no_12;
                }
                branch_yes_12:;
                // Tried code:
                {
                    PyObject *tmp_assign_source_58;
                    PyObject *tmp_iter_arg_6;
                    PyObject *tmp_called_name_13;
                    PyObject *tmp_mvar_value_14;
                    PyObject *tmp_args_element_name_21;
                    PyObject *tmp_args_element_name_22;
                    PyObject *tmp_args_element_name_23;
                    PyObject *tmp_operand_name_1;
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_build_quadratic_1d );

                    if (unlikely( tmp_mvar_value_14 == NULL ))
                    {
                        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_build_quadratic_1d );
                    }

                    if ( tmp_mvar_value_14 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "build_quadratic_1d" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 481;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_12;
                    }

                    tmp_called_name_13 = tmp_mvar_value_14;
                    CHECK_OBJECT( var_J_h );
                    tmp_args_element_name_21 = var_J_h;
                    CHECK_OBJECT( var_g_h );
                    tmp_args_element_name_22 = var_g_h;
                    CHECK_OBJECT( var_g_h );
                    tmp_operand_name_1 = var_g_h;
                    tmp_args_element_name_23 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
                    if ( tmp_args_element_name_23 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 481;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_12;
                    }
                    frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 481;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23 };
                        tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_13, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_23 );
                    if ( tmp_iter_arg_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 481;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_12;
                    }
                    tmp_assign_source_58 = MAKE_ITERATOR( tmp_iter_arg_6 );
                    Py_DECREF( tmp_iter_arg_6 );
                    if ( tmp_assign_source_58 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 481;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_12;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_6__source_iter;
                        tmp_tuple_unpack_6__source_iter = tmp_assign_source_58;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_59;
                    PyObject *tmp_unpack_12;
                    CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
                    tmp_unpack_12 = tmp_tuple_unpack_6__source_iter;
                    tmp_assign_source_59 = UNPACK_NEXT( tmp_unpack_12, 0, 2 );
                    if ( tmp_assign_source_59 == NULL )
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


                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 481;
                        goto try_except_handler_13;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_6__element_1;
                        tmp_tuple_unpack_6__element_1 = tmp_assign_source_59;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_60;
                    PyObject *tmp_unpack_13;
                    CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
                    tmp_unpack_13 = tmp_tuple_unpack_6__source_iter;
                    tmp_assign_source_60 = UNPACK_NEXT( tmp_unpack_13, 1, 2 );
                    if ( tmp_assign_source_60 == NULL )
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


                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 481;
                        goto try_except_handler_13;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_6__element_2;
                        tmp_tuple_unpack_6__element_2 = tmp_assign_source_60;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_iterator_name_5;
                    CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
                    tmp_iterator_name_5 = tmp_tuple_unpack_6__source_iter;
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

                                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                                exception_lineno = 481;
                                goto try_except_handler_13;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 481;
                        goto try_except_handler_13;
                    }
                }
                goto try_end_11;
                // Exception handler code:
                try_except_handler_13:;
                exception_keeper_type_11 = exception_type;
                exception_keeper_value_11 = exception_value;
                exception_keeper_tb_11 = exception_tb;
                exception_keeper_lineno_11 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
                Py_DECREF( tmp_tuple_unpack_6__source_iter );
                tmp_tuple_unpack_6__source_iter = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_11;
                exception_value = exception_keeper_value_11;
                exception_tb = exception_keeper_tb_11;
                exception_lineno = exception_keeper_lineno_11;

                goto try_except_handler_12;
                // End of try:
                try_end_11:;
                goto try_end_12;
                // Exception handler code:
                try_except_handler_12:;
                exception_keeper_type_12 = exception_type;
                exception_keeper_value_12 = exception_value;
                exception_keeper_tb_12 = exception_tb;
                exception_keeper_lineno_12 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( tmp_tuple_unpack_6__element_1 );
                tmp_tuple_unpack_6__element_1 = NULL;

                Py_XDECREF( tmp_tuple_unpack_6__element_2 );
                tmp_tuple_unpack_6__element_2 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_12;
                exception_value = exception_keeper_value_12;
                exception_tb = exception_keeper_tb_12;
                exception_lineno = exception_keeper_lineno_12;

                goto frame_exception_exit_1;
                // End of try:
                try_end_12:;
                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
                Py_DECREF( tmp_tuple_unpack_6__source_iter );
                tmp_tuple_unpack_6__source_iter = NULL;

                {
                    PyObject *tmp_assign_source_61;
                    CHECK_OBJECT( tmp_tuple_unpack_6__element_1 );
                    tmp_assign_source_61 = tmp_tuple_unpack_6__element_1;
                    {
                        PyObject *old = var_a;
                        var_a = tmp_assign_source_61;
                        Py_INCREF( var_a );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_6__element_1 );
                tmp_tuple_unpack_6__element_1 = NULL;

                {
                    PyObject *tmp_assign_source_62;
                    CHECK_OBJECT( tmp_tuple_unpack_6__element_2 );
                    tmp_assign_source_62 = tmp_tuple_unpack_6__element_2;
                    {
                        PyObject *old = var_b;
                        var_b = tmp_assign_source_62;
                        Py_INCREF( var_b );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_6__element_2 );
                tmp_tuple_unpack_6__element_2 = NULL;

                {
                    PyObject *tmp_assign_source_63;
                    PyObject *tmp_left_name_8;
                    PyObject *tmp_right_name_8;
                    PyObject *tmp_called_name_14;
                    PyObject *tmp_mvar_value_15;
                    PyObject *tmp_args_element_name_24;
                    CHECK_OBJECT( var_Delta );
                    tmp_left_name_8 = var_Delta;
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_norm );

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

                        exception_lineno = 482;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_14 = tmp_mvar_value_15;
                    CHECK_OBJECT( var_g_h );
                    tmp_args_element_name_24 = var_g_h;
                    frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 482;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_24 };
                        tmp_right_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
                    }

                    if ( tmp_right_name_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 482;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_63 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
                    Py_DECREF( tmp_right_name_8 );
                    if ( tmp_assign_source_63 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 482;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_to_tr;
                        var_to_tr = tmp_assign_source_63;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_64;
                    PyObject *tmp_subscribed_name_2;
                    PyObject *tmp_called_name_15;
                    PyObject *tmp_mvar_value_16;
                    PyObject *tmp_args_element_name_25;
                    PyObject *tmp_args_element_name_26;
                    PyObject *tmp_args_element_name_27;
                    PyObject *tmp_args_element_name_28;
                    PyObject *tmp_subscript_name_2;
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_minimize_quadratic_1d );

                    if (unlikely( tmp_mvar_value_16 == NULL ))
                    {
                        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_minimize_quadratic_1d );
                    }

                    if ( tmp_mvar_value_16 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "minimize_quadratic_1d" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 483;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_15 = tmp_mvar_value_16;
                    CHECK_OBJECT( var_a );
                    tmp_args_element_name_25 = var_a;
                    CHECK_OBJECT( var_b );
                    tmp_args_element_name_26 = var_b;
                    tmp_args_element_name_27 = const_int_0;
                    CHECK_OBJECT( var_to_tr );
                    tmp_args_element_name_28 = var_to_tr;
                    frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 483;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28 };
                        tmp_subscribed_name_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_15, call_args );
                    }

                    if ( tmp_subscribed_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 483;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_subscript_name_2 = const_int_pos_1;
                    tmp_assign_source_64 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
                    Py_DECREF( tmp_subscribed_name_2 );
                    if ( tmp_assign_source_64 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 483;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_ag_value;
                        var_ag_value = tmp_assign_source_64;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_65;
                    PyObject *tmp_left_name_9;
                    PyObject *tmp_operand_name_2;
                    PyObject *tmp_right_name_9;
                    PyObject *tmp_left_name_10;
                    PyObject *tmp_right_name_10;
                    CHECK_OBJECT( var_ag_value );
                    tmp_operand_name_2 = var_ag_value;
                    tmp_left_name_9 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
                    if ( tmp_left_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 484;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_Delta );
                    tmp_left_name_10 = var_Delta;
                    tmp_right_name_10 = const_int_pos_2;
                    tmp_right_name_9 = POWER_OPERATION( tmp_left_name_10, tmp_right_name_10 );
                    if ( tmp_right_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_9 );

                        exception_lineno = 484;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_65 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
                    Py_DECREF( tmp_left_name_9 );
                    Py_DECREF( tmp_right_name_9 );
                    if ( tmp_assign_source_65 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 484;
                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_reg_term;
                        var_reg_term = tmp_assign_source_65;
                        Py_XDECREF( old );
                    }

                }
                branch_no_12:;
            }
            {
                PyObject *tmp_assign_source_66;
                PyObject *tmp_left_name_11;
                PyObject *tmp_left_name_12;
                PyObject *tmp_left_name_13;
                PyObject *tmp_right_name_11;
                PyObject *tmp_right_name_12;
                PyObject *tmp_right_name_13;
                if ( var_damp == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "damp" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 486;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_13 = var_damp;
                tmp_right_name_11 = const_int_pos_2;
                tmp_left_name_12 = POWER_OPERATION( tmp_left_name_13, tmp_right_name_11 );
                if ( tmp_left_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 486;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                if ( var_reg_term == NULL )
                {
                    Py_DECREF( tmp_left_name_12 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "reg_term" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 486;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_right_name_12 = var_reg_term;
                tmp_left_name_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
                Py_DECREF( tmp_left_name_12 );
                if ( tmp_left_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 486;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_13 = const_float_0_5;
                tmp_assign_source_66 = POWER_OPERATION( tmp_left_name_11, tmp_right_name_13 );
                Py_DECREF( tmp_left_name_11 );
                if ( tmp_assign_source_66 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 486;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_damp_full;
                    var_damp_full = tmp_assign_source_66;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_67;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_dircall_arg1_1;
                PyObject *tmp_mvar_value_17;
                PyObject *tmp_dircall_arg2_1;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_dircall_arg3_1;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                PyObject *tmp_dircall_arg4_1;
                PyObject *tmp_subscript_name_3;
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_lsmr );

                if (unlikely( tmp_mvar_value_17 == NULL ))
                {
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lsmr );
                }

                if ( tmp_mvar_value_17 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "lsmr" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 487;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_dircall_arg1_1 = tmp_mvar_value_17;
                CHECK_OBJECT( var_J_h );
                tmp_tuple_element_4 = var_J_h;
                tmp_dircall_arg2_1 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_4 );
                if ( var_f == NULL )
                {
                    Py_DECREF( tmp_dircall_arg2_1 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 487;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_4 = var_f;
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_4 );
                tmp_dict_key_2 = const_str_plain_damp;
                CHECK_OBJECT( var_damp_full );
                tmp_dict_value_2 = var_damp_full;
                tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                CHECK_OBJECT( par_tr_options );
                tmp_dircall_arg4_1 = par_tr_options;
                Py_INCREF( tmp_dircall_arg1_1 );
                Py_INCREF( tmp_dircall_arg4_1 );

                {
                    PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                    tmp_subscribed_name_3 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
                }
                if ( tmp_subscribed_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 487;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_subscript_name_3 = const_int_0;
                tmp_assign_source_67 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
                Py_DECREF( tmp_subscribed_name_3 );
                if ( tmp_assign_source_67 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 487;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_gn_h;
                    var_gn_h = tmp_assign_source_67;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_68;
                PyObject *tmp_source_name_8;
                PyObject *tmp_called_instance_6;
                PyObject *tmp_mvar_value_18;
                PyObject *tmp_args_element_name_29;
                PyObject *tmp_tuple_element_5;
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 488;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_6 = tmp_mvar_value_18;
                CHECK_OBJECT( var_g_h );
                tmp_tuple_element_5 = var_g_h;
                tmp_args_element_name_29 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_args_element_name_29, 0, tmp_tuple_element_5 );
                CHECK_OBJECT( var_gn_h );
                tmp_tuple_element_5 = var_gn_h;
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_args_element_name_29, 1, tmp_tuple_element_5 );
                frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 488;
                {
                    PyObject *call_args[] = { tmp_args_element_name_29 };
                    tmp_source_name_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_vstack, call_args );
                }

                Py_DECREF( tmp_args_element_name_29 );
                if ( tmp_source_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 488;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_68 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_T );
                Py_DECREF( tmp_source_name_8 );
                if ( tmp_assign_source_68 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 488;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_S;
                    var_S = tmp_assign_source_68;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_69;
                PyObject *tmp_iter_arg_7;
                PyObject *tmp_called_name_16;
                PyObject *tmp_mvar_value_19;
                PyObject *tmp_args_name_3;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_kw_name_3;
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_qr );

                if (unlikely( tmp_mvar_value_19 == NULL ))
                {
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_qr );
                }

                if ( tmp_mvar_value_19 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "qr" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 489;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_14;
                }

                tmp_called_name_16 = tmp_mvar_value_19;
                CHECK_OBJECT( var_S );
                tmp_tuple_element_6 = var_S;
                tmp_args_name_3 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_6 );
                PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
                tmp_kw_name_3 = PyDict_Copy( const_dict_09ef4d9552d8b86e4ec711df1e8d781f );
                frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 489;
                tmp_iter_arg_7 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_3, tmp_kw_name_3 );
                Py_DECREF( tmp_args_name_3 );
                Py_DECREF( tmp_kw_name_3 );
                if ( tmp_iter_arg_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 489;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_14;
                }
                tmp_assign_source_69 = MAKE_ITERATOR( tmp_iter_arg_7 );
                Py_DECREF( tmp_iter_arg_7 );
                if ( tmp_assign_source_69 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 489;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_14;
                }
                {
                    PyObject *old = tmp_tuple_unpack_7__source_iter;
                    tmp_tuple_unpack_7__source_iter = tmp_assign_source_69;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_70;
                PyObject *tmp_unpack_14;
                CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
                tmp_unpack_14 = tmp_tuple_unpack_7__source_iter;
                tmp_assign_source_70 = UNPACK_NEXT( tmp_unpack_14, 0, 2 );
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


                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 489;
                    goto try_except_handler_15;
                }
                {
                    PyObject *old = tmp_tuple_unpack_7__element_1;
                    tmp_tuple_unpack_7__element_1 = tmp_assign_source_70;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_71;
                PyObject *tmp_unpack_15;
                CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
                tmp_unpack_15 = tmp_tuple_unpack_7__source_iter;
                tmp_assign_source_71 = UNPACK_NEXT( tmp_unpack_15, 1, 2 );
                if ( tmp_assign_source_71 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 489;
                    goto try_except_handler_15;
                }
                {
                    PyObject *old = tmp_tuple_unpack_7__element_2;
                    tmp_tuple_unpack_7__element_2 = tmp_assign_source_71;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_iterator_name_6;
                CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
                tmp_iterator_name_6 = tmp_tuple_unpack_7__source_iter;
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

                            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                            exception_lineno = 489;
                            goto try_except_handler_15;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 489;
                    goto try_except_handler_15;
                }
            }
            goto try_end_13;
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

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
            Py_DECREF( tmp_tuple_unpack_7__source_iter );
            tmp_tuple_unpack_7__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_13;
            exception_value = exception_keeper_value_13;
            exception_tb = exception_keeper_tb_13;
            exception_lineno = exception_keeper_lineno_13;

            goto try_except_handler_14;
            // End of try:
            try_end_13:;
            goto try_end_14;
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

            Py_XDECREF( tmp_tuple_unpack_7__element_1 );
            tmp_tuple_unpack_7__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_7__element_2 );
            tmp_tuple_unpack_7__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_14;
            exception_value = exception_keeper_value_14;
            exception_tb = exception_keeper_tb_14;
            exception_lineno = exception_keeper_lineno_14;

            goto frame_exception_exit_1;
            // End of try:
            try_end_14:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
            Py_DECREF( tmp_tuple_unpack_7__source_iter );
            tmp_tuple_unpack_7__source_iter = NULL;

            {
                PyObject *tmp_assign_source_72;
                CHECK_OBJECT( tmp_tuple_unpack_7__element_1 );
                tmp_assign_source_72 = tmp_tuple_unpack_7__element_1;
                {
                    PyObject *old = var_S;
                    assert( old != NULL );
                    var_S = tmp_assign_source_72;
                    Py_INCREF( var_S );
                    Py_DECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_7__element_1 );
            tmp_tuple_unpack_7__element_1 = NULL;

            {
                PyObject *tmp_assign_source_73;
                CHECK_OBJECT( tmp_tuple_unpack_7__element_2 );
                tmp_assign_source_73 = tmp_tuple_unpack_7__element_2;
                {
                    PyObject *old = var__;
                    var__ = tmp_assign_source_73;
                    Py_INCREF( var__ );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_7__element_2 );
            tmp_tuple_unpack_7__element_2 = NULL;

            {
                PyObject *tmp_assign_source_74;
                PyObject *tmp_called_instance_7;
                PyObject *tmp_args_element_name_30;
                CHECK_OBJECT( var_J_h );
                tmp_called_instance_7 = var_J_h;
                CHECK_OBJECT( var_S );
                tmp_args_element_name_30 = var_S;
                frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 490;
                {
                    PyObject *call_args[] = { tmp_args_element_name_30 };
                    tmp_assign_source_74 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_dot, call_args );
                }

                if ( tmp_assign_source_74 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 490;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_JS;
                    var_JS = tmp_assign_source_74;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_75;
                PyObject *tmp_called_name_17;
                PyObject *tmp_source_name_9;
                PyObject *tmp_mvar_value_20;
                PyObject *tmp_args_element_name_31;
                PyObject *tmp_source_name_10;
                PyObject *tmp_args_element_name_32;
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 491;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_9 = tmp_mvar_value_20;
                tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_dot );
                if ( tmp_called_name_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 491;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_JS );
                tmp_source_name_10 = var_JS;
                tmp_args_element_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_T );
                if ( tmp_args_element_name_31 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_17 );

                    exception_lineno = 491;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_JS );
                tmp_args_element_name_32 = var_JS;
                frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 491;
                {
                    PyObject *call_args[] = { tmp_args_element_name_31, tmp_args_element_name_32 };
                    tmp_assign_source_75 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
                }

                Py_DECREF( tmp_called_name_17 );
                Py_DECREF( tmp_args_element_name_31 );
                if ( tmp_assign_source_75 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 491;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_B_S;
                    var_B_S = tmp_assign_source_75;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_76;
                PyObject *tmp_called_instance_8;
                PyObject *tmp_source_name_11;
                PyObject *tmp_args_element_name_33;
                CHECK_OBJECT( var_S );
                tmp_source_name_11 = var_S;
                tmp_called_instance_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_T );
                if ( tmp_called_instance_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 492;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_g_h );
                tmp_args_element_name_33 = var_g_h;
                frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 492;
                {
                    PyObject *call_args[] = { tmp_args_element_name_33 };
                    tmp_assign_source_76 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_dot, call_args );
                }

                Py_DECREF( tmp_called_instance_8 );
                if ( tmp_assign_source_76 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 492;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_g_S;
                    var_g_S = tmp_assign_source_76;
                    Py_XDECREF( old );
                }

            }
            branch_no_11:;
        }
        branch_end_10:;
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = const_int_neg_1;
        {
            PyObject *old = var_actual_reduction;
            var_actual_reduction = tmp_assign_source_77;
            Py_INCREF( var_actual_reduction );
            Py_XDECREF( old );
        }

    }
    loop_start_2:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_operand_name_3;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        CHECK_OBJECT( var_actual_reduction );
        tmp_compexpr_left_13 = var_actual_reduction;
        tmp_compexpr_right_13 = const_int_0;
        tmp_and_left_value_2 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
        if ( tmp_and_left_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 495;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
        if ( tmp_and_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_2 );

            exception_lineno = 495;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF( tmp_and_left_value_2 );
        if ( var_nfev == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nfev" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 495;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_14 = var_nfev;
        CHECK_OBJECT( par_max_nfev );
        tmp_compexpr_right_14 = par_max_nfev;
        tmp_and_right_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
        if ( tmp_and_right_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 495;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_3 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_operand_name_3 = tmp_and_left_value_2;
        and_end_2:;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 495;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_13;
        }
        else
        {
            goto branch_no_13;
        }
        branch_yes_13:;
        goto loop_end_2;
        branch_no_13:;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        CHECK_OBJECT( par_tr_solver );
        tmp_compexpr_left_15 = par_tr_solver;
        tmp_compexpr_right_15 = const_str_plain_exact;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 496;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_iter_arg_8;
            PyObject *tmp_called_name_18;
            PyObject *tmp_mvar_value_21;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kw_name_4;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_solve_lsq_trust_region );

            if (unlikely( tmp_mvar_value_21 == NULL ))
            {
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_lsq_trust_region );
            }

            if ( tmp_mvar_value_21 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_lsq_trust_region" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 497;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }

            tmp_called_name_18 = tmp_mvar_value_21;
            CHECK_OBJECT( var_n );
            tmp_tuple_element_7 = var_n;
            tmp_args_name_4 = PyTuple_New( 6 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( var_m );
            tmp_tuple_element_7 = var_m;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_7 );
            if ( var_uf == NULL )
            {
                Py_DECREF( tmp_args_name_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "uf" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 498;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }

            tmp_tuple_element_7 = var_uf;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_7 );
            if ( var_s == NULL )
            {
                Py_DECREF( tmp_args_name_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 498;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }

            tmp_tuple_element_7 = var_s;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 3, tmp_tuple_element_7 );
            if ( var_V == NULL )
            {
                Py_DECREF( tmp_args_name_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "V" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 498;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }

            tmp_tuple_element_7 = var_V;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 4, tmp_tuple_element_7 );
            CHECK_OBJECT( var_Delta );
            tmp_tuple_element_7 = var_Delta;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 5, tmp_tuple_element_7 );
            tmp_dict_key_3 = const_str_plain_initial_alpha;
            if ( var_alpha == NULL )
            {
                Py_DECREF( tmp_args_name_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "alpha" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 498;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }

            tmp_dict_value_3 = var_alpha;
            tmp_kw_name_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 497;
            tmp_iter_arg_8 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            Py_DECREF( tmp_kw_name_4 );
            if ( tmp_iter_arg_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 497;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            tmp_assign_source_78 = MAKE_ITERATOR( tmp_iter_arg_8 );
            Py_DECREF( tmp_iter_arg_8 );
            if ( tmp_assign_source_78 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 497;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            {
                PyObject *old = tmp_tuple_unpack_8__source_iter;
                tmp_tuple_unpack_8__source_iter = tmp_assign_source_78;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_79;
            PyObject *tmp_unpack_16;
            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
            tmp_unpack_16 = tmp_tuple_unpack_8__source_iter;
            tmp_assign_source_79 = UNPACK_NEXT( tmp_unpack_16, 0, 3 );
            if ( tmp_assign_source_79 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 497;
                goto try_except_handler_17;
            }
            {
                PyObject *old = tmp_tuple_unpack_8__element_1;
                tmp_tuple_unpack_8__element_1 = tmp_assign_source_79;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_80;
            PyObject *tmp_unpack_17;
            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
            tmp_unpack_17 = tmp_tuple_unpack_8__source_iter;
            tmp_assign_source_80 = UNPACK_NEXT( tmp_unpack_17, 1, 3 );
            if ( tmp_assign_source_80 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 497;
                goto try_except_handler_17;
            }
            {
                PyObject *old = tmp_tuple_unpack_8__element_2;
                tmp_tuple_unpack_8__element_2 = tmp_assign_source_80;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_81;
            PyObject *tmp_unpack_18;
            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
            tmp_unpack_18 = tmp_tuple_unpack_8__source_iter;
            tmp_assign_source_81 = UNPACK_NEXT( tmp_unpack_18, 2, 3 );
            if ( tmp_assign_source_81 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 497;
                goto try_except_handler_17;
            }
            {
                PyObject *old = tmp_tuple_unpack_8__element_3;
                tmp_tuple_unpack_8__element_3 = tmp_assign_source_81;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_iterator_name_7;
            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
            tmp_iterator_name_7 = tmp_tuple_unpack_8__source_iter;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 497;
                        goto try_except_handler_17;
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

                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 497;
                goto try_except_handler_17;
            }
        }
        goto try_end_15;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
        Py_DECREF( tmp_tuple_unpack_8__source_iter );
        tmp_tuple_unpack_8__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_16;
        // End of try:
        try_end_15:;
        goto try_end_16;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_8__element_1 );
        tmp_tuple_unpack_8__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_8__element_2 );
        tmp_tuple_unpack_8__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_8__element_3 );
        tmp_tuple_unpack_8__element_3 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto frame_exception_exit_1;
        // End of try:
        try_end_16:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
        Py_DECREF( tmp_tuple_unpack_8__source_iter );
        tmp_tuple_unpack_8__source_iter = NULL;

        {
            PyObject *tmp_assign_source_82;
            CHECK_OBJECT( tmp_tuple_unpack_8__element_1 );
            tmp_assign_source_82 = tmp_tuple_unpack_8__element_1;
            {
                PyObject *old = var_step_h;
                var_step_h = tmp_assign_source_82;
                Py_INCREF( var_step_h );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_8__element_1 );
        tmp_tuple_unpack_8__element_1 = NULL;

        {
            PyObject *tmp_assign_source_83;
            CHECK_OBJECT( tmp_tuple_unpack_8__element_2 );
            tmp_assign_source_83 = tmp_tuple_unpack_8__element_2;
            {
                PyObject *old = var_alpha;
                var_alpha = tmp_assign_source_83;
                Py_INCREF( var_alpha );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_8__element_2 );
        tmp_tuple_unpack_8__element_2 = NULL;

        {
            PyObject *tmp_assign_source_84;
            CHECK_OBJECT( tmp_tuple_unpack_8__element_3 );
            tmp_assign_source_84 = tmp_tuple_unpack_8__element_3;
            {
                PyObject *old = var_n_iter;
                var_n_iter = tmp_assign_source_84;
                Py_INCREF( var_n_iter );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_8__element_3 );
        tmp_tuple_unpack_8__element_3 = NULL;

        goto branch_end_14;
        branch_no_14:;
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_compexpr_left_16;
            PyObject *tmp_compexpr_right_16;
            CHECK_OBJECT( par_tr_solver );
            tmp_compexpr_left_16 = par_tr_solver;
            tmp_compexpr_right_16 = const_str_plain_lsmr;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_16, tmp_compexpr_right_16 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 499;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
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
                PyObject *tmp_assign_source_85;
                PyObject *tmp_iter_arg_9;
                PyObject *tmp_called_name_19;
                PyObject *tmp_mvar_value_22;
                PyObject *tmp_args_element_name_34;
                PyObject *tmp_args_element_name_35;
                PyObject *tmp_args_element_name_36;
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_solve_trust_region_2d );

                if (unlikely( tmp_mvar_value_22 == NULL ))
                {
                    tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_trust_region_2d );
                }

                if ( tmp_mvar_value_22 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_trust_region_2d" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 500;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_18;
                }

                tmp_called_name_19 = tmp_mvar_value_22;
                if ( var_B_S == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "B_S" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 500;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_18;
                }

                tmp_args_element_name_34 = var_B_S;
                if ( var_g_S == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g_S" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 500;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_18;
                }

                tmp_args_element_name_35 = var_g_S;
                CHECK_OBJECT( var_Delta );
                tmp_args_element_name_36 = var_Delta;
                frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 500;
                {
                    PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36 };
                    tmp_iter_arg_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_19, call_args );
                }

                if ( tmp_iter_arg_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 500;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_18;
                }
                tmp_assign_source_85 = MAKE_ITERATOR( tmp_iter_arg_9 );
                Py_DECREF( tmp_iter_arg_9 );
                if ( tmp_assign_source_85 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 500;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_18;
                }
                {
                    PyObject *old = tmp_tuple_unpack_9__source_iter;
                    tmp_tuple_unpack_9__source_iter = tmp_assign_source_85;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_86;
                PyObject *tmp_unpack_19;
                CHECK_OBJECT( tmp_tuple_unpack_9__source_iter );
                tmp_unpack_19 = tmp_tuple_unpack_9__source_iter;
                tmp_assign_source_86 = UNPACK_NEXT( tmp_unpack_19, 0, 2 );
                if ( tmp_assign_source_86 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 500;
                    goto try_except_handler_19;
                }
                {
                    PyObject *old = tmp_tuple_unpack_9__element_1;
                    tmp_tuple_unpack_9__element_1 = tmp_assign_source_86;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_87;
                PyObject *tmp_unpack_20;
                CHECK_OBJECT( tmp_tuple_unpack_9__source_iter );
                tmp_unpack_20 = tmp_tuple_unpack_9__source_iter;
                tmp_assign_source_87 = UNPACK_NEXT( tmp_unpack_20, 1, 2 );
                if ( tmp_assign_source_87 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 500;
                    goto try_except_handler_19;
                }
                {
                    PyObject *old = tmp_tuple_unpack_9__element_2;
                    tmp_tuple_unpack_9__element_2 = tmp_assign_source_87;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_iterator_name_8;
                CHECK_OBJECT( tmp_tuple_unpack_9__source_iter );
                tmp_iterator_name_8 = tmp_tuple_unpack_9__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT( tmp_iterator_name_8 ); assert( HAS_ITERNEXT( tmp_iterator_name_8 ) );

                tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_8 )->tp_iternext)( tmp_iterator_name_8 );

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

                            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                            exception_lineno = 500;
                            goto try_except_handler_19;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 500;
                    goto try_except_handler_19;
                }
            }
            goto try_end_17;
            // Exception handler code:
            try_except_handler_19:;
            exception_keeper_type_17 = exception_type;
            exception_keeper_value_17 = exception_value;
            exception_keeper_tb_17 = exception_tb;
            exception_keeper_lineno_17 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_9__source_iter );
            Py_DECREF( tmp_tuple_unpack_9__source_iter );
            tmp_tuple_unpack_9__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_17;
            exception_value = exception_keeper_value_17;
            exception_tb = exception_keeper_tb_17;
            exception_lineno = exception_keeper_lineno_17;

            goto try_except_handler_18;
            // End of try:
            try_end_17:;
            goto try_end_18;
            // Exception handler code:
            try_except_handler_18:;
            exception_keeper_type_18 = exception_type;
            exception_keeper_value_18 = exception_value;
            exception_keeper_tb_18 = exception_tb;
            exception_keeper_lineno_18 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_tuple_unpack_9__element_1 );
            tmp_tuple_unpack_9__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_9__element_2 );
            tmp_tuple_unpack_9__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_18;
            exception_value = exception_keeper_value_18;
            exception_tb = exception_keeper_tb_18;
            exception_lineno = exception_keeper_lineno_18;

            goto frame_exception_exit_1;
            // End of try:
            try_end_18:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_9__source_iter );
            Py_DECREF( tmp_tuple_unpack_9__source_iter );
            tmp_tuple_unpack_9__source_iter = NULL;

            {
                PyObject *tmp_assign_source_88;
                CHECK_OBJECT( tmp_tuple_unpack_9__element_1 );
                tmp_assign_source_88 = tmp_tuple_unpack_9__element_1;
                {
                    PyObject *old = var_p_S;
                    var_p_S = tmp_assign_source_88;
                    Py_INCREF( var_p_S );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_9__element_1 );
            tmp_tuple_unpack_9__element_1 = NULL;

            {
                PyObject *tmp_assign_source_89;
                CHECK_OBJECT( tmp_tuple_unpack_9__element_2 );
                tmp_assign_source_89 = tmp_tuple_unpack_9__element_2;
                {
                    PyObject *old = var__;
                    var__ = tmp_assign_source_89;
                    Py_INCREF( var__ );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_9__element_2 );
            tmp_tuple_unpack_9__element_2 = NULL;

            {
                PyObject *tmp_assign_source_90;
                PyObject *tmp_called_instance_9;
                PyObject *tmp_args_element_name_37;
                if ( var_S == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "S" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 501;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_9 = var_S;
                CHECK_OBJECT( var_p_S );
                tmp_args_element_name_37 = var_p_S;
                frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 501;
                {
                    PyObject *call_args[] = { tmp_args_element_name_37 };
                    tmp_assign_source_90 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_dot, call_args );
                }

                if ( tmp_assign_source_90 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 501;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_step_h;
                    var_step_h = tmp_assign_source_90;
                    Py_XDECREF( old );
                }

            }
            branch_no_15:;
        }
        branch_end_14:;
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_called_name_20;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_args_element_name_39;
        PyObject *tmp_args_element_name_40;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_evaluate_quadratic );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_evaluate_quadratic );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "evaluate_quadratic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 503;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_20 = tmp_mvar_value_23;
        if ( var_J_h == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J_h" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 503;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_38 = var_J_h;
        CHECK_OBJECT( var_g_h );
        tmp_args_element_name_39 = var_g_h;
        if ( var_step_h == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "step_h" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 503;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_40 = var_step_h;
        frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 503;
        {
            PyObject *call_args[] = { tmp_args_element_name_38, tmp_args_element_name_39, tmp_args_element_name_40 };
            tmp_operand_name_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_20, call_args );
        }

        if ( tmp_operand_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 503;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_91 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_4 );
        Py_DECREF( tmp_operand_name_4 );
        if ( tmp_assign_source_91 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 503;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_predicted_reduction;
            var_predicted_reduction = tmp_assign_source_91;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        CHECK_OBJECT( var_d );
        tmp_left_name_14 = var_d;
        if ( var_step_h == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "step_h" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 504;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_14 = var_step_h;
        tmp_assign_source_92 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        if ( tmp_assign_source_92 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 504;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_step;
            var_step = tmp_assign_source_92;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 505;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_15 = var_x;
        CHECK_OBJECT( var_step );
        tmp_right_name_15 = var_step;
        tmp_assign_source_93 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
        if ( tmp_assign_source_93 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 505;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_x_new;
            var_x_new = tmp_assign_source_93;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_name_21;
        PyObject *tmp_args_element_name_41;
        CHECK_OBJECT( par_fun );
        tmp_called_name_21 = par_fun;
        CHECK_OBJECT( var_x_new );
        tmp_args_element_name_41 = var_x_new;
        frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 506;
        {
            PyObject *call_args[] = { tmp_args_element_name_41 };
            tmp_assign_source_94 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
        }

        if ( tmp_assign_source_94 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 506;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_f_new;
            var_f_new = tmp_assign_source_94;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        if ( var_nfev == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nfev" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 507;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_16 = var_nfev;
        tmp_right_name_16 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_16, tmp_right_name_16 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 507;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_95 = tmp_left_name_16;
        var_nfev = tmp_assign_source_95;

    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_name_22;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_42;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 509;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_22 = tmp_mvar_value_24;
        if ( var_step_h == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "step_h" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 509;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_42 = var_step_h;
        frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 509;
        {
            PyObject *call_args[] = { tmp_args_element_name_42 };
            tmp_assign_source_96 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
        }

        if ( tmp_assign_source_96 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 509;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_step_h_norm;
            var_step_h_norm = tmp_assign_source_96;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_called_name_23;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_args_element_name_44;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 511;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_25;
        tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_all );
        if ( tmp_called_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 511;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_26 == NULL )
        {
            Py_DECREF( tmp_called_name_23 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 511;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_10 = tmp_mvar_value_26;
        CHECK_OBJECT( var_f_new );
        tmp_args_element_name_44 = var_f_new;
        frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 511;
        {
            PyObject *call_args[] = { tmp_args_element_name_44 };
            tmp_args_element_name_43 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_isfinite, call_args );
        }

        if ( tmp_args_element_name_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_23 );

            exception_lineno = 511;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 511;
        {
            PyObject *call_args[] = { tmp_args_element_name_43 };
            tmp_operand_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
        }

        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_element_name_43 );
        if ( tmp_operand_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 511;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
        Py_DECREF( tmp_operand_name_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 511;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_97;
            PyObject *tmp_left_name_17;
            PyObject *tmp_right_name_17;
            tmp_left_name_17 = const_float_0_25;
            CHECK_OBJECT( var_step_h_norm );
            tmp_right_name_17 = var_step_h_norm;
            tmp_assign_source_97 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_17, tmp_right_name_17 );
            if ( tmp_assign_source_97 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 512;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_Delta;
                assert( old != NULL );
                var_Delta = tmp_assign_source_97;
                Py_DECREF( old );
            }

        }
        goto loop_start_2;
        branch_no_16:;
    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_compexpr_left_17;
        PyObject *tmp_compexpr_right_17;
        CHECK_OBJECT( par_loss_function );
        tmp_compexpr_left_17 = par_loss_function;
        tmp_compexpr_right_17 = Py_None;
        tmp_condition_result_17 = ( tmp_compexpr_left_17 != tmp_compexpr_right_17 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_98;
            PyObject *tmp_called_name_24;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT( par_loss_function );
            tmp_called_name_24 = par_loss_function;
            CHECK_OBJECT( var_f_new );
            tmp_tuple_element_8 = var_f_new;
            tmp_args_name_5 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_8 );
            tmp_kw_name_5 = PyDict_Copy( const_dict_9e1b4601096819506f8f581e889fa028 );
            frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 517;
            tmp_assign_source_98 = CALL_FUNCTION( tmp_called_name_24, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_args_name_5 );
            Py_DECREF( tmp_kw_name_5 );
            if ( tmp_assign_source_98 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 517;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_cost_new;
                var_cost_new = tmp_assign_source_98;
                Py_XDECREF( old );
            }

        }
        goto branch_end_17;
        branch_no_17:;
        {
            PyObject *tmp_assign_source_99;
            PyObject *tmp_left_name_18;
            PyObject *tmp_right_name_18;
            PyObject *tmp_called_instance_11;
            PyObject *tmp_mvar_value_27;
            PyObject *tmp_args_element_name_45;
            PyObject *tmp_args_element_name_46;
            tmp_left_name_18 = const_float_0_5;
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 519;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_11 = tmp_mvar_value_27;
            CHECK_OBJECT( var_f_new );
            tmp_args_element_name_45 = var_f_new;
            CHECK_OBJECT( var_f_new );
            tmp_args_element_name_46 = var_f_new;
            frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 519;
            {
                PyObject *call_args[] = { tmp_args_element_name_45, tmp_args_element_name_46 };
                tmp_right_name_18 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_11, const_str_plain_dot, call_args );
            }

            if ( tmp_right_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 519;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_99 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
            Py_DECREF( tmp_right_name_18 );
            if ( tmp_assign_source_99 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 519;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_cost_new;
                var_cost_new = tmp_assign_source_99;
                Py_XDECREF( old );
            }

        }
        branch_end_17:;
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        if ( var_cost == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cost" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 520;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_19 = var_cost;
        CHECK_OBJECT( var_cost_new );
        tmp_right_name_19 = var_cost_new;
        tmp_assign_source_100 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_19 );
        if ( tmp_assign_source_100 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 520;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_actual_reduction;
            assert( old != NULL );
            var_actual_reduction = tmp_assign_source_100;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_iter_arg_10;
        PyObject *tmp_called_name_25;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_args_element_name_48;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_args_element_name_51;
        PyObject *tmp_compexpr_left_18;
        PyObject *tmp_compexpr_right_18;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_20;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_update_tr_radius );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_update_tr_radius );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "update_tr_radius" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 522;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_called_name_25 = tmp_mvar_value_28;
        CHECK_OBJECT( var_Delta );
        tmp_args_element_name_47 = var_Delta;
        CHECK_OBJECT( var_actual_reduction );
        tmp_args_element_name_48 = var_actual_reduction;
        CHECK_OBJECT( var_predicted_reduction );
        tmp_args_element_name_49 = var_predicted_reduction;
        CHECK_OBJECT( var_step_h_norm );
        tmp_args_element_name_50 = var_step_h_norm;
        CHECK_OBJECT( var_step_h_norm );
        tmp_compexpr_left_18 = var_step_h_norm;
        tmp_left_name_20 = const_float_0_95;
        CHECK_OBJECT( var_Delta );
        tmp_right_name_20 = var_Delta;
        tmp_compexpr_right_18 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_20, tmp_right_name_20 );
        if ( tmp_compexpr_right_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 524;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_args_element_name_51 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_18, tmp_compexpr_right_18 );
        Py_DECREF( tmp_compexpr_right_18 );
        if ( tmp_args_element_name_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 524;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 522;
        {
            PyObject *call_args[] = { tmp_args_element_name_47, tmp_args_element_name_48, tmp_args_element_name_49, tmp_args_element_name_50, tmp_args_element_name_51 };
            tmp_iter_arg_10 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_25, call_args );
        }

        Py_DECREF( tmp_args_element_name_51 );
        if ( tmp_iter_arg_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 522;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_assign_source_101 = MAKE_ITERATOR( tmp_iter_arg_10 );
        Py_DECREF( tmp_iter_arg_10 );
        if ( tmp_assign_source_101 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 522;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__source_iter;
            tmp_tuple_unpack_10__source_iter = tmp_assign_source_101;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_unpack_21;
        CHECK_OBJECT( tmp_tuple_unpack_10__source_iter );
        tmp_unpack_21 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_102 = UNPACK_NEXT( tmp_unpack_21, 0, 2 );
        if ( tmp_assign_source_102 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 522;
            goto try_except_handler_21;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__element_1;
            tmp_tuple_unpack_10__element_1 = tmp_assign_source_102;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_unpack_22;
        CHECK_OBJECT( tmp_tuple_unpack_10__source_iter );
        tmp_unpack_22 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_103 = UNPACK_NEXT( tmp_unpack_22, 1, 2 );
        if ( tmp_assign_source_103 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 522;
            goto try_except_handler_21;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__element_2;
            tmp_tuple_unpack_10__element_2 = tmp_assign_source_103;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_9;
        CHECK_OBJECT( tmp_tuple_unpack_10__source_iter );
        tmp_iterator_name_9 = tmp_tuple_unpack_10__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_9 ); assert( HAS_ITERNEXT( tmp_iterator_name_9 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_9 )->tp_iternext)( tmp_iterator_name_9 );

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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 522;
                    goto try_except_handler_21;
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

            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 522;
            goto try_except_handler_21;
        }
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_10__source_iter );
    Py_DECREF( tmp_tuple_unpack_10__source_iter );
    tmp_tuple_unpack_10__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_20;
    // End of try:
    try_end_19:;
    goto try_end_20;
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

    Py_XDECREF( tmp_tuple_unpack_10__element_1 );
    tmp_tuple_unpack_10__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_10__element_2 );
    tmp_tuple_unpack_10__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_10__source_iter );
    Py_DECREF( tmp_tuple_unpack_10__source_iter );
    tmp_tuple_unpack_10__source_iter = NULL;

    {
        PyObject *tmp_assign_source_104;
        CHECK_OBJECT( tmp_tuple_unpack_10__element_1 );
        tmp_assign_source_104 = tmp_tuple_unpack_10__element_1;
        {
            PyObject *old = var_Delta_new;
            var_Delta_new = tmp_assign_source_104;
            Py_INCREF( var_Delta_new );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_10__element_1 );
    tmp_tuple_unpack_10__element_1 = NULL;

    {
        PyObject *tmp_assign_source_105;
        CHECK_OBJECT( tmp_tuple_unpack_10__element_2 );
        tmp_assign_source_105 = tmp_tuple_unpack_10__element_2;
        {
            PyObject *old = var_ratio;
            var_ratio = tmp_assign_source_105;
            Py_INCREF( var_ratio );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_10__element_2 );
    tmp_tuple_unpack_10__element_2 = NULL;

    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_called_name_26;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_args_element_name_52;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 526;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_26 = tmp_mvar_value_29;
        CHECK_OBJECT( var_step );
        tmp_args_element_name_52 = var_step;
        frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 526;
        {
            PyObject *call_args[] = { tmp_args_element_name_52 };
            tmp_assign_source_106 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
        }

        if ( tmp_assign_source_106 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 526;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_step_norm;
            var_step_norm = tmp_assign_source_106;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_name_27;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_args_element_name_53;
        PyObject *tmp_args_element_name_54;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_args_element_name_56;
        PyObject *tmp_called_name_28;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_args_element_name_57;
        PyObject *tmp_args_element_name_58;
        PyObject *tmp_args_element_name_59;
        PyObject *tmp_args_element_name_60;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_check_termination );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_check_termination );
        }

        if ( tmp_mvar_value_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "check_termination" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 527;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_27 = tmp_mvar_value_30;
        CHECK_OBJECT( var_actual_reduction );
        tmp_args_element_name_53 = var_actual_reduction;
        if ( var_cost == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cost" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 528;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_54 = var_cost;
        CHECK_OBJECT( var_step_norm );
        tmp_args_element_name_55 = var_step_norm;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 528;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_28 = tmp_mvar_value_31;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 528;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_57 = var_x;
        frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 528;
        {
            PyObject *call_args[] = { tmp_args_element_name_57 };
            tmp_args_element_name_56 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
        }

        if ( tmp_args_element_name_56 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 528;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ratio );
        tmp_args_element_name_58 = var_ratio;
        CHECK_OBJECT( par_ftol );
        tmp_args_element_name_59 = par_ftol;
        CHECK_OBJECT( par_xtol );
        tmp_args_element_name_60 = par_xtol;
        frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 527;
        {
            PyObject *call_args[] = { tmp_args_element_name_53, tmp_args_element_name_54, tmp_args_element_name_55, tmp_args_element_name_56, tmp_args_element_name_58, tmp_args_element_name_59, tmp_args_element_name_60 };
            tmp_assign_source_107 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_27, call_args );
        }

        Py_DECREF( tmp_args_element_name_56 );
        if ( tmp_assign_source_107 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 527;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_termination_status;
            var_termination_status = tmp_assign_source_107;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_compexpr_left_19;
        PyObject *tmp_compexpr_right_19;
        CHECK_OBJECT( var_termination_status );
        tmp_compexpr_left_19 = var_termination_status;
        tmp_compexpr_right_19 = Py_None;
        tmp_condition_result_18 = ( tmp_compexpr_left_19 != tmp_compexpr_right_19 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_18;
        }
        else
        {
            goto branch_no_18;
        }
        branch_yes_18:;
        goto loop_end_2;
        branch_no_18:;
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_left_name_21;
        PyObject *tmp_right_name_21;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_22;
        if ( var_alpha == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "alpha" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 532;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_21 = var_alpha;
        CHECK_OBJECT( var_Delta );
        tmp_left_name_22 = var_Delta;
        CHECK_OBJECT( var_Delta_new );
        tmp_right_name_22 = var_Delta_new;
        tmp_right_name_21 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_22, tmp_right_name_22 );
        if ( tmp_right_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 532;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_21, tmp_right_name_21 );
        Py_DECREF( tmp_right_name_21 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 532;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_108 = tmp_left_name_21;
        var_alpha = tmp_assign_source_108;

    }
    {
        PyObject *tmp_assign_source_109;
        CHECK_OBJECT( var_Delta_new );
        tmp_assign_source_109 = var_Delta_new;
        {
            PyObject *old = var_Delta;
            assert( old != NULL );
            var_Delta = tmp_assign_source_109;
            Py_INCREF( var_Delta );
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 495;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_compexpr_left_20;
        PyObject *tmp_compexpr_right_20;
        if ( var_actual_reduction == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "actual_reduction" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 535;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_20 = var_actual_reduction;
        tmp_compexpr_right_20 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_20, tmp_compexpr_right_20 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 535;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_19 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_110;
            if ( var_x_new == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x_new" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 536;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_assign_source_110 = var_x_new;
            {
                PyObject *old = var_x;
                var_x = tmp_assign_source_110;
                Py_INCREF( var_x );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_111;
            if ( var_f_new == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f_new" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 538;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_assign_source_111 = var_f_new;
            {
                PyObject *old = var_f;
                var_f = tmp_assign_source_111;
                Py_INCREF( var_f );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_112;
            PyObject *tmp_called_instance_12;
            CHECK_OBJECT( var_f );
            tmp_called_instance_12 = var_f;
            frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 539;
            tmp_assign_source_112 = CALL_METHOD_NO_ARGS( tmp_called_instance_12, const_str_plain_copy );
            if ( tmp_assign_source_112 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 539;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_f_true;
                var_f_true = tmp_assign_source_112;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_113;
            if ( var_cost_new == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cost_new" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 541;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_assign_source_113 = var_cost_new;
            {
                PyObject *old = var_cost;
                var_cost = tmp_assign_source_113;
                Py_INCREF( var_cost );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_114;
            PyObject *tmp_called_name_29;
            PyObject *tmp_args_element_name_61;
            PyObject *tmp_args_element_name_62;
            CHECK_OBJECT( par_jac );
            tmp_called_name_29 = par_jac;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_61 = var_x;
            CHECK_OBJECT( var_f );
            tmp_args_element_name_62 = var_f;
            frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 543;
            {
                PyObject *call_args[] = { tmp_args_element_name_61, tmp_args_element_name_62 };
                tmp_assign_source_114 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_29, call_args );
            }

            if ( tmp_assign_source_114 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 543;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_J;
                var_J = tmp_assign_source_114;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_115;
            PyObject *tmp_left_name_23;
            PyObject *tmp_right_name_23;
            if ( var_njev == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "njev" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 544;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_23 = var_njev;
            tmp_right_name_23 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_23, tmp_right_name_23 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 544;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_115 = tmp_left_name_23;
            var_njev = tmp_assign_source_115;

        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_compexpr_left_21;
            PyObject *tmp_compexpr_right_21;
            CHECK_OBJECT( par_loss_function );
            tmp_compexpr_left_21 = par_loss_function;
            tmp_compexpr_right_21 = Py_None;
            tmp_condition_result_20 = ( tmp_compexpr_left_21 != tmp_compexpr_right_21 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_116;
                PyObject *tmp_called_name_30;
                PyObject *tmp_args_element_name_63;
                CHECK_OBJECT( par_loss_function );
                tmp_called_name_30 = par_loss_function;
                CHECK_OBJECT( var_f );
                tmp_args_element_name_63 = var_f;
                frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 547;
                {
                    PyObject *call_args[] = { tmp_args_element_name_63 };
                    tmp_assign_source_116 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
                }

                if ( tmp_assign_source_116 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 547;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_rho;
                    var_rho = tmp_assign_source_116;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_117;
                PyObject *tmp_iter_arg_11;
                PyObject *tmp_called_name_31;
                PyObject *tmp_mvar_value_32;
                PyObject *tmp_args_element_name_64;
                PyObject *tmp_args_element_name_65;
                PyObject *tmp_args_element_name_66;
                tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_scale_for_robust_loss_function );

                if (unlikely( tmp_mvar_value_32 == NULL ))
                {
                    tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scale_for_robust_loss_function );
                }

                if ( tmp_mvar_value_32 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scale_for_robust_loss_function" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 548;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_22;
                }

                tmp_called_name_31 = tmp_mvar_value_32;
                CHECK_OBJECT( var_J );
                tmp_args_element_name_64 = var_J;
                CHECK_OBJECT( var_f );
                tmp_args_element_name_65 = var_f;
                CHECK_OBJECT( var_rho );
                tmp_args_element_name_66 = var_rho;
                frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 548;
                {
                    PyObject *call_args[] = { tmp_args_element_name_64, tmp_args_element_name_65, tmp_args_element_name_66 };
                    tmp_iter_arg_11 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_31, call_args );
                }

                if ( tmp_iter_arg_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 548;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_22;
                }
                tmp_assign_source_117 = MAKE_ITERATOR( tmp_iter_arg_11 );
                Py_DECREF( tmp_iter_arg_11 );
                if ( tmp_assign_source_117 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 548;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_22;
                }
                {
                    PyObject *old = tmp_tuple_unpack_11__source_iter;
                    tmp_tuple_unpack_11__source_iter = tmp_assign_source_117;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_118;
                PyObject *tmp_unpack_23;
                CHECK_OBJECT( tmp_tuple_unpack_11__source_iter );
                tmp_unpack_23 = tmp_tuple_unpack_11__source_iter;
                tmp_assign_source_118 = UNPACK_NEXT( tmp_unpack_23, 0, 2 );
                if ( tmp_assign_source_118 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 548;
                    goto try_except_handler_23;
                }
                {
                    PyObject *old = tmp_tuple_unpack_11__element_1;
                    tmp_tuple_unpack_11__element_1 = tmp_assign_source_118;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_119;
                PyObject *tmp_unpack_24;
                CHECK_OBJECT( tmp_tuple_unpack_11__source_iter );
                tmp_unpack_24 = tmp_tuple_unpack_11__source_iter;
                tmp_assign_source_119 = UNPACK_NEXT( tmp_unpack_24, 1, 2 );
                if ( tmp_assign_source_119 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 548;
                    goto try_except_handler_23;
                }
                {
                    PyObject *old = tmp_tuple_unpack_11__element_2;
                    tmp_tuple_unpack_11__element_2 = tmp_assign_source_119;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_iterator_name_10;
                CHECK_OBJECT( tmp_tuple_unpack_11__source_iter );
                tmp_iterator_name_10 = tmp_tuple_unpack_11__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT( tmp_iterator_name_10 ); assert( HAS_ITERNEXT( tmp_iterator_name_10 ) );

                tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_10 )->tp_iternext)( tmp_iterator_name_10 );

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

                            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                            exception_lineno = 548;
                            goto try_except_handler_23;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 548;
                    goto try_except_handler_23;
                }
            }
            goto try_end_21;
            // Exception handler code:
            try_except_handler_23:;
            exception_keeper_type_21 = exception_type;
            exception_keeper_value_21 = exception_value;
            exception_keeper_tb_21 = exception_tb;
            exception_keeper_lineno_21 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_11__source_iter );
            Py_DECREF( tmp_tuple_unpack_11__source_iter );
            tmp_tuple_unpack_11__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_21;
            exception_value = exception_keeper_value_21;
            exception_tb = exception_keeper_tb_21;
            exception_lineno = exception_keeper_lineno_21;

            goto try_except_handler_22;
            // End of try:
            try_end_21:;
            goto try_end_22;
            // Exception handler code:
            try_except_handler_22:;
            exception_keeper_type_22 = exception_type;
            exception_keeper_value_22 = exception_value;
            exception_keeper_tb_22 = exception_tb;
            exception_keeper_lineno_22 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_tuple_unpack_11__element_1 );
            tmp_tuple_unpack_11__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_11__element_2 );
            tmp_tuple_unpack_11__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_22;
            exception_value = exception_keeper_value_22;
            exception_tb = exception_keeper_tb_22;
            exception_lineno = exception_keeper_lineno_22;

            goto frame_exception_exit_1;
            // End of try:
            try_end_22:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_11__source_iter );
            Py_DECREF( tmp_tuple_unpack_11__source_iter );
            tmp_tuple_unpack_11__source_iter = NULL;

            {
                PyObject *tmp_assign_source_120;
                CHECK_OBJECT( tmp_tuple_unpack_11__element_1 );
                tmp_assign_source_120 = tmp_tuple_unpack_11__element_1;
                {
                    PyObject *old = var_J;
                    assert( old != NULL );
                    var_J = tmp_assign_source_120;
                    Py_INCREF( var_J );
                    Py_DECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_11__element_1 );
            tmp_tuple_unpack_11__element_1 = NULL;

            {
                PyObject *tmp_assign_source_121;
                CHECK_OBJECT( tmp_tuple_unpack_11__element_2 );
                tmp_assign_source_121 = tmp_tuple_unpack_11__element_2;
                {
                    PyObject *old = var_f;
                    assert( old != NULL );
                    var_f = tmp_assign_source_121;
                    Py_INCREF( var_f );
                    Py_DECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_11__element_2 );
            tmp_tuple_unpack_11__element_2 = NULL;

            branch_no_20:;
        }
        {
            PyObject *tmp_assign_source_122;
            PyObject *tmp_called_name_32;
            PyObject *tmp_mvar_value_33;
            PyObject *tmp_args_element_name_67;
            PyObject *tmp_args_element_name_68;
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_compute_grad );

            if (unlikely( tmp_mvar_value_33 == NULL ))
            {
                tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compute_grad );
            }

            if ( tmp_mvar_value_33 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compute_grad" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 550;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_32 = tmp_mvar_value_33;
            CHECK_OBJECT( var_J );
            tmp_args_element_name_67 = var_J;
            CHECK_OBJECT( var_f );
            tmp_args_element_name_68 = var_f;
            frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 550;
            {
                PyObject *call_args[] = { tmp_args_element_name_67, tmp_args_element_name_68 };
                tmp_assign_source_122 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_32, call_args );
            }

            if ( tmp_assign_source_122 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 550;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_g;
                var_g = tmp_assign_source_122;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_21;
            int tmp_truth_name_3;
            CHECK_OBJECT( var_jac_scale );
            tmp_truth_name_3 = CHECK_IF_TRUE( var_jac_scale );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 552;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_21 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_21;
            }
            else
            {
                goto branch_no_21;
            }
            branch_yes_21:;
            // Tried code:
            {
                PyObject *tmp_assign_source_123;
                PyObject *tmp_iter_arg_12;
                PyObject *tmp_called_name_33;
                PyObject *tmp_mvar_value_34;
                PyObject *tmp_args_element_name_69;
                PyObject *tmp_args_element_name_70;
                tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_compute_jac_scale );

                if (unlikely( tmp_mvar_value_34 == NULL ))
                {
                    tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compute_jac_scale );
                }

                if ( tmp_mvar_value_34 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compute_jac_scale" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 553;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_24;
                }

                tmp_called_name_33 = tmp_mvar_value_34;
                CHECK_OBJECT( var_J );
                tmp_args_element_name_69 = var_J;
                if ( var_scale_inv == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scale_inv" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 553;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_24;
                }

                tmp_args_element_name_70 = var_scale_inv;
                frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 553;
                {
                    PyObject *call_args[] = { tmp_args_element_name_69, tmp_args_element_name_70 };
                    tmp_iter_arg_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_33, call_args );
                }

                if ( tmp_iter_arg_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 553;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_24;
                }
                tmp_assign_source_123 = MAKE_ITERATOR( tmp_iter_arg_12 );
                Py_DECREF( tmp_iter_arg_12 );
                if ( tmp_assign_source_123 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 553;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_24;
                }
                {
                    PyObject *old = tmp_tuple_unpack_12__source_iter;
                    tmp_tuple_unpack_12__source_iter = tmp_assign_source_123;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_124;
                PyObject *tmp_unpack_25;
                CHECK_OBJECT( tmp_tuple_unpack_12__source_iter );
                tmp_unpack_25 = tmp_tuple_unpack_12__source_iter;
                tmp_assign_source_124 = UNPACK_NEXT( tmp_unpack_25, 0, 2 );
                if ( tmp_assign_source_124 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 553;
                    goto try_except_handler_25;
                }
                {
                    PyObject *old = tmp_tuple_unpack_12__element_1;
                    tmp_tuple_unpack_12__element_1 = tmp_assign_source_124;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_125;
                PyObject *tmp_unpack_26;
                CHECK_OBJECT( tmp_tuple_unpack_12__source_iter );
                tmp_unpack_26 = tmp_tuple_unpack_12__source_iter;
                tmp_assign_source_125 = UNPACK_NEXT( tmp_unpack_26, 1, 2 );
                if ( tmp_assign_source_125 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 553;
                    goto try_except_handler_25;
                }
                {
                    PyObject *old = tmp_tuple_unpack_12__element_2;
                    tmp_tuple_unpack_12__element_2 = tmp_assign_source_125;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_iterator_name_11;
                CHECK_OBJECT( tmp_tuple_unpack_12__source_iter );
                tmp_iterator_name_11 = tmp_tuple_unpack_12__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT( tmp_iterator_name_11 ); assert( HAS_ITERNEXT( tmp_iterator_name_11 ) );

                tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_11 )->tp_iternext)( tmp_iterator_name_11 );

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

                            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                            exception_lineno = 553;
                            goto try_except_handler_25;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 553;
                    goto try_except_handler_25;
                }
            }
            goto try_end_23;
            // Exception handler code:
            try_except_handler_25:;
            exception_keeper_type_23 = exception_type;
            exception_keeper_value_23 = exception_value;
            exception_keeper_tb_23 = exception_tb;
            exception_keeper_lineno_23 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_12__source_iter );
            Py_DECREF( tmp_tuple_unpack_12__source_iter );
            tmp_tuple_unpack_12__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_23;
            exception_value = exception_keeper_value_23;
            exception_tb = exception_keeper_tb_23;
            exception_lineno = exception_keeper_lineno_23;

            goto try_except_handler_24;
            // End of try:
            try_end_23:;
            goto try_end_24;
            // Exception handler code:
            try_except_handler_24:;
            exception_keeper_type_24 = exception_type;
            exception_keeper_value_24 = exception_value;
            exception_keeper_tb_24 = exception_tb;
            exception_keeper_lineno_24 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_tuple_unpack_12__element_1 );
            tmp_tuple_unpack_12__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_12__element_2 );
            tmp_tuple_unpack_12__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_24;
            exception_value = exception_keeper_value_24;
            exception_tb = exception_keeper_tb_24;
            exception_lineno = exception_keeper_lineno_24;

            goto frame_exception_exit_1;
            // End of try:
            try_end_24:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_12__source_iter );
            Py_DECREF( tmp_tuple_unpack_12__source_iter );
            tmp_tuple_unpack_12__source_iter = NULL;

            {
                PyObject *tmp_assign_source_126;
                CHECK_OBJECT( tmp_tuple_unpack_12__element_1 );
                tmp_assign_source_126 = tmp_tuple_unpack_12__element_1;
                {
                    PyObject *old = var_scale;
                    var_scale = tmp_assign_source_126;
                    Py_INCREF( var_scale );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_12__element_1 );
            tmp_tuple_unpack_12__element_1 = NULL;

            {
                PyObject *tmp_assign_source_127;
                CHECK_OBJECT( tmp_tuple_unpack_12__element_2 );
                tmp_assign_source_127 = tmp_tuple_unpack_12__element_2;
                {
                    PyObject *old = var_scale_inv;
                    var_scale_inv = tmp_assign_source_127;
                    Py_INCREF( var_scale_inv );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_12__element_2 );
            tmp_tuple_unpack_12__element_2 = NULL;

            branch_no_21:;
        }
        goto branch_end_19;
        branch_no_19:;
        {
            PyObject *tmp_assign_source_128;
            tmp_assign_source_128 = const_int_0;
            {
                PyObject *old = var_step_norm;
                var_step_norm = tmp_assign_source_128;
                Py_INCREF( var_step_norm );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_129;
            tmp_assign_source_129 = const_int_0;
            {
                PyObject *old = var_actual_reduction;
                var_actual_reduction = tmp_assign_source_129;
                Py_INCREF( var_actual_reduction );
                Py_XDECREF( old );
            }

        }
        branch_end_19:;
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_left_name_24;
        PyObject *tmp_right_name_24;
        CHECK_OBJECT( var_iteration );
        tmp_left_name_24 = var_iteration;
        tmp_right_name_24 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_24, tmp_right_name_24 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 558;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_130 = tmp_left_name_24;
        var_iteration = tmp_assign_source_130;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 457;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_compexpr_left_22;
        PyObject *tmp_compexpr_right_22;
        if ( var_termination_status == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "termination_status" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 560;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_22 = var_termination_status;
        tmp_compexpr_right_22 = Py_None;
        tmp_condition_result_22 = ( tmp_compexpr_left_22 == tmp_compexpr_right_22 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_131;
            tmp_assign_source_131 = const_int_0;
            {
                PyObject *old = var_termination_status;
                var_termination_status = tmp_assign_source_131;
                Py_INCREF( var_termination_status );
                Py_XDECREF( old );
            }

        }
        branch_no_22:;
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_called_name_34;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_35;
        PyObject *tmp_args_element_name_71;
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 563;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_35;
        tmp_called_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_zeros_like );
        if ( tmp_called_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 563;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_x == NULL )
        {
            Py_DECREF( tmp_called_name_34 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 563;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_71 = var_x;
        frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 563;
        {
            PyObject *call_args[] = { tmp_args_element_name_71 };
            tmp_assign_source_132 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_34, call_args );
        }

        Py_DECREF( tmp_called_name_34 );
        if ( tmp_assign_source_132 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 563;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_active_mask == NULL );
        var_active_mask = tmp_assign_source_132;
    }
    {
        PyObject *tmp_called_name_35;
        PyObject *tmp_mvar_value_36;
        PyObject *tmp_kw_name_6;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
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
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_OptimizeResult );

        if (unlikely( tmp_mvar_value_36 == NULL ))
        {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeResult );
        }

        if ( tmp_mvar_value_36 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 564;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_35 = tmp_mvar_value_36;
        tmp_dict_key_4 = const_str_plain_x;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 565;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_4 = var_x;
        tmp_kw_name_6 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_cost;
        if ( var_cost == NULL )
        {
            Py_DECREF( tmp_kw_name_6 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cost" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 565;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_5 = var_cost;
        tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_fun;
        if ( var_f_true == NULL )
        {
            Py_DECREF( tmp_kw_name_6 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f_true" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 565;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_6 = var_f_true;
        tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_jac;
        if ( var_J == NULL )
        {
            Py_DECREF( tmp_kw_name_6 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 565;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_7 = var_J;
        tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_grad;
        if ( var_g == NULL )
        {
            Py_DECREF( tmp_kw_name_6 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 565;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_8 = var_g;
        tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_str_plain_optimality;
        CHECK_OBJECT( var_g_norm );
        tmp_dict_value_9 = var_g_norm;
        tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_10 = const_str_plain_active_mask;
        CHECK_OBJECT( var_active_mask );
        tmp_dict_value_10 = var_active_mask;
        tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_10, tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_11 = const_str_plain_nfev;
        if ( var_nfev == NULL )
        {
            Py_DECREF( tmp_kw_name_6 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nfev" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 566;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_11 = var_nfev;
        tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_11, tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_12 = const_str_plain_njev;
        if ( var_njev == NULL )
        {
            Py_DECREF( tmp_kw_name_6 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "njev" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 566;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_12 = var_njev;
        tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_12, tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_13 = const_str_plain_status;
        if ( var_termination_status == NULL )
        {
            Py_DECREF( tmp_kw_name_6 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "termination_status" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 567;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_13 = var_termination_status;
        tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_13, tmp_dict_value_13 );
        assert( !(tmp_res != 0) );
        frame_d100cc64c2930f0bda854c4884ee547d->m_frame.f_lineno = 564;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_35, tmp_kw_name_6 );
        Py_DECREF( tmp_kw_name_6 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 564;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d100cc64c2930f0bda854c4884ee547d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d100cc64c2930f0bda854c4884ee547d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d100cc64c2930f0bda854c4884ee547d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d100cc64c2930f0bda854c4884ee547d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d100cc64c2930f0bda854c4884ee547d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d100cc64c2930f0bda854c4884ee547d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d100cc64c2930f0bda854c4884ee547d,
        type_description_1,
        par_fun,
        par_jac,
        par_x0,
        par_f0,
        par_J0,
        par_ftol,
        par_xtol,
        par_gtol,
        par_max_nfev,
        par_x_scale,
        par_loss_function,
        par_tr_solver,
        par_tr_options,
        par_verbose,
        var_x,
        var_f,
        var_f_true,
        var_nfev,
        var_J,
        var_njev,
        var_m,
        var_n,
        var_rho,
        var_cost,
        var_g,
        var_jac_scale,
        var_scale,
        var_scale_inv,
        var_Delta,
        var_reg_term,
        var_damp,
        var_regularize,
        var_alpha,
        var_termination_status,
        var_iteration,
        var_step_norm,
        var_actual_reduction,
        var_g_norm,
        var_d,
        var_g_h,
        var_J_h,
        var_U,
        var_s,
        var_V,
        var_uf,
        var_a,
        var_b,
        var_to_tr,
        var_ag_value,
        var_damp_full,
        var_gn_h,
        var_S,
        var__,
        var_JS,
        var_B_S,
        var_g_S,
        var_step_h,
        var_n_iter,
        var_p_S,
        var_predicted_reduction,
        var_step,
        var_x_new,
        var_f_new,
        var_step_h_norm,
        var_cost_new,
        var_Delta_new,
        var_ratio,
        var_active_mask
    );


    // Release cached frame.
    if ( frame_d100cc64c2930f0bda854c4884ee547d == cache_frame_d100cc64c2930f0bda854c4884ee547d )
    {
        Py_DECREF( frame_d100cc64c2930f0bda854c4884ee547d );
    }
    cache_frame_d100cc64c2930f0bda854c4884ee547d = NULL;

    assertFrameObject( frame_d100cc64c2930f0bda854c4884ee547d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$trf$$$function_4_trf_no_bounds );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_f0 );
    Py_DECREF( par_f0 );
    par_f0 = NULL;

    CHECK_OBJECT( (PyObject *)par_J0 );
    Py_DECREF( par_J0 );
    par_J0 = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_gtol );
    Py_DECREF( par_gtol );
    par_gtol = NULL;

    CHECK_OBJECT( (PyObject *)par_max_nfev );
    Py_DECREF( par_max_nfev );
    par_max_nfev = NULL;

    CHECK_OBJECT( (PyObject *)par_x_scale );
    Py_DECREF( par_x_scale );
    par_x_scale = NULL;

    CHECK_OBJECT( (PyObject *)par_loss_function );
    Py_DECREF( par_loss_function );
    par_loss_function = NULL;

    CHECK_OBJECT( (PyObject *)par_tr_solver );
    Py_DECREF( par_tr_solver );
    par_tr_solver = NULL;

    CHECK_OBJECT( (PyObject *)par_tr_options );
    Py_DECREF( par_tr_options );
    par_tr_options = NULL;

    CHECK_OBJECT( (PyObject *)par_verbose );
    Py_DECREF( par_verbose );
    par_verbose = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_f_true );
    var_f_true = NULL;

    Py_XDECREF( var_nfev );
    var_nfev = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

    Py_XDECREF( var_njev );
    var_njev = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_rho );
    var_rho = NULL;

    Py_XDECREF( var_cost );
    var_cost = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    CHECK_OBJECT( (PyObject *)var_jac_scale );
    Py_DECREF( var_jac_scale );
    var_jac_scale = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_scale_inv );
    var_scale_inv = NULL;

    CHECK_OBJECT( (PyObject *)var_Delta );
    Py_DECREF( var_Delta );
    var_Delta = NULL;

    Py_XDECREF( var_reg_term );
    var_reg_term = NULL;

    Py_XDECREF( var_damp );
    var_damp = NULL;

    Py_XDECREF( var_regularize );
    var_regularize = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_termination_status );
    var_termination_status = NULL;

    CHECK_OBJECT( (PyObject *)var_iteration );
    Py_DECREF( var_iteration );
    var_iteration = NULL;

    Py_XDECREF( var_step_norm );
    var_step_norm = NULL;

    Py_XDECREF( var_actual_reduction );
    var_actual_reduction = NULL;

    CHECK_OBJECT( (PyObject *)var_g_norm );
    Py_DECREF( var_g_norm );
    var_g_norm = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_g_h );
    var_g_h = NULL;

    Py_XDECREF( var_J_h );
    var_J_h = NULL;

    Py_XDECREF( var_U );
    var_U = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_V );
    var_V = NULL;

    Py_XDECREF( var_uf );
    var_uf = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_to_tr );
    var_to_tr = NULL;

    Py_XDECREF( var_ag_value );
    var_ag_value = NULL;

    Py_XDECREF( var_damp_full );
    var_damp_full = NULL;

    Py_XDECREF( var_gn_h );
    var_gn_h = NULL;

    Py_XDECREF( var_S );
    var_S = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_JS );
    var_JS = NULL;

    Py_XDECREF( var_B_S );
    var_B_S = NULL;

    Py_XDECREF( var_g_S );
    var_g_S = NULL;

    Py_XDECREF( var_step_h );
    var_step_h = NULL;

    Py_XDECREF( var_n_iter );
    var_n_iter = NULL;

    Py_XDECREF( var_p_S );
    var_p_S = NULL;

    Py_XDECREF( var_predicted_reduction );
    var_predicted_reduction = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_x_new );
    var_x_new = NULL;

    Py_XDECREF( var_f_new );
    var_f_new = NULL;

    Py_XDECREF( var_step_h_norm );
    var_step_h_norm = NULL;

    Py_XDECREF( var_cost_new );
    var_cost_new = NULL;

    Py_XDECREF( var_Delta_new );
    var_Delta_new = NULL;

    Py_XDECREF( var_ratio );
    var_ratio = NULL;

    CHECK_OBJECT( (PyObject *)var_active_mask );
    Py_DECREF( var_active_mask );
    var_active_mask = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_f0 );
    Py_DECREF( par_f0 );
    par_f0 = NULL;

    CHECK_OBJECT( (PyObject *)par_J0 );
    Py_DECREF( par_J0 );
    par_J0 = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_gtol );
    Py_DECREF( par_gtol );
    par_gtol = NULL;

    Py_XDECREF( par_max_nfev );
    par_max_nfev = NULL;

    CHECK_OBJECT( (PyObject *)par_x_scale );
    Py_DECREF( par_x_scale );
    par_x_scale = NULL;

    CHECK_OBJECT( (PyObject *)par_loss_function );
    Py_DECREF( par_loss_function );
    par_loss_function = NULL;

    CHECK_OBJECT( (PyObject *)par_tr_solver );
    Py_DECREF( par_tr_solver );
    par_tr_solver = NULL;

    CHECK_OBJECT( (PyObject *)par_tr_options );
    Py_DECREF( par_tr_options );
    par_tr_options = NULL;

    CHECK_OBJECT( (PyObject *)par_verbose );
    Py_DECREF( par_verbose );
    par_verbose = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_f_true );
    var_f_true = NULL;

    Py_XDECREF( var_nfev );
    var_nfev = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

    Py_XDECREF( var_njev );
    var_njev = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_rho );
    var_rho = NULL;

    Py_XDECREF( var_cost );
    var_cost = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_jac_scale );
    var_jac_scale = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_scale_inv );
    var_scale_inv = NULL;

    Py_XDECREF( var_Delta );
    var_Delta = NULL;

    Py_XDECREF( var_reg_term );
    var_reg_term = NULL;

    Py_XDECREF( var_damp );
    var_damp = NULL;

    Py_XDECREF( var_regularize );
    var_regularize = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_termination_status );
    var_termination_status = NULL;

    Py_XDECREF( var_iteration );
    var_iteration = NULL;

    Py_XDECREF( var_step_norm );
    var_step_norm = NULL;

    Py_XDECREF( var_actual_reduction );
    var_actual_reduction = NULL;

    Py_XDECREF( var_g_norm );
    var_g_norm = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_g_h );
    var_g_h = NULL;

    Py_XDECREF( var_J_h );
    var_J_h = NULL;

    Py_XDECREF( var_U );
    var_U = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_V );
    var_V = NULL;

    Py_XDECREF( var_uf );
    var_uf = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_to_tr );
    var_to_tr = NULL;

    Py_XDECREF( var_ag_value );
    var_ag_value = NULL;

    Py_XDECREF( var_damp_full );
    var_damp_full = NULL;

    Py_XDECREF( var_gn_h );
    var_gn_h = NULL;

    Py_XDECREF( var_S );
    var_S = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_JS );
    var_JS = NULL;

    Py_XDECREF( var_B_S );
    var_B_S = NULL;

    Py_XDECREF( var_g_S );
    var_g_S = NULL;

    Py_XDECREF( var_step_h );
    var_step_h = NULL;

    Py_XDECREF( var_n_iter );
    var_n_iter = NULL;

    Py_XDECREF( var_p_S );
    var_p_S = NULL;

    Py_XDECREF( var_predicted_reduction );
    var_predicted_reduction = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_x_new );
    var_x_new = NULL;

    Py_XDECREF( var_f_new );
    var_f_new = NULL;

    Py_XDECREF( var_step_h_norm );
    var_step_h_norm = NULL;

    Py_XDECREF( var_cost_new );
    var_cost_new = NULL;

    Py_XDECREF( var_Delta_new );
    var_Delta_new = NULL;

    Py_XDECREF( var_ratio );
    var_ratio = NULL;

    Py_XDECREF( var_active_mask );
    var_active_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$trf$$$function_4_trf_no_bounds );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$trf$$$function_1_trf(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$trf$$$function_1_trf,
        const_str_plain_trf,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_519ffbf7bcf106104232afe1166fadfb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$trf,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$trf$$$function_2_select_step(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$trf$$$function_2_select_step,
        const_str_plain_select_step,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3d2cbb38e1711d7089bc53bb65c56f2c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$trf,
        const_str_digest_7128459563c13bb5328700e5c2372d59,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$trf$$$function_3_trf_bounds(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$trf$$$function_3_trf_bounds,
        const_str_plain_trf_bounds,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_83d55fe0a901222fd33ed240137bb468,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$trf,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$trf$$$function_4_trf_no_bounds(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$trf$$$function_4_trf_no_bounds,
        const_str_plain_trf_no_bounds,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d100cc64c2930f0bda854c4884ee547d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$trf,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_lsq$trf =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._lsq.trf",
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

MOD_INIT_DECL( scipy$optimize$_lsq$trf )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_lsq$trf );
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
    puts("scipy.optimize._lsq.trf: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._lsq.trf: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._lsq.trf: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_lsq$trf" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_lsq$trf = Py_InitModule4(
        "scipy.optimize._lsq.trf",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_lsq$trf = PyModule_Create( &mdef_scipy$optimize$_lsq$trf );
#endif

    moduledict_scipy$optimize$_lsq$trf = MODULE_DICT( module_scipy$optimize$_lsq$trf );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_lsq$trf,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_lsq$trf,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_lsq$trf,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_lsq$trf,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_lsq$trf );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_fb13162cce80dbf41f60ed4bcbf88a87, module_scipy$optimize$_lsq$trf );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_7324bff478b3afddbff6798d2903bf7a;
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
        tmp_assign_source_1 = const_str_digest_3a7aa7397ce3f36b858c692b5ab4fb7a;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_7324bff478b3afddbff6798d2903bf7a = MAKE_MODULE_FRAME( codeobj_7324bff478b3afddbff6798d2903bf7a, module_scipy$optimize$_lsq$trf );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_7324bff478b3afddbff6798d2903bf7a );
    assert( Py_REFCNT( frame_7324bff478b3afddbff6798d2903bf7a ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_7324bff478b3afddbff6798d2903bf7a->m_frame.f_lineno = 96;
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


            exception_lineno = 96;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 96;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 96;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_lsq$trf;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_7324bff478b3afddbff6798d2903bf7a->m_frame.f_lineno = 98;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
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
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_lsq$trf;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_norm_tuple;
        tmp_level_name_2 = const_int_0;
        frame_7324bff478b3afddbff6798d2903bf7a->m_frame.f_lineno = 99;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_norm );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$_lsq$trf;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_svd_str_plain_qr_tuple;
        tmp_level_name_3 = const_int_0;
        frame_7324bff478b3afddbff6798d2903bf7a->m_frame.f_lineno = 100;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

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
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_svd );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_svd, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_qr );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_qr, tmp_assign_source_12 );
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
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$optimize$_lsq$trf;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_lsmr_tuple;
        tmp_level_name_4 = const_int_0;
        frame_7324bff478b3afddbff6798d2903bf7a->m_frame.f_lineno = 101;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_lsmr );
        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_lsmr, tmp_assign_source_13 );
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
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$optimize$_lsq$trf;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_OptimizeResult_tuple;
        tmp_level_name_5 = const_int_0;
        frame_7324bff478b3afddbff6798d2903bf7a->m_frame.f_lineno = 102;
        tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_OptimizeResult );
        Py_DECREF( tmp_import_name_from_8 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_OptimizeResult, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_c88389693d9d476899c1c6e170568469;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$optimize$_lsq$trf;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_string_types_tuple;
        tmp_level_name_6 = const_int_0;
        frame_7324bff478b3afddbff6798d2903bf7a->m_frame.f_lineno = 103;
        tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_string_types );
        Py_DECREF( tmp_import_name_from_9 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_string_types, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_common;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy$optimize$_lsq$trf;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_7df16ed13ac0f7ce6c4e9526a2759158_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_7324bff478b3afddbff6798d2903bf7a->m_frame.f_lineno = 105;
        tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

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
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
                const_str_plain_step_size_to_bound,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_step_size_to_bound );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_step_size_to_bound, tmp_assign_source_17 );
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
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
                const_str_plain_find_active_constraints,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_find_active_constraints );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_find_active_constraints, tmp_assign_source_18 );
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
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
                const_str_plain_in_bounds,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_in_bounds );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_in_bounds, tmp_assign_source_19 );
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
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
                const_str_plain_make_strictly_feasible,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_make_strictly_feasible );
        }

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_make_strictly_feasible, tmp_assign_source_20 );
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
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
                const_str_plain_intersect_trust_region,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_intersect_trust_region );
        }

        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_intersect_trust_region, tmp_assign_source_21 );
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
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
                const_str_plain_solve_lsq_trust_region,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_solve_lsq_trust_region );
        }

        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_solve_lsq_trust_region, tmp_assign_source_22 );
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
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
                const_str_plain_solve_trust_region_2d,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_solve_trust_region_2d );
        }

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_solve_trust_region_2d, tmp_assign_source_23 );
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
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
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


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_minimize_quadratic_1d, tmp_assign_source_24 );
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
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
                const_str_plain_build_quadratic_1d,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_build_quadratic_1d );
        }

        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_build_quadratic_1d, tmp_assign_source_25 );
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
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
                const_str_plain_evaluate_quadratic,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_evaluate_quadratic );
        }

        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_evaluate_quadratic, tmp_assign_source_26 );
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
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
                const_str_plain_right_multiplied_operator,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_right_multiplied_operator );
        }

        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_right_multiplied_operator, tmp_assign_source_27 );
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
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
                const_str_plain_regularized_lsq_operator,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_regularized_lsq_operator );
        }

        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_regularized_lsq_operator, tmp_assign_source_28 );
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
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
                const_str_plain_CL_scaling_vector,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_CL_scaling_vector );
        }

        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_CL_scaling_vector, tmp_assign_source_29 );
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
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
                const_str_plain_compute_grad,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_compute_grad );
        }

        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_compute_grad, tmp_assign_source_30 );
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
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
                const_str_plain_compute_jac_scale,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_compute_jac_scale );
        }

        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_compute_jac_scale, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_25 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_25 ) )
        {
           tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
                const_str_plain_check_termination,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_check_termination );
        }

        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_check_termination, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_26 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_26 ) )
        {
           tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
                const_str_plain_update_tr_radius,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_update_tr_radius );
        }

        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_update_tr_radius, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_27 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_27 ) )
        {
           tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
                const_str_plain_scale_for_robust_loss_function,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_scale_for_robust_loss_function );
        }

        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_scale_for_robust_loss_function, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_28 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_28 ) )
        {
           tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
                const_str_plain_print_header_nonlinear,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain_print_header_nonlinear );
        }

        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_print_header_nonlinear, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_29 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_29 ) )
        {
           tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_scipy$optimize$_lsq$trf,
                const_str_plain_print_iteration_nonlinear,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain_print_iteration_nonlinear );
        }

        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_print_iteration_nonlinear, tmp_assign_source_36 );
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
    RESTORE_FRAME_EXCEPTION( frame_7324bff478b3afddbff6798d2903bf7a );
#endif
    popFrameStack();

    assertFrameObject( frame_7324bff478b3afddbff6798d2903bf7a );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7324bff478b3afddbff6798d2903bf7a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7324bff478b3afddbff6798d2903bf7a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7324bff478b3afddbff6798d2903bf7a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7324bff478b3afddbff6798d2903bf7a, exception_lineno );
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
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_FUNCTION_scipy$optimize$_lsq$trf$$$function_1_trf(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_trf, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_FUNCTION_scipy$optimize$_lsq$trf$$$function_2_select_step(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_select_step, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_FUNCTION_scipy$optimize$_lsq$trf$$$function_3_trf_bounds(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_trf_bounds, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_FUNCTION_scipy$optimize$_lsq$trf$$$function_4_trf_no_bounds(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain_trf_no_bounds, tmp_assign_source_40 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$trf, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_lsq$trf );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
