/* Generated code for Python module 'scipy.special._spherical_bessel'
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

/* The "_module_scipy$special$_spherical_bessel" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$special$_spherical_bessel;
PyDictObject *moduledict_scipy$special$_spherical_bessel;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain__spherical_kn;
static PyObject *const_tuple_str_plain_n_str_plain_z_str_plain_derivative_tuple;
extern PyObject *const_str_plain_derivative;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain__spherical_jn_d;
static PyObject *const_str_digest_e623a3ea3384dc1252421f7a6df99e15;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_z;
extern PyObject *const_tuple_false_tuple;
static PyObject *const_str_plain__spherical_in_d;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_spherical_jn;
extern PyObject *const_str_plain_spherical_kn;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_spherical_yn;
static PyObject *const_str_plain__spherical_yn_d;
extern PyObject *const_str_plain_spherical_in;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain__spherical_jn;
static PyObject *const_str_digest_b551e4a6fc44ba46d7b0b08211cca617;
static PyObject *const_str_digest_8ea54f8c2a295d031b347935a058f5c2;
extern PyObject *const_str_plain__ufuncs;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_995cb631e93d1c89e726b09116f93326;
static PyObject *const_str_plain__spherical_kn_d;
static PyObject *const_str_plain__spherical_yn;
static PyObject *const_tuple_c95ae7b048cbb891ed34526c6cf3fb6f_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_1b6ceed0f631c6533a795630bc126547;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_fd95b13f5c3b9f54c241a41d5e7b4b16;
static PyObject *const_str_plain__spherical_in;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_b3286ac84e8c4f06659e8c7b99c4d098;
extern PyObject *const_str_plain_print_function;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain__spherical_kn = UNSTREAM_STRING_ASCII( &constant_bin[ 5714457 ], 13, 1 );
    const_tuple_str_plain_n_str_plain_z_str_plain_derivative_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_z_str_plain_derivative_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_z_str_plain_derivative_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_z_str_plain_derivative_tuple, 2, const_str_plain_derivative ); Py_INCREF( const_str_plain_derivative );
    const_str_plain__spherical_jn_d = UNSTREAM_STRING_ASCII( &constant_bin[ 5714470 ], 15, 1 );
    const_str_digest_e623a3ea3384dc1252421f7a6df99e15 = UNSTREAM_STRING_ASCII( &constant_bin[ 5714485 ], 31, 0 );
    const_str_plain__spherical_in_d = UNSTREAM_STRING_ASCII( &constant_bin[ 5714516 ], 15, 1 );
    const_str_plain__spherical_yn_d = UNSTREAM_STRING_ASCII( &constant_bin[ 5714531 ], 15, 1 );
    const_str_plain__spherical_jn = UNSTREAM_STRING_ASCII( &constant_bin[ 5714470 ], 13, 1 );
    const_str_digest_b551e4a6fc44ba46d7b0b08211cca617 = UNSTREAM_STRING_ASCII( &constant_bin[ 5714546 ], 1022, 0 );
    const_str_digest_8ea54f8c2a295d031b347935a058f5c2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5715568 ], 1181, 0 );
    const_str_digest_995cb631e93d1c89e726b09116f93326 = UNSTREAM_STRING_ASCII( &constant_bin[ 5716749 ], 34, 0 );
    const_str_plain__spherical_kn_d = UNSTREAM_STRING_ASCII( &constant_bin[ 5716783 ], 15, 1 );
    const_str_plain__spherical_yn = UNSTREAM_STRING_ASCII( &constant_bin[ 5714531 ], 13, 1 );
    const_tuple_c95ae7b048cbb891ed34526c6cf3fb6f_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_c95ae7b048cbb891ed34526c6cf3fb6f_tuple, 0, const_str_plain__spherical_jn ); Py_INCREF( const_str_plain__spherical_jn );
    PyTuple_SET_ITEM( const_tuple_c95ae7b048cbb891ed34526c6cf3fb6f_tuple, 1, const_str_plain__spherical_yn ); Py_INCREF( const_str_plain__spherical_yn );
    const_str_plain__spherical_in = UNSTREAM_STRING_ASCII( &constant_bin[ 5714516 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_c95ae7b048cbb891ed34526c6cf3fb6f_tuple, 2, const_str_plain__spherical_in ); Py_INCREF( const_str_plain__spherical_in );
    PyTuple_SET_ITEM( const_tuple_c95ae7b048cbb891ed34526c6cf3fb6f_tuple, 3, const_str_plain__spherical_kn ); Py_INCREF( const_str_plain__spherical_kn );
    PyTuple_SET_ITEM( const_tuple_c95ae7b048cbb891ed34526c6cf3fb6f_tuple, 4, const_str_plain__spherical_jn_d ); Py_INCREF( const_str_plain__spherical_jn_d );
    PyTuple_SET_ITEM( const_tuple_c95ae7b048cbb891ed34526c6cf3fb6f_tuple, 5, const_str_plain__spherical_yn_d ); Py_INCREF( const_str_plain__spherical_yn_d );
    PyTuple_SET_ITEM( const_tuple_c95ae7b048cbb891ed34526c6cf3fb6f_tuple, 6, const_str_plain__spherical_in_d ); Py_INCREF( const_str_plain__spherical_in_d );
    PyTuple_SET_ITEM( const_tuple_c95ae7b048cbb891ed34526c6cf3fb6f_tuple, 7, const_str_plain__spherical_kn_d ); Py_INCREF( const_str_plain__spherical_kn_d );
    const_str_digest_1b6ceed0f631c6533a795630bc126547 = UNSTREAM_STRING_ASCII( &constant_bin[ 5716798 ], 1027, 0 );
    const_str_digest_fd95b13f5c3b9f54c241a41d5e7b4b16 = UNSTREAM_STRING_ASCII( &constant_bin[ 5717825 ], 1128, 0 );
    const_str_digest_b3286ac84e8c4f06659e8c7b99c4d098 = UNSTREAM_STRING_ASCII( &constant_bin[ 5718953 ], 40, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$special$_spherical_bessel( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_641b7481644daf1df6558109e8097d84;
static PyCodeObject *codeobj_ddd5ed160df5049691c973f5609fd7c1;
static PyCodeObject *codeobj_9b5a4cf6b4c55411e6353497627753fd;
static PyCodeObject *codeobj_093f0433ab5938ac5bfc3968c9cc1f09;
static PyCodeObject *codeobj_21c6e9d00470d3abf307db3246056524;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_995cb631e93d1c89e726b09116f93326 );
    codeobj_641b7481644daf1df6558109e8097d84 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b3286ac84e8c4f06659e8c7b99c4d098, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_ddd5ed160df5049691c973f5609fd7c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_spherical_in, 110, const_tuple_str_plain_n_str_plain_z_str_plain_derivative_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9b5a4cf6b4c55411e6353497627753fd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_spherical_jn, 7, const_tuple_str_plain_n_str_plain_z_str_plain_derivative_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_093f0433ab5938ac5bfc3968c9cc1f09 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_spherical_kn, 159, const_tuple_str_plain_n_str_plain_z_str_plain_derivative_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_21c6e9d00470d3abf307db3246056524 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_spherical_yn, 59, const_tuple_str_plain_n_str_plain_z_str_plain_derivative_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$special$_spherical_bessel$$$function_1_spherical_jn( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$special$_spherical_bessel$$$function_2_spherical_yn( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$special$_spherical_bessel$$$function_3_spherical_in( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$special$_spherical_bessel$$$function_4_spherical_kn( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$special$_spherical_bessel$$$function_1_spherical_jn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *par_derivative = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_9b5a4cf6b4c55411e6353497627753fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9b5a4cf6b4c55411e6353497627753fd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9b5a4cf6b4c55411e6353497627753fd, codeobj_9b5a4cf6b4c55411e6353497627753fd, module_scipy$special$_spherical_bessel, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9b5a4cf6b4c55411e6353497627753fd = cache_frame_9b5a4cf6b4c55411e6353497627753fd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9b5a4cf6b4c55411e6353497627753fd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9b5a4cf6b4c55411e6353497627753fd ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_derivative );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_derivative );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain__spherical_jn_d );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__spherical_jn_d );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_spherical_jn_d" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 54;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_1 = par_n;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_2 = par_z;
            frame_9b5a4cf6b4c55411e6353497627753fd->m_frame.f_lineno = 54;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain__spherical_jn );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__spherical_jn );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_spherical_jn" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 56;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_3 = par_n;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_4 = par_z;
            frame_9b5a4cf6b4c55411e6353497627753fd->m_frame.f_lineno = 56;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b5a4cf6b4c55411e6353497627753fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b5a4cf6b4c55411e6353497627753fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b5a4cf6b4c55411e6353497627753fd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9b5a4cf6b4c55411e6353497627753fd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9b5a4cf6b4c55411e6353497627753fd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9b5a4cf6b4c55411e6353497627753fd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9b5a4cf6b4c55411e6353497627753fd,
        type_description_1,
        par_n,
        par_z,
        par_derivative
    );


    // Release cached frame.
    if ( frame_9b5a4cf6b4c55411e6353497627753fd == cache_frame_9b5a4cf6b4c55411e6353497627753fd )
    {
        Py_DECREF( frame_9b5a4cf6b4c55411e6353497627753fd );
    }
    cache_frame_9b5a4cf6b4c55411e6353497627753fd = NULL;

    assertFrameObject( frame_9b5a4cf6b4c55411e6353497627753fd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$special$_spherical_bessel$$$function_1_spherical_jn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_derivative );
    Py_DECREF( par_derivative );
    par_derivative = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_derivative );
    Py_DECREF( par_derivative );
    par_derivative = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$special$_spherical_bessel$$$function_1_spherical_jn );
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


static PyObject *impl_scipy$special$_spherical_bessel$$$function_2_spherical_yn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *par_derivative = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_21c6e9d00470d3abf307db3246056524;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_21c6e9d00470d3abf307db3246056524 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_21c6e9d00470d3abf307db3246056524, codeobj_21c6e9d00470d3abf307db3246056524, module_scipy$special$_spherical_bessel, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_21c6e9d00470d3abf307db3246056524 = cache_frame_21c6e9d00470d3abf307db3246056524;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_21c6e9d00470d3abf307db3246056524 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_21c6e9d00470d3abf307db3246056524 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_derivative );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_derivative );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "ooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain__spherical_yn_d );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__spherical_yn_d );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_spherical_yn_d" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 105;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_1 = par_n;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_2 = par_z;
            frame_21c6e9d00470d3abf307db3246056524->m_frame.f_lineno = 105;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain__spherical_yn );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__spherical_yn );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_spherical_yn" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 107;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_3 = par_n;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_4 = par_z;
            frame_21c6e9d00470d3abf307db3246056524->m_frame.f_lineno = 107;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 107;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_21c6e9d00470d3abf307db3246056524 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_21c6e9d00470d3abf307db3246056524 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_21c6e9d00470d3abf307db3246056524 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_21c6e9d00470d3abf307db3246056524, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_21c6e9d00470d3abf307db3246056524->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_21c6e9d00470d3abf307db3246056524, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_21c6e9d00470d3abf307db3246056524,
        type_description_1,
        par_n,
        par_z,
        par_derivative
    );


    // Release cached frame.
    if ( frame_21c6e9d00470d3abf307db3246056524 == cache_frame_21c6e9d00470d3abf307db3246056524 )
    {
        Py_DECREF( frame_21c6e9d00470d3abf307db3246056524 );
    }
    cache_frame_21c6e9d00470d3abf307db3246056524 = NULL;

    assertFrameObject( frame_21c6e9d00470d3abf307db3246056524 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$special$_spherical_bessel$$$function_2_spherical_yn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_derivative );
    Py_DECREF( par_derivative );
    par_derivative = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_derivative );
    Py_DECREF( par_derivative );
    par_derivative = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$special$_spherical_bessel$$$function_2_spherical_yn );
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


static PyObject *impl_scipy$special$_spherical_bessel$$$function_3_spherical_in( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *par_derivative = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_ddd5ed160df5049691c973f5609fd7c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ddd5ed160df5049691c973f5609fd7c1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ddd5ed160df5049691c973f5609fd7c1, codeobj_ddd5ed160df5049691c973f5609fd7c1, module_scipy$special$_spherical_bessel, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ddd5ed160df5049691c973f5609fd7c1 = cache_frame_ddd5ed160df5049691c973f5609fd7c1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ddd5ed160df5049691c973f5609fd7c1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ddd5ed160df5049691c973f5609fd7c1 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_derivative );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_derivative );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain__spherical_in_d );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__spherical_in_d );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_spherical_in_d" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 154;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_1 = par_n;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_2 = par_z;
            frame_ddd5ed160df5049691c973f5609fd7c1->m_frame.f_lineno = 154;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain__spherical_in );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__spherical_in );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_spherical_in" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 156;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_3 = par_n;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_4 = par_z;
            frame_ddd5ed160df5049691c973f5609fd7c1->m_frame.f_lineno = 156;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 156;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ddd5ed160df5049691c973f5609fd7c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ddd5ed160df5049691c973f5609fd7c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ddd5ed160df5049691c973f5609fd7c1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ddd5ed160df5049691c973f5609fd7c1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ddd5ed160df5049691c973f5609fd7c1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ddd5ed160df5049691c973f5609fd7c1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ddd5ed160df5049691c973f5609fd7c1,
        type_description_1,
        par_n,
        par_z,
        par_derivative
    );


    // Release cached frame.
    if ( frame_ddd5ed160df5049691c973f5609fd7c1 == cache_frame_ddd5ed160df5049691c973f5609fd7c1 )
    {
        Py_DECREF( frame_ddd5ed160df5049691c973f5609fd7c1 );
    }
    cache_frame_ddd5ed160df5049691c973f5609fd7c1 = NULL;

    assertFrameObject( frame_ddd5ed160df5049691c973f5609fd7c1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$special$_spherical_bessel$$$function_3_spherical_in );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_derivative );
    Py_DECREF( par_derivative );
    par_derivative = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_derivative );
    Py_DECREF( par_derivative );
    par_derivative = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$special$_spherical_bessel$$$function_3_spherical_in );
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


static PyObject *impl_scipy$special$_spherical_bessel$$$function_4_spherical_kn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *par_derivative = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_093f0433ab5938ac5bfc3968c9cc1f09;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_093f0433ab5938ac5bfc3968c9cc1f09 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_093f0433ab5938ac5bfc3968c9cc1f09, codeobj_093f0433ab5938ac5bfc3968c9cc1f09, module_scipy$special$_spherical_bessel, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_093f0433ab5938ac5bfc3968c9cc1f09 = cache_frame_093f0433ab5938ac5bfc3968c9cc1f09;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_093f0433ab5938ac5bfc3968c9cc1f09 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_093f0433ab5938ac5bfc3968c9cc1f09 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_derivative );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_derivative );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "ooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain__spherical_kn_d );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__spherical_kn_d );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_spherical_kn_d" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 203;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_1 = par_n;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_2 = par_z;
            frame_093f0433ab5938ac5bfc3968c9cc1f09->m_frame.f_lineno = 203;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 203;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain__spherical_kn );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__spherical_kn );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_spherical_kn" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 205;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_3 = par_n;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_4 = par_z;
            frame_093f0433ab5938ac5bfc3968c9cc1f09->m_frame.f_lineno = 205;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_093f0433ab5938ac5bfc3968c9cc1f09 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_093f0433ab5938ac5bfc3968c9cc1f09 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_093f0433ab5938ac5bfc3968c9cc1f09 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_093f0433ab5938ac5bfc3968c9cc1f09, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_093f0433ab5938ac5bfc3968c9cc1f09->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_093f0433ab5938ac5bfc3968c9cc1f09, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_093f0433ab5938ac5bfc3968c9cc1f09,
        type_description_1,
        par_n,
        par_z,
        par_derivative
    );


    // Release cached frame.
    if ( frame_093f0433ab5938ac5bfc3968c9cc1f09 == cache_frame_093f0433ab5938ac5bfc3968c9cc1f09 )
    {
        Py_DECREF( frame_093f0433ab5938ac5bfc3968c9cc1f09 );
    }
    cache_frame_093f0433ab5938ac5bfc3968c9cc1f09 = NULL;

    assertFrameObject( frame_093f0433ab5938ac5bfc3968c9cc1f09 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$special$_spherical_bessel$$$function_4_spherical_kn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_derivative );
    Py_DECREF( par_derivative );
    par_derivative = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_derivative );
    Py_DECREF( par_derivative );
    par_derivative = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$special$_spherical_bessel$$$function_4_spherical_kn );
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



static PyObject *MAKE_FUNCTION_scipy$special$_spherical_bessel$$$function_1_spherical_jn( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$special$_spherical_bessel$$$function_1_spherical_jn,
        const_str_plain_spherical_jn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9b5a4cf6b4c55411e6353497627753fd,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$special$_spherical_bessel,
        const_str_digest_8ea54f8c2a295d031b347935a058f5c2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$special$_spherical_bessel$$$function_2_spherical_yn( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$special$_spherical_bessel$$$function_2_spherical_yn,
        const_str_plain_spherical_yn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_21c6e9d00470d3abf307db3246056524,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$special$_spherical_bessel,
        const_str_digest_fd95b13f5c3b9f54c241a41d5e7b4b16,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$special$_spherical_bessel$$$function_3_spherical_in( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$special$_spherical_bessel$$$function_3_spherical_in,
        const_str_plain_spherical_in,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ddd5ed160df5049691c973f5609fd7c1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$special$_spherical_bessel,
        const_str_digest_b551e4a6fc44ba46d7b0b08211cca617,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$special$_spherical_bessel$$$function_4_spherical_kn( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$special$_spherical_bessel$$$function_4_spherical_kn,
        const_str_plain_spherical_kn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_093f0433ab5938ac5bfc3968c9cc1f09,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$special$_spherical_bessel,
        const_str_digest_1b6ceed0f631c6533a795630bc126547,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$special$_spherical_bessel =
{
    PyModuleDef_HEAD_INIT,
    "scipy.special._spherical_bessel",
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

MOD_INIT_DECL( scipy$special$_spherical_bessel )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$special$_spherical_bessel );
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
    puts("scipy.special._spherical_bessel: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.special._spherical_bessel: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.special._spherical_bessel: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$special$_spherical_bessel" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$special$_spherical_bessel = Py_InitModule4(
        "scipy.special._spherical_bessel",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$special$_spherical_bessel = PyModule_Create( &mdef_scipy$special$_spherical_bessel );
#endif

    moduledict_scipy$special$_spherical_bessel = MODULE_DICT( module_scipy$special$_spherical_bessel );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$special$_spherical_bessel,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$special$_spherical_bessel,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$special$_spherical_bessel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$special$_spherical_bessel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$special$_spherical_bessel );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_e623a3ea3384dc1252421f7a6df99e15, module_scipy$special$_spherical_bessel );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_641b7481644daf1df6558109e8097d84;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_641b7481644daf1df6558109e8097d84 = MAKE_MODULE_FRAME( codeobj_641b7481644daf1df6558109e8097d84, module_scipy$special$_spherical_bessel );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_641b7481644daf1df6558109e8097d84 );
    assert( Py_REFCNT( frame_641b7481644daf1df6558109e8097d84 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_641b7481644daf1df6558109e8097d84->m_frame.f_lineno = 1;
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
        UPDATE_STRING_DICT1( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_name_name_1 = const_str_plain__ufuncs;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$special$_spherical_bessel;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_c95ae7b048cbb891ed34526c6cf3fb6f_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_641b7481644daf1df6558109e8097d84->m_frame.f_lineno = 3;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_scipy$special$_spherical_bessel,
                const_str_plain__spherical_jn,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain__spherical_jn );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain__spherical_jn, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_scipy$special$_spherical_bessel,
                const_str_plain__spherical_yn,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain__spherical_yn );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain__spherical_yn, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_scipy$special$_spherical_bessel,
                const_str_plain__spherical_in,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain__spherical_in );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain__spherical_in, tmp_assign_source_11 );
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
                (PyObject *)moduledict_scipy$special$_spherical_bessel,
                const_str_plain__spherical_kn,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain__spherical_kn );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain__spherical_kn, tmp_assign_source_12 );
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
                (PyObject *)moduledict_scipy$special$_spherical_bessel,
                const_str_plain__spherical_jn_d,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain__spherical_jn_d );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain__spherical_jn_d, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_scipy$special$_spherical_bessel,
                const_str_plain__spherical_yn_d,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain__spherical_yn_d );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain__spherical_yn_d, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_scipy$special$_spherical_bessel,
                const_str_plain__spherical_in_d,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain__spherical_in_d );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain__spherical_in_d, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_11 ) )
        {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_scipy$special$_spherical_bessel,
                const_str_plain__spherical_kn_d,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain__spherical_kn_d );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain__spherical_kn_d, tmp_assign_source_16 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_641b7481644daf1df6558109e8097d84 );
#endif
    popFrameStack();

    assertFrameObject( frame_641b7481644daf1df6558109e8097d84 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_641b7481644daf1df6558109e8097d84 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_641b7481644daf1df6558109e8097d84, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_641b7481644daf1df6558109e8097d84->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_641b7481644daf1df6558109e8097d84, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_17 = MAKE_FUNCTION_scipy$special$_spherical_bessel$$$function_1_spherical_jn( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain_spherical_jn, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_18 = MAKE_FUNCTION_scipy$special$_spherical_bessel$$$function_2_spherical_yn( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain_spherical_yn, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_19 = MAKE_FUNCTION_scipy$special$_spherical_bessel$$$function_3_spherical_in( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain_spherical_in, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_20 = MAKE_FUNCTION_scipy$special$_spherical_bessel$$$function_4_spherical_kn( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain_spherical_kn, tmp_assign_source_20 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$special$_spherical_bessel, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$special$_spherical_bessel );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
