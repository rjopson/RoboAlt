/* Generated code for Python module 'scipy.optimize._trustregion_constr.equality_constrained_sqp'
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

/* The "_module_scipy$optimize$_trustregion_constr$equality_constrained_sqp" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_trustregion_constr$equality_constrained_sqp;
PyDictObject *moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp;

/* The declarations of module constants used, if any. */
extern PyObject *const_float_1eminus_16;
extern PyObject *const_float_0_8;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_projections;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_dict_49200a812847b7cd1ff69affede85e07;
extern PyObject *const_float_0_1;
static PyObject *const_tuple_915eb1933bdcd461d979957f57327bfb_tuple;
static PyObject *const_str_digest_132970b31bf78ce861d26efd3a108723;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_stop_cond;
static PyObject *const_str_digest_f1631e71cbbbeac7010668b848827119;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_plain_default_scaling;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
static PyObject *const_str_plain_qp_subproblem;
extern PyObject *const_str_plain_inf;
extern PyObject *const_float_0_7;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_copy;
extern PyObject *const_tuple_str_plain_x_str_plain_n_tuple;
extern PyObject *const_str_plain_hits_boundary;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_zeros_like;
extern PyObject *const_int_0;
static PyObject *const_str_digest_d250c58b1bd569d4e41be8c1d6058e1e;
extern PyObject *const_float_2_0;
extern PyObject *const_str_plain_eye;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_sqrt;
static PyObject *const_list_str_plain_equality_constrained_sqp_list;
extern PyObject *const_str_plain_speye;
static PyObject *const_float_0_99999999;
extern PyObject *const_str_plain_origin;
extern PyObject *const_float_1eminus_08;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_box_intersections;
extern PyObject *const_str_plain_modified_dogleg;
extern PyObject *const_str_plain_shape;
extern PyObject *const_float_0_9;
extern PyObject *const_str_plain_equality_constrained_sqp;
extern PyObject *const_tuple_str_plain_norm_tuple;
static PyObject *const_str_digest_e208f3e9b0880261c9e384ada0bfc1e6;
static PyObject *const_str_digest_5fafdf8e000e21cbed2ff82d7fc68afc;
extern PyObject *const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_norm;
extern PyObject *const_float_0_5;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_str_plain_projections_tuple;
extern PyObject *const_str_plain_niter;
extern PyObject *const_float_7_0;
static PyObject *const_tuple_5bb9af0b0e81715f50b7c7360e6d851c_tuple;
extern PyObject *const_str_plain_full;
extern PyObject *const_tuple_str_plain_eye_tuple;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_float_0_3;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_projected_cg;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_dict_49200a812847b7cd1ff69affede85e07 = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_49200a812847b7cd1ff69affede85e07, const_str_plain_niter, const_int_0 );
    PyDict_SetItem( const_dict_49200a812847b7cd1ff69affede85e07, const_str_plain_stop_cond, const_int_0 );
    PyDict_SetItem( const_dict_49200a812847b7cd1ff69affede85e07, const_str_plain_hits_boundary, Py_False );
    assert( PyDict_Size( const_dict_49200a812847b7cd1ff69affede85e07 ) == 3 );
    const_tuple_915eb1933bdcd461d979957f57327bfb_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_915eb1933bdcd461d979957f57327bfb_tuple, 0, const_str_plain_modified_dogleg ); Py_INCREF( const_str_plain_modified_dogleg );
    PyTuple_SET_ITEM( const_tuple_915eb1933bdcd461d979957f57327bfb_tuple, 1, const_str_plain_projected_cg ); Py_INCREF( const_str_plain_projected_cg );
    PyTuple_SET_ITEM( const_tuple_915eb1933bdcd461d979957f57327bfb_tuple, 2, const_str_plain_box_intersections ); Py_INCREF( const_str_plain_box_intersections );
    const_str_digest_132970b31bf78ce861d26efd3a108723 = UNSTREAM_STRING_ASCII( &constant_bin[ 5077170 ], 59, 0 );
    const_str_digest_f1631e71cbbbeac7010668b848827119 = UNSTREAM_STRING_ASCII( &constant_bin[ 5077229 ], 38, 0 );
    const_str_plain_default_scaling = UNSTREAM_STRING_ASCII( &constant_bin[ 5077267 ], 15, 1 );
    const_str_plain_qp_subproblem = UNSTREAM_STRING_ASCII( &constant_bin[ 5077282 ], 13, 1 );
    const_str_digest_d250c58b1bd569d4e41be8c1d6058e1e = UNSTREAM_STRING_ASCII( &constant_bin[ 5077295 ], 62, 0 );
    const_list_str_plain_equality_constrained_sqp_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_equality_constrained_sqp_list, 0, const_str_plain_equality_constrained_sqp ); Py_INCREF( const_str_plain_equality_constrained_sqp );
    const_float_0_99999999 = UNSTREAM_FLOAT( &constant_bin[ 5077357 ] );
    const_str_digest_e208f3e9b0880261c9e384ada0bfc1e6 = UNSTREAM_STRING_ASCII( &constant_bin[ 5077365 ], 68, 0 );
    const_str_digest_5fafdf8e000e21cbed2ff82d7fc68afc = UNSTREAM_STRING_ASCII( &constant_bin[ 5077433 ], 885, 0 );
    const_tuple_str_plain_projections_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_projections_tuple, 0, const_str_plain_projections ); Py_INCREF( const_str_plain_projections );
    const_tuple_5bb9af0b0e81715f50b7c7360e6d851c_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5078318 ], 921 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_trustregion_constr$equality_constrained_sqp( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_3a3b6e02d2f397c698aac6df44984e70;
static PyCodeObject *codeobj_214d62e9891fd05b44880deeee3a3333;
static PyCodeObject *codeobj_294d84b40e68f32a48ed32554ad64478;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_d250c58b1bd569d4e41be8c1d6058e1e );
    codeobj_3a3b6e02d2f397c698aac6df44984e70 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_e208f3e9b0880261c9e384ada0bfc1e6, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_214d62e9891fd05b44880deeee3a3333 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_default_scaling, 13, const_tuple_str_plain_x_str_plain_n_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_294d84b40e68f32a48ed32554ad64478 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_equality_constrained_sqp, 18, const_tuple_5bb9af0b0e81715f50b7c7360e6d851c_tuple, 16, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$equality_constrained_sqp$$$function_1_default_scaling(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$equality_constrained_sqp$$$function_2_equality_constrained_sqp( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$optimize$_trustregion_constr$equality_constrained_sqp$$$function_1_default_scaling( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_n = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_214d62e9891fd05b44880deeee3a3333;
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
    static struct Nuitka_FrameObject *cache_frame_214d62e9891fd05b44880deeee3a3333 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_214d62e9891fd05b44880deeee3a3333, codeobj_214d62e9891fd05b44880deeee3a3333, module_scipy$optimize$_trustregion_constr$equality_constrained_sqp, sizeof(void *)+sizeof(void *) );
    frame_214d62e9891fd05b44880deeee3a3333 = cache_frame_214d62e9891fd05b44880deeee3a3333;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_214d62e9891fd05b44880deeee3a3333 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_214d62e9891fd05b44880deeee3a3333 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 14;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_214d62e9891fd05b44880deeee3a3333->m_frame.f_lineno = 14;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_shape, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;
            type_description_1 = "oo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 1 );
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


            type_description_1 = "oo";
            exception_lineno = 14;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
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

                    type_description_1 = "oo";
                    exception_lineno = 14;
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

            type_description_1 = "oo";
            exception_lineno = 14;
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
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_n = tmp_assign_source_3;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_speye );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_speye );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "speye" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 15;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_2 = var_n;
        frame_214d62e9891fd05b44880deeee3a3333->m_frame.f_lineno = 15;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_214d62e9891fd05b44880deeee3a3333 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_214d62e9891fd05b44880deeee3a3333 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_214d62e9891fd05b44880deeee3a3333 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_214d62e9891fd05b44880deeee3a3333, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_214d62e9891fd05b44880deeee3a3333->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_214d62e9891fd05b44880deeee3a3333, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_214d62e9891fd05b44880deeee3a3333,
        type_description_1,
        par_x,
        var_n
    );


    // Release cached frame.
    if ( frame_214d62e9891fd05b44880deeee3a3333 == cache_frame_214d62e9891fd05b44880deeee3a3333 )
    {
        Py_DECREF( frame_214d62e9891fd05b44880deeee3a3333 );
    }
    cache_frame_214d62e9891fd05b44880deeee3a3333 = NULL;

    assertFrameObject( frame_214d62e9891fd05b44880deeee3a3333 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$equality_constrained_sqp$$$function_1_default_scaling );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$equality_constrained_sqp$$$function_1_default_scaling );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$equality_constrained_sqp$$$function_2_equality_constrained_sqp( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fun_and_constr = python_pars[ 0 ];
    PyObject *par_grad_and_jac = python_pars[ 1 ];
    PyObject *par_lagr_hess = python_pars[ 2 ];
    PyObject *par_x0 = python_pars[ 3 ];
    PyObject *par_fun0 = python_pars[ 4 ];
    PyObject *par_grad0 = python_pars[ 5 ];
    PyObject *par_constr0 = python_pars[ 6 ];
    PyObject *par_jac0 = python_pars[ 7 ];
    PyObject *par_stop_criteria = python_pars[ 8 ];
    PyObject *par_state = python_pars[ 9 ];
    PyObject *par_initial_penalty = python_pars[ 10 ];
    PyObject *par_initial_trust_radius = python_pars[ 11 ];
    PyObject *par_factorization_method = python_pars[ 12 ];
    PyObject *par_trust_lb = python_pars[ 13 ];
    PyObject *par_trust_ub = python_pars[ 14 ];
    PyObject *par_scaling = python_pars[ 15 ];
    PyObject *var_n = NULL;
    PyObject *var_x = NULL;
    PyObject *var_trust_radius = NULL;
    PyObject *var_penalty = NULL;
    PyObject *var_f = NULL;
    PyObject *var_c = NULL;
    PyObject *var_b = NULL;
    PyObject *var_A = NULL;
    PyObject *var_S = NULL;
    PyObject *var_Z = NULL;
    PyObject *var_LS = NULL;
    PyObject *var_Y = NULL;
    PyObject *var_v = NULL;
    PyObject *var_H = NULL;
    PyObject *var_optimality = NULL;
    PyObject *var_constr_violation = NULL;
    PyObject *var_cg_info = NULL;
    PyObject *var_last_iteration_failed = NULL;
    PyObject *var_dn = NULL;
    PyObject *var_c_t = NULL;
    PyObject *var_b_t = NULL;
    PyObject *var_trust_radius_t = NULL;
    PyObject *var_lb_t = NULL;
    PyObject *var_ub_t = NULL;
    PyObject *var_dt = NULL;
    PyObject *var_d = NULL;
    PyObject *var_quadratic_model = NULL;
    PyObject *var_linearized_constr = NULL;
    PyObject *var_vpred = NULL;
    PyObject *var_previous_penalty = NULL;
    PyObject *var_new_penalty = NULL;
    PyObject *var_predicted_reduction = NULL;
    PyObject *var_merit_function = NULL;
    PyObject *var_x_next = NULL;
    PyObject *var_f_next = NULL;
    PyObject *var_b_next = NULL;
    PyObject *var_merit_function_next = NULL;
    PyObject *var_actual_reduction = NULL;
    PyObject *var_reduction_ratio = NULL;
    PyObject *var_y = NULL;
    PyObject *var__ = NULL;
    PyObject *var_t = NULL;
    PyObject *var_intersect = NULL;
    PyObject *var_x_soc = NULL;
    PyObject *var_f_soc = NULL;
    PyObject *var_b_soc = NULL;
    PyObject *var_merit_function_soc = NULL;
    PyObject *var_actual_reduction_soc = NULL;
    PyObject *var_reduction_ratio_soc = NULL;
    PyObject *var_trust_reduction = NULL;
    PyObject *var_new_trust_radius = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
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
    PyObject *tmp_tuple_unpack_8__source_iter = NULL;
    PyObject *tmp_tuple_unpack_9__element_1 = NULL;
    PyObject *tmp_tuple_unpack_9__element_2 = NULL;
    PyObject *tmp_tuple_unpack_9__element_3 = NULL;
    PyObject *tmp_tuple_unpack_9__source_iter = NULL;
    struct Nuitka_FrameObject *frame_294d84b40e68f32a48ed32554ad64478;
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
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_294d84b40e68f32a48ed32554ad64478 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_294d84b40e68f32a48ed32554ad64478, codeobj_294d84b40e68f32a48ed32554ad64478, module_scipy$optimize$_trustregion_constr$equality_constrained_sqp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_294d84b40e68f32a48ed32554ad64478 = cache_frame_294d84b40e68f32a48ed32554ad64478;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_294d84b40e68f32a48ed32554ad64478 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_294d84b40e68f32a48ed32554ad64478 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 62;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_1 = par_x0;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_shape, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 1 );
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


            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 62;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
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

                    type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 62;
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

            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 62;
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
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_n = tmp_assign_source_3;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_trust_lb );
        tmp_compexpr_left_1 = par_trust_lb;
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 66;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_full );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_n );
            tmp_args_element_name_2 = var_n;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 66;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inf );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 66;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_3 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 66;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 66;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_trust_lb;
                assert( old != NULL );
                par_trust_lb = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_trust_ub );
        tmp_compexpr_left_2 = par_trust_ub;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 68;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_4;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_full );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_n );
            tmp_args_element_name_4 = var_n;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 68;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_5;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_inf );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 68;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 68;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_trust_ub;
                assert( old != NULL );
                par_trust_ub = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_6;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_6 = par_x0;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_copy, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( par_initial_trust_radius );
        tmp_assign_source_7 = par_initial_trust_radius;
        assert( var_trust_radius == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_trust_radius = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( par_initial_penalty );
        tmp_assign_source_8 = par_initial_penalty;
        assert( var_penalty == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_penalty = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( par_fun0 );
        tmp_assign_source_9 = par_fun0;
        assert( var_f == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_f = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( par_grad0 );
        tmp_assign_source_10 = par_grad0;
        assert( var_c == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_c = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( par_constr0 );
        tmp_assign_source_11 = par_constr0;
        assert( var_b == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_b = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( par_jac0 );
        tmp_assign_source_12 = par_jac0;
        assert( var_A == NULL );
        Py_INCREF( tmp_assign_source_12 );
        var_A = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( par_scaling );
        tmp_called_name_3 = par_scaling;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_7 = var_x;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_S == NULL );
        var_S = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_projections );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_projections );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "projections" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_4 = tmp_mvar_value_7;
        CHECK_OBJECT( var_A );
        tmp_args_element_name_8 = var_A;
        CHECK_OBJECT( par_factorization_method );
        tmp_args_element_name_9 = par_factorization_method;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_2, 0, 3 );
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


            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 81;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_3, 1, 3 );
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


            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 81;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_4, 2, 3 );
        if ( tmp_assign_source_17 == NULL )
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


            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 81;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_3 == NULL );
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_17;
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

                    type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 81;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 81;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

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
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_18 = tmp_tuple_unpack_2__element_1;
        assert( var_Z == NULL );
        Py_INCREF( tmp_assign_source_18 );
        var_Z = tmp_assign_source_18;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_19 = tmp_tuple_unpack_2__element_2;
        assert( var_LS == NULL );
        Py_INCREF( tmp_assign_source_19 );
        var_LS = tmp_assign_source_19;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
        tmp_assign_source_20 = tmp_tuple_unpack_2__element_3;
        assert( var_Y == NULL );
        Py_INCREF( tmp_assign_source_20 );
        var_Y = tmp_assign_source_20;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_10;
        CHECK_OBJECT( var_LS );
        tmp_called_instance_3 = var_LS;
        CHECK_OBJECT( var_c );
        tmp_args_element_name_10 = var_c;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_operand_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT( par_lagr_hess );
        tmp_called_name_5 = par_lagr_hess;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_11 = var_x;
        CHECK_OBJECT( var_v );
        tmp_args_element_name_12 = var_v;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_H == NULL );
        var_H = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_norm );

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

            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_8;
        CHECK_OBJECT( var_c );
        tmp_left_name_1 = var_c;
        CHECK_OBJECT( var_A );
        tmp_source_name_5 = var_A;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_T );
        if ( tmp_called_instance_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_v );
        tmp_args_element_name_14 = var_v;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_4 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_args_element_name_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_9;
        tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_inf );
        if ( tmp_args_element_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_13 );

            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_15 };
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_13 );
        Py_DECREF( tmp_args_element_name_15 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_optimality == NULL );
        var_optimality = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_11;
        CHECK_OBJECT( var_b );
        tmp_len_arg_1 = var_b;
        tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        assert( !(tmp_res == -1) );
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 89;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_10;
        CHECK_OBJECT( var_b );
        tmp_args_element_name_16 = var_b;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 89;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_11;
        tmp_args_element_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_inf );
        if ( tmp_args_element_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 89;
        {
            PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_17 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_24 = const_int_0;
        Py_INCREF( tmp_assign_source_24 );
        condexpr_end_1:;
        assert( var_constr_violation == NULL );
        var_constr_violation = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = PyDict_Copy( const_dict_49200a812847b7cd1ff69affede85e07 );
        assert( var_cg_info == NULL );
        var_cg_info = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = Py_False;
        assert( var_last_iteration_failed == NULL );
        Py_INCREF( tmp_assign_source_26 );
        var_last_iteration_failed = tmp_assign_source_26;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        CHECK_OBJECT( par_stop_criteria );
        tmp_called_name_8 = par_stop_criteria;
        CHECK_OBJECT( par_state );
        tmp_args_element_name_18 = par_state;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 94;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_19 = var_x;
        CHECK_OBJECT( var_last_iteration_failed );
        tmp_args_element_name_20 = var_last_iteration_failed;
        if ( var_optimality == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optimality" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_21 = var_optimality;
        if ( var_constr_violation == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "constr_violation" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_22 = var_constr_violation;
        if ( var_trust_radius == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "trust_radius" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_23 = var_trust_radius;
        if ( var_penalty == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "penalty" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_24 = var_penalty;
        CHECK_OBJECT( var_cg_info );
        tmp_args_element_name_25 = var_cg_info;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25 };
            tmp_operand_name_4 = CALL_FUNCTION_WITH_ARGS8( tmp_called_name_8, call_args );
        }

        if ( tmp_operand_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
        Py_DECREF( tmp_operand_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_3 = ( tmp_res == 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
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
        goto loop_end_1;
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_modified_dogleg );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_modified_dogleg );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "modified_dogleg" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_12;
        if ( var_A == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_26 = var_A;
        if ( var_Y == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Y" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_27 = var_Y;
        if ( var_b == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_28 = var_b;
        tmp_left_name_2 = const_float_0_8;
        if ( var_trust_radius == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "trust_radius" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_2 = var_trust_radius;
        tmp_args_element_name_29 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_args_element_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = const_float_0_5;
        CHECK_OBJECT( par_trust_lb );
        tmp_right_name_3 = par_trust_lb;
        tmp_args_element_name_30 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_args_element_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_29 );

            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = const_float_0_5;
        CHECK_OBJECT( par_trust_ub );
        tmp_right_name_4 = par_trust_ub;
        tmp_args_element_name_31 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_args_element_name_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_29 );
            Py_DECREF( tmp_args_element_name_30 );

            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29, tmp_args_element_name_30, tmp_args_element_name_31 };
            tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_args_element_name_29 );
        Py_DECREF( tmp_args_element_name_30 );
        Py_DECREF( tmp_args_element_name_31 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_dn;
            var_dn = tmp_assign_source_27;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_left_name_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_right_name_5;
        if ( var_H == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "H" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = var_H;
        CHECK_OBJECT( var_dn );
        tmp_args_element_name_32 = var_dn;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = { tmp_args_element_name_32 };
            tmp_left_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_c == NULL )
        {
            Py_DECREF( tmp_left_name_5 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_5 = var_c;
        tmp_assign_source_28 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_c_t;
            var_c_t = tmp_assign_source_28;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_10;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_33;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_13;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_zeros_like );
        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_b == NULL )
        {
            Py_DECREF( tmp_called_name_10 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_33 = var_b;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = { tmp_args_element_name_33 };
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_b_t;
            var_b_t = tmp_assign_source_29;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_name_11;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_right_name_8;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_14;
        tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_sqrt );
        if ( tmp_called_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_trust_radius == NULL )
        {
            Py_DECREF( tmp_called_name_11 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "trust_radius" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_7 = var_trust_radius;
        tmp_right_name_6 = const_int_pos_2;
        tmp_left_name_6 = POWER_OPERATION( tmp_left_name_7, tmp_right_name_6 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_11 );

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_15 == NULL )
        {
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_left_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_15;
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_linalg );
        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_dn );
        tmp_args_element_name_35 = var_dn;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = { tmp_args_element_name_35 };
            tmp_left_name_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_norm, call_args );
        }

        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_8 = const_int_pos_2;
        tmp_right_name_7 = POWER_OPERATION( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_8 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_34 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_args_element_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_11 );

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = { tmp_args_element_name_34 };
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_element_name_34 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_trust_radius_t;
            var_trust_radius_t = tmp_assign_source_30;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT( par_trust_lb );
        tmp_left_name_9 = par_trust_lb;
        CHECK_OBJECT( var_dn );
        tmp_right_name_9 = var_dn;
        tmp_assign_source_31 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_lb_t;
            var_lb_t = tmp_assign_source_31;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        CHECK_OBJECT( par_trust_ub );
        tmp_left_name_10 = par_trust_ub;
        CHECK_OBJECT( var_dn );
        tmp_right_name_10 = var_dn;
        tmp_assign_source_32 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ub_t;
            var_ub_t = tmp_assign_source_32;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_args_element_name_39;
        PyObject *tmp_args_element_name_40;
        PyObject *tmp_args_element_name_41;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_args_element_name_43;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_projected_cg );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_projected_cg );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "projected_cg" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_name_12 = tmp_mvar_value_16;
        if ( var_H == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "H" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_name_36 = var_H;
        CHECK_OBJECT( var_c_t );
        tmp_args_element_name_37 = var_c_t;
        if ( var_Z == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Z" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_name_38 = var_Z;
        if ( var_Y == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Y" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_name_39 = var_Y;
        CHECK_OBJECT( var_b_t );
        tmp_args_element_name_40 = var_b_t;
        CHECK_OBJECT( var_trust_radius_t );
        tmp_args_element_name_41 = var_trust_radius_t;
        CHECK_OBJECT( var_lb_t );
        tmp_args_element_name_42 = var_lb_t;
        CHECK_OBJECT( var_ub_t );
        tmp_args_element_name_43 = var_ub_t;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = { tmp_args_element_name_36, tmp_args_element_name_37, tmp_args_element_name_38, tmp_args_element_name_39, tmp_args_element_name_40, tmp_args_element_name_41, tmp_args_element_name_42, tmp_args_element_name_43 };
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS8( tmp_called_name_12, call_args );
        }

        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_33 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_33;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_34 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
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


            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 119;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_34;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_35 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
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


            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 119;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_35;
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

                    type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 119;
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

            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 119;
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
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_36 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_dt;
            var_dt = tmp_assign_source_36;
            Py_INCREF( var_dt );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
        tmp_assign_source_37 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_cg_info;
            assert( old != NULL );
            var_cg_info = tmp_assign_source_37;
            Py_INCREF( var_cg_info );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        CHECK_OBJECT( var_dn );
        tmp_left_name_11 = var_dn;
        CHECK_OBJECT( var_dt );
        tmp_right_name_11 = var_dt;
        tmp_assign_source_38 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_d;
            var_d = tmp_assign_source_38;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_left_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_12;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_name_44;
        PyObject *tmp_args_element_name_45;
        PyObject *tmp_right_name_13;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_source_name_11;
        PyObject *tmp_args_element_name_46;
        tmp_left_name_13 = const_float_0_5;
        if ( var_H == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "H" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = var_H;
        CHECK_OBJECT( var_d );
        tmp_args_element_name_44 = var_d;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = { tmp_args_element_name_44 };
            tmp_called_instance_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_dot, call_args );
        }

        if ( tmp_called_instance_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_d );
        tmp_args_element_name_45 = var_d;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = { tmp_args_element_name_45 };
            tmp_right_name_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_7 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_12 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_13, tmp_right_name_12 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_left_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_c == NULL )
        {
            Py_DECREF( tmp_left_name_12 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = var_c;
        tmp_called_instance_9 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_T );
        if ( tmp_called_instance_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_12 );

            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_d );
        tmp_args_element_name_46 = var_d;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = { tmp_args_element_name_46 };
            tmp_right_name_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_9 );
        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_12 );

            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_39 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_13 );
        Py_DECREF( tmp_left_name_12 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_quadratic_model;
            var_quadratic_model = tmp_assign_source_39;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_left_name_14;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_right_name_14;
        if ( var_A == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_10 = var_A;
        CHECK_OBJECT( var_d );
        tmp_args_element_name_47 = var_d;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = { tmp_args_element_name_47 };
            tmp_left_name_14 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_b == NULL )
        {
            Py_DECREF( tmp_left_name_14 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_14 = var_b;
        tmp_assign_source_40 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        Py_DECREF( tmp_left_name_14 );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_linearized_constr;
            var_linearized_constr = tmp_assign_source_40;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_left_name_15;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_element_name_48;
        PyObject *tmp_right_name_15;
        PyObject *tmp_called_name_14;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_49;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_17;
        if ( var_b == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_48 = var_b;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = { tmp_args_element_name_48 };
            tmp_left_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        if ( tmp_left_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_18 == NULL )
        {
            Py_DECREF( tmp_left_name_15 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_14 = tmp_mvar_value_18;
        CHECK_OBJECT( var_linearized_constr );
        tmp_args_element_name_49 = var_linearized_constr;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = { tmp_args_element_name_49 };
            tmp_right_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        if ( tmp_right_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_15 );

            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_41 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
        Py_DECREF( tmp_left_name_15 );
        Py_DECREF( tmp_right_name_15 );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_vpred;
            var_vpred = tmp_assign_source_41;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_name_15;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_args_element_name_51;
        tmp_called_name_15 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_15 != NULL );
        tmp_args_element_name_50 = const_float_1eminus_16;
        CHECK_OBJECT( var_vpred );
        tmp_args_element_name_51 = var_vpred;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = { tmp_args_element_name_50, tmp_args_element_name_51 };
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
        }

        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_vpred;
            assert( old != NULL );
            var_vpred = tmp_assign_source_42;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_43;
        if ( var_penalty == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "penalty" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_43 = var_penalty;
        {
            PyObject *old = var_previous_penalty;
            var_previous_penalty = tmp_assign_source_43;
            Py_INCREF( var_previous_penalty );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_quadratic_model );
        tmp_compexpr_left_4 = var_quadratic_model;
        tmp_compexpr_right_4 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_left_name_16;
            PyObject *tmp_right_name_16;
            PyObject *tmp_left_name_17;
            PyObject *tmp_right_name_17;
            CHECK_OBJECT( var_quadratic_model );
            tmp_left_name_16 = var_quadratic_model;
            tmp_left_name_17 = const_float_0_7;
            CHECK_OBJECT( var_vpred );
            tmp_right_name_17 = var_vpred;
            tmp_right_name_16 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_17, tmp_right_name_17 );
            if ( tmp_right_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_44 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_16 );
            Py_DECREF( tmp_right_name_16 );
            if ( tmp_assign_source_44 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_new_penalty;
                var_new_penalty = tmp_assign_source_44;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_called_name_16;
            PyObject *tmp_args_element_name_52;
            PyObject *tmp_args_element_name_53;
            tmp_called_name_16 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_16 != NULL );
            if ( var_penalty == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "penalty" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 139;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_52 = var_penalty;
            CHECK_OBJECT( var_new_penalty );
            tmp_args_element_name_53 = var_new_penalty;
            frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 139;
            {
                PyObject *call_args[] = { tmp_args_element_name_52, tmp_args_element_name_53 };
                tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, call_args );
            }

            if ( tmp_assign_source_45 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 139;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_penalty;
                var_penalty = tmp_assign_source_45;
                Py_XDECREF( old );
            }

        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_left_name_18;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_right_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        CHECK_OBJECT( var_quadratic_model );
        tmp_operand_name_5 = var_quadratic_model;
        tmp_left_name_18 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_5 );
        if ( tmp_left_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_penalty == NULL )
        {
            Py_DECREF( tmp_left_name_18 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "penalty" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_19 = var_penalty;
        CHECK_OBJECT( var_vpred );
        tmp_right_name_19 = var_vpred;
        tmp_right_name_18 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_19 );
        if ( tmp_right_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );

            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_46 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
        Py_DECREF( tmp_left_name_18 );
        Py_DECREF( tmp_right_name_18 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_predicted_reduction;
            var_predicted_reduction = tmp_assign_source_46;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_20;
        PyObject *tmp_left_name_21;
        PyObject *tmp_right_name_21;
        PyObject *tmp_called_name_17;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_54;
        if ( var_f == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_20 = var_f;
        if ( var_penalty == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "penalty" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_21 = var_penalty;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_17 = tmp_mvar_value_19;
        if ( var_b == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_54 = var_b;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 145;
        {
            PyObject *call_args[] = { tmp_args_element_name_54 };
            tmp_right_name_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        if ( tmp_right_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_20 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_21, tmp_right_name_21 );
        Py_DECREF( tmp_right_name_21 );
        if ( tmp_right_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_47 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_20, tmp_right_name_20 );
        Py_DECREF( tmp_right_name_20 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_merit_function;
            var_merit_function = tmp_assign_source_47;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_22;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_name_55;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_22 = var_x;
        if ( var_S == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "S" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_11 = var_S;
        CHECK_OBJECT( var_d );
        tmp_args_element_name_55 = var_d;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = { tmp_args_element_name_55 };
            tmp_right_name_22 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_48 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_22, tmp_right_name_22 );
        Py_DECREF( tmp_right_name_22 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_x_next;
            var_x_next = tmp_assign_source_48;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_name_18;
        PyObject *tmp_args_element_name_56;
        CHECK_OBJECT( par_fun_and_constr );
        tmp_called_name_18 = par_fun_and_constr;
        CHECK_OBJECT( var_x_next );
        tmp_args_element_name_56 = var_x_next;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = { tmp_args_element_name_56 };
            tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
        }

        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_49 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_49;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_50 = UNPACK_NEXT( tmp_unpack_7, 0, 2 );
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


            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 148;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_50;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_51 = UNPACK_NEXT( tmp_unpack_8, 1, 2 );
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


            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 148;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_51;
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

                    type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 148;
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

            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 148;
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
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
        tmp_assign_source_52 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_f_next;
            var_f_next = tmp_assign_source_52;
            Py_INCREF( var_f_next );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
        tmp_assign_source_53 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_b_next;
            var_b_next = tmp_assign_source_53;
            Py_INCREF( var_b_next );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_left_name_23;
        PyObject *tmp_right_name_23;
        PyObject *tmp_left_name_24;
        PyObject *tmp_right_name_24;
        PyObject *tmp_called_name_19;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_57;
        CHECK_OBJECT( var_f_next );
        tmp_left_name_23 = var_f_next;
        if ( var_penalty == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "penalty" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 150;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_24 = var_penalty;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 150;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_19 = tmp_mvar_value_20;
        CHECK_OBJECT( var_b_next );
        tmp_args_element_name_57 = var_b_next;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = { tmp_args_element_name_57 };
            tmp_right_name_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
        }

        if ( tmp_right_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_23 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_24, tmp_right_name_24 );
        Py_DECREF( tmp_right_name_24 );
        if ( tmp_right_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_54 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_23, tmp_right_name_23 );
        Py_DECREF( tmp_right_name_23 );
        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_merit_function_next;
            var_merit_function_next = tmp_assign_source_54;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_left_name_25;
        PyObject *tmp_right_name_25;
        CHECK_OBJECT( var_merit_function );
        tmp_left_name_25 = var_merit_function;
        CHECK_OBJECT( var_merit_function_next );
        tmp_right_name_25 = var_merit_function_next;
        tmp_assign_source_55 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_25, tmp_right_name_25 );
        if ( tmp_assign_source_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_actual_reduction;
            var_actual_reduction = tmp_assign_source_55;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_left_name_26;
        PyObject *tmp_right_name_26;
        CHECK_OBJECT( var_actual_reduction );
        tmp_left_name_26 = var_actual_reduction;
        CHECK_OBJECT( var_predicted_reduction );
        tmp_right_name_26 = var_predicted_reduction;
        tmp_assign_source_56 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_26, tmp_right_name_26 );
        if ( tmp_assign_source_56 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_reduction_ratio;
            var_reduction_ratio = tmp_assign_source_56;
            Py_XDECREF( old );
        }

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
        PyObject *tmp_called_name_20;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_58;
        PyObject *tmp_left_name_27;
        PyObject *tmp_right_name_27;
        PyObject *tmp_called_name_21;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_59;
        CHECK_OBJECT( var_reduction_ratio );
        tmp_compexpr_left_5 = var_reduction_ratio;
        tmp_compexpr_right_5 = const_float_1eminus_08;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 159;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_20 = tmp_mvar_value_21;
        CHECK_OBJECT( var_dn );
        tmp_args_element_name_58 = var_dn;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 159;
        {
            PyObject *call_args[] = { tmp_args_element_name_58 };
            tmp_compexpr_left_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
        }

        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_27 = const_float_0_1;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_22 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 159;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_21 = tmp_mvar_value_22;
        CHECK_OBJECT( var_dt );
        tmp_args_element_name_59 = var_dt;
        frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 159;
        {
            PyObject *call_args[] = { tmp_args_element_name_59 };
            tmp_right_name_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
        }

        if ( tmp_right_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_6 );

            exception_lineno = 159;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_6 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_27, tmp_right_name_27 );
        Py_DECREF( tmp_right_name_27 );
        if ( tmp_compexpr_right_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_6 );

            exception_lineno = 159;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        Py_DECREF( tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_operand_name_6;
            PyObject *tmp_called_instance_12;
            PyObject *tmp_args_element_name_60;
            if ( var_Y == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Y" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 161;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_12 = var_Y;
            CHECK_OBJECT( var_b_next );
            tmp_args_element_name_60 = var_b_next;
            frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 161;
            {
                PyObject *call_args[] = { tmp_args_element_name_60 };
                tmp_operand_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_dot, call_args );
            }

            if ( tmp_operand_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_57 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_6 );
            Py_DECREF( tmp_operand_name_6 );
            if ( tmp_assign_source_57 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_y;
                var_y = tmp_assign_source_57;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_called_name_22;
            PyObject *tmp_mvar_value_23;
            PyObject *tmp_args_element_name_61;
            PyObject *tmp_args_element_name_62;
            PyObject *tmp_args_element_name_63;
            PyObject *tmp_args_element_name_64;
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_box_intersections );

            if (unlikely( tmp_mvar_value_23 == NULL ))
            {
                tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_box_intersections );
            }

            if ( tmp_mvar_value_23 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "box_intersections" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 163;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_10;
            }

            tmp_called_name_22 = tmp_mvar_value_23;
            CHECK_OBJECT( var_d );
            tmp_args_element_name_61 = var_d;
            CHECK_OBJECT( var_y );
            tmp_args_element_name_62 = var_y;
            CHECK_OBJECT( par_trust_lb );
            tmp_args_element_name_63 = par_trust_lb;
            CHECK_OBJECT( par_trust_ub );
            tmp_args_element_name_64 = par_trust_ub;
            frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 163;
            {
                PyObject *call_args[] = { tmp_args_element_name_61, tmp_args_element_name_62, tmp_args_element_name_63, tmp_args_element_name_64 };
                tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_22, call_args );
            }

            if ( tmp_iter_arg_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_10;
            }
            tmp_assign_source_58 = MAKE_ITERATOR( tmp_iter_arg_5 );
            Py_DECREF( tmp_iter_arg_5 );
            if ( tmp_assign_source_58 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__source_iter;
                tmp_tuple_unpack_5__source_iter = tmp_assign_source_58;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_unpack_9;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_59 = UNPACK_NEXT( tmp_unpack_9, 0, 3 );
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


                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 163;
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__element_1;
                tmp_tuple_unpack_5__element_1 = tmp_assign_source_59;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_unpack_10;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_60 = UNPACK_NEXT( tmp_unpack_10, 1, 3 );
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


                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 163;
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__element_2;
                tmp_tuple_unpack_5__element_2 = tmp_assign_source_60;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_unpack_11;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_11 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_61 = UNPACK_NEXT( tmp_unpack_11, 2, 3 );
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


                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 163;
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__element_3;
                tmp_tuple_unpack_5__element_3 = tmp_assign_source_61;
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

                        type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 163;
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

                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 163;
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
            PyObject *tmp_assign_source_62;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
            tmp_assign_source_62 = tmp_tuple_unpack_5__element_1;
            {
                PyObject *old = var__;
                var__ = tmp_assign_source_62;
                Py_INCREF( var__ );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_5__element_1 );
        tmp_tuple_unpack_5__element_1 = NULL;

        {
            PyObject *tmp_assign_source_63;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
            tmp_assign_source_63 = tmp_tuple_unpack_5__element_2;
            {
                PyObject *old = var_t;
                var_t = tmp_assign_source_63;
                Py_INCREF( var_t );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_5__element_2 );
        tmp_tuple_unpack_5__element_2 = NULL;

        {
            PyObject *tmp_assign_source_64;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_3 );
            tmp_assign_source_64 = tmp_tuple_unpack_5__element_3;
            {
                PyObject *old = var_intersect;
                var_intersect = tmp_assign_source_64;
                Py_INCREF( var_intersect );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_5__element_3 );
        tmp_tuple_unpack_5__element_3 = NULL;

        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_left_name_28;
            PyObject *tmp_right_name_28;
            PyObject *tmp_called_name_23;
            PyObject *tmp_source_name_12;
            PyObject *tmp_args_element_name_65;
            PyObject *tmp_left_name_29;
            PyObject *tmp_right_name_29;
            PyObject *tmp_left_name_30;
            PyObject *tmp_right_name_30;
            if ( var_x == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 165;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_28 = var_x;
            if ( var_S == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "S" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 165;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_12 = var_S;
            tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_dot );
            if ( tmp_called_name_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_d );
            tmp_left_name_29 = var_d;
            CHECK_OBJECT( var_t );
            tmp_left_name_30 = var_t;
            CHECK_OBJECT( var_y );
            tmp_right_name_30 = var_y;
            tmp_right_name_29 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_30, tmp_right_name_30 );
            if ( tmp_right_name_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_23 );

                exception_lineno = 165;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_65 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_29, tmp_right_name_29 );
            Py_DECREF( tmp_right_name_29 );
            if ( tmp_args_element_name_65 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_23 );

                exception_lineno = 165;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 165;
            {
                PyObject *call_args[] = { tmp_args_element_name_65 };
                tmp_right_name_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
            }

            Py_DECREF( tmp_called_name_23 );
            Py_DECREF( tmp_args_element_name_65 );
            if ( tmp_right_name_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_65 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_28, tmp_right_name_28 );
            Py_DECREF( tmp_right_name_28 );
            if ( tmp_assign_source_65 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_x_soc;
                var_x_soc = tmp_assign_source_65;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_called_name_24;
            PyObject *tmp_args_element_name_66;
            CHECK_OBJECT( par_fun_and_constr );
            tmp_called_name_24 = par_fun_and_constr;
            CHECK_OBJECT( var_x_soc );
            tmp_args_element_name_66 = var_x_soc;
            frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 166;
            {
                PyObject *call_args[] = { tmp_args_element_name_66 };
                tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
            }

            if ( tmp_iter_arg_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            tmp_assign_source_66 = MAKE_ITERATOR( tmp_iter_arg_6 );
            Py_DECREF( tmp_iter_arg_6 );
            if ( tmp_assign_source_66 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_6__source_iter;
                tmp_tuple_unpack_6__source_iter = tmp_assign_source_66;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_unpack_12;
            CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
            tmp_unpack_12 = tmp_tuple_unpack_6__source_iter;
            tmp_assign_source_67 = UNPACK_NEXT( tmp_unpack_12, 0, 2 );
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


                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 166;
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_tuple_unpack_6__element_1;
                tmp_tuple_unpack_6__element_1 = tmp_assign_source_67;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_unpack_13;
            CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
            tmp_unpack_13 = tmp_tuple_unpack_6__source_iter;
            tmp_assign_source_68 = UNPACK_NEXT( tmp_unpack_13, 1, 2 );
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


                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 166;
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_tuple_unpack_6__element_2;
                tmp_tuple_unpack_6__element_2 = tmp_assign_source_68;
                Py_XDECREF( old );
            }

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

                        type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 166;
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

                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 166;
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
            PyObject *tmp_assign_source_69;
            CHECK_OBJECT( tmp_tuple_unpack_6__element_1 );
            tmp_assign_source_69 = tmp_tuple_unpack_6__element_1;
            {
                PyObject *old = var_f_soc;
                var_f_soc = tmp_assign_source_69;
                Py_INCREF( var_f_soc );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_6__element_1 );
        tmp_tuple_unpack_6__element_1 = NULL;

        {
            PyObject *tmp_assign_source_70;
            CHECK_OBJECT( tmp_tuple_unpack_6__element_2 );
            tmp_assign_source_70 = tmp_tuple_unpack_6__element_2;
            {
                PyObject *old = var_b_soc;
                var_b_soc = tmp_assign_source_70;
                Py_INCREF( var_b_soc );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_6__element_2 );
        tmp_tuple_unpack_6__element_2 = NULL;

        {
            PyObject *tmp_assign_source_71;
            PyObject *tmp_left_name_31;
            PyObject *tmp_right_name_31;
            PyObject *tmp_left_name_32;
            PyObject *tmp_right_name_32;
            PyObject *tmp_called_name_25;
            PyObject *tmp_mvar_value_24;
            PyObject *tmp_args_element_name_67;
            CHECK_OBJECT( var_f_soc );
            tmp_left_name_31 = var_f_soc;
            if ( var_penalty == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "penalty" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 168;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_32 = var_penalty;
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_norm );

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

                exception_lineno = 168;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_25 = tmp_mvar_value_24;
            CHECK_OBJECT( var_b_soc );
            tmp_args_element_name_67 = var_b_soc;
            frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 168;
            {
                PyObject *call_args[] = { tmp_args_element_name_67 };
                tmp_right_name_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
            }

            if ( tmp_right_name_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 168;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_31 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_32, tmp_right_name_32 );
            Py_DECREF( tmp_right_name_32 );
            if ( tmp_right_name_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 168;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_71 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_31, tmp_right_name_31 );
            Py_DECREF( tmp_right_name_31 );
            if ( tmp_assign_source_71 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 168;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_merit_function_soc;
                var_merit_function_soc = tmp_assign_source_71;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_72;
            PyObject *tmp_left_name_33;
            PyObject *tmp_right_name_33;
            CHECK_OBJECT( var_merit_function );
            tmp_left_name_33 = var_merit_function;
            CHECK_OBJECT( var_merit_function_soc );
            tmp_right_name_33 = var_merit_function_soc;
            tmp_assign_source_72 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_33, tmp_right_name_33 );
            if ( tmp_assign_source_72 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 169;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_actual_reduction_soc;
                var_actual_reduction_soc = tmp_assign_source_72;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_73;
            PyObject *tmp_left_name_34;
            PyObject *tmp_right_name_34;
            CHECK_OBJECT( var_actual_reduction_soc );
            tmp_left_name_34 = var_actual_reduction_soc;
            CHECK_OBJECT( var_predicted_reduction );
            tmp_right_name_34 = var_predicted_reduction;
            tmp_assign_source_73 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_34, tmp_right_name_34 );
            if ( tmp_assign_source_73 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_reduction_ratio_soc;
                var_reduction_ratio_soc = tmp_assign_source_73;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_7;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            int tmp_truth_name_1;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT( var_intersect );
            tmp_truth_name_1 = CHECK_IF_TRUE( var_intersect );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 172;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( var_reduction_ratio_soc );
            tmp_compexpr_left_7 = var_reduction_ratio_soc;
            tmp_compexpr_right_7 = const_float_1eminus_08;
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 172;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_assign_source_74;
                CHECK_OBJECT( var_x_soc );
                tmp_assign_source_74 = var_x_soc;
                {
                    PyObject *old = var_x_next;
                    assert( old != NULL );
                    var_x_next = tmp_assign_source_74;
                    Py_INCREF( var_x_next );
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_75;
                CHECK_OBJECT( var_f_soc );
                tmp_assign_source_75 = var_f_soc;
                {
                    PyObject *old = var_f_next;
                    assert( old != NULL );
                    var_f_next = tmp_assign_source_75;
                    Py_INCREF( var_f_next );
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_76;
                CHECK_OBJECT( var_b_soc );
                tmp_assign_source_76 = var_b_soc;
                {
                    PyObject *old = var_b_next;
                    assert( old != NULL );
                    var_b_next = tmp_assign_source_76;
                    Py_INCREF( var_b_next );
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_77;
                CHECK_OBJECT( var_reduction_ratio_soc );
                tmp_assign_source_77 = var_reduction_ratio_soc;
                {
                    PyObject *old = var_reduction_ratio;
                    assert( old != NULL );
                    var_reduction_ratio = tmp_assign_source_77;
                    Py_INCREF( var_reduction_ratio );
                    Py_DECREF( old );
                }

            }
            branch_no_6:;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        if ( var_reduction_ratio == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "reduction_ratio" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_8 = var_reduction_ratio;
        tmp_compexpr_right_8 = const_float_0_9;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_called_name_26;
            PyObject *tmp_args_element_name_68;
            PyObject *tmp_left_name_35;
            PyObject *tmp_right_name_35;
            PyObject *tmp_called_name_27;
            PyObject *tmp_mvar_value_25;
            PyObject *tmp_args_element_name_69;
            PyObject *tmp_args_element_name_70;
            tmp_called_name_26 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_26 != NULL );
            tmp_left_name_35 = const_float_7_0;
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_norm );

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

                exception_lineno = 180;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_27 = tmp_mvar_value_25;
            CHECK_OBJECT( var_d );
            tmp_args_element_name_69 = var_d;
            frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 180;
            {
                PyObject *call_args[] = { tmp_args_element_name_69 };
                tmp_right_name_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
            }

            if ( tmp_right_name_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 180;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_68 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_35, tmp_right_name_35 );
            Py_DECREF( tmp_right_name_35 );
            if ( tmp_args_element_name_68 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 180;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_trust_radius == NULL )
            {
                Py_DECREF( tmp_args_element_name_68 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "trust_radius" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 181;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_70 = var_trust_radius;
            frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 180;
            {
                PyObject *call_args[] = { tmp_args_element_name_68, tmp_args_element_name_70 };
                tmp_assign_source_78 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_26, call_args );
            }

            Py_DECREF( tmp_args_element_name_68 );
            if ( tmp_assign_source_78 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 180;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_trust_radius;
                var_trust_radius = tmp_assign_source_78;
                Py_XDECREF( old );
            }

        }
        goto branch_end_7;
        branch_no_7:;
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            if ( var_reduction_ratio == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "reduction_ratio" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 182;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_9 = var_reduction_ratio;
            tmp_compexpr_right_9 = const_float_0_3;
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 182;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_8;
            }
            else
            {
                goto branch_no_8;
            }
            branch_yes_8:;
            {
                PyObject *tmp_assign_source_79;
                PyObject *tmp_called_name_28;
                PyObject *tmp_args_element_name_71;
                PyObject *tmp_left_name_36;
                PyObject *tmp_right_name_36;
                PyObject *tmp_called_name_29;
                PyObject *tmp_mvar_value_26;
                PyObject *tmp_args_element_name_72;
                PyObject *tmp_args_element_name_73;
                tmp_called_name_28 = LOOKUP_BUILTIN( const_str_plain_max );
                assert( tmp_called_name_28 != NULL );
                tmp_left_name_36 = const_float_2_0;
                tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_norm );

                if (unlikely( tmp_mvar_value_26 == NULL ))
                {
                    tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
                }

                if ( tmp_mvar_value_26 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 183;
                    type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_29 = tmp_mvar_value_26;
                CHECK_OBJECT( var_d );
                tmp_args_element_name_72 = var_d;
                frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 183;
                {
                    PyObject *call_args[] = { tmp_args_element_name_72 };
                    tmp_right_name_36 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, call_args );
                }

                if ( tmp_right_name_36 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 183;
                    type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_71 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_36, tmp_right_name_36 );
                Py_DECREF( tmp_right_name_36 );
                if ( tmp_args_element_name_71 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 183;
                    type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                if ( var_trust_radius == NULL )
                {
                    Py_DECREF( tmp_args_element_name_71 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "trust_radius" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 184;
                    type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_73 = var_trust_radius;
                frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 183;
                {
                    PyObject *call_args[] = { tmp_args_element_name_71, tmp_args_element_name_73 };
                    tmp_assign_source_79 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_28, call_args );
                }

                Py_DECREF( tmp_args_element_name_71 );
                if ( tmp_assign_source_79 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 183;
                    type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_trust_radius;
                    var_trust_radius = tmp_assign_source_79;
                    Py_XDECREF( old );
                }

            }
            goto branch_end_8;
            branch_no_8:;
            {
                nuitka_bool tmp_condition_result_10;
                PyObject *tmp_compexpr_left_10;
                PyObject *tmp_compexpr_right_10;
                if ( var_reduction_ratio == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "reduction_ratio" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 186;
                    type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_left_10 = var_reduction_ratio;
                tmp_compexpr_right_10 = const_float_1eminus_08;
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 186;
                    type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_9;
                }
                else
                {
                    goto branch_no_9;
                }
                branch_yes_9:;
                {
                    PyObject *tmp_assign_source_80;
                    PyObject *tmp_left_name_37;
                    PyObject *tmp_right_name_37;
                    PyObject *tmp_left_name_38;
                    PyObject *tmp_right_name_38;
                    tmp_left_name_37 = const_float_0_99999999;
                    tmp_left_name_38 = const_int_pos_1;
                    if ( var_reduction_ratio == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "reduction_ratio" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 188;
                        type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_right_name_38 = var_reduction_ratio;
                    tmp_right_name_37 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_38, tmp_right_name_38 );
                    if ( tmp_right_name_37 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 188;
                        type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_80 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_37, tmp_right_name_37 );
                    Py_DECREF( tmp_right_name_37 );
                    if ( tmp_assign_source_80 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 187;
                        type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_trust_reduction;
                        var_trust_reduction = tmp_assign_source_80;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_81;
                    PyObject *tmp_left_name_39;
                    PyObject *tmp_right_name_39;
                    PyObject *tmp_called_name_30;
                    PyObject *tmp_mvar_value_27;
                    PyObject *tmp_args_element_name_74;
                    CHECK_OBJECT( var_trust_reduction );
                    tmp_left_name_39 = var_trust_reduction;
                    tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_norm );

                    if (unlikely( tmp_mvar_value_27 == NULL ))
                    {
                        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
                    }

                    if ( tmp_mvar_value_27 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 189;
                        type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_30 = tmp_mvar_value_27;
                    CHECK_OBJECT( var_d );
                    tmp_args_element_name_74 = var_d;
                    frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 189;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_74 };
                        tmp_right_name_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
                    }

                    if ( tmp_right_name_39 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 189;
                        type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_81 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_39, tmp_right_name_39 );
                    Py_DECREF( tmp_right_name_39 );
                    if ( tmp_assign_source_81 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 189;
                        type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_new_trust_radius;
                        var_new_trust_radius = tmp_assign_source_81;
                        Py_XDECREF( old );
                    }

                }
                {
                    nuitka_bool tmp_condition_result_11;
                    PyObject *tmp_compexpr_left_11;
                    PyObject *tmp_compexpr_right_11;
                    PyObject *tmp_left_name_40;
                    PyObject *tmp_right_name_40;
                    CHECK_OBJECT( var_new_trust_radius );
                    tmp_compexpr_left_11 = var_new_trust_radius;
                    tmp_left_name_40 = const_float_0_5;
                    if ( var_trust_radius == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "trust_radius" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 190;
                        type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_right_name_40 = var_trust_radius;
                    tmp_compexpr_right_11 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_40, tmp_right_name_40 );
                    if ( tmp_compexpr_right_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 190;
                        type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
                    Py_DECREF( tmp_compexpr_right_11 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 190;
                        type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_10;
                    }
                    else
                    {
                        goto branch_no_10;
                    }
                    branch_yes_10:;
                    {
                        PyObject *tmp_assign_source_82;
                        PyObject *tmp_left_name_41;
                        PyObject *tmp_right_name_41;
                        if ( var_trust_radius == NULL )
                        {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "trust_radius" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 191;
                            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_left_name_41 = var_trust_radius;
                        tmp_right_name_41 = const_float_0_5;
                        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_41, tmp_right_name_41 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 191;
                            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_assign_source_82 = tmp_left_name_41;
                        var_trust_radius = tmp_assign_source_82;

                    }
                    goto branch_end_10;
                    branch_no_10:;
                    {
                        nuitka_bool tmp_condition_result_12;
                        PyObject *tmp_compexpr_left_12;
                        PyObject *tmp_compexpr_right_12;
                        PyObject *tmp_left_name_42;
                        PyObject *tmp_right_name_42;
                        CHECK_OBJECT( var_new_trust_radius );
                        tmp_compexpr_left_12 = var_new_trust_radius;
                        tmp_left_name_42 = const_float_0_1;
                        if ( var_trust_radius == NULL )
                        {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "trust_radius" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 192;
                            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_right_name_42 = var_trust_radius;
                        tmp_compexpr_right_12 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_42, tmp_right_name_42 );
                        if ( tmp_compexpr_right_12 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 192;
                            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
                        Py_DECREF( tmp_compexpr_right_12 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 192;
                            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
                        {
                            goto branch_yes_11;
                        }
                        else
                        {
                            goto branch_no_11;
                        }
                        branch_yes_11:;
                        {
                            PyObject *tmp_assign_source_83;
                            CHECK_OBJECT( var_new_trust_radius );
                            tmp_assign_source_83 = var_new_trust_radius;
                            {
                                PyObject *old = var_trust_radius;
                                var_trust_radius = tmp_assign_source_83;
                                Py_INCREF( var_trust_radius );
                                Py_XDECREF( old );
                            }

                        }
                        goto branch_end_11;
                        branch_no_11:;
                        {
                            PyObject *tmp_assign_source_84;
                            PyObject *tmp_left_name_43;
                            PyObject *tmp_right_name_43;
                            if ( var_trust_radius == NULL )
                            {

                                exception_type = PyExc_UnboundLocalError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "trust_radius" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 195;
                                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_left_name_43 = var_trust_radius;
                            tmp_right_name_43 = const_float_0_1;
                            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_43, tmp_right_name_43 );
                            if ( tmp_result == false )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 195;
                                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_assign_source_84 = tmp_left_name_43;
                            var_trust_radius = tmp_assign_source_84;

                        }
                        branch_end_11:;
                    }
                    branch_end_10:;
                }
                branch_no_9:;
            }
            branch_end_8:;
        }
        branch_end_7:;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        if ( var_reduction_ratio == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "reduction_ratio" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 198;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_13 = var_reduction_ratio;
        tmp_compexpr_right_13 = const_float_1eminus_08;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_12;
        }
        else
        {
            goto branch_no_12;
        }
        branch_yes_12:;
        {
            PyObject *tmp_assign_source_85;
            if ( var_x_next == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x_next" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 199;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_assign_source_85 = var_x_next;
            {
                PyObject *old = var_x;
                var_x = tmp_assign_source_85;
                Py_INCREF( var_x );
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_86;
            PyObject *tmp_iter_arg_7;
            PyObject *tmp_tuple_element_1;
            if ( var_f_next == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f_next" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 200;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }

            tmp_tuple_element_1 = var_f_next;
            tmp_iter_arg_7 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_iter_arg_7, 0, tmp_tuple_element_1 );
            if ( var_b_next == NULL )
            {
                Py_DECREF( tmp_iter_arg_7 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b_next" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 200;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }

            tmp_tuple_element_1 = var_b_next;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_iter_arg_7, 1, tmp_tuple_element_1 );
            tmp_assign_source_86 = MAKE_ITERATOR( tmp_iter_arg_7 );
            Py_DECREF( tmp_iter_arg_7 );
            if ( tmp_assign_source_86 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_tuple_unpack_7__source_iter;
                tmp_tuple_unpack_7__source_iter = tmp_assign_source_86;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_87;
            PyObject *tmp_unpack_14;
            CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
            tmp_unpack_14 = tmp_tuple_unpack_7__source_iter;
            tmp_assign_source_87 = UNPACK_NEXT( tmp_unpack_14, 0, 2 );
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


                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 200;
                goto try_except_handler_15;
            }
            {
                PyObject *old = tmp_tuple_unpack_7__element_1;
                tmp_tuple_unpack_7__element_1 = tmp_assign_source_87;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_88;
            PyObject *tmp_unpack_15;
            CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
            tmp_unpack_15 = tmp_tuple_unpack_7__source_iter;
            tmp_assign_source_88 = UNPACK_NEXT( tmp_unpack_15, 1, 2 );
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


                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 200;
                goto try_except_handler_15;
            }
            {
                PyObject *old = tmp_tuple_unpack_7__element_2;
                tmp_tuple_unpack_7__element_2 = tmp_assign_source_88;
                Py_XDECREF( old );
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
            PyObject *tmp_assign_source_89;
            CHECK_OBJECT( tmp_tuple_unpack_7__element_1 );
            tmp_assign_source_89 = tmp_tuple_unpack_7__element_1;
            {
                PyObject *old = var_f;
                var_f = tmp_assign_source_89;
                Py_INCREF( var_f );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_7__element_1 );
        tmp_tuple_unpack_7__element_1 = NULL;

        {
            PyObject *tmp_assign_source_90;
            CHECK_OBJECT( tmp_tuple_unpack_7__element_2 );
            tmp_assign_source_90 = tmp_tuple_unpack_7__element_2;
            {
                PyObject *old = var_b;
                var_b = tmp_assign_source_90;
                Py_INCREF( var_b );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_7__element_2 );
        tmp_tuple_unpack_7__element_2 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_91;
            PyObject *tmp_iter_arg_8;
            PyObject *tmp_called_name_31;
            PyObject *tmp_args_element_name_75;
            CHECK_OBJECT( par_grad_and_jac );
            tmp_called_name_31 = par_grad_and_jac;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_75 = var_x;
            frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 201;
            {
                PyObject *call_args[] = { tmp_args_element_name_75 };
                tmp_iter_arg_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, call_args );
            }

            if ( tmp_iter_arg_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 201;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            tmp_assign_source_91 = MAKE_ITERATOR( tmp_iter_arg_8 );
            Py_DECREF( tmp_iter_arg_8 );
            if ( tmp_assign_source_91 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 201;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            {
                PyObject *old = tmp_tuple_unpack_8__source_iter;
                tmp_tuple_unpack_8__source_iter = tmp_assign_source_91;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_92;
            PyObject *tmp_unpack_16;
            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
            tmp_unpack_16 = tmp_tuple_unpack_8__source_iter;
            tmp_assign_source_92 = UNPACK_NEXT( tmp_unpack_16, 0, 2 );
            if ( tmp_assign_source_92 == NULL )
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


                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 201;
                goto try_except_handler_17;
            }
            {
                PyObject *old = tmp_tuple_unpack_8__element_1;
                tmp_tuple_unpack_8__element_1 = tmp_assign_source_92;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_93;
            PyObject *tmp_unpack_17;
            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
            tmp_unpack_17 = tmp_tuple_unpack_8__source_iter;
            tmp_assign_source_93 = UNPACK_NEXT( tmp_unpack_17, 1, 2 );
            if ( tmp_assign_source_93 == NULL )
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


                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 201;
                goto try_except_handler_17;
            }
            {
                PyObject *old = tmp_tuple_unpack_8__element_2;
                tmp_tuple_unpack_8__element_2 = tmp_assign_source_93;
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

                        type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 201;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 201;
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
            PyObject *tmp_assign_source_94;
            CHECK_OBJECT( tmp_tuple_unpack_8__element_1 );
            tmp_assign_source_94 = tmp_tuple_unpack_8__element_1;
            {
                PyObject *old = var_c;
                var_c = tmp_assign_source_94;
                Py_INCREF( var_c );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_8__element_1 );
        tmp_tuple_unpack_8__element_1 = NULL;

        {
            PyObject *tmp_assign_source_95;
            CHECK_OBJECT( tmp_tuple_unpack_8__element_2 );
            tmp_assign_source_95 = tmp_tuple_unpack_8__element_2;
            {
                PyObject *old = var_A;
                var_A = tmp_assign_source_95;
                Py_INCREF( var_A );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_8__element_2 );
        tmp_tuple_unpack_8__element_2 = NULL;

        {
            PyObject *tmp_assign_source_96;
            PyObject *tmp_called_name_32;
            PyObject *tmp_args_element_name_76;
            CHECK_OBJECT( par_scaling );
            tmp_called_name_32 = par_scaling;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_76 = var_x;
            frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 202;
            {
                PyObject *call_args[] = { tmp_args_element_name_76 };
                tmp_assign_source_96 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_32, call_args );
            }

            if ( tmp_assign_source_96 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 202;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_S;
                var_S = tmp_assign_source_96;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_97;
            PyObject *tmp_iter_arg_9;
            PyObject *tmp_called_name_33;
            PyObject *tmp_mvar_value_28;
            PyObject *tmp_args_element_name_77;
            PyObject *tmp_args_element_name_78;
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_projections );

            if (unlikely( tmp_mvar_value_28 == NULL ))
            {
                tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_projections );
            }

            if ( tmp_mvar_value_28 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "projections" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 204;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }

            tmp_called_name_33 = tmp_mvar_value_28;
            CHECK_OBJECT( var_A );
            tmp_args_element_name_77 = var_A;
            CHECK_OBJECT( par_factorization_method );
            tmp_args_element_name_78 = par_factorization_method;
            frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 204;
            {
                PyObject *call_args[] = { tmp_args_element_name_77, tmp_args_element_name_78 };
                tmp_iter_arg_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_33, call_args );
            }

            if ( tmp_iter_arg_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }
            tmp_assign_source_97 = MAKE_ITERATOR( tmp_iter_arg_9 );
            Py_DECREF( tmp_iter_arg_9 );
            if ( tmp_assign_source_97 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }
            {
                PyObject *old = tmp_tuple_unpack_9__source_iter;
                tmp_tuple_unpack_9__source_iter = tmp_assign_source_97;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_98;
            PyObject *tmp_unpack_18;
            CHECK_OBJECT( tmp_tuple_unpack_9__source_iter );
            tmp_unpack_18 = tmp_tuple_unpack_9__source_iter;
            tmp_assign_source_98 = UNPACK_NEXT( tmp_unpack_18, 0, 3 );
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


                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 204;
                goto try_except_handler_19;
            }
            {
                PyObject *old = tmp_tuple_unpack_9__element_1;
                tmp_tuple_unpack_9__element_1 = tmp_assign_source_98;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_99;
            PyObject *tmp_unpack_19;
            CHECK_OBJECT( tmp_tuple_unpack_9__source_iter );
            tmp_unpack_19 = tmp_tuple_unpack_9__source_iter;
            tmp_assign_source_99 = UNPACK_NEXT( tmp_unpack_19, 1, 3 );
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


                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 204;
                goto try_except_handler_19;
            }
            {
                PyObject *old = tmp_tuple_unpack_9__element_2;
                tmp_tuple_unpack_9__element_2 = tmp_assign_source_99;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_100;
            PyObject *tmp_unpack_20;
            CHECK_OBJECT( tmp_tuple_unpack_9__source_iter );
            tmp_unpack_20 = tmp_tuple_unpack_9__source_iter;
            tmp_assign_source_100 = UNPACK_NEXT( tmp_unpack_20, 2, 3 );
            if ( tmp_assign_source_100 == NULL )
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


                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 204;
                goto try_except_handler_19;
            }
            {
                PyObject *old = tmp_tuple_unpack_9__element_3;
                tmp_tuple_unpack_9__element_3 = tmp_assign_source_100;
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

                        type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 204;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 204;
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

        Py_XDECREF( tmp_tuple_unpack_9__element_3 );
        tmp_tuple_unpack_9__element_3 = NULL;

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
            PyObject *tmp_assign_source_101;
            CHECK_OBJECT( tmp_tuple_unpack_9__element_1 );
            tmp_assign_source_101 = tmp_tuple_unpack_9__element_1;
            {
                PyObject *old = var_Z;
                var_Z = tmp_assign_source_101;
                Py_INCREF( var_Z );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_9__element_1 );
        tmp_tuple_unpack_9__element_1 = NULL;

        {
            PyObject *tmp_assign_source_102;
            CHECK_OBJECT( tmp_tuple_unpack_9__element_2 );
            tmp_assign_source_102 = tmp_tuple_unpack_9__element_2;
            {
                PyObject *old = var_LS;
                var_LS = tmp_assign_source_102;
                Py_INCREF( var_LS );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_9__element_2 );
        tmp_tuple_unpack_9__element_2 = NULL;

        {
            PyObject *tmp_assign_source_103;
            CHECK_OBJECT( tmp_tuple_unpack_9__element_3 );
            tmp_assign_source_103 = tmp_tuple_unpack_9__element_3;
            {
                PyObject *old = var_Y;
                var_Y = tmp_assign_source_103;
                Py_INCREF( var_Y );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_9__element_3 );
        tmp_tuple_unpack_9__element_3 = NULL;

        {
            PyObject *tmp_assign_source_104;
            PyObject *tmp_operand_name_7;
            PyObject *tmp_called_instance_13;
            PyObject *tmp_args_element_name_79;
            CHECK_OBJECT( var_LS );
            tmp_called_instance_13 = var_LS;
            CHECK_OBJECT( var_c );
            tmp_args_element_name_79 = var_c;
            frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 206;
            {
                PyObject *call_args[] = { tmp_args_element_name_79 };
                tmp_operand_name_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_dot, call_args );
            }

            if ( tmp_operand_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 206;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_104 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_7 );
            Py_DECREF( tmp_operand_name_7 );
            if ( tmp_assign_source_104 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 206;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_v;
                var_v = tmp_assign_source_104;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_105;
            PyObject *tmp_called_name_34;
            PyObject *tmp_args_element_name_80;
            PyObject *tmp_args_element_name_81;
            CHECK_OBJECT( par_lagr_hess );
            tmp_called_name_34 = par_lagr_hess;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_80 = var_x;
            CHECK_OBJECT( var_v );
            tmp_args_element_name_81 = var_v;
            frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 208;
            {
                PyObject *call_args[] = { tmp_args_element_name_80, tmp_args_element_name_81 };
                tmp_assign_source_105 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_34, call_args );
            }

            if ( tmp_assign_source_105 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_H;
                var_H = tmp_assign_source_105;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_106;
            tmp_assign_source_106 = Py_False;
            {
                PyObject *old = var_last_iteration_failed;
                assert( old != NULL );
                var_last_iteration_failed = tmp_assign_source_106;
                Py_INCREF( var_last_iteration_failed );
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_107;
            PyObject *tmp_called_name_35;
            PyObject *tmp_mvar_value_29;
            PyObject *tmp_args_element_name_82;
            PyObject *tmp_left_name_44;
            PyObject *tmp_right_name_44;
            PyObject *tmp_called_instance_14;
            PyObject *tmp_source_name_13;
            PyObject *tmp_args_element_name_83;
            PyObject *tmp_args_element_name_84;
            PyObject *tmp_source_name_14;
            PyObject *tmp_mvar_value_30;
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_norm );

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

                exception_lineno = 212;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_35 = tmp_mvar_value_29;
            CHECK_OBJECT( var_c );
            tmp_left_name_44 = var_c;
            CHECK_OBJECT( var_A );
            tmp_source_name_13 = var_A;
            tmp_called_instance_14 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_T );
            if ( tmp_called_instance_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 212;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_v );
            tmp_args_element_name_83 = var_v;
            frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 212;
            {
                PyObject *call_args[] = { tmp_args_element_name_83 };
                tmp_right_name_44 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_dot, call_args );
            }

            Py_DECREF( tmp_called_instance_14 );
            if ( tmp_right_name_44 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 212;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_82 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_44, tmp_right_name_44 );
            Py_DECREF( tmp_right_name_44 );
            if ( tmp_args_element_name_82 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 212;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_30 == NULL ))
            {
                tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_30 == NULL )
            {
                Py_DECREF( tmp_args_element_name_82 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 212;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_14 = tmp_mvar_value_30;
            tmp_args_element_name_84 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_inf );
            if ( tmp_args_element_name_84 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_82 );

                exception_lineno = 212;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 212;
            {
                PyObject *call_args[] = { tmp_args_element_name_82, tmp_args_element_name_84 };
                tmp_assign_source_107 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_35, call_args );
            }

            Py_DECREF( tmp_args_element_name_82 );
            Py_DECREF( tmp_args_element_name_84 );
            if ( tmp_assign_source_107 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 212;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_optimality;
                var_optimality = tmp_assign_source_107;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_108;
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_compexpr_left_14;
            PyObject *tmp_compexpr_right_14;
            PyObject *tmp_len_arg_2;
            PyObject *tmp_called_name_36;
            PyObject *tmp_mvar_value_31;
            PyObject *tmp_args_element_name_85;
            PyObject *tmp_args_element_name_86;
            PyObject *tmp_source_name_15;
            PyObject *tmp_mvar_value_32;
            CHECK_OBJECT( var_b );
            tmp_len_arg_2 = var_b;
            tmp_compexpr_left_14 = BUILTIN_LEN( tmp_len_arg_2 );
            if ( tmp_compexpr_left_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 213;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_14 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
            Py_DECREF( tmp_compexpr_left_14 );
            assert( !(tmp_res == -1) );
            tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_2;
            }
            else
            {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_norm );

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

                exception_lineno = 213;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_36 = tmp_mvar_value_31;
            CHECK_OBJECT( var_b );
            tmp_args_element_name_85 = var_b;
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_32 == NULL ))
            {
                tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_32 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 213;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_15 = tmp_mvar_value_32;
            tmp_args_element_name_86 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_inf );
            if ( tmp_args_element_name_86 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 213;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_294d84b40e68f32a48ed32554ad64478->m_frame.f_lineno = 213;
            {
                PyObject *call_args[] = { tmp_args_element_name_85, tmp_args_element_name_86 };
                tmp_assign_source_108 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_36, call_args );
            }

            Py_DECREF( tmp_args_element_name_86 );
            if ( tmp_assign_source_108 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 213;
                type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_assign_source_108 = const_int_0;
            Py_INCREF( tmp_assign_source_108 );
            condexpr_end_2:;
            {
                PyObject *old = var_constr_violation;
                var_constr_violation = tmp_assign_source_108;
                Py_XDECREF( old );
            }

        }
        goto branch_end_12;
        branch_no_12:;
        {
            PyObject *tmp_assign_source_109;
            CHECK_OBJECT( var_previous_penalty );
            tmp_assign_source_109 = var_previous_penalty;
            {
                PyObject *old = var_penalty;
                var_penalty = tmp_assign_source_109;
                Py_INCREF( var_penalty );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_110;
            tmp_assign_source_110 = Py_True;
            {
                PyObject *old = var_last_iteration_failed;
                assert( old != NULL );
                var_last_iteration_failed = tmp_assign_source_110;
                Py_INCREF( var_last_iteration_failed );
                Py_DECREF( old );
            }

        }
        branch_end_12:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_tuple_element_2;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 218;
            type_description_1 = "ooooooooooooooooNNNNNNNNNNNooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_x;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_state );
        tmp_tuple_element_2 = par_state;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_294d84b40e68f32a48ed32554ad64478 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_294d84b40e68f32a48ed32554ad64478 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_294d84b40e68f32a48ed32554ad64478 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_294d84b40e68f32a48ed32554ad64478, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_294d84b40e68f32a48ed32554ad64478->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_294d84b40e68f32a48ed32554ad64478, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_294d84b40e68f32a48ed32554ad64478,
        type_description_1,
        par_fun_and_constr,
        par_grad_and_jac,
        par_lagr_hess,
        par_x0,
        par_fun0,
        par_grad0,
        par_constr0,
        par_jac0,
        par_stop_criteria,
        par_state,
        par_initial_penalty,
        par_initial_trust_radius,
        par_factorization_method,
        par_trust_lb,
        par_trust_ub,
        par_scaling,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        var_n,
        var_x,
        var_trust_radius,
        var_penalty,
        var_f,
        var_c,
        var_b,
        var_A,
        var_S,
        var_Z,
        var_LS,
        var_Y,
        var_v,
        var_H,
        var_optimality,
        var_constr_violation,
        var_cg_info,
        var_last_iteration_failed,
        var_dn,
        var_c_t,
        var_b_t,
        var_trust_radius_t,
        var_lb_t,
        var_ub_t,
        var_dt,
        var_d,
        var_quadratic_model,
        var_linearized_constr,
        var_vpred,
        var_previous_penalty,
        var_new_penalty,
        var_predicted_reduction,
        var_merit_function,
        var_x_next,
        var_f_next,
        var_b_next,
        var_merit_function_next,
        var_actual_reduction,
        var_reduction_ratio,
        var_y,
        var__,
        var_t,
        var_intersect,
        var_x_soc,
        var_f_soc,
        var_b_soc,
        var_merit_function_soc,
        var_actual_reduction_soc,
        var_reduction_ratio_soc,
        var_trust_reduction,
        var_new_trust_radius
    );


    // Release cached frame.
    if ( frame_294d84b40e68f32a48ed32554ad64478 == cache_frame_294d84b40e68f32a48ed32554ad64478 )
    {
        Py_DECREF( frame_294d84b40e68f32a48ed32554ad64478 );
    }
    cache_frame_294d84b40e68f32a48ed32554ad64478 = NULL;

    assertFrameObject( frame_294d84b40e68f32a48ed32554ad64478 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$equality_constrained_sqp$$$function_2_equality_constrained_sqp );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fun_and_constr );
    Py_DECREF( par_fun_and_constr );
    par_fun_and_constr = NULL;

    CHECK_OBJECT( (PyObject *)par_grad_and_jac );
    Py_DECREF( par_grad_and_jac );
    par_grad_and_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_lagr_hess );
    Py_DECREF( par_lagr_hess );
    par_lagr_hess = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_fun0 );
    Py_DECREF( par_fun0 );
    par_fun0 = NULL;

    CHECK_OBJECT( (PyObject *)par_grad0 );
    Py_DECREF( par_grad0 );
    par_grad0 = NULL;

    CHECK_OBJECT( (PyObject *)par_constr0 );
    Py_DECREF( par_constr0 );
    par_constr0 = NULL;

    CHECK_OBJECT( (PyObject *)par_jac0 );
    Py_DECREF( par_jac0 );
    par_jac0 = NULL;

    CHECK_OBJECT( (PyObject *)par_stop_criteria );
    Py_DECREF( par_stop_criteria );
    par_stop_criteria = NULL;

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    CHECK_OBJECT( (PyObject *)par_initial_penalty );
    Py_DECREF( par_initial_penalty );
    par_initial_penalty = NULL;

    CHECK_OBJECT( (PyObject *)par_initial_trust_radius );
    Py_DECREF( par_initial_trust_radius );
    par_initial_trust_radius = NULL;

    CHECK_OBJECT( (PyObject *)par_factorization_method );
    Py_DECREF( par_factorization_method );
    par_factorization_method = NULL;

    CHECK_OBJECT( (PyObject *)par_trust_lb );
    Py_DECREF( par_trust_lb );
    par_trust_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_trust_ub );
    Py_DECREF( par_trust_ub );
    par_trust_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_scaling );
    Py_DECREF( par_scaling );
    par_scaling = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_trust_radius );
    var_trust_radius = NULL;

    Py_XDECREF( var_penalty );
    var_penalty = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_A );
    var_A = NULL;

    Py_XDECREF( var_S );
    var_S = NULL;

    Py_XDECREF( var_Z );
    var_Z = NULL;

    Py_XDECREF( var_LS );
    var_LS = NULL;

    Py_XDECREF( var_Y );
    var_Y = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_H );
    var_H = NULL;

    Py_XDECREF( var_optimality );
    var_optimality = NULL;

    Py_XDECREF( var_constr_violation );
    var_constr_violation = NULL;

    CHECK_OBJECT( (PyObject *)var_cg_info );
    Py_DECREF( var_cg_info );
    var_cg_info = NULL;

    CHECK_OBJECT( (PyObject *)var_last_iteration_failed );
    Py_DECREF( var_last_iteration_failed );
    var_last_iteration_failed = NULL;

    Py_XDECREF( var_dn );
    var_dn = NULL;

    Py_XDECREF( var_c_t );
    var_c_t = NULL;

    Py_XDECREF( var_b_t );
    var_b_t = NULL;

    Py_XDECREF( var_trust_radius_t );
    var_trust_radius_t = NULL;

    Py_XDECREF( var_lb_t );
    var_lb_t = NULL;

    Py_XDECREF( var_ub_t );
    var_ub_t = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_quadratic_model );
    var_quadratic_model = NULL;

    Py_XDECREF( var_linearized_constr );
    var_linearized_constr = NULL;

    Py_XDECREF( var_vpred );
    var_vpred = NULL;

    Py_XDECREF( var_previous_penalty );
    var_previous_penalty = NULL;

    Py_XDECREF( var_new_penalty );
    var_new_penalty = NULL;

    Py_XDECREF( var_predicted_reduction );
    var_predicted_reduction = NULL;

    Py_XDECREF( var_merit_function );
    var_merit_function = NULL;

    Py_XDECREF( var_x_next );
    var_x_next = NULL;

    Py_XDECREF( var_f_next );
    var_f_next = NULL;

    Py_XDECREF( var_b_next );
    var_b_next = NULL;

    Py_XDECREF( var_merit_function_next );
    var_merit_function_next = NULL;

    Py_XDECREF( var_actual_reduction );
    var_actual_reduction = NULL;

    Py_XDECREF( var_reduction_ratio );
    var_reduction_ratio = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_intersect );
    var_intersect = NULL;

    Py_XDECREF( var_x_soc );
    var_x_soc = NULL;

    Py_XDECREF( var_f_soc );
    var_f_soc = NULL;

    Py_XDECREF( var_b_soc );
    var_b_soc = NULL;

    Py_XDECREF( var_merit_function_soc );
    var_merit_function_soc = NULL;

    Py_XDECREF( var_actual_reduction_soc );
    var_actual_reduction_soc = NULL;

    Py_XDECREF( var_reduction_ratio_soc );
    var_reduction_ratio_soc = NULL;

    Py_XDECREF( var_trust_reduction );
    var_trust_reduction = NULL;

    Py_XDECREF( var_new_trust_radius );
    var_new_trust_radius = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_fun_and_constr );
    Py_DECREF( par_fun_and_constr );
    par_fun_and_constr = NULL;

    CHECK_OBJECT( (PyObject *)par_grad_and_jac );
    Py_DECREF( par_grad_and_jac );
    par_grad_and_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_lagr_hess );
    Py_DECREF( par_lagr_hess );
    par_lagr_hess = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_fun0 );
    Py_DECREF( par_fun0 );
    par_fun0 = NULL;

    CHECK_OBJECT( (PyObject *)par_grad0 );
    Py_DECREF( par_grad0 );
    par_grad0 = NULL;

    CHECK_OBJECT( (PyObject *)par_constr0 );
    Py_DECREF( par_constr0 );
    par_constr0 = NULL;

    CHECK_OBJECT( (PyObject *)par_jac0 );
    Py_DECREF( par_jac0 );
    par_jac0 = NULL;

    CHECK_OBJECT( (PyObject *)par_stop_criteria );
    Py_DECREF( par_stop_criteria );
    par_stop_criteria = NULL;

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    CHECK_OBJECT( (PyObject *)par_initial_penalty );
    Py_DECREF( par_initial_penalty );
    par_initial_penalty = NULL;

    CHECK_OBJECT( (PyObject *)par_initial_trust_radius );
    Py_DECREF( par_initial_trust_radius );
    par_initial_trust_radius = NULL;

    CHECK_OBJECT( (PyObject *)par_factorization_method );
    Py_DECREF( par_factorization_method );
    par_factorization_method = NULL;

    Py_XDECREF( par_trust_lb );
    par_trust_lb = NULL;

    Py_XDECREF( par_trust_ub );
    par_trust_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_scaling );
    Py_DECREF( par_scaling );
    par_scaling = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_trust_radius );
    var_trust_radius = NULL;

    Py_XDECREF( var_penalty );
    var_penalty = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_A );
    var_A = NULL;

    Py_XDECREF( var_S );
    var_S = NULL;

    Py_XDECREF( var_Z );
    var_Z = NULL;

    Py_XDECREF( var_LS );
    var_LS = NULL;

    Py_XDECREF( var_Y );
    var_Y = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_H );
    var_H = NULL;

    Py_XDECREF( var_optimality );
    var_optimality = NULL;

    Py_XDECREF( var_constr_violation );
    var_constr_violation = NULL;

    Py_XDECREF( var_cg_info );
    var_cg_info = NULL;

    Py_XDECREF( var_last_iteration_failed );
    var_last_iteration_failed = NULL;

    Py_XDECREF( var_dn );
    var_dn = NULL;

    Py_XDECREF( var_c_t );
    var_c_t = NULL;

    Py_XDECREF( var_b_t );
    var_b_t = NULL;

    Py_XDECREF( var_trust_radius_t );
    var_trust_radius_t = NULL;

    Py_XDECREF( var_lb_t );
    var_lb_t = NULL;

    Py_XDECREF( var_ub_t );
    var_ub_t = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_quadratic_model );
    var_quadratic_model = NULL;

    Py_XDECREF( var_linearized_constr );
    var_linearized_constr = NULL;

    Py_XDECREF( var_vpred );
    var_vpred = NULL;

    Py_XDECREF( var_previous_penalty );
    var_previous_penalty = NULL;

    Py_XDECREF( var_new_penalty );
    var_new_penalty = NULL;

    Py_XDECREF( var_predicted_reduction );
    var_predicted_reduction = NULL;

    Py_XDECREF( var_merit_function );
    var_merit_function = NULL;

    Py_XDECREF( var_x_next );
    var_x_next = NULL;

    Py_XDECREF( var_f_next );
    var_f_next = NULL;

    Py_XDECREF( var_b_next );
    var_b_next = NULL;

    Py_XDECREF( var_merit_function_next );
    var_merit_function_next = NULL;

    Py_XDECREF( var_actual_reduction );
    var_actual_reduction = NULL;

    Py_XDECREF( var_reduction_ratio );
    var_reduction_ratio = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_intersect );
    var_intersect = NULL;

    Py_XDECREF( var_x_soc );
    var_x_soc = NULL;

    Py_XDECREF( var_f_soc );
    var_f_soc = NULL;

    Py_XDECREF( var_b_soc );
    var_b_soc = NULL;

    Py_XDECREF( var_merit_function_soc );
    var_merit_function_soc = NULL;

    Py_XDECREF( var_actual_reduction_soc );
    var_actual_reduction_soc = NULL;

    Py_XDECREF( var_reduction_ratio_soc );
    var_reduction_ratio_soc = NULL;

    Py_XDECREF( var_trust_reduction );
    var_trust_reduction = NULL;

    Py_XDECREF( var_new_trust_radius );
    var_new_trust_radius = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$equality_constrained_sqp$$$function_2_equality_constrained_sqp );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$equality_constrained_sqp$$$function_1_default_scaling(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$equality_constrained_sqp$$$function_1_default_scaling,
        const_str_plain_default_scaling,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_214d62e9891fd05b44880deeee3a3333,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$equality_constrained_sqp,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$equality_constrained_sqp$$$function_2_equality_constrained_sqp( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$equality_constrained_sqp$$$function_2_equality_constrained_sqp,
        const_str_plain_equality_constrained_sqp,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_294d84b40e68f32a48ed32554ad64478,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$equality_constrained_sqp,
        const_str_digest_5fafdf8e000e21cbed2ff82d7fc68afc,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_trustregion_constr$equality_constrained_sqp =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._trustregion_constr.equality_constrained_sqp",
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

MOD_INIT_DECL( scipy$optimize$_trustregion_constr$equality_constrained_sqp )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_trustregion_constr$equality_constrained_sqp );
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
    puts("scipy.optimize._trustregion_constr.equality_constrained_sqp: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._trustregion_constr.equality_constrained_sqp: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._trustregion_constr.equality_constrained_sqp: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_trustregion_constr$equality_constrained_sqp" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_trustregion_constr$equality_constrained_sqp = Py_InitModule4(
        "scipy.optimize._trustregion_constr.equality_constrained_sqp",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_trustregion_constr$equality_constrained_sqp = PyModule_Create( &mdef_scipy$optimize$_trustregion_constr$equality_constrained_sqp );
#endif

    moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp = MODULE_DICT( module_scipy$optimize$_trustregion_constr$equality_constrained_sqp );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_trustregion_constr$equality_constrained_sqp );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_132970b31bf78ce861d26efd3a108723, module_scipy$optimize$_trustregion_constr$equality_constrained_sqp );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_3a3b6e02d2f397c698aac6df44984e70;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_f1631e71cbbbeac7010668b848827119;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_3a3b6e02d2f397c698aac6df44984e70 = MAKE_MODULE_FRAME( codeobj_3a3b6e02d2f397c698aac6df44984e70, module_scipy$optimize$_trustregion_constr$equality_constrained_sqp );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_3a3b6e02d2f397c698aac6df44984e70 );
    assert( Py_REFCNT( frame_3a3b6e02d2f397c698aac6df44984e70 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_3a3b6e02d2f397c698aac6df44984e70->m_frame.f_lineno = 3;
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
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_eye_tuple;
        tmp_level_name_1 = const_int_0;
        frame_3a3b6e02d2f397c698aac6df44984e70->m_frame.f_lineno = 4;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_eye );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_speye, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_projections;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_projections_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_3a3b6e02d2f397c698aac6df44984e70->m_frame.f_lineno = 5;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp,
                const_str_plain_projections,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_projections );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_projections, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_qp_subproblem;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_915eb1933bdcd461d979957f57327bfb_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_3a3b6e02d2f397c698aac6df44984e70->m_frame.f_lineno = 6;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp,
                const_str_plain_modified_dogleg,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_modified_dogleg );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_modified_dogleg, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp,
                const_str_plain_projected_cg,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_projected_cg );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_projected_cg, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp,
                const_str_plain_box_intersections,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_box_intersections );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_box_intersections, tmp_assign_source_13 );
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_numpy;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_3a3b6e02d2f397c698aac6df44984e70->m_frame.f_lineno = 7;
        tmp_assign_source_14 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_norm_tuple;
        tmp_level_name_5 = const_int_0;
        frame_3a3b6e02d2f397c698aac6df44984e70->m_frame.f_lineno = 8;
        tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_norm );
        Py_DECREF( tmp_import_name_from_9 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_15 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a3b6e02d2f397c698aac6df44984e70 );
#endif
    popFrameStack();

    assertFrameObject( frame_3a3b6e02d2f397c698aac6df44984e70 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a3b6e02d2f397c698aac6df44984e70 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3a3b6e02d2f397c698aac6df44984e70, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3a3b6e02d2f397c698aac6df44984e70->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3a3b6e02d2f397c698aac6df44984e70, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = LIST_COPY( const_list_str_plain_equality_constrained_sqp_list );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$equality_constrained_sqp$$$function_1_default_scaling(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_default_scaling, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_tuple_element_1 = Py_None;
        tmp_defaults_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_default_scaling );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_default_scaling );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_tuple_element_1 = tmp_mvar_value_3;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
        tmp_assign_source_18 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$equality_constrained_sqp$$$function_2_equality_constrained_sqp( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain_equality_constrained_sqp, tmp_assign_source_18 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$equality_constrained_sqp, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_trustregion_constr$equality_constrained_sqp );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
