/* Generated code for Python module 'urllib3.packages.rfc3986.api'
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

/* The "_module_urllib3$packages$rfc3986$api" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$packages$rfc3986$api;
PyDictObject *moduledict_urllib3$packages$rfc3986$api;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_IRIReference;
extern PyObject *const_str_plain_uri_reference;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_urlparse;
static PyObject *const_str_digest_be806f0c18d1d5f052309387d0bc2a27;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_strict;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_731984b07b3e45133af4eb87945891d7_tuple;
extern PyObject *const_str_plain_URIReference;
static PyObject *const_str_digest_00079de810d5ba8745a602dd05f8c08c;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_str_plain_uri;
static PyObject *const_str_digest_0fdb5ed63b7adfb9cf2277d0efabbdf9;
static PyObject *const_str_digest_6366f636e1dad4bd2c52d955f092edba;
static PyObject *const_str_digest_9cf585ce598ef41548dc8111a09cd22a;
static PyObject *const_str_digest_0f1852a8acf1c7f0ea2c4ef657174e5e;
extern PyObject *const_tuple_str_plain_URIReference_tuple;
static PyObject *const_str_plain_iri;
extern PyObject *const_str_plain_parseresult;
extern PyObject *const_str_plain_ParseResult;
static PyObject *const_str_digest_56e56b127b866844061bf953ef29ef53;
static PyObject *const_tuple_str_plain_iri_str_plain_encoding_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_from_string;
extern PyObject *const_str_plain_normalize_uri;
static PyObject *const_str_digest_e715ffaeda235da4c152c1935d9824a0;
static PyObject *const_str_plain_normalized_reference;
extern PyObject *const_tuple_str_plain_ParseResult_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_iri_reference;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_str_plain_uri_str_plain_encoding_tuple;
extern PyObject *const_str_plain_is_valid;
extern PyObject *const_str_plain_normalize;
static PyObject *const_tuple_str_plain_uri_str_plain_encoding_str_plain_kwargs_tuple;
extern PyObject *const_tuple_str_plain_IRIReference_tuple;
static PyObject *const_str_digest_049e06550aad081be1e3ca1c95ad9a80;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_unsplit;
extern PyObject *const_dict_23947da529d495c5b5d02e68c2d46c17;
extern PyObject *const_str_plain_is_valid_uri;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_be806f0c18d1d5f052309387d0bc2a27 = UNSTREAM_STRING_ASCII( &constant_bin[ 5874261 ], 366, 0 );
    const_tuple_731984b07b3e45133af4eb87945891d7_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_731984b07b3e45133af4eb87945891d7_tuple, 0, const_str_plain_uri ); Py_INCREF( const_str_plain_uri );
    PyTuple_SET_ITEM( const_tuple_731984b07b3e45133af4eb87945891d7_tuple, 1, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    const_str_plain_normalized_reference = UNSTREAM_STRING_ASCII( &constant_bin[ 5874627 ], 20, 1 );
    PyTuple_SET_ITEM( const_tuple_731984b07b3e45133af4eb87945891d7_tuple, 2, const_str_plain_normalized_reference ); Py_INCREF( const_str_plain_normalized_reference );
    const_str_digest_00079de810d5ba8745a602dd05f8c08c = UNSTREAM_STRING_ASCII( &constant_bin[ 5874647 ], 314, 0 );
    const_str_digest_0fdb5ed63b7adfb9cf2277d0efabbdf9 = UNSTREAM_STRING_ASCII( &constant_bin[ 5874961 ], 37, 0 );
    const_str_digest_6366f636e1dad4bd2c52d955f092edba = UNSTREAM_STRING_ASCII( &constant_bin[ 5874998 ], 354, 0 );
    const_str_digest_9cf585ce598ef41548dc8111a09cd22a = UNSTREAM_STRING_ASCII( &constant_bin[ 5875352 ], 995, 0 );
    const_str_digest_0f1852a8acf1c7f0ea2c4ef657174e5e = UNSTREAM_STRING_ASCII( &constant_bin[ 5876347 ], 355, 0 );
    const_str_plain_iri = UNSTREAM_STRING_ASCII( &constant_bin[ 493294 ], 3, 1 );
    const_str_digest_56e56b127b866844061bf953ef29ef53 = UNSTREAM_STRING_ASCII( &constant_bin[ 5874969 ], 28, 0 );
    const_tuple_str_plain_iri_str_plain_encoding_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_iri_str_plain_encoding_tuple, 0, const_str_plain_iri ); Py_INCREF( const_str_plain_iri );
    PyTuple_SET_ITEM( const_tuple_str_plain_iri_str_plain_encoding_tuple, 1, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    const_str_digest_e715ffaeda235da4c152c1935d9824a0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5876702 ], 31, 0 );
    const_tuple_str_plain_uri_str_plain_encoding_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_uri_str_plain_encoding_tuple, 0, const_str_plain_uri ); Py_INCREF( const_str_plain_uri );
    PyTuple_SET_ITEM( const_tuple_str_plain_uri_str_plain_encoding_tuple, 1, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    const_tuple_str_plain_uri_str_plain_encoding_str_plain_kwargs_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_uri_str_plain_encoding_str_plain_kwargs_tuple, 0, const_str_plain_uri ); Py_INCREF( const_str_plain_uri );
    PyTuple_SET_ITEM( const_tuple_str_plain_uri_str_plain_encoding_str_plain_kwargs_tuple, 1, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_str_plain_uri_str_plain_encoding_str_plain_kwargs_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_049e06550aad081be1e3ca1c95ad9a80 = UNSTREAM_STRING_ASCII( &constant_bin[ 5876733 ], 162, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$packages$rfc3986$api( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f5a081604457d27bd022070b602a6d36;
static PyCodeObject *codeobj_b2e86bf3c63e1148b1e4a4b5ce37d4af;
static PyCodeObject *codeobj_8b69d8e5481dd3af6987c2d63067af06;
static PyCodeObject *codeobj_94bd60db29e50d1b2f9e05f3996ce3d5;
static PyCodeObject *codeobj_9dfb9d4232e2f70da226d985580b86e1;
static PyCodeObject *codeobj_e8ea2acd2da85600911a354ccd1c631c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_e715ffaeda235da4c152c1935d9824a0 );
    codeobj_f5a081604457d27bd022070b602a6d36 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0fdb5ed63b7adfb9cf2277d0efabbdf9, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_b2e86bf3c63e1148b1e4a4b5ce37d4af = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iri_reference, 41, const_tuple_str_plain_iri_str_plain_encoding_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8b69d8e5481dd3af6987c2d63067af06 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_valid_uri, 55, const_tuple_str_plain_uri_str_plain_encoding_str_plain_kwargs_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_94bd60db29e50d1b2f9e05f3996ce3d5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_normalize_uri, 80, const_tuple_731984b07b3e45133af4eb87945891d7_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9dfb9d4232e2f70da226d985580b86e1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_uri_reference, 27, const_tuple_str_plain_uri_str_plain_encoding_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e8ea2acd2da85600911a354ccd1c631c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_urlparse, 96, const_tuple_str_plain_uri_str_plain_encoding_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$api$$$function_1_uri_reference( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$api$$$function_2_iri_reference( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$api$$$function_3_is_valid_uri( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$api$$$function_4_normalize_uri( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$api$$$function_5_urlparse( PyObject *defaults );


// The module function definitions.
static PyObject *impl_urllib3$packages$rfc3986$api$$$function_1_uri_reference( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uri = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_9dfb9d4232e2f70da226d985580b86e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9dfb9d4232e2f70da226d985580b86e1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9dfb9d4232e2f70da226d985580b86e1, codeobj_9dfb9d4232e2f70da226d985580b86e1, module_urllib3$packages$rfc3986$api, sizeof(void *)+sizeof(void *) );
    frame_9dfb9d4232e2f70da226d985580b86e1 = cache_frame_9dfb9d4232e2f70da226d985580b86e1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9dfb9d4232e2f70da226d985580b86e1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9dfb9d4232e2f70da226d985580b86e1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain_URIReference );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_URIReference );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "URIReference" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_uri );
        tmp_args_element_name_1 = par_uri;
        CHECK_OBJECT( par_encoding );
        tmp_args_element_name_2 = par_encoding;
        frame_9dfb9d4232e2f70da226d985580b86e1->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_from_string, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9dfb9d4232e2f70da226d985580b86e1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9dfb9d4232e2f70da226d985580b86e1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9dfb9d4232e2f70da226d985580b86e1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9dfb9d4232e2f70da226d985580b86e1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9dfb9d4232e2f70da226d985580b86e1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9dfb9d4232e2f70da226d985580b86e1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9dfb9d4232e2f70da226d985580b86e1,
        type_description_1,
        par_uri,
        par_encoding
    );


    // Release cached frame.
    if ( frame_9dfb9d4232e2f70da226d985580b86e1 == cache_frame_9dfb9d4232e2f70da226d985580b86e1 )
    {
        Py_DECREF( frame_9dfb9d4232e2f70da226d985580b86e1 );
    }
    cache_frame_9dfb9d4232e2f70da226d985580b86e1 = NULL;

    assertFrameObject( frame_9dfb9d4232e2f70da226d985580b86e1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$api$$$function_1_uri_reference );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_uri );
    Py_DECREF( par_uri );
    par_uri = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

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

    CHECK_OBJECT( (PyObject *)par_uri );
    Py_DECREF( par_uri );
    par_uri = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$api$$$function_1_uri_reference );
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


static PyObject *impl_urllib3$packages$rfc3986$api$$$function_2_iri_reference( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_iri = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_b2e86bf3c63e1148b1e4a4b5ce37d4af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b2e86bf3c63e1148b1e4a4b5ce37d4af = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b2e86bf3c63e1148b1e4a4b5ce37d4af, codeobj_b2e86bf3c63e1148b1e4a4b5ce37d4af, module_urllib3$packages$rfc3986$api, sizeof(void *)+sizeof(void *) );
    frame_b2e86bf3c63e1148b1e4a4b5ce37d4af = cache_frame_b2e86bf3c63e1148b1e4a4b5ce37d4af;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b2e86bf3c63e1148b1e4a4b5ce37d4af );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b2e86bf3c63e1148b1e4a4b5ce37d4af ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain_IRIReference );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IRIReference );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IRIReference" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_iri );
        tmp_args_element_name_1 = par_iri;
        CHECK_OBJECT( par_encoding );
        tmp_args_element_name_2 = par_encoding;
        frame_b2e86bf3c63e1148b1e4a4b5ce37d4af->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_from_string, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2e86bf3c63e1148b1e4a4b5ce37d4af );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2e86bf3c63e1148b1e4a4b5ce37d4af );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2e86bf3c63e1148b1e4a4b5ce37d4af );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b2e86bf3c63e1148b1e4a4b5ce37d4af, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b2e86bf3c63e1148b1e4a4b5ce37d4af->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b2e86bf3c63e1148b1e4a4b5ce37d4af, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b2e86bf3c63e1148b1e4a4b5ce37d4af,
        type_description_1,
        par_iri,
        par_encoding
    );


    // Release cached frame.
    if ( frame_b2e86bf3c63e1148b1e4a4b5ce37d4af == cache_frame_b2e86bf3c63e1148b1e4a4b5ce37d4af )
    {
        Py_DECREF( frame_b2e86bf3c63e1148b1e4a4b5ce37d4af );
    }
    cache_frame_b2e86bf3c63e1148b1e4a4b5ce37d4af = NULL;

    assertFrameObject( frame_b2e86bf3c63e1148b1e4a4b5ce37d4af );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$api$$$function_2_iri_reference );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_iri );
    Py_DECREF( par_iri );
    par_iri = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

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

    CHECK_OBJECT( (PyObject *)par_iri );
    Py_DECREF( par_iri );
    par_iri = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$api$$$function_2_iri_reference );
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


static PyObject *impl_urllib3$packages$rfc3986$api$$$function_3_is_valid_uri( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uri = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_8b69d8e5481dd3af6987c2d63067af06;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8b69d8e5481dd3af6987c2d63067af06 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8b69d8e5481dd3af6987c2d63067af06, codeobj_8b69d8e5481dd3af6987c2d63067af06, module_urllib3$packages$rfc3986$api, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8b69d8e5481dd3af6987c2d63067af06 = cache_frame_8b69d8e5481dd3af6987c2d63067af06;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8b69d8e5481dd3af6987c2d63067af06 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8b69d8e5481dd3af6987c2d63067af06 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_dircall_arg2_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain_URIReference );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_URIReference );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "URIReference" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_uri );
        tmp_args_element_name_1 = par_uri;
        CHECK_OBJECT( par_encoding );
        tmp_args_element_name_2 = par_encoding;
        frame_8b69d8e5481dd3af6987c2d63067af06->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_source_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_from_string, call_args );
        }

        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_valid );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg2_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___internal__$$$function_3_complex_call_helper_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b69d8e5481dd3af6987c2d63067af06 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b69d8e5481dd3af6987c2d63067af06 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b69d8e5481dd3af6987c2d63067af06 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8b69d8e5481dd3af6987c2d63067af06, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8b69d8e5481dd3af6987c2d63067af06->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8b69d8e5481dd3af6987c2d63067af06, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8b69d8e5481dd3af6987c2d63067af06,
        type_description_1,
        par_uri,
        par_encoding,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_8b69d8e5481dd3af6987c2d63067af06 == cache_frame_8b69d8e5481dd3af6987c2d63067af06 )
    {
        Py_DECREF( frame_8b69d8e5481dd3af6987c2d63067af06 );
    }
    cache_frame_8b69d8e5481dd3af6987c2d63067af06 = NULL;

    assertFrameObject( frame_8b69d8e5481dd3af6987c2d63067af06 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$api$$$function_3_is_valid_uri );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_uri );
    Py_DECREF( par_uri );
    par_uri = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_uri );
    Py_DECREF( par_uri );
    par_uri = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$api$$$function_3_is_valid_uri );
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


static PyObject *impl_urllib3$packages$rfc3986$api$$$function_4_normalize_uri( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uri = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    PyObject *var_normalized_reference = NULL;
    struct Nuitka_FrameObject *frame_94bd60db29e50d1b2f9e05f3996ce3d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_94bd60db29e50d1b2f9e05f3996ce3d5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_94bd60db29e50d1b2f9e05f3996ce3d5, codeobj_94bd60db29e50d1b2f9e05f3996ce3d5, module_urllib3$packages$rfc3986$api, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_94bd60db29e50d1b2f9e05f3996ce3d5 = cache_frame_94bd60db29e50d1b2f9e05f3996ce3d5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_94bd60db29e50d1b2f9e05f3996ce3d5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_94bd60db29e50d1b2f9e05f3996ce3d5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain_URIReference );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_URIReference );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "URIReference" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 92;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_uri );
        tmp_args_element_name_1 = par_uri;
        CHECK_OBJECT( par_encoding );
        tmp_args_element_name_2 = par_encoding;
        frame_94bd60db29e50d1b2f9e05f3996ce3d5->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_from_string, call_args );
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_94bd60db29e50d1b2f9e05f3996ce3d5->m_frame.f_lineno = 92;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_normalize );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_normalized_reference == NULL );
        var_normalized_reference = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT( var_normalized_reference );
        tmp_called_instance_3 = var_normalized_reference;
        frame_94bd60db29e50d1b2f9e05f3996ce3d5->m_frame.f_lineno = 93;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_unsplit );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94bd60db29e50d1b2f9e05f3996ce3d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_94bd60db29e50d1b2f9e05f3996ce3d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94bd60db29e50d1b2f9e05f3996ce3d5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_94bd60db29e50d1b2f9e05f3996ce3d5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_94bd60db29e50d1b2f9e05f3996ce3d5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_94bd60db29e50d1b2f9e05f3996ce3d5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_94bd60db29e50d1b2f9e05f3996ce3d5,
        type_description_1,
        par_uri,
        par_encoding,
        var_normalized_reference
    );


    // Release cached frame.
    if ( frame_94bd60db29e50d1b2f9e05f3996ce3d5 == cache_frame_94bd60db29e50d1b2f9e05f3996ce3d5 )
    {
        Py_DECREF( frame_94bd60db29e50d1b2f9e05f3996ce3d5 );
    }
    cache_frame_94bd60db29e50d1b2f9e05f3996ce3d5 = NULL;

    assertFrameObject( frame_94bd60db29e50d1b2f9e05f3996ce3d5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$api$$$function_4_normalize_uri );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_uri );
    Py_DECREF( par_uri );
    par_uri = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    CHECK_OBJECT( (PyObject *)var_normalized_reference );
    Py_DECREF( var_normalized_reference );
    var_normalized_reference = NULL;

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

    CHECK_OBJECT( (PyObject *)par_uri );
    Py_DECREF( par_uri );
    par_uri = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( var_normalized_reference );
    var_normalized_reference = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$api$$$function_4_normalize_uri );
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


static PyObject *impl_urllib3$packages$rfc3986$api$$$function_5_urlparse( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uri = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_e8ea2acd2da85600911a354ccd1c631c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e8ea2acd2da85600911a354ccd1c631c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e8ea2acd2da85600911a354ccd1c631c, codeobj_e8ea2acd2da85600911a354ccd1c631c, module_urllib3$packages$rfc3986$api, sizeof(void *)+sizeof(void *) );
    frame_e8ea2acd2da85600911a354ccd1c631c = cache_frame_e8ea2acd2da85600911a354ccd1c631c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e8ea2acd2da85600911a354ccd1c631c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e8ea2acd2da85600911a354ccd1c631c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain_ParseResult );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ParseResult );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ParseResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_from_string );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_uri );
        tmp_tuple_element_1 = par_uri;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_encoding );
        tmp_tuple_element_1 = par_encoding;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_23947da529d495c5b5d02e68c2d46c17 );
        frame_e8ea2acd2da85600911a354ccd1c631c->m_frame.f_lineno = 106;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8ea2acd2da85600911a354ccd1c631c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8ea2acd2da85600911a354ccd1c631c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8ea2acd2da85600911a354ccd1c631c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e8ea2acd2da85600911a354ccd1c631c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e8ea2acd2da85600911a354ccd1c631c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e8ea2acd2da85600911a354ccd1c631c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e8ea2acd2da85600911a354ccd1c631c,
        type_description_1,
        par_uri,
        par_encoding
    );


    // Release cached frame.
    if ( frame_e8ea2acd2da85600911a354ccd1c631c == cache_frame_e8ea2acd2da85600911a354ccd1c631c )
    {
        Py_DECREF( frame_e8ea2acd2da85600911a354ccd1c631c );
    }
    cache_frame_e8ea2acd2da85600911a354ccd1c631c = NULL;

    assertFrameObject( frame_e8ea2acd2da85600911a354ccd1c631c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$api$$$function_5_urlparse );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_uri );
    Py_DECREF( par_uri );
    par_uri = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

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

    CHECK_OBJECT( (PyObject *)par_uri );
    Py_DECREF( par_uri );
    par_uri = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$api$$$function_5_urlparse );
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



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$api$$$function_1_uri_reference( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$api$$$function_1_uri_reference,
        const_str_plain_uri_reference,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9dfb9d4232e2f70da226d985580b86e1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$api,
        const_str_digest_6366f636e1dad4bd2c52d955f092edba,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$api$$$function_2_iri_reference( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$api$$$function_2_iri_reference,
        const_str_plain_iri_reference,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b2e86bf3c63e1148b1e4a4b5ce37d4af,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$api,
        const_str_digest_0f1852a8acf1c7f0ea2c4ef657174e5e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$api$$$function_3_is_valid_uri( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$api$$$function_3_is_valid_uri,
        const_str_plain_is_valid_uri,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8b69d8e5481dd3af6987c2d63067af06,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$api,
        const_str_digest_9cf585ce598ef41548dc8111a09cd22a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$api$$$function_4_normalize_uri( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$api$$$function_4_normalize_uri,
        const_str_plain_normalize_uri,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_94bd60db29e50d1b2f9e05f3996ce3d5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$api,
        const_str_digest_be806f0c18d1d5f052309387d0bc2a27,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$api$$$function_5_urlparse( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$api$$$function_5_urlparse,
        const_str_plain_urlparse,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e8ea2acd2da85600911a354ccd1c631c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$api,
        const_str_digest_00079de810d5ba8745a602dd05f8c08c,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$packages$rfc3986$api =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.packages.rfc3986.api",
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

MOD_INIT_DECL( urllib3$packages$rfc3986$api )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$packages$rfc3986$api );
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
    puts("urllib3.packages.rfc3986.api: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.packages.rfc3986.api: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.packages.rfc3986.api: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$packages$rfc3986$api" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$packages$rfc3986$api = Py_InitModule4(
        "urllib3.packages.rfc3986.api",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$packages$rfc3986$api = PyModule_Create( &mdef_urllib3$packages$rfc3986$api );
#endif

    moduledict_urllib3$packages$rfc3986$api = MODULE_DICT( module_urllib3$packages$rfc3986$api );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_urllib3$packages$rfc3986$api,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$packages$rfc3986$api,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$packages$rfc3986$api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$packages$rfc3986$api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$packages$rfc3986$api );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_56e56b127b866844061bf953ef29ef53, module_urllib3$packages$rfc3986$api );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_f5a081604457d27bd022070b602a6d36;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_049e06550aad081be1e3ca1c95ad9a80;
        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_f5a081604457d27bd022070b602a6d36 = MAKE_MODULE_FRAME( codeobj_f5a081604457d27bd022070b602a6d36, module_urllib3$packages$rfc3986$api );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_f5a081604457d27bd022070b602a6d36 );
    assert( Py_REFCNT( frame_f5a081604457d27bd022070b602a6d36 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_iri;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$packages$rfc3986$api;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_IRIReference_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_f5a081604457d27bd022070b602a6d36->m_frame.f_lineno = 22;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_urllib3$packages$rfc3986$api,
                const_str_plain_IRIReference,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_IRIReference );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain_IRIReference, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_parseresult;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$packages$rfc3986$api;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_ParseResult_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_f5a081604457d27bd022070b602a6d36->m_frame.f_lineno = 23;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_2 ) )
        {
           tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_urllib3$packages$rfc3986$api,
                const_str_plain_ParseResult,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ParseResult );
        }

        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain_ParseResult, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_uri;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$packages$rfc3986$api;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_URIReference_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_f5a081604457d27bd022070b602a6d36->m_frame.f_lineno = 24;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_3 ) )
        {
           tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_urllib3$packages$rfc3986$api,
                const_str_plain_URIReference,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_URIReference );
        }

        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain_URIReference, tmp_assign_source_6 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5a081604457d27bd022070b602a6d36 );
#endif
    popFrameStack();

    assertFrameObject( frame_f5a081604457d27bd022070b602a6d36 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5a081604457d27bd022070b602a6d36 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f5a081604457d27bd022070b602a6d36, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f5a081604457d27bd022070b602a6d36->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f5a081604457d27bd022070b602a6d36, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_7 = MAKE_FUNCTION_urllib3$packages$rfc3986$api$$$function_1_uri_reference( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain_uri_reference, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_8 = MAKE_FUNCTION_urllib3$packages$rfc3986$api$$$function_2_iri_reference( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain_iri_reference, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_9 = MAKE_FUNCTION_urllib3$packages$rfc3986$api$$$function_3_is_valid_uri( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain_is_valid_uri, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_10 = MAKE_FUNCTION_urllib3$packages$rfc3986$api$$$function_4_normalize_uri( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain_normalize_uri, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_assign_source_11 = MAKE_FUNCTION_urllib3$packages$rfc3986$api$$$function_5_urlparse( tmp_defaults_5 );



        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain_urlparse, tmp_assign_source_11 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$api, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_urllib3$packages$rfc3986$api );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
