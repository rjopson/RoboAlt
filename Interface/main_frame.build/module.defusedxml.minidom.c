/* Generated code for Python module 'defusedxml.minidom'
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

/* The "_module_defusedxml$minidom" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_defusedxml$minidom;
PyDictObject *moduledict_defusedxml$minidom;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_forbid_dtd;
static PyObject *const_str_plain__pulldom;
static PyObject *const_str_plain__expatbuilder;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___origin__;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_338706d9f18d8cde220fcb5e28007708;
extern PyObject *const_tuple_none_false_true_true_tuple;
extern PyObject *const_str_plain_string;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_45ca9e6d7fd6b00e6271d1c9b9caa18e;
extern PyObject *const_str_plain_parseString;
static PyObject *const_tuple_3900942d1c5cc6f52130a2002567cd5f_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_97d24d07a949098885b3d9a67f48756e;
extern PyObject *const_int_0;
static PyObject *const_str_digest_df7739b6070b66334809a7e77a698929;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_parse;
extern PyObject *const_tuple_none_none_false_true_true_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_tuple_str_plain_pulldom_tuple;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_0b9bfb1e165f95fe7db7af41971d2a97;
extern PyObject *const_str_plain_bufsize;
extern PyObject *const_str_plain_forbid_external;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_forbid_entities;
extern PyObject *const_tuple_str_plain_expatbuilder_tuple;
static PyObject *const_str_plain__do_pulldom_parse;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_str_plain__do_pulldom_parse_tuple;
extern PyObject *const_str_plain_pulldom;
static PyObject *const_str_digest_c48b6199956a9ea6d9d3467b102bff2c;
extern PyObject *const_str_plain_expatbuilder;
static PyObject *const_str_digest_797afc04b151b11fe4d7db34ef525b39;
extern PyObject *const_tuple_ad156ecd6a482ca6ef2bca0bda398c70_tuple;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_file;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_parser;
extern PyObject *const_str_plain___debug__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain__pulldom = UNSTREAM_STRING_ASCII( &constant_bin[ 516575 ], 8, 1 );
    const_str_plain__expatbuilder = UNSTREAM_STRING_ASCII( &constant_bin[ 516583 ], 13, 1 );
    const_str_digest_338706d9f18d8cde220fcb5e28007708 = UNSTREAM_STRING_ASCII( &constant_bin[ 516596 ], 27, 0 );
    const_str_digest_45ca9e6d7fd6b00e6271d1c9b9caa18e = UNSTREAM_STRING_ASCII( &constant_bin[ 516623 ], 51, 0 );
    const_tuple_3900942d1c5cc6f52130a2002567cd5f_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_3900942d1c5cc6f52130a2002567cd5f_tuple, 0, const_str_plain_file ); Py_INCREF( const_str_plain_file );
    PyTuple_SET_ITEM( const_tuple_3900942d1c5cc6f52130a2002567cd5f_tuple, 1, const_str_plain_parser ); Py_INCREF( const_str_plain_parser );
    PyTuple_SET_ITEM( const_tuple_3900942d1c5cc6f52130a2002567cd5f_tuple, 2, const_str_plain_bufsize ); Py_INCREF( const_str_plain_bufsize );
    PyTuple_SET_ITEM( const_tuple_3900942d1c5cc6f52130a2002567cd5f_tuple, 3, const_str_plain_forbid_dtd ); Py_INCREF( const_str_plain_forbid_dtd );
    PyTuple_SET_ITEM( const_tuple_3900942d1c5cc6f52130a2002567cd5f_tuple, 4, const_str_plain_forbid_entities ); Py_INCREF( const_str_plain_forbid_entities );
    PyTuple_SET_ITEM( const_tuple_3900942d1c5cc6f52130a2002567cd5f_tuple, 5, const_str_plain_forbid_external ); Py_INCREF( const_str_plain_forbid_external );
    const_str_digest_97d24d07a949098885b3d9a67f48756e = UNSTREAM_STRING_ASCII( &constant_bin[ 516604 ], 18, 0 );
    const_str_digest_df7739b6070b66334809a7e77a698929 = UNSTREAM_STRING_ASCII( &constant_bin[ 516674 ], 24, 0 );
    const_str_digest_0b9bfb1e165f95fe7db7af41971d2a97 = UNSTREAM_STRING_ASCII( &constant_bin[ 516698 ], 21, 0 );
    const_str_plain__do_pulldom_parse = UNSTREAM_STRING_ASCII( &constant_bin[ 516719 ], 17, 1 );
    const_tuple_str_plain__do_pulldom_parse_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__do_pulldom_parse_tuple, 0, const_str_plain__do_pulldom_parse ); Py_INCREF( const_str_plain__do_pulldom_parse );
    const_str_digest_c48b6199956a9ea6d9d3467b102bff2c = UNSTREAM_STRING_ASCII( &constant_bin[ 516736 ], 38, 0 );
    const_str_digest_797afc04b151b11fe4d7db34ef525b39 = UNSTREAM_STRING_ASCII( &constant_bin[ 516682 ], 15, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_defusedxml$minidom( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_bc9ffa62a3fc53aa1c29c4a21f047170;
static PyCodeObject *codeobj_a49f134045d8a63602c2178e728b4f65;
static PyCodeObject *codeobj_4f350c6c11713581cab83a23556c9269;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_0b9bfb1e165f95fe7db7af41971d2a97 );
    codeobj_bc9ffa62a3fc53aa1c29c4a21f047170 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_338706d9f18d8cde220fcb5e28007708, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_a49f134045d8a63602c2178e728b4f65 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse, 17, const_tuple_3900942d1c5cc6f52130a2002567cd5f_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4f350c6c11713581cab83a23556c9269 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parseString, 42, const_tuple_ad156ecd6a482ca6ef2bca0bda398c70_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_defusedxml$minidom$$$function_1_parse( PyObject *defaults );


static PyObject *MAKE_FUNCTION_defusedxml$minidom$$$function_2_parseString( PyObject *defaults );


// The module function definitions.
static PyObject *impl_defusedxml$minidom$$$function_1_parse( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_file = python_pars[ 0 ];
    PyObject *par_parser = python_pars[ 1 ];
    PyObject *par_bufsize = python_pars[ 2 ];
    PyObject *par_forbid_dtd = python_pars[ 3 ];
    PyObject *par_forbid_entities = python_pars[ 4 ];
    PyObject *par_forbid_external = python_pars[ 5 ];
    struct Nuitka_FrameObject *frame_a49f134045d8a63602c2178e728b4f65;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a49f134045d8a63602c2178e728b4f65 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a49f134045d8a63602c2178e728b4f65, codeobj_a49f134045d8a63602c2178e728b4f65, module_defusedxml$minidom, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a49f134045d8a63602c2178e728b4f65 = cache_frame_a49f134045d8a63602c2178e728b4f65;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a49f134045d8a63602c2178e728b4f65 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a49f134045d8a63602c2178e728b4f65 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_parser );
        tmp_compexpr_left_1 = par_parser;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_bufsize );
        tmp_operand_name_1 = par_bufsize;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain__expatbuilder );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__expatbuilder );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_expatbuilder" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 22;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parse );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_file );
            tmp_tuple_element_1 = par_file;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_forbid_dtd;
            CHECK_OBJECT( par_forbid_dtd );
            tmp_dict_value_1 = par_forbid_dtd;
            tmp_kw_name_1 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_forbid_entities;
            CHECK_OBJECT( par_forbid_entities );
            tmp_dict_value_2 = par_forbid_entities;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_forbid_external;
            CHECK_OBJECT( par_forbid_external );
            tmp_dict_value_3 = par_forbid_external;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_a49f134045d8a63602c2178e728b4f65->m_frame.f_lineno = 22;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_args_element_name_3;
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
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain__do_pulldom_parse );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__do_pulldom_parse );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_do_pulldom_parse" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 29;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain__pulldom );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__pulldom );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_pulldom" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 30;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_parse );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 30;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_file );
            tmp_tuple_element_2 = par_file;
            tmp_args_element_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_2 );
            tmp_dict_key_4 = const_str_plain_parser;
            CHECK_OBJECT( par_parser );
            tmp_dict_value_4 = par_parser;
            tmp_args_element_name_3 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem( tmp_args_element_name_3, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_5 = const_str_plain_bufsize;
            CHECK_OBJECT( par_bufsize );
            tmp_dict_value_5 = par_bufsize;
            tmp_res = PyDict_SetItem( tmp_args_element_name_3, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_6 = const_str_plain_forbid_dtd;
            CHECK_OBJECT( par_forbid_dtd );
            tmp_dict_value_6 = par_forbid_dtd;
            tmp_res = PyDict_SetItem( tmp_args_element_name_3, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_7 = const_str_plain_forbid_entities;
            CHECK_OBJECT( par_forbid_entities );
            tmp_dict_value_7 = par_forbid_entities;
            tmp_res = PyDict_SetItem( tmp_args_element_name_3, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_8 = const_str_plain_forbid_external;
            CHECK_OBJECT( par_forbid_external );
            tmp_dict_value_8 = par_forbid_external;
            tmp_res = PyDict_SetItem( tmp_args_element_name_3, tmp_dict_key_8, tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            frame_a49f134045d8a63602c2178e728b4f65->m_frame.f_lineno = 29;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a49f134045d8a63602c2178e728b4f65 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a49f134045d8a63602c2178e728b4f65 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a49f134045d8a63602c2178e728b4f65 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a49f134045d8a63602c2178e728b4f65, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a49f134045d8a63602c2178e728b4f65->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a49f134045d8a63602c2178e728b4f65, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a49f134045d8a63602c2178e728b4f65,
        type_description_1,
        par_file,
        par_parser,
        par_bufsize,
        par_forbid_dtd,
        par_forbid_entities,
        par_forbid_external
    );


    // Release cached frame.
    if ( frame_a49f134045d8a63602c2178e728b4f65 == cache_frame_a49f134045d8a63602c2178e728b4f65 )
    {
        Py_DECREF( frame_a49f134045d8a63602c2178e728b4f65 );
    }
    cache_frame_a49f134045d8a63602c2178e728b4f65 = NULL;

    assertFrameObject( frame_a49f134045d8a63602c2178e728b4f65 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( defusedxml$minidom$$$function_1_parse );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_file );
    Py_DECREF( par_file );
    par_file = NULL;

    CHECK_OBJECT( (PyObject *)par_parser );
    Py_DECREF( par_parser );
    par_parser = NULL;

    CHECK_OBJECT( (PyObject *)par_bufsize );
    Py_DECREF( par_bufsize );
    par_bufsize = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_dtd );
    Py_DECREF( par_forbid_dtd );
    par_forbid_dtd = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_entities );
    Py_DECREF( par_forbid_entities );
    par_forbid_entities = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_external );
    Py_DECREF( par_forbid_external );
    par_forbid_external = NULL;

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

    CHECK_OBJECT( (PyObject *)par_file );
    Py_DECREF( par_file );
    par_file = NULL;

    CHECK_OBJECT( (PyObject *)par_parser );
    Py_DECREF( par_parser );
    par_parser = NULL;

    CHECK_OBJECT( (PyObject *)par_bufsize );
    Py_DECREF( par_bufsize );
    par_bufsize = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_dtd );
    Py_DECREF( par_forbid_dtd );
    par_forbid_dtd = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_entities );
    Py_DECREF( par_forbid_entities );
    par_forbid_entities = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_external );
    Py_DECREF( par_forbid_external );
    par_forbid_external = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( defusedxml$minidom$$$function_1_parse );
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


static PyObject *impl_defusedxml$minidom$$$function_2_parseString( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_string = python_pars[ 0 ];
    PyObject *par_parser = python_pars[ 1 ];
    PyObject *par_forbid_dtd = python_pars[ 2 ];
    PyObject *par_forbid_entities = python_pars[ 3 ];
    PyObject *par_forbid_external = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_4f350c6c11713581cab83a23556c9269;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4f350c6c11713581cab83a23556c9269 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4f350c6c11713581cab83a23556c9269, codeobj_4f350c6c11713581cab83a23556c9269, module_defusedxml$minidom, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4f350c6c11713581cab83a23556c9269 = cache_frame_4f350c6c11713581cab83a23556c9269;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4f350c6c11713581cab83a23556c9269 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4f350c6c11713581cab83a23556c9269 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_parser );
        tmp_compexpr_left_1 = par_parser;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain__expatbuilder );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__expatbuilder );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_expatbuilder" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 47;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parseString );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_string );
            tmp_tuple_element_1 = par_string;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_forbid_dtd;
            CHECK_OBJECT( par_forbid_dtd );
            tmp_dict_value_1 = par_forbid_dtd;
            tmp_kw_name_1 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_forbid_entities;
            CHECK_OBJECT( par_forbid_entities );
            tmp_dict_value_2 = par_forbid_entities;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_forbid_external;
            CHECK_OBJECT( par_forbid_external );
            tmp_dict_value_3 = par_forbid_external;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_4f350c6c11713581cab83a23556c9269->m_frame.f_lineno = 47;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain__do_pulldom_parse );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__do_pulldom_parse );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_do_pulldom_parse" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 54;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain__pulldom );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__pulldom );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_pulldom" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 55;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_parseString );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_string );
            tmp_tuple_element_2 = par_string;
            tmp_args_element_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_2 );
            tmp_dict_key_4 = const_str_plain_parser;
            CHECK_OBJECT( par_parser );
            tmp_dict_value_4 = par_parser;
            tmp_args_element_name_3 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem( tmp_args_element_name_3, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_5 = const_str_plain_forbid_dtd;
            CHECK_OBJECT( par_forbid_dtd );
            tmp_dict_value_5 = par_forbid_dtd;
            tmp_res = PyDict_SetItem( tmp_args_element_name_3, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_6 = const_str_plain_forbid_entities;
            CHECK_OBJECT( par_forbid_entities );
            tmp_dict_value_6 = par_forbid_entities;
            tmp_res = PyDict_SetItem( tmp_args_element_name_3, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_7 = const_str_plain_forbid_external;
            CHECK_OBJECT( par_forbid_external );
            tmp_dict_value_7 = par_forbid_external;
            tmp_res = PyDict_SetItem( tmp_args_element_name_3, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            frame_4f350c6c11713581cab83a23556c9269->m_frame.f_lineno = 54;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f350c6c11713581cab83a23556c9269 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f350c6c11713581cab83a23556c9269 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f350c6c11713581cab83a23556c9269 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4f350c6c11713581cab83a23556c9269, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4f350c6c11713581cab83a23556c9269->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4f350c6c11713581cab83a23556c9269, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4f350c6c11713581cab83a23556c9269,
        type_description_1,
        par_string,
        par_parser,
        par_forbid_dtd,
        par_forbid_entities,
        par_forbid_external
    );


    // Release cached frame.
    if ( frame_4f350c6c11713581cab83a23556c9269 == cache_frame_4f350c6c11713581cab83a23556c9269 )
    {
        Py_DECREF( frame_4f350c6c11713581cab83a23556c9269 );
    }
    cache_frame_4f350c6c11713581cab83a23556c9269 = NULL;

    assertFrameObject( frame_4f350c6c11713581cab83a23556c9269 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( defusedxml$minidom$$$function_2_parseString );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_string );
    Py_DECREF( par_string );
    par_string = NULL;

    CHECK_OBJECT( (PyObject *)par_parser );
    Py_DECREF( par_parser );
    par_parser = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_dtd );
    Py_DECREF( par_forbid_dtd );
    par_forbid_dtd = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_entities );
    Py_DECREF( par_forbid_entities );
    par_forbid_entities = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_external );
    Py_DECREF( par_forbid_external );
    par_forbid_external = NULL;

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

    CHECK_OBJECT( (PyObject *)par_parser );
    Py_DECREF( par_parser );
    par_parser = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_dtd );
    Py_DECREF( par_forbid_dtd );
    par_forbid_dtd = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_entities );
    Py_DECREF( par_forbid_entities );
    par_forbid_entities = NULL;

    CHECK_OBJECT( (PyObject *)par_forbid_external );
    Py_DECREF( par_forbid_external );
    par_forbid_external = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( defusedxml$minidom$$$function_2_parseString );
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



static PyObject *MAKE_FUNCTION_defusedxml$minidom$$$function_1_parse( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_defusedxml$minidom$$$function_1_parse,
        const_str_plain_parse,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a49f134045d8a63602c2178e728b4f65,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_defusedxml$minidom,
        const_str_digest_45ca9e6d7fd6b00e6271d1c9b9caa18e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_defusedxml$minidom$$$function_2_parseString( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_defusedxml$minidom$$$function_2_parseString,
        const_str_plain_parseString,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4f350c6c11713581cab83a23556c9269,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_defusedxml$minidom,
        const_str_digest_c48b6199956a9ea6d9d3467b102bff2c,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_defusedxml$minidom =
{
    PyModuleDef_HEAD_INIT,
    "defusedxml.minidom",
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

MOD_INIT_DECL( defusedxml$minidom )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_defusedxml$minidom );
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
    puts("defusedxml.minidom: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("defusedxml.minidom: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("defusedxml.minidom: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdefusedxml$minidom" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_defusedxml$minidom = Py_InitModule4(
        "defusedxml.minidom",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_defusedxml$minidom = PyModule_Create( &mdef_defusedxml$minidom );
#endif

    moduledict_defusedxml$minidom = MODULE_DICT( module_defusedxml$minidom );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_defusedxml$minidom,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_defusedxml$minidom,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_defusedxml$minidom,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_defusedxml$minidom,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_defusedxml$minidom );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_97d24d07a949098885b3d9a67f48756e, module_defusedxml$minidom );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_bc9ffa62a3fc53aa1c29c4a21f047170;
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
        tmp_assign_source_1 = const_str_digest_df7739b6070b66334809a7e77a698929;
        UPDATE_STRING_DICT0( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_bc9ffa62a3fc53aa1c29c4a21f047170 = MAKE_MODULE_FRAME( codeobj_bc9ffa62a3fc53aa1c29c4a21f047170, module_defusedxml$minidom );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_bc9ffa62a3fc53aa1c29c4a21f047170 );
    assert( Py_REFCNT( frame_bc9ffa62a3fc53aa1c29c4a21f047170 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_bc9ffa62a3fc53aa1c29c4a21f047170->m_frame.f_lineno = 8;
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
        UPDATE_STRING_DICT1( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
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
        tmp_name_name_1 = const_str_digest_797afc04b151b11fe4d7db34ef525b39;
        tmp_globals_name_1 = (PyObject *)moduledict_defusedxml$minidom;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain__do_pulldom_parse_tuple;
        tmp_level_name_1 = const_int_0;
        frame_bc9ffa62a3fc53aa1c29c4a21f047170->m_frame.f_lineno = 10;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain__do_pulldom_parse );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain__do_pulldom_parse, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_empty;
        tmp_globals_name_2 = (PyObject *)moduledict_defusedxml$minidom;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_expatbuilder_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_bc9ffa62a3fc53aa1c29c4a21f047170->m_frame.f_lineno = 11;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_defusedxml$minidom,
                const_str_plain_expatbuilder,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_expatbuilder );
        }

        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain__expatbuilder, tmp_assign_source_8 );
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
        tmp_globals_name_3 = (PyObject *)moduledict_defusedxml$minidom;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_pulldom_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_bc9ffa62a3fc53aa1c29c4a21f047170->m_frame.f_lineno = 12;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_defusedxml$minidom,
                const_str_plain_pulldom,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_pulldom );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain__pulldom, tmp_assign_source_9 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc9ffa62a3fc53aa1c29c4a21f047170 );
#endif
    popFrameStack();

    assertFrameObject( frame_bc9ffa62a3fc53aa1c29c4a21f047170 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc9ffa62a3fc53aa1c29c4a21f047170 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bc9ffa62a3fc53aa1c29c4a21f047170, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bc9ffa62a3fc53aa1c29c4a21f047170->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bc9ffa62a3fc53aa1c29c4a21f047170, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_str_digest_797afc04b151b11fe4d7db34ef525b39;
        UPDATE_STRING_DICT0( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain___origin__, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_none_false_true_true_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_11 = MAKE_FUNCTION_defusedxml$minidom$$$function_1_parse( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain_parse, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_false_true_true_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_12 = MAKE_FUNCTION_defusedxml$minidom$$$function_2_parseString( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain_parseString, tmp_assign_source_12 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_defusedxml$minidom, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_defusedxml$minidom );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
