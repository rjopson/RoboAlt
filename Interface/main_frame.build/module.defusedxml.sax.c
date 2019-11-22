/* Generated code for Python module 'defusedxml.sax'
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

/* The "_module_defusedxml$sax" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_defusedxml$sax;
PyDictObject *moduledict_defusedxml$sax;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_forbid_dtd;
extern PyObject *const_tuple_str_plain_BytesIO_tuple;
static PyObject *const_str_digest_9221faca58cf379305dd3576242d9789;
extern PyObject *const_str_plain_source;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___origin__;
extern PyObject *const_str_plain_io;
static PyObject *const_str_digest_21c47637add2892ce9bef3fdf89a7018;
static PyObject *const_str_plain_setErrorHandler;
static PyObject *const_str_plain_inpsrc;
extern PyObject *const_str_plain_string;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_parseString;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_setByteStream;
extern PyObject *const_str_plain_make_parser;
static PyObject *const_str_plain_parser_list;
extern PyObject *const_str_plain_create_parser;
extern PyObject *const_int_0;
static PyObject *const_str_digest_b221566cfc22cd32d3072a27784bd7c3;
static PyObject *const_tuple_ef036272094fed18af040facbd049694_tuple;
static PyObject *const_str_plain_ErrorHandler;
static PyObject *const_str_plain_errorHandler;
static PyObject *const_str_plain__ErrorHandler;
extern PyObject *const_str_plain_expatreader;
extern PyObject *const_str_plain_BytesIO;
extern PyObject *const_str_plain_parse;
static PyObject *const_str_digest_11e1a239f7df9c6b9f5530933f13d781;
extern PyObject *const_str_plain_origin;
static PyObject *const_tuple_str_plain_InputSource_tuple;
extern PyObject *const_str_plain_forbid_external;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_forbid_entities;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_InputSource;
static PyObject *const_str_plain_setContentHandler;
static PyObject *const_str_digest_075232358215e2140106137c2eb2eb53;
extern PyObject *const_str_empty;
static PyObject *const_tuple_str_plain_ErrorHandler_tuple;
static PyObject *const_tuple_5f6fdd0d148944765feb1510191d0f25_tuple;
static PyObject *const_str_plain__InputSource;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_handler;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_parser;
extern PyObject *const_tuple_str_plain_expatreader_tuple;
static PyObject *const_tuple_str_plain_parser_list_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_9221faca58cf379305dd3576242d9789 = UNSTREAM_STRING_ASCII( &constant_bin[ 516892 ], 17, 0 );
    const_str_digest_21c47637add2892ce9bef3fdf89a7018 = UNSTREAM_STRING_ASCII( &constant_bin[ 516909 ], 16, 0 );
    const_str_plain_setErrorHandler = UNSTREAM_STRING_ASCII( &constant_bin[ 516925 ], 15, 1 );
    const_str_plain_inpsrc = UNSTREAM_STRING_ASCII( &constant_bin[ 516940 ], 6, 1 );
    const_str_plain_setByteStream = UNSTREAM_STRING_ASCII( &constant_bin[ 516946 ], 13, 1 );
    const_str_plain_parser_list = UNSTREAM_STRING_ASCII( &constant_bin[ 516959 ], 11, 1 );
    const_str_digest_b221566cfc22cd32d3072a27784bd7c3 = UNSTREAM_STRING_ASCII( &constant_bin[ 516375 ], 7, 0 );
    const_tuple_ef036272094fed18af040facbd049694_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_ef036272094fed18af040facbd049694_tuple, 0, const_str_plain_source ); Py_INCREF( const_str_plain_source );
    PyTuple_SET_ITEM( const_tuple_ef036272094fed18af040facbd049694_tuple, 1, const_str_plain_handler ); Py_INCREF( const_str_plain_handler );
    const_str_plain_errorHandler = UNSTREAM_STRING_ASCII( &constant_bin[ 516970 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_ef036272094fed18af040facbd049694_tuple, 2, const_str_plain_errorHandler ); Py_INCREF( const_str_plain_errorHandler );
    PyTuple_SET_ITEM( const_tuple_ef036272094fed18af040facbd049694_tuple, 3, const_str_plain_forbid_dtd ); Py_INCREF( const_str_plain_forbid_dtd );
    PyTuple_SET_ITEM( const_tuple_ef036272094fed18af040facbd049694_tuple, 4, const_str_plain_forbid_entities ); Py_INCREF( const_str_plain_forbid_entities );
    PyTuple_SET_ITEM( const_tuple_ef036272094fed18af040facbd049694_tuple, 5, const_str_plain_forbid_external ); Py_INCREF( const_str_plain_forbid_external );
    PyTuple_SET_ITEM( const_tuple_ef036272094fed18af040facbd049694_tuple, 6, const_str_plain_parser ); Py_INCREF( const_str_plain_parser );
    const_str_plain_ErrorHandler = UNSTREAM_STRING_ASCII( &constant_bin[ 516928 ], 12, 1 );
    const_str_plain__ErrorHandler = UNSTREAM_STRING_ASCII( &constant_bin[ 516982 ], 13, 1 );
    const_str_digest_11e1a239f7df9c6b9f5530933f13d781 = UNSTREAM_STRING_ASCII( &constant_bin[ 516995 ], 14, 0 );
    const_tuple_str_plain_InputSource_tuple = PyTuple_New( 1 );
    const_str_plain_InputSource = UNSTREAM_STRING_ASCII( &constant_bin[ 517009 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InputSource_tuple, 0, const_str_plain_InputSource ); Py_INCREF( const_str_plain_InputSource );
    const_str_plain_setContentHandler = UNSTREAM_STRING_ASCII( &constant_bin[ 517020 ], 17, 1 );
    const_str_digest_075232358215e2140106137c2eb2eb53 = UNSTREAM_STRING_ASCII( &constant_bin[ 517037 ], 23, 0 );
    const_tuple_str_plain_ErrorHandler_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ErrorHandler_tuple, 0, const_str_plain_ErrorHandler ); Py_INCREF( const_str_plain_ErrorHandler );
    const_tuple_5f6fdd0d148944765feb1510191d0f25_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_5f6fdd0d148944765feb1510191d0f25_tuple, 0, const_str_plain_string ); Py_INCREF( const_str_plain_string );
    PyTuple_SET_ITEM( const_tuple_5f6fdd0d148944765feb1510191d0f25_tuple, 1, const_str_plain_handler ); Py_INCREF( const_str_plain_handler );
    PyTuple_SET_ITEM( const_tuple_5f6fdd0d148944765feb1510191d0f25_tuple, 2, const_str_plain_errorHandler ); Py_INCREF( const_str_plain_errorHandler );
    PyTuple_SET_ITEM( const_tuple_5f6fdd0d148944765feb1510191d0f25_tuple, 3, const_str_plain_forbid_dtd ); Py_INCREF( const_str_plain_forbid_dtd );
    PyTuple_SET_ITEM( const_tuple_5f6fdd0d148944765feb1510191d0f25_tuple, 4, const_str_plain_forbid_entities ); Py_INCREF( const_str_plain_forbid_entities );
    PyTuple_SET_ITEM( const_tuple_5f6fdd0d148944765feb1510191d0f25_tuple, 5, const_str_plain_forbid_external ); Py_INCREF( const_str_plain_forbid_external );
    PyTuple_SET_ITEM( const_tuple_5f6fdd0d148944765feb1510191d0f25_tuple, 6, const_str_plain_BytesIO ); Py_INCREF( const_str_plain_BytesIO );
    PyTuple_SET_ITEM( const_tuple_5f6fdd0d148944765feb1510191d0f25_tuple, 7, const_str_plain_parser ); Py_INCREF( const_str_plain_parser );
    PyTuple_SET_ITEM( const_tuple_5f6fdd0d148944765feb1510191d0f25_tuple, 8, const_str_plain_inpsrc ); Py_INCREF( const_str_plain_inpsrc );
    const_str_plain__InputSource = UNSTREAM_STRING_ASCII( &constant_bin[ 517060 ], 12, 1 );
    const_tuple_str_plain_parser_list_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_parser_list_tuple, 0, const_str_plain_parser_list ); Py_INCREF( const_str_plain_parser_list );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_defusedxml$sax( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e330e96d45957e7d2e25966be0613f5a;
static PyCodeObject *codeobj_a6d80726811738fe806683e245ac2caf;
static PyCodeObject *codeobj_581184f1714ec083e28e632f9e9d4ca9;
static PyCodeObject *codeobj_6c6bff1724f5f342897bc11df2d31af3;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_9221faca58cf379305dd3576242d9789 );
    codeobj_e330e96d45957e7d2e25966be0613f5a = MAKE_CODEOBJ( module_filename_obj, const_str_digest_075232358215e2140106137c2eb2eb53, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_a6d80726811738fe806683e245ac2caf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_make_parser, 59, const_tuple_str_plain_parser_list_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_581184f1714ec083e28e632f9e9d4ca9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse, 18, const_tuple_ef036272094fed18af040facbd049694_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6c6bff1724f5f342897bc11df2d31af3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parseString, 35, const_tuple_5f6fdd0d148944765feb1510191d0f25_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_defusedxml$sax$$$function_1_parse( PyObject *defaults );


static PyObject *MAKE_FUNCTION_defusedxml$sax$$$function_2_parseString( PyObject *defaults );


static PyObject *MAKE_FUNCTION_defusedxml$sax$$$function_3_make_parser( PyObject *defaults );


// The module function definitions.
static PyObject *impl_defusedxml$sax$$$function_1_parse( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_source = python_pars[ 0 ];
    PyObject *par_handler = python_pars[ 1 ];
    PyObject *par_errorHandler = python_pars[ 2 ];
    PyObject *par_forbid_dtd = python_pars[ 3 ];
    PyObject *par_forbid_entities = python_pars[ 4 ];
    PyObject *par_forbid_external = python_pars[ 5 ];
    PyObject *var_parser = NULL;
    struct Nuitka_FrameObject *frame_581184f1714ec083e28e632f9e9d4ca9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_581184f1714ec083e28e632f9e9d4ca9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_581184f1714ec083e28e632f9e9d4ca9, codeobj_581184f1714ec083e28e632f9e9d4ca9, module_defusedxml$sax, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_581184f1714ec083e28e632f9e9d4ca9 = cache_frame_581184f1714ec083e28e632f9e9d4ca9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_581184f1714ec083e28e632f9e9d4ca9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_581184f1714ec083e28e632f9e9d4ca9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain_make_parser );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_make_parser );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "make_parser" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 26;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_581184f1714ec083e28e632f9e9d4ca9->m_frame.f_lineno = 26;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_parser == NULL );
        var_parser = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_parser );
        tmp_called_instance_1 = var_parser;
        CHECK_OBJECT( par_handler );
        tmp_args_element_name_1 = par_handler;
        frame_581184f1714ec083e28e632f9e9d4ca9->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_setContentHandler, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( var_parser );
        tmp_called_instance_2 = var_parser;
        CHECK_OBJECT( par_errorHandler );
        tmp_args_element_name_2 = par_errorHandler;
        frame_581184f1714ec083e28e632f9e9d4ca9->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_setErrorHandler, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_forbid_dtd );
        tmp_assattr_name_1 = par_forbid_dtd;
        CHECK_OBJECT( var_parser );
        tmp_assattr_target_1 = var_parser;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_forbid_dtd, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_forbid_entities );
        tmp_assattr_name_2 = par_forbid_entities;
        CHECK_OBJECT( var_parser );
        tmp_assattr_target_2 = var_parser;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_forbid_entities, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_forbid_external );
        tmp_assattr_name_3 = par_forbid_external;
        CHECK_OBJECT( var_parser );
        tmp_assattr_target_3 = var_parser;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_forbid_external, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( var_parser );
        tmp_called_instance_3 = var_parser;
        CHECK_OBJECT( par_source );
        tmp_args_element_name_3 = par_source;
        frame_581184f1714ec083e28e632f9e9d4ca9->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_parse, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_581184f1714ec083e28e632f9e9d4ca9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_581184f1714ec083e28e632f9e9d4ca9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_581184f1714ec083e28e632f9e9d4ca9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_581184f1714ec083e28e632f9e9d4ca9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_581184f1714ec083e28e632f9e9d4ca9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_581184f1714ec083e28e632f9e9d4ca9,
        type_description_1,
        par_source,
        par_handler,
        par_errorHandler,
        par_forbid_dtd,
        par_forbid_entities,
        par_forbid_external,
        var_parser
    );


    // Release cached frame.
    if ( frame_581184f1714ec083e28e632f9e9d4ca9 == cache_frame_581184f1714ec083e28e632f9e9d4ca9 )
    {
        Py_DECREF( frame_581184f1714ec083e28e632f9e9d4ca9 );
    }
    cache_frame_581184f1714ec083e28e632f9e9d4ca9 = NULL;

    assertFrameObject( frame_581184f1714ec083e28e632f9e9d4ca9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( defusedxml$sax$$$function_1_parse );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_source );
    Py_DECREF( par_source );
    par_source = NULL;

    CHECK_OBJECT( (PyObject *)par_handler );
    Py_DECREF( par_handler );
    par_handler = NULL;

    CHECK_OBJECT( (PyObject *)par_errorHandler );
    Py_DECREF( par_errorHandler );
    par_errorHandler = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_dtd );
    Py_DECREF( par_forbid_dtd );
    par_forbid_dtd = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_entities );
    Py_DECREF( par_forbid_entities );
    par_forbid_entities = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_external );
    Py_DECREF( par_forbid_external );
    par_forbid_external = NULL;

    CHECK_OBJECT( (PyObject *)var_parser );
    Py_DECREF( var_parser );
    var_parser = NULL;

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

    CHECK_OBJECT( (PyObject *)par_source );
    Py_DECREF( par_source );
    par_source = NULL;

    CHECK_OBJECT( (PyObject *)par_handler );
    Py_DECREF( par_handler );
    par_handler = NULL;

    CHECK_OBJECT( (PyObject *)par_errorHandler );
    Py_DECREF( par_errorHandler );
    par_errorHandler = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_dtd );
    Py_DECREF( par_forbid_dtd );
    par_forbid_dtd = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_entities );
    Py_DECREF( par_forbid_entities );
    par_forbid_entities = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_external );
    Py_DECREF( par_forbid_external );
    par_forbid_external = NULL;

    Py_XDECREF( var_parser );
    var_parser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( defusedxml$sax$$$function_1_parse );
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


static PyObject *impl_defusedxml$sax$$$function_2_parseString( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_string = python_pars[ 0 ];
    PyObject *par_handler = python_pars[ 1 ];
    PyObject *par_errorHandler = python_pars[ 2 ];
    PyObject *par_forbid_dtd = python_pars[ 3 ];
    PyObject *par_forbid_entities = python_pars[ 4 ];
    PyObject *par_forbid_external = python_pars[ 5 ];
    PyObject *var_BytesIO = NULL;
    PyObject *var_parser = NULL;
    PyObject *var_inpsrc = NULL;
    struct Nuitka_FrameObject *frame_6c6bff1724f5f342897bc11df2d31af3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6c6bff1724f5f342897bc11df2d31af3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6c6bff1724f5f342897bc11df2d31af3, codeobj_6c6bff1724f5f342897bc11df2d31af3, module_defusedxml$sax, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6c6bff1724f5f342897bc11df2d31af3 = cache_frame_6c6bff1724f5f342897bc11df2d31af3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6c6bff1724f5f342897bc11df2d31af3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6c6bff1724f5f342897bc11df2d31af3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_io;
        tmp_globals_name_1 = (PyObject *)moduledict_defusedxml$sax;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_BytesIO_tuple;
        tmp_level_name_1 = const_int_0;
        frame_6c6bff1724f5f342897bc11df2d31af3->m_frame.f_lineno = 43;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_BytesIO );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_BytesIO == NULL );
        var_BytesIO = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_errorHandler );
        tmp_compexpr_left_1 = par_errorHandler;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain__ErrorHandler );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ErrorHandler );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_ErrorHandler" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 46;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_6c6bff1724f5f342897bc11df2d31af3->m_frame.f_lineno = 46;
            tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_errorHandler;
                assert( old != NULL );
                par_errorHandler = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain_make_parser );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_make_parser );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "make_parser" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 47;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        frame_6c6bff1724f5f342897bc11df2d31af3->m_frame.f_lineno = 47;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_parser == NULL );
        var_parser = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_parser );
        tmp_called_instance_1 = var_parser;
        CHECK_OBJECT( par_handler );
        tmp_args_element_name_1 = par_handler;
        frame_6c6bff1724f5f342897bc11df2d31af3->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_setContentHandler, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( var_parser );
        tmp_called_instance_2 = var_parser;
        CHECK_OBJECT( par_errorHandler );
        tmp_args_element_name_2 = par_errorHandler;
        frame_6c6bff1724f5f342897bc11df2d31af3->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_setErrorHandler, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_forbid_dtd );
        tmp_assattr_name_1 = par_forbid_dtd;
        CHECK_OBJECT( var_parser );
        tmp_assattr_target_1 = var_parser;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_forbid_dtd, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_forbid_entities );
        tmp_assattr_name_2 = par_forbid_entities;
        CHECK_OBJECT( var_parser );
        tmp_assattr_target_2 = var_parser;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_forbid_entities, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_forbid_external );
        tmp_assattr_name_3 = par_forbid_external;
        CHECK_OBJECT( var_parser );
        tmp_assattr_target_3 = var_parser;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_forbid_external, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain__InputSource );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__InputSource );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_InputSource" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 54;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        frame_6c6bff1724f5f342897bc11df2d31af3->m_frame.f_lineno = 54;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_inpsrc == NULL );
        var_inpsrc = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( var_inpsrc );
        tmp_source_name_1 = var_inpsrc;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_setByteStream );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_BytesIO );
        tmp_called_name_5 = var_BytesIO;
        CHECK_OBJECT( par_string );
        tmp_args_element_name_4 = par_string;
        frame_6c6bff1724f5f342897bc11df2d31af3->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 55;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6c6bff1724f5f342897bc11df2d31af3->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( var_parser );
        tmp_called_instance_3 = var_parser;
        CHECK_OBJECT( var_inpsrc );
        tmp_args_element_name_5 = var_inpsrc;
        frame_6c6bff1724f5f342897bc11df2d31af3->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_parse, call_args );
        }

        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_4 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c6bff1724f5f342897bc11df2d31af3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c6bff1724f5f342897bc11df2d31af3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6c6bff1724f5f342897bc11df2d31af3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6c6bff1724f5f342897bc11df2d31af3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6c6bff1724f5f342897bc11df2d31af3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6c6bff1724f5f342897bc11df2d31af3,
        type_description_1,
        par_string,
        par_handler,
        par_errorHandler,
        par_forbid_dtd,
        par_forbid_entities,
        par_forbid_external,
        var_BytesIO,
        var_parser,
        var_inpsrc
    );


    // Release cached frame.
    if ( frame_6c6bff1724f5f342897bc11df2d31af3 == cache_frame_6c6bff1724f5f342897bc11df2d31af3 )
    {
        Py_DECREF( frame_6c6bff1724f5f342897bc11df2d31af3 );
    }
    cache_frame_6c6bff1724f5f342897bc11df2d31af3 = NULL;

    assertFrameObject( frame_6c6bff1724f5f342897bc11df2d31af3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( defusedxml$sax$$$function_2_parseString );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_string );
    Py_DECREF( par_string );
    par_string = NULL;

    CHECK_OBJECT( (PyObject *)par_handler );
    Py_DECREF( par_handler );
    par_handler = NULL;

    CHECK_OBJECT( (PyObject *)par_errorHandler );
    Py_DECREF( par_errorHandler );
    par_errorHandler = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_dtd );
    Py_DECREF( par_forbid_dtd );
    par_forbid_dtd = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_entities );
    Py_DECREF( par_forbid_entities );
    par_forbid_entities = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_external );
    Py_DECREF( par_forbid_external );
    par_forbid_external = NULL;

    CHECK_OBJECT( (PyObject *)var_BytesIO );
    Py_DECREF( var_BytesIO );
    var_BytesIO = NULL;

    CHECK_OBJECT( (PyObject *)var_parser );
    Py_DECREF( var_parser );
    var_parser = NULL;

    CHECK_OBJECT( (PyObject *)var_inpsrc );
    Py_DECREF( var_inpsrc );
    var_inpsrc = NULL;

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

    CHECK_OBJECT( (PyObject *)par_string );
    Py_DECREF( par_string );
    par_string = NULL;

    CHECK_OBJECT( (PyObject *)par_handler );
    Py_DECREF( par_handler );
    par_handler = NULL;

    Py_XDECREF( par_errorHandler );
    par_errorHandler = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_dtd );
    Py_DECREF( par_forbid_dtd );
    par_forbid_dtd = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_entities );
    Py_DECREF( par_forbid_entities );
    par_forbid_entities = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_external );
    Py_DECREF( par_forbid_external );
    par_forbid_external = NULL;

    Py_XDECREF( var_BytesIO );
    var_BytesIO = NULL;

    Py_XDECREF( var_parser );
    var_parser = NULL;

    Py_XDECREF( var_inpsrc );
    var_inpsrc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( defusedxml$sax$$$function_2_parseString );
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


static PyObject *impl_defusedxml$sax$$$function_3_make_parser( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_parser_list = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_a6d80726811738fe806683e245ac2caf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a6d80726811738fe806683e245ac2caf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a6d80726811738fe806683e245ac2caf, codeobj_a6d80726811738fe806683e245ac2caf, module_defusedxml$sax, sizeof(void *) );
    frame_a6d80726811738fe806683e245ac2caf = cache_frame_a6d80726811738fe806683e245ac2caf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a6d80726811738fe806683e245ac2caf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a6d80726811738fe806683e245ac2caf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain_expatreader );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_expatreader );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "expatreader" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_a6d80726811738fe806683e245ac2caf->m_frame.f_lineno = 60;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_create_parser );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a6d80726811738fe806683e245ac2caf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a6d80726811738fe806683e245ac2caf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a6d80726811738fe806683e245ac2caf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a6d80726811738fe806683e245ac2caf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a6d80726811738fe806683e245ac2caf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a6d80726811738fe806683e245ac2caf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a6d80726811738fe806683e245ac2caf,
        type_description_1,
        par_parser_list
    );


    // Release cached frame.
    if ( frame_a6d80726811738fe806683e245ac2caf == cache_frame_a6d80726811738fe806683e245ac2caf )
    {
        Py_DECREF( frame_a6d80726811738fe806683e245ac2caf );
    }
    cache_frame_a6d80726811738fe806683e245ac2caf = NULL;

    assertFrameObject( frame_a6d80726811738fe806683e245ac2caf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( defusedxml$sax$$$function_3_make_parser );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_parser_list );
    Py_DECREF( par_parser_list );
    par_parser_list = NULL;

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

    CHECK_OBJECT( (PyObject *)par_parser_list );
    Py_DECREF( par_parser_list );
    par_parser_list = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( defusedxml$sax$$$function_3_make_parser );
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



static PyObject *MAKE_FUNCTION_defusedxml$sax$$$function_1_parse( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_defusedxml$sax$$$function_1_parse,
        const_str_plain_parse,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_581184f1714ec083e28e632f9e9d4ca9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_defusedxml$sax,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_defusedxml$sax$$$function_2_parseString( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_defusedxml$sax$$$function_2_parseString,
        const_str_plain_parseString,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6c6bff1724f5f342897bc11df2d31af3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_defusedxml$sax,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_defusedxml$sax$$$function_3_make_parser( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_defusedxml$sax$$$function_3_make_parser,
        const_str_plain_make_parser,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a6d80726811738fe806683e245ac2caf,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_defusedxml$sax,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_defusedxml$sax =
{
    PyModuleDef_HEAD_INIT,
    "defusedxml.sax",
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

MOD_INIT_DECL( defusedxml$sax )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_defusedxml$sax );
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
    puts("defusedxml.sax: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("defusedxml.sax: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("defusedxml.sax: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdefusedxml$sax" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_defusedxml$sax = Py_InitModule4(
        "defusedxml.sax",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_defusedxml$sax = PyModule_Create( &mdef_defusedxml$sax );
#endif

    moduledict_defusedxml$sax = MODULE_DICT( module_defusedxml$sax );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_defusedxml$sax,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_defusedxml$sax,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_defusedxml$sax,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_defusedxml$sax,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_defusedxml$sax );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_11e1a239f7df9c6b9f5530933f13d781, module_defusedxml$sax );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_e330e96d45957e7d2e25966be0613f5a;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_21c47637add2892ce9bef3fdf89a7018;
        UPDATE_STRING_DICT0( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_e330e96d45957e7d2e25966be0613f5a = MAKE_MODULE_FRAME( codeobj_e330e96d45957e7d2e25966be0613f5a, module_defusedxml$sax );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e330e96d45957e7d2e25966be0613f5a );
    assert( Py_REFCNT( frame_e330e96d45957e7d2e25966be0613f5a ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_e330e96d45957e7d2e25966be0613f5a->m_frame.f_lineno = 8;
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
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_print_function );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_b221566cfc22cd32d3072a27784bd7c3;
        tmp_globals_name_1 = (PyObject *)moduledict_defusedxml$sax;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_InputSource_tuple;
        tmp_level_name_1 = const_int_0;
        frame_e330e96d45957e7d2e25966be0613f5a->m_frame.f_lineno = 10;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_InputSource );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain__InputSource, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_b221566cfc22cd32d3072a27784bd7c3;
        tmp_globals_name_2 = (PyObject *)moduledict_defusedxml$sax;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_ErrorHandler_tuple;
        tmp_level_name_2 = const_int_0;
        frame_e330e96d45957e7d2e25966be0613f5a->m_frame.f_lineno = 11;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_ErrorHandler );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain__ErrorHandler, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_empty;
        tmp_globals_name_3 = (PyObject *)moduledict_defusedxml$sax;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_expatreader_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_e330e96d45957e7d2e25966be0613f5a->m_frame.f_lineno = 13;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_defusedxml$sax,
                const_str_plain_expatreader,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_expatreader );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain_expatreader, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_str_digest_b221566cfc22cd32d3072a27784bd7c3;
        UPDATE_STRING_DICT0( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain___origin__, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain__ErrorHandler );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ErrorHandler );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_ErrorHandler" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        frame_e330e96d45957e7d2e25966be0613f5a->m_frame.f_lineno = 21;
        tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = PyTuple_New( 4 );
        PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_False;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_True;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_True;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_1 );
        tmp_assign_source_11 = MAKE_FUNCTION_defusedxml$sax$$$function_1_parse( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain_parse, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain__ErrorHandler );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ErrorHandler );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_ErrorHandler" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        frame_e330e96d45957e7d2e25966be0613f5a->m_frame.f_lineno = 38;
        tmp_tuple_element_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = PyTuple_New( 4 );
        PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_False;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 1, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_True;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 2, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_True;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 3, tmp_tuple_element_2 );
        tmp_assign_source_12 = MAKE_FUNCTION_defusedxml$sax$$$function_2_parseString( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain_parseString, tmp_assign_source_12 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e330e96d45957e7d2e25966be0613f5a );
#endif
    popFrameStack();

    assertFrameObject( frame_e330e96d45957e7d2e25966be0613f5a );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e330e96d45957e7d2e25966be0613f5a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e330e96d45957e7d2e25966be0613f5a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e330e96d45957e7d2e25966be0613f5a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e330e96d45957e7d2e25966be0613f5a, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_3;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = PyList_New( 0 );
        tmp_defaults_3 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_defaults_3, 0, tmp_tuple_element_3 );
        tmp_assign_source_13 = MAKE_FUNCTION_defusedxml$sax$$$function_3_make_parser( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain_make_parser, tmp_assign_source_13 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_defusedxml$sax, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_defusedxml$sax );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
