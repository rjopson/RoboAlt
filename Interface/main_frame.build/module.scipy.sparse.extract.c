/* Generated code for Python module 'scipy.sparse.extract'
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

/* The "_module_scipy$sparse$extract" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$sparse$extract;
PyDictObject *moduledict_scipy$sparse$extract;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_digest_e58b8e238daae7f316f45d0978267798;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_sum_duplicates;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain__masked_coo;
static PyObject *const_str_digest_17308d6adf3da52fc697b638494338fa;
extern PyObject *const_str_plain_False;
extern PyObject *const_tuple_str_plain_coo_matrix_tuple;
extern PyObject *const_tuple_int_0_none_tuple;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_coo_matrix;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_col;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_tril;
extern PyObject *const_int_0;
extern PyObject *const_dict_10010a04cba23a4ccc75195b8c45141a;
static PyObject *const_str_digest_b7e17966a4208a57e8c6c9ad93f87f30;
static PyObject *const_tuple_str_plain_A_str_plain_nz_mask_tuple;
extern PyObject *const_str_plain_row;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_dtype;
static PyObject *const_tuple_str_plain_A_str_plain_k_str_plain_format_str_plain_mask_tuple;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_dict_a7ab110deec347786bcfa718065f5388;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_coo;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_b930ea0b0270834d6dbd933811d566e2;
static PyObject *const_str_digest_7a5236487b3c24ae14b123f343136ae2;
extern PyObject *const_str_plain_mask;
extern PyObject *const_str_plain_shape;
static PyObject *const_str_digest_c7b06448192cc905470c2e360afaa316;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_asformat;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_915a599d0543afa801eac0e842530a8c_tuple;
extern PyObject *const_str_plain_A;
extern PyObject *const_str_plain_nz_mask;
static PyObject *const_list_str_plain_find_str_plain_tril_str_plain_triu_list;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_triu;
extern PyObject *const_str_plain___docformat__;
extern PyObject *const_str_plain_find;
static PyObject *const_str_digest_0f4d53284b7e5d4b0a18249f6526f4a3;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_4e3691e4096a6d25ad336140db2afbc5;
extern PyObject *const_str_plain___debug__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain__masked_coo = UNSTREAM_STRING_ASCII( &constant_bin[ 5382153 ], 11, 1 );
    const_str_digest_17308d6adf3da52fc697b638494338fa = UNSTREAM_STRING_ASCII( &constant_bin[ 5382164 ], 1556, 0 );
    const_str_digest_b7e17966a4208a57e8c6c9ad93f87f30 = UNSTREAM_STRING_ASCII( &constant_bin[ 5383720 ], 23, 0 );
    const_tuple_str_plain_A_str_plain_nz_mask_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_nz_mask_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_nz_mask_tuple, 1, const_str_plain_nz_mask ); Py_INCREF( const_str_plain_nz_mask );
    const_tuple_str_plain_A_str_plain_k_str_plain_format_str_plain_mask_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_k_str_plain_format_str_plain_mask_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_k_str_plain_format_str_plain_mask_tuple, 1, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_k_str_plain_format_str_plain_mask_tuple, 2, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_k_str_plain_format_str_plain_mask_tuple, 3, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    const_str_digest_b930ea0b0270834d6dbd933811d566e2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5383743 ], 1553, 0 );
    const_str_digest_7a5236487b3c24ae14b123f343136ae2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5385296 ], 29, 0 );
    const_str_digest_c7b06448192cc905470c2e360afaa316 = UNSTREAM_STRING_ASCII( &constant_bin[ 5385304 ], 20, 0 );
    const_tuple_915a599d0543afa801eac0e842530a8c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_915a599d0543afa801eac0e842530a8c_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_915a599d0543afa801eac0e842530a8c_tuple, 1, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_915a599d0543afa801eac0e842530a8c_tuple, 2, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    PyTuple_SET_ITEM( const_tuple_915a599d0543afa801eac0e842530a8c_tuple, 3, const_str_plain_col ); Py_INCREF( const_str_plain_col );
    PyTuple_SET_ITEM( const_tuple_915a599d0543afa801eac0e842530a8c_tuple, 4, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_list_str_plain_find_str_plain_tril_str_plain_triu_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_find_str_plain_tril_str_plain_triu_list, 0, const_str_plain_find ); Py_INCREF( const_str_plain_find );
    PyList_SET_ITEM( const_list_str_plain_find_str_plain_tril_str_plain_triu_list, 1, const_str_plain_tril ); Py_INCREF( const_str_plain_tril );
    PyList_SET_ITEM( const_list_str_plain_find_str_plain_tril_str_plain_triu_list, 2, const_str_plain_triu ); Py_INCREF( const_str_plain_triu );
    const_str_digest_0f4d53284b7e5d4b0a18249f6526f4a3 = UNSTREAM_STRING_ASCII( &constant_bin[ 5385325 ], 586, 0 );
    const_str_digest_4e3691e4096a6d25ad336140db2afbc5 = UNSTREAM_STRING_ASCII( &constant_bin[ 5385911 ], 46, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$sparse$extract( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_81b73ea0690b4118fe829ec9525f791c;
static PyCodeObject *codeobj_8236021484189ed1ae28218cf98e4d3f;
static PyCodeObject *codeobj_db6d614cd499c8afa6b13432236e44b1;
static PyCodeObject *codeobj_cb288a060262d4548ce0a0f99ab87db8;
static PyCodeObject *codeobj_b8046ebc41aa6e2ba36cd31cb6f1bf58;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_b7e17966a4208a57e8c6c9ad93f87f30 );
    codeobj_81b73ea0690b4118fe829ec9525f791c = MAKE_CODEOBJ( module_filename_obj, const_str_digest_7a5236487b3c24ae14b123f343136ae2, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_8236021484189ed1ae28218cf98e4d3f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__masked_coo, 167, const_tuple_915a599d0543afa801eac0e842530a8c_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_db6d614cd499c8afa6b13432236e44b1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_find, 14, const_tuple_str_plain_A_str_plain_nz_mask_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cb288a060262d4548ce0a0f99ab87db8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tril, 45, const_tuple_str_plain_A_str_plain_k_str_plain_format_str_plain_mask_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b8046ebc41aa6e2ba36cd31cb6f1bf58 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_triu, 106, const_tuple_str_plain_A_str_plain_k_str_plain_format_str_plain_mask_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$sparse$extract$$$function_1_find(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$extract$$$function_2_tril( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$extract$$$function_3_triu( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$extract$$$function_4__masked_coo(  );


// The module function definitions.
static PyObject *impl_scipy$sparse$extract$$$function_1_find( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *var_nz_mask = NULL;
    struct Nuitka_FrameObject *frame_db6d614cd499c8afa6b13432236e44b1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_db6d614cd499c8afa6b13432236e44b1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_db6d614cd499c8afa6b13432236e44b1, codeobj_db6d614cd499c8afa6b13432236e44b1, module_scipy$sparse$extract, sizeof(void *)+sizeof(void *) );
    frame_db6d614cd499c8afa6b13432236e44b1 = cache_frame_db6d614cd499c8afa6b13432236e44b1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_db6d614cd499c8afa6b13432236e44b1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_db6d614cd499c8afa6b13432236e44b1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_coo_matrix );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "coo_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_tuple_element_1 = par_A;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_10010a04cba23a4ccc75195b8c45141a );
        frame_db6d614cd499c8afa6b13432236e44b1->m_frame.f_lineno = 38;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_A );
        tmp_called_instance_1 = par_A;
        frame_db6d614cd499c8afa6b13432236e44b1->m_frame.f_lineno = 39;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_sum_duplicates );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_data );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_assign_source_2 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_nz_mask == NULL );
        var_nz_mask = tmp_assign_source_2;
    }
    {
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( par_A );
        tmp_source_name_2 = par_A;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_row );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_nz_mask );
        tmp_subscript_name_1 = var_nz_mask;
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_A );
        tmp_source_name_3 = par_A;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_col );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_nz_mask );
        tmp_subscript_name_2 = var_nz_mask;
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( par_A );
        tmp_source_name_4 = par_A;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_data );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_nz_mask );
        tmp_subscript_name_3 = var_nz_mask;
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_db6d614cd499c8afa6b13432236e44b1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_db6d614cd499c8afa6b13432236e44b1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_db6d614cd499c8afa6b13432236e44b1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_db6d614cd499c8afa6b13432236e44b1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_db6d614cd499c8afa6b13432236e44b1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_db6d614cd499c8afa6b13432236e44b1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_db6d614cd499c8afa6b13432236e44b1,
        type_description_1,
        par_A,
        var_nz_mask
    );


    // Release cached frame.
    if ( frame_db6d614cd499c8afa6b13432236e44b1 == cache_frame_db6d614cd499c8afa6b13432236e44b1 )
    {
        Py_DECREF( frame_db6d614cd499c8afa6b13432236e44b1 );
    }
    cache_frame_db6d614cd499c8afa6b13432236e44b1 = NULL;

    assertFrameObject( frame_db6d614cd499c8afa6b13432236e44b1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$extract$$$function_1_find );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)var_nz_mask );
    Py_DECREF( var_nz_mask );
    var_nz_mask = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    Py_XDECREF( var_nz_mask );
    var_nz_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$extract$$$function_1_find );
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


static PyObject *impl_scipy$sparse$extract$$$function_2_tril( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_k = python_pars[ 1 ];
    PyObject *par_format = python_pars[ 2 ];
    PyObject *var_mask = NULL;
    struct Nuitka_FrameObject *frame_cb288a060262d4548ce0a0f99ab87db8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cb288a060262d4548ce0a0f99ab87db8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cb288a060262d4548ce0a0f99ab87db8, codeobj_cb288a060262d4548ce0a0f99ab87db8, module_scipy$sparse$extract, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cb288a060262d4548ce0a0f99ab87db8 = cache_frame_cb288a060262d4548ce0a0f99ab87db8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cb288a060262d4548ce0a0f99ab87db8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cb288a060262d4548ce0a0f99ab87db8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_coo_matrix );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "coo_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 101;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_tuple_element_1 = par_A;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
        frame_cb288a060262d4548ce0a0f99ab87db8->m_frame.f_lineno = 101;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_row );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_k );
        tmp_right_name_1 = par_k;
        tmp_compexpr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_source_name_2 = par_A;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_col );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_mask == NULL );
        var_mask = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain__masked_coo );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__masked_coo );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_masked_coo" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        CHECK_OBJECT( var_mask );
        tmp_args_element_name_2 = var_mask;
        frame_cb288a060262d4548ce0a0f99ab87db8->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_format );
        tmp_args_element_name_3 = par_format;
        frame_cb288a060262d4548ce0a0f99ab87db8->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asformat, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb288a060262d4548ce0a0f99ab87db8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb288a060262d4548ce0a0f99ab87db8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb288a060262d4548ce0a0f99ab87db8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cb288a060262d4548ce0a0f99ab87db8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cb288a060262d4548ce0a0f99ab87db8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cb288a060262d4548ce0a0f99ab87db8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cb288a060262d4548ce0a0f99ab87db8,
        type_description_1,
        par_A,
        par_k,
        par_format,
        var_mask
    );


    // Release cached frame.
    if ( frame_cb288a060262d4548ce0a0f99ab87db8 == cache_frame_cb288a060262d4548ce0a0f99ab87db8 )
    {
        Py_DECREF( frame_cb288a060262d4548ce0a0f99ab87db8 );
    }
    cache_frame_cb288a060262d4548ce0a0f99ab87db8 = NULL;

    assertFrameObject( frame_cb288a060262d4548ce0a0f99ab87db8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$extract$$$function_2_tril );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$extract$$$function_2_tril );
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


static PyObject *impl_scipy$sparse$extract$$$function_3_triu( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_k = python_pars[ 1 ];
    PyObject *par_format = python_pars[ 2 ];
    PyObject *var_mask = NULL;
    struct Nuitka_FrameObject *frame_b8046ebc41aa6e2ba36cd31cb6f1bf58;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b8046ebc41aa6e2ba36cd31cb6f1bf58 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b8046ebc41aa6e2ba36cd31cb6f1bf58, codeobj_b8046ebc41aa6e2ba36cd31cb6f1bf58, module_scipy$sparse$extract, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b8046ebc41aa6e2ba36cd31cb6f1bf58 = cache_frame_b8046ebc41aa6e2ba36cd31cb6f1bf58;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b8046ebc41aa6e2ba36cd31cb6f1bf58 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b8046ebc41aa6e2ba36cd31cb6f1bf58 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_coo_matrix );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "coo_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_tuple_element_1 = par_A;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
        frame_b8046ebc41aa6e2ba36cd31cb6f1bf58->m_frame.f_lineno = 162;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_row );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_k );
        tmp_right_name_1 = par_k;
        tmp_compexpr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_source_name_2 = par_A;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_col );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_mask == NULL );
        var_mask = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain__masked_coo );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__masked_coo );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_masked_coo" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        CHECK_OBJECT( var_mask );
        tmp_args_element_name_2 = var_mask;
        frame_b8046ebc41aa6e2ba36cd31cb6f1bf58->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_format );
        tmp_args_element_name_3 = par_format;
        frame_b8046ebc41aa6e2ba36cd31cb6f1bf58->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asformat, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b8046ebc41aa6e2ba36cd31cb6f1bf58 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b8046ebc41aa6e2ba36cd31cb6f1bf58 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b8046ebc41aa6e2ba36cd31cb6f1bf58 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b8046ebc41aa6e2ba36cd31cb6f1bf58, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b8046ebc41aa6e2ba36cd31cb6f1bf58->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b8046ebc41aa6e2ba36cd31cb6f1bf58, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b8046ebc41aa6e2ba36cd31cb6f1bf58,
        type_description_1,
        par_A,
        par_k,
        par_format,
        var_mask
    );


    // Release cached frame.
    if ( frame_b8046ebc41aa6e2ba36cd31cb6f1bf58 == cache_frame_b8046ebc41aa6e2ba36cd31cb6f1bf58 )
    {
        Py_DECREF( frame_b8046ebc41aa6e2ba36cd31cb6f1bf58 );
    }
    cache_frame_b8046ebc41aa6e2ba36cd31cb6f1bf58 = NULL;

    assertFrameObject( frame_b8046ebc41aa6e2ba36cd31cb6f1bf58 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$extract$$$function_3_triu );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$extract$$$function_3_triu );
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


static PyObject *impl_scipy$sparse$extract$$$function_4__masked_coo( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_mask = python_pars[ 1 ];
    PyObject *var_row = NULL;
    PyObject *var_col = NULL;
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_8236021484189ed1ae28218cf98e4d3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8236021484189ed1ae28218cf98e4d3f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8236021484189ed1ae28218cf98e4d3f, codeobj_8236021484189ed1ae28218cf98e4d3f, module_scipy$sparse$extract, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8236021484189ed1ae28218cf98e4d3f = cache_frame_8236021484189ed1ae28218cf98e4d3f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8236021484189ed1ae28218cf98e4d3f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8236021484189ed1ae28218cf98e4d3f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_row );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_mask );
        tmp_subscript_name_1 = par_mask;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_row == NULL );
        var_row = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_A );
        tmp_source_name_2 = par_A;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_col );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_mask );
        tmp_subscript_name_2 = par_mask;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_col == NULL );
        var_col = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( par_A );
        tmp_source_name_3 = par_A;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_data );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_mask );
        tmp_subscript_name_3 = par_mask;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_data == NULL );
        var_data = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_coo_matrix );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "coo_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 171;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_data );
        tmp_tuple_element_2 = var_data;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_row );
        tmp_tuple_element_3 = var_row;
        tmp_tuple_element_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_col );
        tmp_tuple_element_3 = var_col;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_shape;
        CHECK_OBJECT( par_A );
        tmp_source_name_4 = par_A;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 171;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_dtype;
        CHECK_OBJECT( par_A );
        tmp_source_name_5 = par_A;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 171;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_8236021484189ed1ae28218cf98e4d3f->m_frame.f_lineno = 171;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8236021484189ed1ae28218cf98e4d3f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8236021484189ed1ae28218cf98e4d3f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8236021484189ed1ae28218cf98e4d3f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8236021484189ed1ae28218cf98e4d3f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8236021484189ed1ae28218cf98e4d3f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8236021484189ed1ae28218cf98e4d3f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8236021484189ed1ae28218cf98e4d3f,
        type_description_1,
        par_A,
        par_mask,
        var_row,
        var_col,
        var_data
    );


    // Release cached frame.
    if ( frame_8236021484189ed1ae28218cf98e4d3f == cache_frame_8236021484189ed1ae28218cf98e4d3f )
    {
        Py_DECREF( frame_8236021484189ed1ae28218cf98e4d3f );
    }
    cache_frame_8236021484189ed1ae28218cf98e4d3f = NULL;

    assertFrameObject( frame_8236021484189ed1ae28218cf98e4d3f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$extract$$$function_4__masked_coo );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_mask );
    Py_DECREF( par_mask );
    par_mask = NULL;

    CHECK_OBJECT( (PyObject *)var_row );
    Py_DECREF( var_row );
    var_row = NULL;

    CHECK_OBJECT( (PyObject *)var_col );
    Py_DECREF( var_col );
    var_col = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
    var_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_mask );
    Py_DECREF( par_mask );
    par_mask = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    Py_XDECREF( var_col );
    var_col = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$extract$$$function_4__masked_coo );
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



static PyObject *MAKE_FUNCTION_scipy$sparse$extract$$$function_1_find(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$extract$$$function_1_find,
        const_str_plain_find,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_db6d614cd499c8afa6b13432236e44b1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$extract,
        const_str_digest_0f4d53284b7e5d4b0a18249f6526f4a3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$extract$$$function_2_tril( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$extract$$$function_2_tril,
        const_str_plain_tril,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cb288a060262d4548ce0a0f99ab87db8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$extract,
        const_str_digest_b930ea0b0270834d6dbd933811d566e2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$extract$$$function_3_triu( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$extract$$$function_3_triu,
        const_str_plain_triu,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b8046ebc41aa6e2ba36cd31cb6f1bf58,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$extract,
        const_str_digest_17308d6adf3da52fc697b638494338fa,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$extract$$$function_4__masked_coo(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$extract$$$function_4__masked_coo,
        const_str_plain__masked_coo,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8236021484189ed1ae28218cf98e4d3f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$extract,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$extract =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.extract",
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

MOD_INIT_DECL( scipy$sparse$extract )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$extract );
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
    puts("scipy.sparse.extract: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.extract: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.extract: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$sparse$extract" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$extract = Py_InitModule4(
        "scipy.sparse.extract",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$sparse$extract = PyModule_Create( &mdef_scipy$sparse$extract );
#endif

    moduledict_scipy$sparse$extract = MODULE_DICT( module_scipy$sparse$extract );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$sparse$extract,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$sparse$extract,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$extract,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$extract,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$sparse$extract );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_c7b06448192cc905470c2e360afaa316, module_scipy$sparse$extract );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_81b73ea0690b4118fe829ec9525f791c;
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
        tmp_assign_source_1 = const_str_digest_4e3691e4096a6d25ad336140db2afbc5;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_81b73ea0690b4118fe829ec9525f791c = MAKE_MODULE_FRAME( codeobj_81b73ea0690b4118fe829ec9525f791c, module_scipy$sparse$extract );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_81b73ea0690b4118fe829ec9525f791c );
    assert( Py_REFCNT( frame_81b73ea0690b4118fe829ec9525f791c ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_81b73ea0690b4118fe829ec9525f791c->m_frame.f_lineno = 4;
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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_assign_source_8 = const_str_digest_e58b8e238daae7f316f45d0978267798;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___docformat__, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = LIST_COPY( const_list_str_plain_find_str_plain_tril_str_plain_triu_list );
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_coo;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$sparse$extract;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_coo_matrix_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_81b73ea0690b4118fe829ec9525f791c->m_frame.f_lineno = 11;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_scipy$sparse$extract,
                const_str_plain_coo_matrix,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_coo_matrix );
        }

        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_coo_matrix, tmp_assign_source_10 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_81b73ea0690b4118fe829ec9525f791c );
#endif
    popFrameStack();

    assertFrameObject( frame_81b73ea0690b4118fe829ec9525f791c );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_81b73ea0690b4118fe829ec9525f791c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_81b73ea0690b4118fe829ec9525f791c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_81b73ea0690b4118fe829ec9525f791c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_81b73ea0690b4118fe829ec9525f791c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_scipy$sparse$extract$$$function_1_find(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_find, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_int_0_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_12 = MAKE_FUNCTION_scipy$sparse$extract$$$function_2_tril( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_tril, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_int_0_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_13 = MAKE_FUNCTION_scipy$sparse$extract$$$function_3_triu( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_triu, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_scipy$sparse$extract$$$function_4__masked_coo(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain__masked_coo, tmp_assign_source_14 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$extract );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
