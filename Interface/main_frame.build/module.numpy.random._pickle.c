/* Generated code for Python module 'numpy.random._pickle'
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

/* The "_module_numpy$random$_pickle" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$random$_pickle;
PyDictObject *moduledict_numpy$random$_pickle;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_str_plain_MT19937_tuple;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain_PCG64_tuple;
static PyObject *const_str_plain___bit_generator_ctor;
extern PyObject *const_str_plain_bit_generator;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_BitGenerators;
static PyObject *const_str_digest_33b2165dead63cdabf4828293a5c086f;
extern PyObject *const_str_plain_Philox;
extern PyObject *const_str_plain_pcg64;
extern PyObject *const_str_plain_Generator;
static PyObject *const_str_digest_f4d0dc85b9841de3eae969005bb7fd0c;
static PyObject *const_str_plain___randomstate_ctor;
extern PyObject *const_str_plain_sfc64;
static PyObject *const_tuple_str_plain_Generator_tuple;
static PyObject *const_str_plain_bit_generator_name;
extern PyObject *const_str_plain_RandomState;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_mtrand;
static PyObject *const_str_digest_c1987a34ff96877330b2a5db0a8a4e5f;
extern PyObject *const_tuple_str_plain_Philox_tuple;
extern PyObject *const_str_plain_SFC64;
static PyObject *const_str_digest_2e69c64b7f0ef35c002508c25ea782e0;
static PyObject *const_str_digest_76a8d8337a86f362ef9c472456e2b59c;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_generator;
static PyObject *const_str_plain___generator_ctor;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_750fc45ed84b88387f55bfdd7d264d16;
extern PyObject *const_str_plain_mt19937;
extern PyObject *const_tuple_str_plain_SFC64_tuple;
extern PyObject *const_str_plain_MT19937;
extern PyObject *const_str_plain_PCG64;
extern PyObject *const_tuple_str_plain_RandomState_tuple;
static PyObject *const_str_digest_fb35101fc87d4b6d6f2988fc224c0862;
static PyObject *const_tuple_str_plain_bit_generator_name_str_plain_bit_generator_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_philox;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain___bit_generator_ctor = UNSTREAM_STRING_ASCII( &constant_bin[ 3882839 ], 20, 1 );
    const_str_plain_BitGenerators = UNSTREAM_STRING_ASCII( &constant_bin[ 3882859 ], 13, 1 );
    const_str_digest_33b2165dead63cdabf4828293a5c086f = UNSTREAM_STRING_ASCII( &constant_bin[ 3882872 ], 268, 0 );
    const_str_digest_f4d0dc85b9841de3eae969005bb7fd0c = UNSTREAM_STRING_ASCII( &constant_bin[ 3883140 ], 20, 0 );
    const_str_plain___randomstate_ctor = UNSTREAM_STRING_ASCII( &constant_bin[ 3883160 ], 18, 1 );
    const_tuple_str_plain_Generator_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Generator_tuple, 0, const_str_plain_Generator ); Py_INCREF( const_str_plain_Generator );
    const_str_plain_bit_generator_name = UNSTREAM_STRING_ASCII( &constant_bin[ 3882969 ], 18, 1 );
    const_str_digest_c1987a34ff96877330b2a5db0a8a4e5f = UNSTREAM_STRING_ASCII( &constant_bin[ 3883178 ], 23, 0 );
    const_str_digest_2e69c64b7f0ef35c002508c25ea782e0 = UNSTREAM_STRING_ASCII( &constant_bin[ 3883201 ], 36, 0 );
    const_str_digest_76a8d8337a86f362ef9c472456e2b59c = UNSTREAM_STRING_ASCII( &constant_bin[ 3883237 ], 271, 0 );
    const_str_plain___generator_ctor = UNSTREAM_STRING_ASCII( &constant_bin[ 3883508 ], 16, 1 );
    const_str_digest_750fc45ed84b88387f55bfdd7d264d16 = UNSTREAM_STRING_ASCII( &constant_bin[ 3883524 ], 29, 0 );
    const_str_digest_fb35101fc87d4b6d6f2988fc224c0862 = UNSTREAM_STRING_ASCII( &constant_bin[ 3883553 ], 293, 0 );
    const_tuple_str_plain_bit_generator_name_str_plain_bit_generator_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_bit_generator_name_str_plain_bit_generator_tuple, 0, const_str_plain_bit_generator_name ); Py_INCREF( const_str_plain_bit_generator_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_bit_generator_name_str_plain_bit_generator_tuple, 1, const_str_plain_bit_generator ); Py_INCREF( const_str_plain_bit_generator );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$random$_pickle( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_fb1273cc8d30fa685587be612fb9a5a7;
static PyCodeObject *codeobj_5811d3454c24226af2571a307c48d088;
static PyCodeObject *codeobj_f69499a9eb44d3798b625003d820a825;
static PyCodeObject *codeobj_c907aec76ead0aa8a7be26c001df09a8;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_c1987a34ff96877330b2a5db0a8a4e5f );
    codeobj_fb1273cc8d30fa685587be612fb9a5a7 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_750fc45ed84b88387f55bfdd7d264d16, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_5811d3454c24226af2571a307c48d088 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___bit_generator_ctor, 39, const_tuple_str_plain_bit_generator_name_str_plain_bit_generator_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f69499a9eb44d3798b625003d820a825 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___generator_ctor, 16, const_tuple_str_plain_bit_generator_name_str_plain_bit_generator_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c907aec76ead0aa8a7be26c001df09a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___randomstate_ctor, 62, const_tuple_str_plain_bit_generator_name_str_plain_bit_generator_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$random$_pickle$$$function_1___generator_ctor( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$random$_pickle$$$function_2___bit_generator_ctor( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$random$_pickle$$$function_3___randomstate_ctor( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$random$_pickle$$$function_1___generator_ctor( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_bit_generator_name = python_pars[ 0 ];
    PyObject *var_bit_generator = NULL;
    struct Nuitka_FrameObject *frame_f69499a9eb44d3798b625003d820a825;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f69499a9eb44d3798b625003d820a825 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f69499a9eb44d3798b625003d820a825, codeobj_f69499a9eb44d3798b625003d820a825, module_numpy$random$_pickle, sizeof(void *)+sizeof(void *) );
    frame_f69499a9eb44d3798b625003d820a825 = cache_frame_f69499a9eb44d3798b625003d820a825;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f69499a9eb44d3798b625003d820a825 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f69499a9eb44d3798b625003d820a825 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_bit_generator_name );
        tmp_compexpr_left_1 = par_bit_generator_name;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain_BitGenerators );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BitGenerators );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BitGenerators" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "oo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain_BitGenerators );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BitGenerators );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BitGenerators" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 31;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_bit_generator_name );
            tmp_subscript_name_1 = par_bit_generator_name;
            tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 31;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert( var_bit_generator == NULL );
            var_bit_generator = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_bit_generator_name );
            tmp_unicode_arg_1 = par_bit_generator_name;
            tmp_left_name_1 = PyObject_Unicode( tmp_unicode_arg_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 33;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_str_digest_2e69c64b7f0ef35c002508c25ea782e0;
            tmp_make_exception_arg_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 33;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_f69499a9eb44d3798b625003d820a825->m_frame.f_lineno = 33;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 33;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain_Generator );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Generator );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Generator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        if ( var_bit_generator == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bit_generator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = var_bit_generator;
        frame_f69499a9eb44d3798b625003d820a825->m_frame.f_lineno = 36;
        tmp_args_element_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f69499a9eb44d3798b625003d820a825->m_frame.f_lineno = 36;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f69499a9eb44d3798b625003d820a825 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f69499a9eb44d3798b625003d820a825 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f69499a9eb44d3798b625003d820a825 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f69499a9eb44d3798b625003d820a825, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f69499a9eb44d3798b625003d820a825->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f69499a9eb44d3798b625003d820a825, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f69499a9eb44d3798b625003d820a825,
        type_description_1,
        par_bit_generator_name,
        var_bit_generator
    );


    // Release cached frame.
    if ( frame_f69499a9eb44d3798b625003d820a825 == cache_frame_f69499a9eb44d3798b625003d820a825 )
    {
        Py_DECREF( frame_f69499a9eb44d3798b625003d820a825 );
    }
    cache_frame_f69499a9eb44d3798b625003d820a825 = NULL;

    assertFrameObject( frame_f69499a9eb44d3798b625003d820a825 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$random$_pickle$$$function_1___generator_ctor );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_bit_generator_name );
    Py_DECREF( par_bit_generator_name );
    par_bit_generator_name = NULL;

    Py_XDECREF( var_bit_generator );
    var_bit_generator = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bit_generator_name );
    Py_DECREF( par_bit_generator_name );
    par_bit_generator_name = NULL;

    Py_XDECREF( var_bit_generator );
    var_bit_generator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$random$_pickle$$$function_1___generator_ctor );
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


static PyObject *impl_numpy$random$_pickle$$$function_2___bit_generator_ctor( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_bit_generator_name = python_pars[ 0 ];
    PyObject *var_bit_generator = NULL;
    struct Nuitka_FrameObject *frame_5811d3454c24226af2571a307c48d088;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5811d3454c24226af2571a307c48d088 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5811d3454c24226af2571a307c48d088, codeobj_5811d3454c24226af2571a307c48d088, module_numpy$random$_pickle, sizeof(void *)+sizeof(void *) );
    frame_5811d3454c24226af2571a307c48d088 = cache_frame_5811d3454c24226af2571a307c48d088;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5811d3454c24226af2571a307c48d088 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5811d3454c24226af2571a307c48d088 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_bit_generator_name );
        tmp_compexpr_left_1 = par_bit_generator_name;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain_BitGenerators );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BitGenerators );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BitGenerators" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain_BitGenerators );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BitGenerators );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BitGenerators" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 54;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_bit_generator_name );
            tmp_subscript_name_1 = par_bit_generator_name;
            tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert( var_bit_generator == NULL );
            var_bit_generator = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_bit_generator_name );
            tmp_unicode_arg_1 = par_bit_generator_name;
            tmp_left_name_1 = PyObject_Unicode( tmp_unicode_arg_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_str_digest_2e69c64b7f0ef35c002508c25ea782e0;
            tmp_make_exception_arg_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_5811d3454c24226af2571a307c48d088->m_frame.f_lineno = 56;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 56;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_1;
        if ( var_bit_generator == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bit_generator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = var_bit_generator;
        frame_5811d3454c24226af2571a307c48d088->m_frame.f_lineno = 59;
        tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5811d3454c24226af2571a307c48d088 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5811d3454c24226af2571a307c48d088 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5811d3454c24226af2571a307c48d088 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5811d3454c24226af2571a307c48d088, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5811d3454c24226af2571a307c48d088->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5811d3454c24226af2571a307c48d088, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5811d3454c24226af2571a307c48d088,
        type_description_1,
        par_bit_generator_name,
        var_bit_generator
    );


    // Release cached frame.
    if ( frame_5811d3454c24226af2571a307c48d088 == cache_frame_5811d3454c24226af2571a307c48d088 )
    {
        Py_DECREF( frame_5811d3454c24226af2571a307c48d088 );
    }
    cache_frame_5811d3454c24226af2571a307c48d088 = NULL;

    assertFrameObject( frame_5811d3454c24226af2571a307c48d088 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$random$_pickle$$$function_2___bit_generator_ctor );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_bit_generator_name );
    Py_DECREF( par_bit_generator_name );
    par_bit_generator_name = NULL;

    Py_XDECREF( var_bit_generator );
    var_bit_generator = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bit_generator_name );
    Py_DECREF( par_bit_generator_name );
    par_bit_generator_name = NULL;

    Py_XDECREF( var_bit_generator );
    var_bit_generator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$random$_pickle$$$function_2___bit_generator_ctor );
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


static PyObject *impl_numpy$random$_pickle$$$function_3___randomstate_ctor( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_bit_generator_name = python_pars[ 0 ];
    PyObject *var_bit_generator = NULL;
    struct Nuitka_FrameObject *frame_c907aec76ead0aa8a7be26c001df09a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c907aec76ead0aa8a7be26c001df09a8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c907aec76ead0aa8a7be26c001df09a8, codeobj_c907aec76ead0aa8a7be26c001df09a8, module_numpy$random$_pickle, sizeof(void *)+sizeof(void *) );
    frame_c907aec76ead0aa8a7be26c001df09a8 = cache_frame_c907aec76ead0aa8a7be26c001df09a8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c907aec76ead0aa8a7be26c001df09a8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c907aec76ead0aa8a7be26c001df09a8 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_bit_generator_name );
        tmp_compexpr_left_1 = par_bit_generator_name;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain_BitGenerators );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BitGenerators );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BitGenerators" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain_BitGenerators );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BitGenerators );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BitGenerators" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 77;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_bit_generator_name );
            tmp_subscript_name_1 = par_bit_generator_name;
            tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert( var_bit_generator == NULL );
            var_bit_generator = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_bit_generator_name );
            tmp_unicode_arg_1 = par_bit_generator_name;
            tmp_left_name_1 = PyObject_Unicode( tmp_unicode_arg_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_str_digest_2e69c64b7f0ef35c002508c25ea782e0;
            tmp_make_exception_arg_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_c907aec76ead0aa8a7be26c001df09a8->m_frame.f_lineno = 79;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 79;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain_RandomState );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RandomState );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RandomState" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        if ( var_bit_generator == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bit_generator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = var_bit_generator;
        frame_c907aec76ead0aa8a7be26c001df09a8->m_frame.f_lineno = 82;
        tmp_args_element_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c907aec76ead0aa8a7be26c001df09a8->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c907aec76ead0aa8a7be26c001df09a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c907aec76ead0aa8a7be26c001df09a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c907aec76ead0aa8a7be26c001df09a8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c907aec76ead0aa8a7be26c001df09a8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c907aec76ead0aa8a7be26c001df09a8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c907aec76ead0aa8a7be26c001df09a8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c907aec76ead0aa8a7be26c001df09a8,
        type_description_1,
        par_bit_generator_name,
        var_bit_generator
    );


    // Release cached frame.
    if ( frame_c907aec76ead0aa8a7be26c001df09a8 == cache_frame_c907aec76ead0aa8a7be26c001df09a8 )
    {
        Py_DECREF( frame_c907aec76ead0aa8a7be26c001df09a8 );
    }
    cache_frame_c907aec76ead0aa8a7be26c001df09a8 = NULL;

    assertFrameObject( frame_c907aec76ead0aa8a7be26c001df09a8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$random$_pickle$$$function_3___randomstate_ctor );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_bit_generator_name );
    Py_DECREF( par_bit_generator_name );
    par_bit_generator_name = NULL;

    Py_XDECREF( var_bit_generator );
    var_bit_generator = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bit_generator_name );
    Py_DECREF( par_bit_generator_name );
    par_bit_generator_name = NULL;

    Py_XDECREF( var_bit_generator );
    var_bit_generator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$random$_pickle$$$function_3___randomstate_ctor );
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



static PyObject *MAKE_FUNCTION_numpy$random$_pickle$$$function_1___generator_ctor( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$random$_pickle$$$function_1___generator_ctor,
        const_str_plain___generator_ctor,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f69499a9eb44d3798b625003d820a825,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$random$_pickle,
        const_str_digest_33b2165dead63cdabf4828293a5c086f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$random$_pickle$$$function_2___bit_generator_ctor( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$random$_pickle$$$function_2___bit_generator_ctor,
        const_str_plain___bit_generator_ctor,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5811d3454c24226af2571a307c48d088,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$random$_pickle,
        const_str_digest_76a8d8337a86f362ef9c472456e2b59c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$random$_pickle$$$function_3___randomstate_ctor( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$random$_pickle$$$function_3___randomstate_ctor,
        const_str_plain___randomstate_ctor,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c907aec76ead0aa8a7be26c001df09a8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$random$_pickle,
        const_str_digest_fb35101fc87d4b6d6f2988fc224c0862,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$random$_pickle =
{
    PyModuleDef_HEAD_INIT,
    "numpy.random._pickle",
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

MOD_INIT_DECL( numpy$random$_pickle )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$random$_pickle );
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
    puts("numpy.random._pickle: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.random._pickle: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.random._pickle: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$random$_pickle" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$random$_pickle = Py_InitModule4(
        "numpy.random._pickle",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$random$_pickle = PyModule_Create( &mdef_numpy$random$_pickle );
#endif

    moduledict_numpy$random$_pickle = MODULE_DICT( module_numpy$random$_pickle );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$random$_pickle,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$random$_pickle,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$random$_pickle,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$random$_pickle,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$random$_pickle );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_f4d0dc85b9841de3eae969005bb7fd0c, module_numpy$random$_pickle );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_fb1273cc8d30fa685587be612fb9a5a7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_fb1273cc8d30fa685587be612fb9a5a7 = MAKE_MODULE_FRAME( codeobj_fb1273cc8d30fa685587be612fb9a5a7, module_numpy$random$_pickle );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_fb1273cc8d30fa685587be612fb9a5a7 );
    assert( Py_REFCNT( frame_fb1273cc8d30fa685587be612fb9a5a7 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_mtrand;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$random$_pickle;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_RandomState_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_fb1273cc8d30fa685587be612fb9a5a7->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$random$_pickle,
                const_str_plain_RandomState,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_RandomState );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain_RandomState, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_philox;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$random$_pickle;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_Philox_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_fb1273cc8d30fa685587be612fb9a5a7->m_frame.f_lineno = 2;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_2 ) )
        {
           tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_numpy$random$_pickle,
                const_str_plain_Philox,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_Philox );
        }

        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain_Philox, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_pcg64;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$random$_pickle;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_PCG64_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_fb1273cc8d30fa685587be612fb9a5a7->m_frame.f_lineno = 3;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_3 ) )
        {
           tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_numpy$random$_pickle,
                const_str_plain_PCG64,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_PCG64 );
        }

        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain_PCG64, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_sfc64;
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$random$_pickle;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_SFC64_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_fb1273cc8d30fa685587be612fb9a5a7->m_frame.f_lineno = 4;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_numpy$random$_pickle,
                const_str_plain_SFC64,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_SFC64 );
        }

        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain_SFC64, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_generator;
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$random$_pickle;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_Generator_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_fb1273cc8d30fa685587be612fb9a5a7->m_frame.f_lineno = 6;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_numpy$random$_pickle,
                const_str_plain_Generator,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Generator );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain_Generator, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_mt19937;
        tmp_globals_name_6 = (PyObject *)moduledict_numpy$random$_pickle;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_MT19937_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_fb1273cc8d30fa685587be612fb9a5a7->m_frame.f_lineno = 7;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_numpy$random$_pickle,
                const_str_plain_MT19937,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_MT19937 );
        }

        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain_MT19937, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_mvar_value_6;
        tmp_dict_key_1 = const_str_plain_MT19937;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain_MT19937 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MT19937 );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_dict_value_1 = tmp_mvar_value_3;
        tmp_assign_source_10 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem( tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_PCG64;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain_PCG64 );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PCG64 );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_assign_source_10 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PCG64" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 10;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_2 = tmp_mvar_value_4;
        tmp_res = PyDict_SetItem( tmp_assign_source_10, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_Philox;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain_Philox );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Philox );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_assign_source_10 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Philox" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 11;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_3 = tmp_mvar_value_5;
        tmp_res = PyDict_SetItem( tmp_assign_source_10, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_SFC64;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain_SFC64 );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SFC64 );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_assign_source_10 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SFC64" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 12;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_4 = tmp_mvar_value_6;
        tmp_res = PyDict_SetItem( tmp_assign_source_10, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        UPDATE_STRING_DICT1( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain_BitGenerators, tmp_assign_source_10 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb1273cc8d30fa685587be612fb9a5a7 );
#endif
    popFrameStack();

    assertFrameObject( frame_fb1273cc8d30fa685587be612fb9a5a7 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb1273cc8d30fa685587be612fb9a5a7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fb1273cc8d30fa685587be612fb9a5a7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fb1273cc8d30fa685587be612fb9a5a7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fb1273cc8d30fa685587be612fb9a5a7, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_str_plain_MT19937_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_11 = MAKE_FUNCTION_numpy$random$_pickle$$$function_1___generator_ctor( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain___generator_ctor, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_str_plain_MT19937_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_12 = MAKE_FUNCTION_numpy$random$_pickle$$$function_2___bit_generator_ctor( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain___bit_generator_ctor, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_str_plain_MT19937_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_13 = MAKE_FUNCTION_numpy$random$_pickle$$$function_3___randomstate_ctor( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain___randomstate_ctor, tmp_assign_source_13 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$random$_pickle, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$random$_pickle );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
