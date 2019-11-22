/* Generated code for Python module 'scipy.optimize._lsq.bvls'
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

/* The "_module_scipy$optimize$_lsq$bvls" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_lsq$bvls;
PyDictObject *moduledict_scipy$optimize$_lsq$bvls;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_dot;
static PyObject *const_str_digest_2df0cea55ad716032f6aace776b456bc;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_nonzero;
static PyObject *const_str_plain_free_set;
static PyObject *const_str_plain_g_kkt;
extern PyObject *const_str_plain_argmax;
extern PyObject *const_str_plain_argmin;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_plain_compute_kkt_optimality;
extern PyObject *const_dict_b0fdee5929e45cce232cdc90181b443c;
extern PyObject *const_str_plain_status;
extern PyObject *const_tuple_str_plain_OptimizeResult_tuple;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_d9303af9c5411886845b9a4e9a26b1c8;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_OptimizeResult;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_cost;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_active_mask;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_print_header_linear;
static PyObject *const_str_digest_90c235f75ba31ead90614bd3990e6593;
extern PyObject *const_str_plain_g;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_division;
extern PyObject *const_int_neg_1;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_T;
static PyObject *const_str_digest_b5baf0e74ab867760d29d839f9484b42;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
static PyObject *const_tuple_str_plain_norm_str_plain_lstsq_tuple;
static PyObject *const_tuple_2f4a87bb7bef906c34a587274d35bfd1_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_optimality;
extern PyObject *const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
extern PyObject *const_str_plain_fun;
static PyObject *const_tuple_5428b9af299440dd47fd452413f1b8ba_tuple;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_norm;
extern PyObject *const_float_0_5;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_aa29ce8eadbf343182ddebc446d3ed87_tuple;
extern PyObject *const_str_plain_bvls;
extern PyObject *const_str_digest_a0dfa9cb56b41095d297f9de64891d65;
static PyObject *const_str_plain_on_bound;
extern PyObject *const_str_plain_lstsq;
static PyObject *const_str_digest_89b8edc1d3aa55be109e3a06317160ca;
extern PyObject *const_str_plain_print_iteration_linear;
extern PyObject *const_str_plain_hstack;
extern PyObject *const_str_plain_common;
extern PyObject *const_str_plain_rcond;
extern PyObject *const_str_plain_initial_cost;
extern PyObject *const_str_plain_nit;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_2df0cea55ad716032f6aace776b456bc = UNSTREAM_STRING_ASCII( &constant_bin[ 4894469 ], 27, 0 );
    const_str_plain_free_set = UNSTREAM_STRING_ASCII( &constant_bin[ 4894496 ], 8, 1 );
    const_str_plain_g_kkt = UNSTREAM_STRING_ASCII( &constant_bin[ 4894504 ], 5, 1 );
    const_str_plain_compute_kkt_optimality = UNSTREAM_STRING_ASCII( &constant_bin[ 4894509 ], 22, 1 );
    const_str_digest_d9303af9c5411886845b9a4e9a26b1c8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4894531 ], 48, 0 );
    const_str_digest_90c235f75ba31ead90614bd3990e6593 = UNSTREAM_STRING_ASCII( &constant_bin[ 4894579 ], 41, 0 );
    const_str_digest_b5baf0e74ab867760d29d839f9484b42 = UNSTREAM_STRING_ASCII( &constant_bin[ 4894620 ], 24, 0 );
    const_tuple_str_plain_norm_str_plain_lstsq_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_norm_str_plain_lstsq_tuple, 0, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_str_plain_norm_str_plain_lstsq_tuple, 1, const_str_plain_lstsq ); Py_INCREF( const_str_plain_lstsq );
    const_tuple_2f4a87bb7bef906c34a587274d35bfd1_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4894644 ], 312 );
    const_tuple_5428b9af299440dd47fd452413f1b8ba_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_5428b9af299440dd47fd452413f1b8ba_tuple, 0, const_str_plain_print_header_linear ); Py_INCREF( const_str_plain_print_header_linear );
    PyTuple_SET_ITEM( const_tuple_5428b9af299440dd47fd452413f1b8ba_tuple, 1, const_str_plain_print_iteration_linear ); Py_INCREF( const_str_plain_print_iteration_linear );
    const_tuple_aa29ce8eadbf343182ddebc446d3ed87_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_aa29ce8eadbf343182ddebc446d3ed87_tuple, 0, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    const_str_plain_on_bound = UNSTREAM_STRING_ASCII( &constant_bin[ 4894702 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_aa29ce8eadbf343182ddebc446d3ed87_tuple, 1, const_str_plain_on_bound ); Py_INCREF( const_str_plain_on_bound );
    PyTuple_SET_ITEM( const_tuple_aa29ce8eadbf343182ddebc446d3ed87_tuple, 2, const_str_plain_g_kkt ); Py_INCREF( const_str_plain_g_kkt );
    PyTuple_SET_ITEM( const_tuple_aa29ce8eadbf343182ddebc446d3ed87_tuple, 3, const_str_plain_free_set ); Py_INCREF( const_str_plain_free_set );
    const_str_digest_89b8edc1d3aa55be109e3a06317160ca = UNSTREAM_STRING_ASCII( &constant_bin[ 4894956 ], 33, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_lsq$bvls( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f266cee29e7ba2d31ca88db40426a906;
static PyCodeObject *codeobj_69dfbc420a4de5a58ef9b080762f594a;
static PyCodeObject *codeobj_afd9bb25dd5ffbd4dd87466fb233f6d9;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_2df0cea55ad716032f6aace776b456bc );
    codeobj_f266cee29e7ba2d31ca88db40426a906 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_89b8edc1d3aa55be109e3a06317160ca, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_69dfbc420a4de5a58ef9b080762f594a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bvls, 19, const_tuple_2f4a87bb7bef906c34a587274d35bfd1_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_afd9bb25dd5ffbd4dd87466fb233f6d9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_compute_kkt_optimality, 11, const_tuple_aa29ce8eadbf343182ddebc446d3ed87_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$bvls$$$function_1_compute_kkt_optimality(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$bvls$$$function_2_bvls(  );


// The module function definitions.
static PyObject *impl_scipy$optimize$_lsq$bvls$$$function_1_compute_kkt_optimality( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[ 0 ];
    PyObject *par_on_bound = python_pars[ 1 ];
    PyObject *var_g_kkt = NULL;
    PyObject *var_free_set = NULL;
    struct Nuitka_FrameObject *frame_afd9bb25dd5ffbd4dd87466fb233f6d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_afd9bb25dd5ffbd4dd87466fb233f6d9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_afd9bb25dd5ffbd4dd87466fb233f6d9, codeobj_afd9bb25dd5ffbd4dd87466fb233f6d9, module_scipy$optimize$_lsq$bvls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_afd9bb25dd5ffbd4dd87466fb233f6d9 = cache_frame_afd9bb25dd5ffbd4dd87466fb233f6d9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_afd9bb25dd5ffbd4dd87466fb233f6d9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_afd9bb25dd5ffbd4dd87466fb233f6d9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_g );
        tmp_left_name_1 = par_g;
        CHECK_OBJECT( par_on_bound );
        tmp_right_name_1 = par_on_bound;
        tmp_assign_source_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_g_kkt == NULL );
        var_g_kkt = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_on_bound );
        tmp_compexpr_left_1 = par_on_bound;
        tmp_compexpr_right_1 = const_int_0;
        tmp_assign_source_2 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_free_set == NULL );
        var_free_set = tmp_assign_source_2;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 15;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_abs );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_g );
        tmp_subscribed_name_1 = par_g;
        CHECK_OBJECT( var_free_set );
        tmp_subscript_name_1 = var_free_set;
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 15;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_afd9bb25dd5ffbd4dd87466fb233f6d9->m_frame.f_lineno = 15;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_g_kkt );
        tmp_ass_subscribed_1 = var_g_kkt;
        CHECK_OBJECT( var_free_set );
        tmp_ass_subscript_1 = var_free_set;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 16;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( var_g_kkt );
        tmp_args_element_name_2 = var_g_kkt;
        frame_afd9bb25dd5ffbd4dd87466fb233f6d9->m_frame.f_lineno = 16;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_max, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_afd9bb25dd5ffbd4dd87466fb233f6d9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_afd9bb25dd5ffbd4dd87466fb233f6d9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_afd9bb25dd5ffbd4dd87466fb233f6d9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_afd9bb25dd5ffbd4dd87466fb233f6d9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_afd9bb25dd5ffbd4dd87466fb233f6d9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_afd9bb25dd5ffbd4dd87466fb233f6d9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_afd9bb25dd5ffbd4dd87466fb233f6d9,
        type_description_1,
        par_g,
        par_on_bound,
        var_g_kkt,
        var_free_set
    );


    // Release cached frame.
    if ( frame_afd9bb25dd5ffbd4dd87466fb233f6d9 == cache_frame_afd9bb25dd5ffbd4dd87466fb233f6d9 )
    {
        Py_DECREF( frame_afd9bb25dd5ffbd4dd87466fb233f6d9 );
    }
    cache_frame_afd9bb25dd5ffbd4dd87466fb233f6d9 = NULL;

    assertFrameObject( frame_afd9bb25dd5ffbd4dd87466fb233f6d9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$bvls$$$function_1_compute_kkt_optimality );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_on_bound );
    Py_DECREF( par_on_bound );
    par_on_bound = NULL;

    CHECK_OBJECT( (PyObject *)var_g_kkt );
    Py_DECREF( var_g_kkt );
    var_g_kkt = NULL;

    CHECK_OBJECT( (PyObject *)var_free_set );
    Py_DECREF( var_free_set );
    var_free_set = NULL;

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

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_on_bound );
    Py_DECREF( par_on_bound );
    par_on_bound = NULL;

    Py_XDECREF( var_g_kkt );
    var_g_kkt = NULL;

    Py_XDECREF( var_free_set );
    var_free_set = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$bvls$$$function_1_compute_kkt_optimality );
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


static PyObject *impl_scipy$optimize$_lsq$bvls$$$function_2_bvls( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *par_max_iter = python_pars[ 6 ];
    PyObject *par_verbose = python_pars[ 7 ];
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_x = NULL;
    PyObject *var_on_bound = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_free_set = NULL;
    PyObject *var_active_set = NULL;
    PyObject *var_r = NULL;
    PyObject *var_cost = NULL;
    PyObject *var_initial_cost = NULL;
    PyObject *var_g = NULL;
    PyObject *var_cost_change = NULL;
    PyObject *var_step_norm = NULL;
    PyObject *var_iteration = NULL;
    PyObject *var_optimality = NULL;
    PyObject *var_x_free_old = NULL;
    PyObject *var_A_free = NULL;
    PyObject *var_b_free = NULL;
    PyObject *var_z = NULL;
    PyObject *var_lbv = NULL;
    PyObject *var_ubv = NULL;
    PyObject *var_v = NULL;
    PyObject *var_ind = NULL;
    PyObject *var_cost_new = NULL;
    PyObject *var_termination_status = NULL;
    PyObject *var_move_to_free = NULL;
    PyObject *var_x_free = NULL;
    PyObject *var_lb_free = NULL;
    PyObject *var_ub_free = NULL;
    PyObject *var_alphas = NULL;
    PyObject *var_i = NULL;
    PyObject *var_i_free = NULL;
    PyObject *var_alpha = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    struct Nuitka_FrameObject *frame_69dfbc420a4de5a58ef9b080762f594a;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_69dfbc420a4de5a58ef9b080762f594a = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_69dfbc420a4de5a58ef9b080762f594a, codeobj_69dfbc420a4de5a58ef9b080762f594a, module_scipy$optimize$_lsq$bvls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_69dfbc420a4de5a58ef9b080762f594a = cache_frame_69dfbc420a4de5a58ef9b080762f594a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_69dfbc420a4de5a58ef9b080762f594a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_69dfbc420a4de5a58ef9b080762f594a ) == 2 ); // Frame stack

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


            exception_lineno = 20;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 20;
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 20;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 20;
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

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 20;
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

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_x_lsq );
        tmp_called_instance_1 = par_x_lsq;
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 22;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 23;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_1 = var_n;
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 23;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_zeros, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_on_bound == NULL );
        var_on_bound = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_x );
        tmp_compexpr_left_1 = var_x;
        CHECK_OBJECT( par_lb );
        tmp_compexpr_right_1 = par_lb;
        tmp_assign_source_8 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mask == NULL );
        var_mask = tmp_assign_source_8;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( par_lb );
        tmp_subscribed_name_1 = par_lb;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_1 = var_mask;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x );
        tmp_ass_subscribed_1 = var_x;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_1 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = const_int_neg_1;
        CHECK_OBJECT( var_on_bound );
        tmp_ass_subscribed_2 = var_on_bound;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_2 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_x );
        tmp_compexpr_left_2 = var_x;
        CHECK_OBJECT( par_ub );
        tmp_compexpr_right_2 = par_ub;
        tmp_assign_source_9 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_mask;
            assert( old != NULL );
            var_mask = tmp_assign_source_9;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT( par_ub );
        tmp_subscribed_name_2 = par_ub;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_2 = var_mask;
        tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x );
        tmp_ass_subscribed_3 = var_x;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_3 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_ass_subvalue_4 = const_int_pos_1;
        CHECK_OBJECT( var_on_bound );
        tmp_ass_subscribed_4 = var_on_bound;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_4 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_on_bound );
        tmp_compexpr_left_3 = var_on_bound;
        tmp_compexpr_right_3 = const_int_0;
        tmp_assign_source_10 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_free_set == NULL );
        var_free_set = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_free_set );
        tmp_operand_name_1 = var_free_set;
        tmp_assign_source_11 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_active_set == NULL );
        var_active_set = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 35;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_3 = tmp_mvar_value_2;
        CHECK_OBJECT( var_free_set );
        tmp_args_element_name_2 = var_free_set;
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_iter_arg_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_nonzero, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_3, 0, 1 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 35;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 35;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 35;
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
            PyObject *old = var_free_set;
            assert( old != NULL );
            var_free_set = tmp_assign_source_14;
            Py_INCREF( var_free_set );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_A );
        tmp_called_instance_4 = par_A;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_3 = var_x;
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_right_name_1 = par_b;
        tmp_assign_source_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_left_name_2 = const_float_0_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_3;
        CHECK_OBJECT( var_r );
        tmp_args_element_name_4 = var_r;
        CHECK_OBJECT( var_r );
        tmp_args_element_name_5 = var_r;
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_right_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cost == NULL );
        var_cost = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( var_cost );
        tmp_assign_source_17 = var_cost;
        assert( var_initial_cost == NULL );
        Py_INCREF( tmp_assign_source_17 );
        var_initial_cost = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_A );
        tmp_source_name_2 = par_A;
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_T );
        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_r );
        tmp_args_element_name_6 = var_r;
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_g == NULL );
        var_g = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = Py_None;
        assert( var_cost_change == NULL );
        Py_INCREF( tmp_assign_source_19 );
        var_cost_change = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = Py_None;
        assert( var_step_norm == NULL );
        Py_INCREF( tmp_assign_source_20 );
        var_step_norm = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = const_int_0;
        assert( var_iteration == NULL );
        Py_INCREF( tmp_assign_source_21 );
        var_iteration = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_verbose );
        tmp_compexpr_left_4 = par_verbose;
        tmp_compexpr_right_4 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_call_result_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_print_header_linear );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_print_header_linear );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "print_header_linear" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 47;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_4;
            frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 47;
            tmp_call_result_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_3;
        if ( var_free_set == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "free_set" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = var_free_set;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_size );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_int_0;
        tmp_operand_name_2 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
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
        goto loop_end_1;
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
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


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_compute_kkt_optimality );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compute_kkt_optimality );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compute_kkt_optimality" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 60;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_5;
            CHECK_OBJECT( var_g );
            tmp_args_element_name_7 = var_g;
            CHECK_OBJECT( var_on_bound );
            tmp_args_element_name_8 = var_on_bound;
            frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 60;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_optimality;
                var_optimality = tmp_assign_source_22;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_print_iteration_linear );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_print_iteration_linear );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "print_iteration_linear" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 61;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_6;
            CHECK_OBJECT( var_iteration );
            tmp_args_element_name_9 = var_iteration;
            CHECK_OBJECT( var_cost );
            tmp_args_element_name_10 = var_cost;
            CHECK_OBJECT( var_cost_change );
            tmp_args_element_name_11 = var_cost_change;
            CHECK_OBJECT( var_step_norm );
            tmp_args_element_name_12 = var_step_norm;
            CHECK_OBJECT( var_optimality );
            tmp_args_element_name_13 = var_optimality;
            frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 61;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_3, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_iteration );
        tmp_left_name_3 = var_iteration;
        tmp_right_name_3 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = tmp_left_name_3;
        var_iteration = tmp_assign_source_23;

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( var_x );
        tmp_subscribed_name_3 = var_x;
        if ( var_free_set == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "free_set" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_3 = var_free_set;
        tmp_called_instance_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_called_instance_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 65;
        tmp_assign_source_24 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_copy );
        Py_DECREF( tmp_called_instance_7 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_x_free_old;
            var_x_free_old = tmp_assign_source_24;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_A );
        tmp_subscribed_name_4 = par_A;
        tmp_tuple_element_1 = const_slice_none_none_none;
        tmp_subscript_name_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_subscript_name_4, 0, tmp_tuple_element_1 );
        if ( var_free_set == NULL )
        {
            Py_DECREF( tmp_subscript_name_4 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "free_set" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 67;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_free_set;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_subscript_name_4, 1, tmp_tuple_element_1 );
        tmp_assign_source_25 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscript_name_4 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_A_free;
            var_A_free = tmp_assign_source_25;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( par_b );
        tmp_left_name_4 = par_b;
        CHECK_OBJECT( par_A );
        tmp_source_name_4 = par_A;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dot );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x );
        tmp_left_name_5 = var_x;
        CHECK_OBJECT( var_active_set );
        tmp_right_name_5 = var_active_set;
        tmp_args_element_name_14 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_args_element_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_26 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_b_free;
            var_b_free = tmp_assign_source_26;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_subscript_name_5;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_lstsq );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lstsq );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "lstsq" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_7;
        CHECK_OBJECT( var_A_free );
        tmp_tuple_element_2 = var_A_free;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_b_free );
        tmp_tuple_element_2 = var_b_free;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_b0fdee5929e45cce232cdc90181b443c );
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 69;
        tmp_subscribed_name_5 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_5 = const_int_0;
        tmp_assign_source_27 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
        Py_DECREF( tmp_subscribed_name_5 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_z;
            var_z = tmp_assign_source_27;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        CHECK_OBJECT( var_z );
        tmp_compexpr_left_7 = var_z;
        CHECK_OBJECT( par_lb );
        tmp_subscribed_name_6 = par_lb;
        if ( var_free_set == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "free_set" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_6 = var_free_set;
        tmp_compexpr_right_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_compexpr_right_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_28 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_right_7 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_lbv;
            var_lbv = tmp_assign_source_28;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        CHECK_OBJECT( var_z );
        tmp_compexpr_left_8 = var_z;
        CHECK_OBJECT( par_ub );
        tmp_subscribed_name_7 = par_ub;
        if ( var_free_set == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "free_set" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_7 = var_free_set;
        tmp_compexpr_right_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        if ( tmp_compexpr_right_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_29 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        Py_DECREF( tmp_compexpr_right_8 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ubv;
            var_ubv = tmp_assign_source_29;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( var_lbv );
        tmp_left_name_6 = var_lbv;
        CHECK_OBJECT( var_ubv );
        tmp_right_name_6 = var_ubv;
        tmp_assign_source_30 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_30;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_15;
        int tmp_truth_name_1;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = tmp_mvar_value_8;
        CHECK_OBJECT( var_lbv );
        tmp_args_element_name_15 = var_lbv;
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 75;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_any, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
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
            PyObject *tmp_assign_source_31;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_subscript_name_8;
            if ( var_free_set == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "free_set" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 76;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_8 = var_free_set;
            CHECK_OBJECT( var_lbv );
            tmp_subscript_name_8 = var_lbv;
            tmp_assign_source_31 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_ind;
                var_ind = tmp_assign_source_31;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_subscribed_name_9;
            PyObject *tmp_subscript_name_9;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            CHECK_OBJECT( par_lb );
            tmp_subscribed_name_9 = par_lb;
            CHECK_OBJECT( var_ind );
            tmp_subscript_name_9 = var_ind;
            tmp_ass_subvalue_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
            if ( tmp_ass_subvalue_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x );
            tmp_ass_subscribed_5 = var_x;
            CHECK_OBJECT( var_ind );
            tmp_ass_subscript_5 = var_ind;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
            Py_DECREF( tmp_ass_subvalue_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            tmp_ass_subvalue_6 = Py_True;
            CHECK_OBJECT( var_active_set );
            tmp_ass_subscribed_6 = var_active_set;
            CHECK_OBJECT( var_ind );
            tmp_ass_subscript_6 = var_ind;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 78;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_ass_subscript_7;
            tmp_ass_subvalue_7 = const_int_neg_1;
            CHECK_OBJECT( var_on_bound );
            tmp_ass_subscribed_7 = var_on_bound;
            CHECK_OBJECT( var_ind );
            tmp_ass_subscript_7 = var_ind;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_16;
        int tmp_truth_name_2;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = tmp_mvar_value_9;
        CHECK_OBJECT( var_ubv );
        tmp_args_element_name_16 = var_ubv;
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_any, call_args );
        }

        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_4 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_4 );

            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_4 );
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
            PyObject *tmp_assign_source_32;
            PyObject *tmp_subscribed_name_10;
            PyObject *tmp_subscript_name_10;
            if ( var_free_set == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "free_set" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 82;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_10 = var_free_set;
            CHECK_OBJECT( var_ubv );
            tmp_subscript_name_10 = var_ubv;
            tmp_assign_source_32 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
            if ( tmp_assign_source_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 82;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_ind;
                var_ind = tmp_assign_source_32;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_8;
            PyObject *tmp_subscribed_name_11;
            PyObject *tmp_subscript_name_11;
            PyObject *tmp_ass_subscribed_8;
            PyObject *tmp_ass_subscript_8;
            CHECK_OBJECT( par_ub );
            tmp_subscribed_name_11 = par_ub;
            CHECK_OBJECT( var_ind );
            tmp_subscript_name_11 = var_ind;
            tmp_ass_subvalue_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
            if ( tmp_ass_subvalue_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 83;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x );
            tmp_ass_subscribed_8 = var_x;
            CHECK_OBJECT( var_ind );
            tmp_ass_subscript_8 = var_ind;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8 );
            Py_DECREF( tmp_ass_subvalue_8 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 83;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_9;
            PyObject *tmp_ass_subscribed_9;
            PyObject *tmp_ass_subscript_9;
            tmp_ass_subvalue_9 = Py_True;
            CHECK_OBJECT( var_active_set );
            tmp_ass_subscribed_9 = var_active_set;
            CHECK_OBJECT( var_ind );
            tmp_ass_subscript_9 = var_ind;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_10;
            PyObject *tmp_ass_subscribed_10;
            PyObject *tmp_ass_subscript_10;
            tmp_ass_subvalue_10 = const_int_pos_1;
            CHECK_OBJECT( var_on_bound );
            tmp_ass_subscribed_10 = var_on_bound;
            CHECK_OBJECT( var_ind );
            tmp_ass_subscript_10 = var_ind;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_subscribed_name_12;
        PyObject *tmp_subscript_name_12;
        PyObject *tmp_operand_name_3;
        if ( var_free_set == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "free_set" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_12 = var_free_set;
        CHECK_OBJECT( var_v );
        tmp_operand_name_3 = var_v;
        tmp_subscript_name_12 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_3 );
        if ( tmp_subscript_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_33 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
        Py_DECREF( tmp_subscript_name_12 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ind;
            var_ind = tmp_assign_source_33;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_11;
        PyObject *tmp_subscribed_name_13;
        PyObject *tmp_subscript_name_13;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_ass_subscribed_11;
        PyObject *tmp_ass_subscript_11;
        CHECK_OBJECT( var_z );
        tmp_subscribed_name_13 = var_z;
        CHECK_OBJECT( var_v );
        tmp_operand_name_4 = var_v;
        tmp_subscript_name_13 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_4 );
        if ( tmp_subscript_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
        Py_DECREF( tmp_subscript_name_13 );
        if ( tmp_ass_subvalue_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x );
        tmp_ass_subscribed_11 = var_x;
        CHECK_OBJECT( var_ind );
        tmp_ass_subscript_11 = var_ind;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11 );
        Py_DECREF( tmp_ass_subvalue_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_left_name_7;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( par_A );
        tmp_called_instance_10 = par_A;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_17 = var_x;
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_left_name_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_right_name_7 = par_b;
        tmp_assign_source_34 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_7 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r;
            assert( old != NULL );
            var_r = tmp_assign_source_34;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        tmp_left_name_8 = const_float_0_5;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 91;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_11 = tmp_mvar_value_10;
        CHECK_OBJECT( var_r );
        tmp_args_element_name_18 = var_r;
        CHECK_OBJECT( var_r );
        tmp_args_element_name_19 = var_r;
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
            tmp_right_name_8 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_11, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_35 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_cost_new;
            var_cost_new = tmp_assign_source_35;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT( var_cost );
        tmp_left_name_9 = var_cost;
        CHECK_OBJECT( var_cost_new );
        tmp_right_name_9 = var_cost_new;
        tmp_assign_source_36 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_cost_change;
            assert( old != NULL );
            var_cost_change = tmp_assign_source_36;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT( var_cost_new );
        tmp_assign_source_37 = var_cost_new;
        {
            PyObject *old = var_cost;
            assert( old != NULL );
            var_cost = tmp_assign_source_37;
            Py_INCREF( var_cost );
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_20;
        CHECK_OBJECT( par_A );
        tmp_source_name_5 = par_A;
        tmp_called_instance_12 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_T );
        if ( tmp_called_instance_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_r );
        tmp_args_element_name_20 = var_r;
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_assign_source_38 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_12 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_g;
            assert( old != NULL );
            var_g = tmp_assign_source_38;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_left_name_10;
        PyObject *tmp_subscribed_name_14;
        PyObject *tmp_subscript_name_14;
        PyObject *tmp_right_name_10;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_norm );

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

            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_11;
        CHECK_OBJECT( var_x );
        tmp_subscribed_name_14 = var_x;
        if ( var_free_set == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "free_set" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_14 = var_free_set;
        tmp_left_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x_free_old );
        tmp_right_name_10 = var_x_free_old;
        tmp_args_element_name_21 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_10 );
        if ( tmp_args_element_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = { tmp_args_element_name_21 };
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_21 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_step_norm;
            assert( old != NULL );
            var_step_norm = tmp_assign_source_39;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_22;
        int tmp_truth_name_3;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_13 = tmp_mvar_value_12;
        CHECK_OBJECT( var_v );
        tmp_args_element_name_22 = var_v;
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = { tmp_args_element_name_22 };
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_any, call_args );
        }

        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_5 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_5 );

            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_5 );
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
            PyObject *tmp_assign_source_40;
            PyObject *tmp_subscribed_name_15;
            PyObject *tmp_subscript_name_15;
            PyObject *tmp_operand_name_5;
            if ( var_free_set == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "free_set" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 98;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_15 = var_free_set;
            CHECK_OBJECT( var_v );
            tmp_operand_name_5 = var_v;
            tmp_subscript_name_15 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_5 );
            if ( tmp_subscript_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_40 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
            Py_DECREF( tmp_subscript_name_15 );
            if ( tmp_assign_source_40 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_free_set;
                var_free_set = tmp_assign_source_40;
                Py_XDECREF( old );
            }

        }
        goto branch_end_6;
        branch_no_6:;
        goto loop_end_1;
        branch_end_6:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        CHECK_OBJECT( par_max_iter );
        tmp_compexpr_left_9 = par_max_iter;
        tmp_compexpr_right_9 = Py_None;
        tmp_condition_result_7 = ( tmp_compexpr_left_9 == tmp_compexpr_right_9 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_41;
            CHECK_OBJECT( var_n );
            tmp_assign_source_41 = var_n;
            {
                PyObject *old = par_max_iter;
                assert( old != NULL );
                par_max_iter = tmp_assign_source_41;
                Py_INCREF( par_max_iter );
                Py_DECREF( old );
            }

        }
        branch_no_7:;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        CHECK_OBJECT( par_max_iter );
        tmp_left_name_11 = par_max_iter;
        if ( var_iteration == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "iteration" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_11 = var_iteration;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_11, tmp_right_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_42 = tmp_left_name_11;
        par_max_iter = tmp_assign_source_42;

    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = Py_None;
        assert( var_termination_status == NULL );
        Py_INCREF( tmp_assign_source_43 );
        var_termination_status = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_compute_kkt_optimality );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compute_kkt_optimality );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compute_kkt_optimality" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_13;
        if ( var_g == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_23 = var_g;
        CHECK_OBJECT( var_on_bound );
        tmp_args_element_name_24 = var_on_bound;
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 110;
        {
            PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24 };
            tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
        }

        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_optimality;
            var_optimality = tmp_assign_source_44;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        if ( var_iteration == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "iteration" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 111;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_xrange_low_1 = var_iteration;
        CHECK_OBJECT( par_max_iter );
        tmp_xrange_high_1 = par_max_iter;
        tmp_iter_arg_3 = BUILTIN_XRANGE2( tmp_xrange_low_1, tmp_xrange_high_1 );
        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_45 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_45;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_46;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_46 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_46 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 111;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_46;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_47 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_iteration;
            var_iteration = tmp_assign_source_47;
            Py_INCREF( var_iteration );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        CHECK_OBJECT( par_verbose );
        tmp_compexpr_left_10 = par_verbose;
        tmp_compexpr_right_10 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
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
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_14;
            PyObject *tmp_call_result_6;
            PyObject *tmp_args_element_name_25;
            PyObject *tmp_args_element_name_26;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_args_element_name_28;
            PyObject *tmp_args_element_name_29;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_print_iteration_linear );

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

                exception_lineno = 113;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_called_name_8 = tmp_mvar_value_14;
            CHECK_OBJECT( var_iteration );
            tmp_args_element_name_25 = var_iteration;
            if ( var_cost == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cost" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 113;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_args_element_name_26 = var_cost;
            if ( var_cost_change == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cost_change" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 113;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_args_element_name_27 = var_cost_change;
            if ( var_step_norm == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "step_norm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 114;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_args_element_name_28 = var_step_norm;
            CHECK_OBJECT( var_optimality );
            tmp_args_element_name_29 = var_optimality;
            frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 113;
            {
                PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29 };
                tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_8, call_args );
            }

            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 113;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        CHECK_OBJECT( var_optimality );
        tmp_compexpr_left_11 = var_optimality;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_11 = par_tol;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
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
            PyObject *tmp_assign_source_48;
            tmp_assign_source_48 = const_int_pos_1;
            {
                PyObject *old = var_termination_status;
                var_termination_status = tmp_assign_source_48;
                Py_INCREF( var_termination_status );
                Py_XDECREF( old );
            }

        }
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        if ( var_termination_status == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "termination_status" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_compexpr_left_12 = var_termination_status;
        tmp_compexpr_right_12 = Py_None;
        tmp_condition_result_10 = ( tmp_compexpr_left_12 != tmp_compexpr_right_12 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_source_name_6 = tmp_mvar_value_15;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_argmax );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if ( var_g == NULL )
        {
            Py_DECREF( tmp_called_name_9 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_left_name_12 = var_g;
        CHECK_OBJECT( var_on_bound );
        tmp_right_name_12 = var_on_bound;
        tmp_args_element_name_30 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_args_element_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = { tmp_args_element_name_30 };
            tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_30 );
        if ( tmp_assign_source_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_move_to_free;
            var_move_to_free = tmp_assign_source_49;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_12;
        PyObject *tmp_ass_subscribed_12;
        PyObject *tmp_ass_subscript_12;
        tmp_ass_subvalue_12 = const_int_0;
        CHECK_OBJECT( var_on_bound );
        tmp_ass_subscribed_12 = var_on_bound;
        CHECK_OBJECT( var_move_to_free );
        tmp_ass_subscript_12 = var_move_to_free;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        CHECK_OBJECT( var_on_bound );
        tmp_compexpr_left_13 = var_on_bound;
        tmp_compexpr_right_13 = const_int_0;
        tmp_assign_source_50 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
        if ( tmp_assign_source_50 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_free_set;
            var_free_set = tmp_assign_source_50;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_operand_name_6;
        CHECK_OBJECT( var_free_set );
        tmp_operand_name_6 = var_free_set;
        tmp_assign_source_51 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_6 );
        if ( tmp_assign_source_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_active_set;
            assert( old != NULL );
            var_active_set = tmp_assign_source_51;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_31;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_instance_14 = tmp_mvar_value_16;
        CHECK_OBJECT( var_free_set );
        tmp_args_element_name_31 = var_free_set;
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = { tmp_args_element_name_31 };
            tmp_iter_arg_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_nonzero, call_args );
        }

        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_52 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_52;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_53 = UNPACK_NEXT( tmp_unpack_4, 0, 1 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 126;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_53;
            Py_XDECREF( old );
        }

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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 126;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 126;
            goto try_except_handler_8;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
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

    goto try_except_handler_7;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
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

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_54 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_free_set;
            assert( old != NULL );
            var_free_set = tmp_assign_source_54;
            Py_INCREF( var_free_set );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_subscribed_name_16;
        PyObject *tmp_subscript_name_16;
        CHECK_OBJECT( var_x );
        tmp_subscribed_name_16 = var_x;
        CHECK_OBJECT( var_free_set );
        tmp_subscript_name_16 = var_free_set;
        tmp_assign_source_55 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
        if ( tmp_assign_source_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_x_free;
            var_x_free = tmp_assign_source_55;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_instance_15;
        CHECK_OBJECT( var_x_free );
        tmp_called_instance_15 = var_x_free;
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 129;
        tmp_assign_source_56 = CALL_METHOD_NO_ARGS( tmp_called_instance_15, const_str_plain_copy );
        if ( tmp_assign_source_56 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_x_free_old;
            var_x_free_old = tmp_assign_source_56;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_subscribed_name_17;
        PyObject *tmp_subscript_name_17;
        CHECK_OBJECT( par_lb );
        tmp_subscribed_name_17 = par_lb;
        CHECK_OBJECT( var_free_set );
        tmp_subscript_name_17 = var_free_set;
        tmp_assign_source_57 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_17, tmp_subscript_name_17 );
        if ( tmp_assign_source_57 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_lb_free;
            var_lb_free = tmp_assign_source_57;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_subscribed_name_18;
        PyObject *tmp_subscript_name_18;
        CHECK_OBJECT( par_ub );
        tmp_subscribed_name_18 = par_ub;
        CHECK_OBJECT( var_free_set );
        tmp_subscript_name_18 = var_free_set;
        tmp_assign_source_58 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_18, tmp_subscript_name_18 );
        if ( tmp_assign_source_58 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_ub_free;
            var_ub_free = tmp_assign_source_58;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_subscribed_name_19;
        PyObject *tmp_subscript_name_19;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( par_A );
        tmp_subscribed_name_19 = par_A;
        tmp_tuple_element_3 = const_slice_none_none_none;
        tmp_subscript_name_19 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_subscript_name_19, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_free_set );
        tmp_tuple_element_3 = var_free_set;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_subscript_name_19, 1, tmp_tuple_element_3 );
        tmp_assign_source_59 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_19, tmp_subscript_name_19 );
        Py_DECREF( tmp_subscript_name_19 );
        if ( tmp_assign_source_59 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_A_free;
            var_A_free = tmp_assign_source_59;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_called_name_10;
        PyObject *tmp_source_name_7;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        CHECK_OBJECT( par_b );
        tmp_left_name_13 = par_b;
        CHECK_OBJECT( par_A );
        tmp_source_name_7 = par_A;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_dot );
        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_x );
        tmp_left_name_14 = var_x;
        CHECK_OBJECT( var_active_set );
        tmp_right_name_14 = var_active_set;
        tmp_args_element_name_32 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        if ( tmp_args_element_name_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );

            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = { tmp_args_element_name_32 };
            tmp_right_name_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_32 );
        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_60 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_assign_source_60 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_b_free;
            var_b_free = tmp_assign_source_60;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_subscribed_name_20;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_subscript_name_20;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_lstsq );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lstsq );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "lstsq" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_name_11 = tmp_mvar_value_17;
        CHECK_OBJECT( var_A_free );
        tmp_tuple_element_4 = var_A_free;
        tmp_args_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_b_free );
        tmp_tuple_element_4 = var_b_free;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_b0fdee5929e45cce232cdc90181b443c );
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 135;
        tmp_subscribed_name_20 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_subscribed_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_name_20 = const_int_0;
        tmp_assign_source_61 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_20, tmp_subscript_name_20, 0 );
        Py_DECREF( tmp_subscribed_name_20 );
        if ( tmp_assign_source_61 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_z;
            var_z = tmp_assign_source_61;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_name_12;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_source_name_8 = tmp_mvar_value_18;
        tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_nonzero );
        if ( tmp_called_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT( var_z );
        tmp_compexpr_left_14 = var_z;
        CHECK_OBJECT( var_lb_free );
        tmp_compexpr_right_14 = var_lb_free;
        tmp_args_element_name_33 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
        if ( tmp_args_element_name_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );

            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = { tmp_args_element_name_33 };
            tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_args_element_name_33 );
        if ( tmp_iter_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_62 = MAKE_ITERATOR( tmp_iter_arg_5 );
        Py_DECREF( tmp_iter_arg_5 );
        if ( tmp_assign_source_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_62;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_63 = UNPACK_NEXT( tmp_unpack_5, 0, 1 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 137;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_63;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 137;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 137;
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

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_6;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    {
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
        tmp_assign_source_64 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_lbv;
            var_lbv = tmp_assign_source_64;
            Py_INCREF( var_lbv );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_name_13;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_source_name_9 = tmp_mvar_value_19;
        tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_nonzero );
        if ( tmp_called_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT( var_z );
        tmp_compexpr_left_15 = var_z;
        CHECK_OBJECT( var_ub_free );
        tmp_compexpr_right_15 = var_ub_free;
        tmp_args_element_name_34 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
        if ( tmp_args_element_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );

            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = { tmp_args_element_name_34 };
            tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_34 );
        if ( tmp_iter_arg_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_65 = MAKE_ITERATOR( tmp_iter_arg_6 );
        Py_DECREF( tmp_iter_arg_6 );
        if ( tmp_assign_source_65 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__source_iter;
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_65;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_66 = UNPACK_NEXT( tmp_unpack_6, 0, 1 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 138;
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_1;
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_66;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 138;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 138;
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

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_6;
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
    Py_DECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    {
        PyObject *tmp_assign_source_67;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
        tmp_assign_source_67 = tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = var_ubv;
            var_ubv = tmp_assign_source_67;
            Py_INCREF( var_ubv );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_tuple_element_5;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_16 = tmp_mvar_value_20;
        CHECK_OBJECT( var_lbv );
        tmp_tuple_element_5 = var_lbv;
        tmp_args_element_name_35 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_element_name_35, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_ubv );
        tmp_tuple_element_5 = var_ubv;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_element_name_35, 1, tmp_tuple_element_5 );
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 139;
        {
            PyObject *call_args[] = { tmp_args_element_name_35 };
            tmp_assign_source_68 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_16, const_str_plain_hstack, call_args );
        }

        Py_DECREF( tmp_args_element_name_35 );
        if ( tmp_assign_source_68 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_68;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( var_v );
        tmp_source_name_10 = var_v;
        tmp_compexpr_left_16 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_size );
        if ( tmp_compexpr_left_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_16 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_16, tmp_compexpr_right_16 );
        Py_DECREF( tmp_compexpr_left_16 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
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
            PyObject *tmp_assign_source_69;
            PyObject *tmp_left_name_15;
            PyObject *tmp_called_name_14;
            PyObject *tmp_source_name_11;
            PyObject *tmp_mvar_value_21;
            PyObject *tmp_args_element_name_36;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_left_name_16;
            PyObject *tmp_subscribed_name_21;
            PyObject *tmp_subscript_name_21;
            PyObject *tmp_right_name_15;
            PyObject *tmp_subscribed_name_22;
            PyObject *tmp_subscript_name_22;
            PyObject *tmp_left_name_17;
            PyObject *tmp_subscribed_name_23;
            PyObject *tmp_subscript_name_23;
            PyObject *tmp_right_name_16;
            PyObject *tmp_subscribed_name_24;
            PyObject *tmp_subscript_name_24;
            PyObject *tmp_right_name_17;
            PyObject *tmp_left_name_18;
            PyObject *tmp_subscribed_name_25;
            PyObject *tmp_subscript_name_25;
            PyObject *tmp_right_name_18;
            PyObject *tmp_subscribed_name_26;
            PyObject *tmp_subscript_name_26;
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 142;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_source_name_11 = tmp_mvar_value_21;
            tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_hstack );
            if ( tmp_called_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 142;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( var_lb_free );
            tmp_subscribed_name_21 = var_lb_free;
            CHECK_OBJECT( var_lbv );
            tmp_subscript_name_21 = var_lbv;
            tmp_left_name_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_21, tmp_subscript_name_21 );
            if ( tmp_left_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );

                exception_lineno = 143;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( var_x_free );
            tmp_subscribed_name_22 = var_x_free;
            CHECK_OBJECT( var_lbv );
            tmp_subscript_name_22 = var_lbv;
            tmp_right_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_22, tmp_subscript_name_22 );
            if ( tmp_right_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );
                Py_DECREF( tmp_left_name_16 );

                exception_lineno = 143;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_tuple_element_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_15 );
            Py_DECREF( tmp_left_name_16 );
            Py_DECREF( tmp_right_name_15 );
            if ( tmp_tuple_element_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );

                exception_lineno = 143;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_args_element_name_36 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_element_name_36, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( var_ub_free );
            tmp_subscribed_name_23 = var_ub_free;
            CHECK_OBJECT( var_ubv );
            tmp_subscript_name_23 = var_ubv;
            tmp_left_name_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_23, tmp_subscript_name_23 );
            if ( tmp_left_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );
                Py_DECREF( tmp_args_element_name_36 );

                exception_lineno = 144;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( var_x_free );
            tmp_subscribed_name_24 = var_x_free;
            CHECK_OBJECT( var_ubv );
            tmp_subscript_name_24 = var_ubv;
            tmp_right_name_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_24, tmp_subscript_name_24 );
            if ( tmp_right_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );
                Py_DECREF( tmp_args_element_name_36 );
                Py_DECREF( tmp_left_name_17 );

                exception_lineno = 144;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_tuple_element_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_16 );
            Py_DECREF( tmp_left_name_17 );
            Py_DECREF( tmp_right_name_16 );
            if ( tmp_tuple_element_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );
                Py_DECREF( tmp_args_element_name_36 );

                exception_lineno = 144;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            PyTuple_SET_ITEM( tmp_args_element_name_36, 1, tmp_tuple_element_6 );
            frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 142;
            {
                PyObject *call_args[] = { tmp_args_element_name_36 };
                tmp_left_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
            }

            Py_DECREF( tmp_called_name_14 );
            Py_DECREF( tmp_args_element_name_36 );
            if ( tmp_left_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 142;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( var_z );
            tmp_subscribed_name_25 = var_z;
            CHECK_OBJECT( var_v );
            tmp_subscript_name_25 = var_v;
            tmp_left_name_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_25, tmp_subscript_name_25 );
            if ( tmp_left_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_15 );

                exception_lineno = 144;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( var_x_free );
            tmp_subscribed_name_26 = var_x_free;
            CHECK_OBJECT( var_v );
            tmp_subscript_name_26 = var_v;
            tmp_right_name_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_26, tmp_subscript_name_26 );
            if ( tmp_right_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_15 );
                Py_DECREF( tmp_left_name_18 );

                exception_lineno = 144;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_right_name_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_right_name_18 );
            if ( tmp_right_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_15 );

                exception_lineno = 144;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_69 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_17 );
            Py_DECREF( tmp_left_name_15 );
            Py_DECREF( tmp_right_name_17 );
            if ( tmp_assign_source_69 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 142;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = var_alphas;
                var_alphas = tmp_assign_source_69;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_70;
            PyObject *tmp_called_instance_17;
            PyObject *tmp_mvar_value_22;
            PyObject *tmp_args_element_name_37;
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 146;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_called_instance_17 = tmp_mvar_value_22;
            CHECK_OBJECT( var_alphas );
            tmp_args_element_name_37 = var_alphas;
            frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 146;
            {
                PyObject *call_args[] = { tmp_args_element_name_37 };
                tmp_assign_source_70 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_17, const_str_plain_argmin, call_args );
            }

            if ( tmp_assign_source_70 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_70;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_71;
            PyObject *tmp_subscribed_name_27;
            PyObject *tmp_subscript_name_27;
            CHECK_OBJECT( var_v );
            tmp_subscribed_name_27 = var_v;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_27 = var_i;
            tmp_assign_source_71 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_27, tmp_subscript_name_27 );
            if ( tmp_assign_source_71 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 147;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = var_i_free;
                var_i_free = tmp_assign_source_71;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_72;
            PyObject *tmp_subscribed_name_28;
            PyObject *tmp_subscript_name_28;
            CHECK_OBJECT( var_alphas );
            tmp_subscribed_name_28 = var_alphas;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_28 = var_i;
            tmp_assign_source_72 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_28, tmp_subscript_name_28 );
            if ( tmp_assign_source_72 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = var_alpha;
                var_alpha = tmp_assign_source_72;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_73;
            PyObject *tmp_left_name_19;
            PyObject *tmp_right_name_19;
            PyObject *tmp_left_name_20;
            PyObject *tmp_right_name_20;
            CHECK_OBJECT( var_x_free );
            tmp_left_name_19 = var_x_free;
            tmp_left_name_20 = const_int_pos_1;
            CHECK_OBJECT( var_alpha );
            tmp_right_name_20 = var_alpha;
            tmp_right_name_19 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_20, tmp_right_name_20 );
            if ( tmp_right_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_19, tmp_right_name_19 );
            Py_DECREF( tmp_right_name_19 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_73 = tmp_left_name_19;
            var_x_free = tmp_assign_source_73;

        }
        {
            PyObject *tmp_assign_source_74;
            PyObject *tmp_left_name_21;
            PyObject *tmp_right_name_21;
            PyObject *tmp_left_name_22;
            PyObject *tmp_right_name_22;
            CHECK_OBJECT( var_x_free );
            tmp_left_name_21 = var_x_free;
            CHECK_OBJECT( var_alpha );
            tmp_left_name_22 = var_alpha;
            CHECK_OBJECT( var_z );
            tmp_right_name_22 = var_z;
            tmp_right_name_21 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_22, tmp_right_name_22 );
            if ( tmp_right_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 151;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_21, tmp_right_name_21 );
            Py_DECREF( tmp_right_name_21 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 151;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_74 = tmp_left_name_21;
            var_x_free = tmp_assign_source_74;

        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_17;
            PyObject *tmp_compexpr_right_17;
            PyObject *tmp_source_name_12;
            CHECK_OBJECT( var_i );
            tmp_compexpr_left_17 = var_i;
            CHECK_OBJECT( var_lbv );
            tmp_source_name_12 = var_lbv;
            tmp_compexpr_right_17 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_size );
            if ( tmp_compexpr_right_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 153;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_17, tmp_compexpr_right_17 );
            Py_DECREF( tmp_compexpr_right_17 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 153;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
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
                PyObject *tmp_ass_subvalue_13;
                PyObject *tmp_ass_subscribed_13;
                PyObject *tmp_ass_subscript_13;
                PyObject *tmp_subscribed_name_29;
                PyObject *tmp_subscript_name_29;
                tmp_ass_subvalue_13 = const_int_neg_1;
                CHECK_OBJECT( var_on_bound );
                tmp_ass_subscribed_13 = var_on_bound;
                CHECK_OBJECT( var_free_set );
                tmp_subscribed_name_29 = var_free_set;
                CHECK_OBJECT( var_i_free );
                tmp_subscript_name_29 = var_i_free;
                tmp_ass_subscript_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_29, tmp_subscript_name_29 );
                if ( tmp_ass_subscript_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 154;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13 );
                Py_DECREF( tmp_ass_subscript_13 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 154;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
            }
            goto branch_end_12;
            branch_no_12:;
            {
                PyObject *tmp_ass_subvalue_14;
                PyObject *tmp_ass_subscribed_14;
                PyObject *tmp_ass_subscript_14;
                PyObject *tmp_subscribed_name_30;
                PyObject *tmp_subscript_name_30;
                tmp_ass_subvalue_14 = const_int_pos_1;
                CHECK_OBJECT( var_on_bound );
                tmp_ass_subscribed_14 = var_on_bound;
                CHECK_OBJECT( var_free_set );
                tmp_subscribed_name_30 = var_free_set;
                CHECK_OBJECT( var_i_free );
                tmp_subscript_name_30 = var_i_free;
                tmp_ass_subscript_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_30, tmp_subscript_name_30 );
                if ( tmp_ass_subscript_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 156;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14 );
                Py_DECREF( tmp_ass_subscript_14 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 156;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
            }
            branch_end_12:;
        }
        goto branch_end_11;
        branch_no_11:;
        {
            PyObject *tmp_assign_source_75;
            CHECK_OBJECT( var_z );
            tmp_assign_source_75 = var_z;
            {
                PyObject *old = var_x_free;
                assert( old != NULL );
                var_x_free = tmp_assign_source_75;
                Py_INCREF( var_x_free );
                Py_DECREF( old );
            }

        }
        branch_end_11:;
    }
    {
        PyObject *tmp_ass_subvalue_15;
        PyObject *tmp_ass_subscribed_15;
        PyObject *tmp_ass_subscript_15;
        CHECK_OBJECT( var_x_free );
        tmp_ass_subvalue_15 = var_x_free;
        CHECK_OBJECT( var_x );
        tmp_ass_subscribed_15 = var_x;
        CHECK_OBJECT( var_free_set );
        tmp_ass_subscript_15 = var_free_set;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_left_name_23;
        PyObject *tmp_right_name_23;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_name_15 = tmp_mvar_value_23;
        CHECK_OBJECT( var_x_free );
        tmp_left_name_23 = var_x_free;
        CHECK_OBJECT( var_x_free_old );
        tmp_right_name_23 = var_x_free_old;
        tmp_args_element_name_38 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_23, tmp_right_name_23 );
        if ( tmp_args_element_name_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 161;
        {
            PyObject *call_args[] = { tmp_args_element_name_38 };
            tmp_assign_source_76 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        Py_DECREF( tmp_args_element_name_38 );
        if ( tmp_assign_source_76 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_step_norm;
            var_step_norm = tmp_assign_source_76;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_left_name_24;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_args_element_name_39;
        PyObject *tmp_right_name_24;
        CHECK_OBJECT( par_A );
        tmp_called_instance_18 = par_A;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_39 = var_x;
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 163;
        {
            PyObject *call_args[] = { tmp_args_element_name_39 };
            tmp_left_name_24 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_18, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( par_b );
        tmp_right_name_24 = par_b;
        tmp_assign_source_77 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_24, tmp_right_name_24 );
        Py_DECREF( tmp_left_name_24 );
        if ( tmp_assign_source_77 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_77;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_left_name_25;
        PyObject *tmp_right_name_25;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_40;
        PyObject *tmp_args_element_name_41;
        tmp_left_name_25 = const_float_0_5;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_19 = tmp_mvar_value_24;
        CHECK_OBJECT( var_r );
        tmp_args_element_name_40 = var_r;
        CHECK_OBJECT( var_r );
        tmp_args_element_name_41 = var_r;
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = { tmp_args_element_name_40, tmp_args_element_name_41 };
            tmp_right_name_25 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_19, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_78 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_25, tmp_right_name_25 );
        Py_DECREF( tmp_right_name_25 );
        if ( tmp_assign_source_78 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_cost_new;
            var_cost_new = tmp_assign_source_78;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_left_name_26;
        PyObject *tmp_right_name_26;
        if ( var_cost == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cost" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_left_name_26 = var_cost;
        CHECK_OBJECT( var_cost_new );
        tmp_right_name_26 = var_cost_new;
        tmp_assign_source_79 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_26, tmp_right_name_26 );
        if ( tmp_assign_source_79 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_cost_change;
            var_cost_change = tmp_assign_source_79;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_18;
        PyObject *tmp_compexpr_right_18;
        PyObject *tmp_left_name_27;
        PyObject *tmp_right_name_27;
        CHECK_OBJECT( var_cost_change );
        tmp_compexpr_left_18 = var_cost_change;
        CHECK_OBJECT( par_tol );
        tmp_left_name_27 = par_tol;
        if ( var_cost == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cost" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 167;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_right_name_27 = var_cost;
        tmp_compexpr_right_18 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_27, tmp_right_name_27 );
        if ( tmp_compexpr_right_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_18, tmp_compexpr_right_18 );
        Py_DECREF( tmp_compexpr_right_18 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
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
            PyObject *tmp_assign_source_80;
            tmp_assign_source_80 = const_int_pos_2;
            {
                PyObject *old = var_termination_status;
                var_termination_status = tmp_assign_source_80;
                Py_INCREF( var_termination_status );
                Py_XDECREF( old );
            }

        }
        branch_no_13:;
    }
    {
        PyObject *tmp_assign_source_81;
        CHECK_OBJECT( var_cost_new );
        tmp_assign_source_81 = var_cost_new;
        {
            PyObject *old = var_cost;
            var_cost = tmp_assign_source_81;
            Py_INCREF( var_cost );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_source_name_13;
        PyObject *tmp_args_element_name_42;
        CHECK_OBJECT( par_A );
        tmp_source_name_13 = par_A;
        tmp_called_instance_20 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_T );
        if ( tmp_called_instance_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_r );
        tmp_args_element_name_42 = var_r;
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = { tmp_args_element_name_42 };
            tmp_assign_source_82 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_20, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_20 );
        if ( tmp_assign_source_82 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_82;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_name_16;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_args_element_name_44;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_compute_kkt_optimality );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compute_kkt_optimality );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compute_kkt_optimality" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 172;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_name_16 = tmp_mvar_value_25;
        CHECK_OBJECT( var_g );
        tmp_args_element_name_43 = var_g;
        CHECK_OBJECT( var_on_bound );
        tmp_args_element_name_44 = var_on_bound;
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = { tmp_args_element_name_43, tmp_args_element_name_44 };
            tmp_assign_source_83 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, call_args );
        }

        if ( tmp_assign_source_83 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_optimality;
            assert( old != NULL );
            var_optimality = tmp_assign_source_83;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_6:;
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
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_19;
        PyObject *tmp_compexpr_right_19;
        if ( var_termination_status == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "termination_status" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_19 = var_termination_status;
        tmp_compexpr_right_19 = Py_None;
        tmp_condition_result_14 = ( tmp_compexpr_left_19 == tmp_compexpr_right_19 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_84;
            tmp_assign_source_84 = const_int_0;
            {
                PyObject *old = var_termination_status;
                var_termination_status = tmp_assign_source_84;
                Py_INCREF( var_termination_status );
                Py_XDECREF( old );
            }

        }
        branch_no_14:;
    }
    {
        PyObject *tmp_called_name_17;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_kw_name_3;
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
        PyObject *tmp_left_name_28;
        PyObject *tmp_right_name_28;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_OptimizeResult );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeResult );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 177;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_17 = tmp_mvar_value_26;
        tmp_dict_key_1 = const_str_plain_x;
        CHECK_OBJECT( var_x );
        tmp_dict_value_1 = var_x;
        tmp_kw_name_3 = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_fun;
        if ( var_r == NULL )
        {
            Py_DECREF( tmp_kw_name_3 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_2 = var_r;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_cost;
        if ( var_cost == NULL )
        {
            Py_DECREF( tmp_kw_name_3 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cost" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_3 = var_cost;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_optimality;
        CHECK_OBJECT( var_optimality );
        tmp_dict_value_4 = var_optimality;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_active_mask;
        CHECK_OBJECT( var_on_bound );
        tmp_dict_value_5 = var_on_bound;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_nit;
        if ( var_iteration == NULL )
        {
            Py_DECREF( tmp_kw_name_3 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "iteration" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_28 = var_iteration;
        tmp_right_name_28 = const_int_pos_1;
        tmp_dict_value_6 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_28, tmp_right_name_28 );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_3 );

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_status;
        if ( var_termination_status == NULL )
        {
            Py_DECREF( tmp_kw_name_3 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "termination_status" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_7 = var_termination_status;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_initial_cost;
        CHECK_OBJECT( var_initial_cost );
        tmp_dict_value_8 = var_initial_cost;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        frame_69dfbc420a4de5a58ef9b080762f594a->m_frame.f_lineno = 177;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_17, tmp_kw_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_69dfbc420a4de5a58ef9b080762f594a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_69dfbc420a4de5a58ef9b080762f594a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_69dfbc420a4de5a58ef9b080762f594a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_69dfbc420a4de5a58ef9b080762f594a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_69dfbc420a4de5a58ef9b080762f594a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_69dfbc420a4de5a58ef9b080762f594a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_69dfbc420a4de5a58ef9b080762f594a,
        type_description_1,
        par_A,
        par_b,
        par_x_lsq,
        par_lb,
        par_ub,
        par_tol,
        par_max_iter,
        par_verbose,
        var_m,
        var_n,
        var_x,
        var_on_bound,
        var_mask,
        var_free_set,
        var_active_set,
        var_r,
        var_cost,
        var_initial_cost,
        var_g,
        var_cost_change,
        var_step_norm,
        var_iteration,
        var_optimality,
        var_x_free_old,
        var_A_free,
        var_b_free,
        var_z,
        var_lbv,
        var_ubv,
        var_v,
        var_ind,
        var_cost_new,
        var_termination_status,
        var_move_to_free,
        var_x_free,
        var_lb_free,
        var_ub_free,
        var_alphas,
        var_i,
        var_i_free,
        var_alpha
    );


    // Release cached frame.
    if ( frame_69dfbc420a4de5a58ef9b080762f594a == cache_frame_69dfbc420a4de5a58ef9b080762f594a )
    {
        Py_DECREF( frame_69dfbc420a4de5a58ef9b080762f594a );
    }
    cache_frame_69dfbc420a4de5a58ef9b080762f594a = NULL;

    assertFrameObject( frame_69dfbc420a4de5a58ef9b080762f594a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$bvls$$$function_2_bvls );
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

    CHECK_OBJECT( (PyObject *)var_on_bound );
    Py_DECREF( var_on_bound );
    var_on_bound = NULL;

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_free_set );
    var_free_set = NULL;

    CHECK_OBJECT( (PyObject *)var_active_set );
    Py_DECREF( var_active_set );
    var_active_set = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_cost );
    var_cost = NULL;

    CHECK_OBJECT( (PyObject *)var_initial_cost );
    Py_DECREF( var_initial_cost );
    var_initial_cost = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_cost_change );
    var_cost_change = NULL;

    Py_XDECREF( var_step_norm );
    var_step_norm = NULL;

    Py_XDECREF( var_iteration );
    var_iteration = NULL;

    CHECK_OBJECT( (PyObject *)var_optimality );
    Py_DECREF( var_optimality );
    var_optimality = NULL;

    Py_XDECREF( var_x_free_old );
    var_x_free_old = NULL;

    Py_XDECREF( var_A_free );
    var_A_free = NULL;

    Py_XDECREF( var_b_free );
    var_b_free = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_lbv );
    var_lbv = NULL;

    Py_XDECREF( var_ubv );
    var_ubv = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_cost_new );
    var_cost_new = NULL;

    Py_XDECREF( var_termination_status );
    var_termination_status = NULL;

    Py_XDECREF( var_move_to_free );
    var_move_to_free = NULL;

    Py_XDECREF( var_x_free );
    var_x_free = NULL;

    Py_XDECREF( var_lb_free );
    var_lb_free = NULL;

    Py_XDECREF( var_ub_free );
    var_ub_free = NULL;

    Py_XDECREF( var_alphas );
    var_alphas = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_i_free );
    var_i_free = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

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

    Py_XDECREF( var_on_bound );
    var_on_bound = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_free_set );
    var_free_set = NULL;

    Py_XDECREF( var_active_set );
    var_active_set = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_cost );
    var_cost = NULL;

    Py_XDECREF( var_initial_cost );
    var_initial_cost = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_cost_change );
    var_cost_change = NULL;

    Py_XDECREF( var_step_norm );
    var_step_norm = NULL;

    Py_XDECREF( var_iteration );
    var_iteration = NULL;

    Py_XDECREF( var_optimality );
    var_optimality = NULL;

    Py_XDECREF( var_x_free_old );
    var_x_free_old = NULL;

    Py_XDECREF( var_A_free );
    var_A_free = NULL;

    Py_XDECREF( var_b_free );
    var_b_free = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_lbv );
    var_lbv = NULL;

    Py_XDECREF( var_ubv );
    var_ubv = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_cost_new );
    var_cost_new = NULL;

    Py_XDECREF( var_termination_status );
    var_termination_status = NULL;

    Py_XDECREF( var_move_to_free );
    var_move_to_free = NULL;

    Py_XDECREF( var_x_free );
    var_x_free = NULL;

    Py_XDECREF( var_lb_free );
    var_lb_free = NULL;

    Py_XDECREF( var_ub_free );
    var_ub_free = NULL;

    Py_XDECREF( var_alphas );
    var_alphas = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_i_free );
    var_i_free = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_lsq$bvls$$$function_2_bvls );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$bvls$$$function_1_compute_kkt_optimality(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$bvls$$$function_1_compute_kkt_optimality,
        const_str_plain_compute_kkt_optimality,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_afd9bb25dd5ffbd4dd87466fb233f6d9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$bvls,
        const_str_digest_d9303af9c5411886845b9a4e9a26b1c8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$bvls$$$function_2_bvls(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$bvls$$$function_2_bvls,
        const_str_plain_bvls,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_69dfbc420a4de5a58ef9b080762f594a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$bvls,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_lsq$bvls =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._lsq.bvls",
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

MOD_INIT_DECL( scipy$optimize$_lsq$bvls )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_lsq$bvls );
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
    puts("scipy.optimize._lsq.bvls: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._lsq.bvls: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._lsq.bvls: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_lsq$bvls" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_lsq$bvls = Py_InitModule4(
        "scipy.optimize._lsq.bvls",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_lsq$bvls = PyModule_Create( &mdef_scipy$optimize$_lsq$bvls );
#endif

    moduledict_scipy$optimize$_lsq$bvls = MODULE_DICT( module_scipy$optimize$_lsq$bvls );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_lsq$bvls,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_lsq$bvls,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_lsq$bvls,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_lsq$bvls,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_lsq$bvls );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_b5baf0e74ab867760d29d839f9484b42, module_scipy$optimize$_lsq$bvls );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_f266cee29e7ba2d31ca88db40426a906;
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
        tmp_assign_source_1 = const_str_digest_90c235f75ba31ead90614bd3990e6593;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_f266cee29e7ba2d31ca88db40426a906 = MAKE_MODULE_FRAME( codeobj_f266cee29e7ba2d31ca88db40426a906, module_scipy$optimize$_lsq$bvls );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_f266cee29e7ba2d31ca88db40426a906 );
    assert( Py_REFCNT( frame_f266cee29e7ba2d31ca88db40426a906 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_f266cee29e7ba2d31ca88db40426a906->m_frame.f_lineno = 2;
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


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_lsq$bvls;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_f266cee29e7ba2d31ca88db40426a906->m_frame.f_lineno = 4;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_lsq$bvls;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_norm_str_plain_lstsq_tuple;
        tmp_level_name_2 = const_int_0;
        frame_f266cee29e7ba2d31ca88db40426a906->m_frame.f_lineno = 5;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

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
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_norm );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_lstsq );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_lstsq, tmp_assign_source_11 );
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
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_a0dfa9cb56b41095d297f9de64891d65;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$_lsq$bvls;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_OptimizeResult_tuple;
        tmp_level_name_3 = const_int_0;
        frame_f266cee29e7ba2d31ca88db40426a906->m_frame.f_lineno = 6;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_OptimizeResult );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_OptimizeResult, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_common;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$optimize$_lsq$bvls;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_5428b9af299440dd47fd452413f1b8ba_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_f266cee29e7ba2d31ca88db40426a906->m_frame.f_lineno = 8;
        tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_7 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_scipy$optimize$_lsq$bvls,
                const_str_plain_print_header_linear,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_print_header_linear );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_print_header_linear, tmp_assign_source_14 );
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
                (PyObject *)moduledict_scipy$optimize$_lsq$bvls,
                const_str_plain_print_iteration_linear,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_print_iteration_linear );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_print_iteration_linear, tmp_assign_source_15 );
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
    RESTORE_FRAME_EXCEPTION( frame_f266cee29e7ba2d31ca88db40426a906 );
#endif
    popFrameStack();

    assertFrameObject( frame_f266cee29e7ba2d31ca88db40426a906 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f266cee29e7ba2d31ca88db40426a906 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f266cee29e7ba2d31ca88db40426a906, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f266cee29e7ba2d31ca88db40426a906->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f266cee29e7ba2d31ca88db40426a906, exception_lineno );
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
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_FUNCTION_scipy$optimize$_lsq$bvls$$$function_1_compute_kkt_optimality(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_compute_kkt_optimality, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_scipy$optimize$_lsq$bvls$$$function_2_bvls(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain_bvls, tmp_assign_source_17 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_lsq$bvls, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_lsq$bvls );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
