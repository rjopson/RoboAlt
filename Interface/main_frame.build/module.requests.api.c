/* Generated code for Python module 'requests.api'
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

/* The "_module_requests$api" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$api;
PyDictObject *moduledict_requests$api;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_cae14719162f8d25632f36871021aaaf;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_put;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_add3f921aeb256f9d071a9968c8d439a;
extern PyObject *const_str_plain_params;
static PyObject *const_str_digest_276107dad0b38194fb0b040c6dbb15ec;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_b115530482cfc542e130350f9a85acf7;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_post;
extern PyObject *const_str_plain___exit__;
static PyObject *const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_Session;
extern PyObject *const_tuple_str_plain_allow_redirects_true_tuple;
extern PyObject *const_str_plain_json;
static PyObject *const_tuple_130b606459c7852087a8cbb86273aea5_tuple;
extern PyObject *const_str_plain_head;
extern PyObject *const_str_plain_url;
static PyObject *const_tuple_str_plain_sessions_tuple;
static PyObject *const_str_digest_2a855d7e75d5ae01c88b757d781beef1;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_method;
static PyObject *const_str_digest_c1ec17d8ceaaa6ed18f5bd6653da2b27;
extern PyObject *const_tuple_str_plain_allow_redirects_false_tuple;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_patch;
static PyObject *const_str_digest_c7e50f7358fbded8067696c085603681;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_f47e76f765bb2c97da294e64403e6027;
extern PyObject *const_str_plain_setdefault;
extern PyObject *const_str_plain_delete;
static PyObject *const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple;
static PyObject *const_str_digest_eecde9d9895ac3b5efede276a2d62a06;
static PyObject *const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_session;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_allow_redirects;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_digest_99dc40c27a3fef4fc5730c424f667aa5;
extern PyObject *const_str_plain_sessions;
static PyObject *const_str_digest_6962348d8f10f7d363564118bc3614f8;
static PyObject *const_str_digest_02b9125f62dea1c6b60a1a6e455cc930;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___debug__;
static PyObject *const_tuple_str_plain_url_str_plain_kwargs_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_cae14719162f8d25632f36871021aaaf = UNSTREAM_STRING_ASCII( &constant_bin[ 4009256 ], 233, 0 );
    const_str_digest_add3f921aeb256f9d071a9968c8d439a = UNSTREAM_STRING_ASCII( &constant_bin[ 4009489 ], 158, 0 );
    const_str_digest_276107dad0b38194fb0b040c6dbb15ec = UNSTREAM_STRING_ASCII( &constant_bin[ 4009647 ], 356, 0 );
    const_str_digest_b115530482cfc542e130350f9a85acf7 = UNSTREAM_STRING_ASCII( &constant_bin[ 3999726 ], 12, 0 );
    const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple, 2, const_str_plain_json ); Py_INCREF( const_str_plain_json );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_tuple_130b606459c7852087a8cbb86273aea5_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_130b606459c7852087a8cbb86273aea5_tuple, 0, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_130b606459c7852087a8cbb86273aea5_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_130b606459c7852087a8cbb86273aea5_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_130b606459c7852087a8cbb86273aea5_tuple, 3, const_str_plain_session ); Py_INCREF( const_str_plain_session );
    const_tuple_str_plain_sessions_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sessions_tuple, 0, const_str_plain_sessions ); Py_INCREF( const_str_plain_sessions );
    const_str_digest_2a855d7e75d5ae01c88b757d781beef1 = UNSTREAM_STRING_ASCII( &constant_bin[ 4010003 ], 229, 0 );
    const_str_digest_c1ec17d8ceaaa6ed18f5bd6653da2b27 = UNSTREAM_STRING_ASCII( &constant_bin[ 4010232 ], 231, 0 );
    const_str_digest_c7e50f7358fbded8067696c085603681 = UNSTREAM_STRING_ASCII( &constant_bin[ 4010463 ], 21, 0 );
    const_str_digest_f47e76f765bb2c97da294e64403e6027 = UNSTREAM_STRING_ASCII( &constant_bin[ 4010484 ], 448, 0 );
    const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_eecde9d9895ac3b5efede276a2d62a06 = UNSTREAM_STRING_ASCII( &constant_bin[ 4010932 ], 449, 0 );
    const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple, 1, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_99dc40c27a3fef4fc5730c424f667aa5 = UNSTREAM_STRING_ASCII( &constant_bin[ 4011381 ], 15, 0 );
    const_str_digest_6962348d8f10f7d363564118bc3614f8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4011396 ], 447, 0 );
    const_str_digest_02b9125f62dea1c6b60a1a6e455cc930 = UNSTREAM_STRING_ASCII( &constant_bin[ 4011843 ], 2461, 0 );
    const_tuple_str_plain_url_str_plain_kwargs_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_kwargs_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_kwargs_tuple, 1, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$api( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4db404c6e11af7a26f27121110bf92f4;
static PyCodeObject *codeobj_b8bafa1b42a843052dde825f237ba1d2;
static PyCodeObject *codeobj_2360f07c30589b8c8a717db4951315fe;
static PyCodeObject *codeobj_d1b0ceec9fbb48f54488ede4dcc4993a;
static PyCodeObject *codeobj_e74563d5100e832730a6277f3e7df1df;
static PyCodeObject *codeobj_426c61a7442cc30105e9a06349eae05a;
static PyCodeObject *codeobj_6f61ab8ea5dcc2ace782a197d5eaf17c;
static PyCodeObject *codeobj_76475dd142150b67dad2140da636cc67;
static PyCodeObject *codeobj_3fe1a42f60b1620184c84424bdb40b92;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_99dc40c27a3fef4fc5730c424f667aa5 );
    codeobj_4db404c6e11af7a26f27121110bf92f4 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_c7e50f7358fbded8067696c085603681, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_b8bafa1b42a843052dde825f237ba1d2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_delete, 149, const_tuple_str_plain_url_str_plain_kwargs_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_2360f07c30589b8c8a717db4951315fe = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get, 63, const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_d1b0ceec9fbb48f54488ede4dcc4993a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_head, 91, const_tuple_str_plain_url_str_plain_kwargs_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_e74563d5100e832730a6277f3e7df1df = MAKE_CODEOBJ( module_filename_obj, const_str_plain_options, 78, const_tuple_str_plain_url_str_plain_kwargs_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_426c61a7442cc30105e9a06349eae05a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_patch, 134, const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_6f61ab8ea5dcc2ace782a197d5eaf17c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_post, 104, const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_76475dd142150b67dad2140da636cc67 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_put, 119, const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_3fe1a42f60b1620184c84424bdb40b92 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request, 16, const_tuple_130b606459c7852087a8cbb86273aea5_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_7_complex_call_helper_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_requests$api$$$function_1_request(  );


static PyObject *MAKE_FUNCTION_requests$api$$$function_2_get( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$api$$$function_3_options(  );


static PyObject *MAKE_FUNCTION_requests$api$$$function_4_head(  );


static PyObject *MAKE_FUNCTION_requests$api$$$function_5_post( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$api$$$function_6_put( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$api$$$function_7_patch( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$api$$$function_8_delete(  );


// The module function definitions.
static PyObject *impl_requests$api$$$function_1_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_method = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_session = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_3fe1a42f60b1620184c84424bdb40b92;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_3fe1a42f60b1620184c84424bdb40b92 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3fe1a42f60b1620184c84424bdb40b92, codeobj_3fe1a42f60b1620184c84424bdb40b92, module_requests$api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3fe1a42f60b1620184c84424bdb40b92 = cache_frame_3fe1a42f60b1620184c84424bdb40b92;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3fe1a42f60b1620184c84424bdb40b92 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3fe1a42f60b1620184c84424bdb40b92 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_sessions );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sessions );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sessions" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 59;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_3fe1a42f60b1620184c84424bdb40b92->m_frame.f_lineno = 59;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_Session );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_1 = tmp_with_1__source;
        tmp_called_name_1 = LOOKUP_SPECIAL( tmp_source_name_1, const_str_plain___enter__ );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_3fe1a42f60b1620184c84424bdb40b92->m_frame.f_lineno = 59;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_2 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___exit__ );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_with_1__enter );
        tmp_assign_source_5 = tmp_with_1__enter;
        assert( var_session == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_session = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( var_session );
        tmp_source_name_3 = var_session;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_request );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_dict_key_1 = const_str_plain_method;
        CHECK_OBJECT( par_method );
        tmp_dict_value_1 = par_method;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_url;
        CHECK_OBJECT( par_url );
        tmp_dict_value_2 = par_url;
        tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_7_complex_call_helper_keywords_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        goto try_return_handler_3;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_1_request );
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_3fe1a42f60b1620184c84424bdb40b92, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_3fe1a42f60b1620184c84424bdb40b92, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto try_except_handler_5;
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
            nuitka_bool tmp_assign_source_6;
            tmp_assign_source_6 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_6;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_2 = tmp_with_1__exit;
            tmp_args_element_name_1 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_2 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_3 = EXC_TRACEBACK(PyThreadState_GET());
            frame_3fe1a42f60b1620184c84424bdb40b92->m_frame.f_lineno = 59;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
                type_description_1 = "oooo";
                goto try_except_handler_5;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
                type_description_1 = "oooo";
                goto try_except_handler_5;
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 59;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_3fe1a42f60b1620184c84424bdb40b92->m_frame) frame_3fe1a42f60b1620184c84424bdb40b92->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooo";
            goto try_except_handler_5;
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 59;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_3fe1a42f60b1620184c84424bdb40b92->m_frame) frame_3fe1a42f60b1620184c84424bdb40b92->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooo";
        goto try_except_handler_5;
        branch_end_1:;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_1_request );
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( tmp_with_1__exit );
        tmp_called_name_3 = tmp_with_1__exit;
        frame_3fe1a42f60b1620184c84424bdb40b92->m_frame.f_lineno = 59;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    goto try_return_handler_2;
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

    {
        nuitka_bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_4;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_4 = tmp_with_1__exit;
            frame_3fe1a42f60b1620184c84424bdb40b92->m_frame.f_lineno = 59;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_3 );
                Py_XDECREF( exception_keeper_value_3 );
                Py_XDECREF( exception_keeper_tb_3 );

                exception_lineno = 59;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_3:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_5;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_5 = tmp_with_1__exit;
            frame_3fe1a42f60b1620184c84424bdb40b92->m_frame.f_lineno = 59;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_4:;
    }
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fe1a42f60b1620184c84424bdb40b92 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fe1a42f60b1620184c84424bdb40b92 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fe1a42f60b1620184c84424bdb40b92 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3fe1a42f60b1620184c84424bdb40b92, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3fe1a42f60b1620184c84424bdb40b92->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3fe1a42f60b1620184c84424bdb40b92, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3fe1a42f60b1620184c84424bdb40b92,
        type_description_1,
        par_method,
        par_url,
        par_kwargs,
        var_session
    );


    // Release cached frame.
    if ( frame_3fe1a42f60b1620184c84424bdb40b92 == cache_frame_3fe1a42f60b1620184c84424bdb40b92 )
    {
        Py_DECREF( frame_3fe1a42f60b1620184c84424bdb40b92 );
    }
    cache_frame_3fe1a42f60b1620184c84424bdb40b92 = NULL;

    assertFrameObject( frame_3fe1a42f60b1620184c84424bdb40b92 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_1_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_session );
    Py_DECREF( var_session );
    var_session = NULL;

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

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_session );
    var_session = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_1_request );
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


static PyObject *impl_requests$api$$$function_2_get( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_params = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_2360f07c30589b8c8a717db4951315fe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2360f07c30589b8c8a717db4951315fe = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2360f07c30589b8c8a717db4951315fe, codeobj_2360f07c30589b8c8a717db4951315fe, module_requests$api, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2360f07c30589b8c8a717db4951315fe = cache_frame_2360f07c30589b8c8a717db4951315fe;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2360f07c30589b8c8a717db4951315fe );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2360f07c30589b8c8a717db4951315fe ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_1 = par_kwargs;
        frame_2360f07c30589b8c8a717db4951315fe->m_frame.f_lineno = 74;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_setdefault, &PyTuple_GET_ITEM( const_tuple_str_plain_allow_redirects_true_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_request );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_request );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "request" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        tmp_tuple_element_1 = const_str_plain_get;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_url );
        tmp_tuple_element_1 = par_url;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_params;
        CHECK_OBJECT( par_params );
        tmp_dict_value_1 = par_params;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2360f07c30589b8c8a717db4951315fe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2360f07c30589b8c8a717db4951315fe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2360f07c30589b8c8a717db4951315fe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2360f07c30589b8c8a717db4951315fe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2360f07c30589b8c8a717db4951315fe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2360f07c30589b8c8a717db4951315fe, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2360f07c30589b8c8a717db4951315fe,
        type_description_1,
        par_url,
        par_params,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_2360f07c30589b8c8a717db4951315fe == cache_frame_2360f07c30589b8c8a717db4951315fe )
    {
        Py_DECREF( frame_2360f07c30589b8c8a717db4951315fe );
    }
    cache_frame_2360f07c30589b8c8a717db4951315fe = NULL;

    assertFrameObject( frame_2360f07c30589b8c8a717db4951315fe );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_2_get );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_2_get );
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


static PyObject *impl_requests$api$$$function_3_options( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_e74563d5100e832730a6277f3e7df1df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e74563d5100e832730a6277f3e7df1df = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e74563d5100e832730a6277f3e7df1df, codeobj_e74563d5100e832730a6277f3e7df1df, module_requests$api, sizeof(void *)+sizeof(void *) );
    frame_e74563d5100e832730a6277f3e7df1df = cache_frame_e74563d5100e832730a6277f3e7df1df;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e74563d5100e832730a6277f3e7df1df );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e74563d5100e832730a6277f3e7df1df ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_1 = par_kwargs;
        frame_e74563d5100e832730a6277f3e7df1df->m_frame.f_lineno = 87;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_setdefault, &PyTuple_GET_ITEM( const_tuple_str_plain_allow_redirects_true_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_request );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_request );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "request" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        tmp_tuple_element_1 = const_str_plain_options;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_url );
        tmp_tuple_element_1 = par_url;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e74563d5100e832730a6277f3e7df1df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e74563d5100e832730a6277f3e7df1df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e74563d5100e832730a6277f3e7df1df );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e74563d5100e832730a6277f3e7df1df, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e74563d5100e832730a6277f3e7df1df->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e74563d5100e832730a6277f3e7df1df, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e74563d5100e832730a6277f3e7df1df,
        type_description_1,
        par_url,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_e74563d5100e832730a6277f3e7df1df == cache_frame_e74563d5100e832730a6277f3e7df1df )
    {
        Py_DECREF( frame_e74563d5100e832730a6277f3e7df1df );
    }
    cache_frame_e74563d5100e832730a6277f3e7df1df = NULL;

    assertFrameObject( frame_e74563d5100e832730a6277f3e7df1df );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_3_options );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_3_options );
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


static PyObject *impl_requests$api$$$function_4_head( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_d1b0ceec9fbb48f54488ede4dcc4993a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d1b0ceec9fbb48f54488ede4dcc4993a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d1b0ceec9fbb48f54488ede4dcc4993a, codeobj_d1b0ceec9fbb48f54488ede4dcc4993a, module_requests$api, sizeof(void *)+sizeof(void *) );
    frame_d1b0ceec9fbb48f54488ede4dcc4993a = cache_frame_d1b0ceec9fbb48f54488ede4dcc4993a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d1b0ceec9fbb48f54488ede4dcc4993a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d1b0ceec9fbb48f54488ede4dcc4993a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_1 = par_kwargs;
        frame_d1b0ceec9fbb48f54488ede4dcc4993a->m_frame.f_lineno = 100;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_setdefault, &PyTuple_GET_ITEM( const_tuple_str_plain_allow_redirects_false_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_request );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_request );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "request" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 101;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        tmp_tuple_element_1 = const_str_plain_head;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_url );
        tmp_tuple_element_1 = par_url;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d1b0ceec9fbb48f54488ede4dcc4993a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d1b0ceec9fbb48f54488ede4dcc4993a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d1b0ceec9fbb48f54488ede4dcc4993a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d1b0ceec9fbb48f54488ede4dcc4993a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d1b0ceec9fbb48f54488ede4dcc4993a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d1b0ceec9fbb48f54488ede4dcc4993a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d1b0ceec9fbb48f54488ede4dcc4993a,
        type_description_1,
        par_url,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_d1b0ceec9fbb48f54488ede4dcc4993a == cache_frame_d1b0ceec9fbb48f54488ede4dcc4993a )
    {
        Py_DECREF( frame_d1b0ceec9fbb48f54488ede4dcc4993a );
    }
    cache_frame_d1b0ceec9fbb48f54488ede4dcc4993a = NULL;

    assertFrameObject( frame_d1b0ceec9fbb48f54488ede4dcc4993a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_4_head );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_4_head );
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


static PyObject *impl_requests$api$$$function_5_post( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *par_json = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_6f61ab8ea5dcc2ace782a197d5eaf17c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_6f61ab8ea5dcc2ace782a197d5eaf17c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6f61ab8ea5dcc2ace782a197d5eaf17c, codeobj_6f61ab8ea5dcc2ace782a197d5eaf17c, module_requests$api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6f61ab8ea5dcc2ace782a197d5eaf17c = cache_frame_6f61ab8ea5dcc2ace782a197d5eaf17c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6f61ab8ea5dcc2ace782a197d5eaf17c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6f61ab8ea5dcc2ace782a197d5eaf17c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_request );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_request );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "request" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        tmp_tuple_element_1 = const_str_plain_post;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_url );
        tmp_tuple_element_1 = par_url;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_data;
        CHECK_OBJECT( par_data );
        tmp_dict_value_1 = par_data;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_json;
        CHECK_OBJECT( par_json );
        tmp_dict_value_2 = par_json;
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f61ab8ea5dcc2ace782a197d5eaf17c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f61ab8ea5dcc2ace782a197d5eaf17c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f61ab8ea5dcc2ace782a197d5eaf17c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6f61ab8ea5dcc2ace782a197d5eaf17c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6f61ab8ea5dcc2ace782a197d5eaf17c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6f61ab8ea5dcc2ace782a197d5eaf17c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6f61ab8ea5dcc2ace782a197d5eaf17c,
        type_description_1,
        par_url,
        par_data,
        par_json,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_6f61ab8ea5dcc2ace782a197d5eaf17c == cache_frame_6f61ab8ea5dcc2ace782a197d5eaf17c )
    {
        Py_DECREF( frame_6f61ab8ea5dcc2ace782a197d5eaf17c );
    }
    cache_frame_6f61ab8ea5dcc2ace782a197d5eaf17c = NULL;

    assertFrameObject( frame_6f61ab8ea5dcc2ace782a197d5eaf17c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_5_post );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_json );
    Py_DECREF( par_json );
    par_json = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_json );
    Py_DECREF( par_json );
    par_json = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_5_post );
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


static PyObject *impl_requests$api$$$function_6_put( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_76475dd142150b67dad2140da636cc67;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_76475dd142150b67dad2140da636cc67 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_76475dd142150b67dad2140da636cc67, codeobj_76475dd142150b67dad2140da636cc67, module_requests$api, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_76475dd142150b67dad2140da636cc67 = cache_frame_76475dd142150b67dad2140da636cc67;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_76475dd142150b67dad2140da636cc67 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_76475dd142150b67dad2140da636cc67 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_request );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_request );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "request" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        tmp_tuple_element_1 = const_str_plain_put;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_url );
        tmp_tuple_element_1 = par_url;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_data;
        CHECK_OBJECT( par_data );
        tmp_dict_value_1 = par_data;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76475dd142150b67dad2140da636cc67 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_76475dd142150b67dad2140da636cc67 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76475dd142150b67dad2140da636cc67 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_76475dd142150b67dad2140da636cc67, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_76475dd142150b67dad2140da636cc67->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_76475dd142150b67dad2140da636cc67, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_76475dd142150b67dad2140da636cc67,
        type_description_1,
        par_url,
        par_data,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_76475dd142150b67dad2140da636cc67 == cache_frame_76475dd142150b67dad2140da636cc67 )
    {
        Py_DECREF( frame_76475dd142150b67dad2140da636cc67 );
    }
    cache_frame_76475dd142150b67dad2140da636cc67 = NULL;

    assertFrameObject( frame_76475dd142150b67dad2140da636cc67 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_6_put );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_6_put );
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


static PyObject *impl_requests$api$$$function_7_patch( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_426c61a7442cc30105e9a06349eae05a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_426c61a7442cc30105e9a06349eae05a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_426c61a7442cc30105e9a06349eae05a, codeobj_426c61a7442cc30105e9a06349eae05a, module_requests$api, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_426c61a7442cc30105e9a06349eae05a = cache_frame_426c61a7442cc30105e9a06349eae05a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_426c61a7442cc30105e9a06349eae05a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_426c61a7442cc30105e9a06349eae05a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_request );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_request );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "request" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 146;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        tmp_tuple_element_1 = const_str_plain_patch;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_url );
        tmp_tuple_element_1 = par_url;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_data;
        CHECK_OBJECT( par_data );
        tmp_dict_value_1 = par_data;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_426c61a7442cc30105e9a06349eae05a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_426c61a7442cc30105e9a06349eae05a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_426c61a7442cc30105e9a06349eae05a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_426c61a7442cc30105e9a06349eae05a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_426c61a7442cc30105e9a06349eae05a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_426c61a7442cc30105e9a06349eae05a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_426c61a7442cc30105e9a06349eae05a,
        type_description_1,
        par_url,
        par_data,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_426c61a7442cc30105e9a06349eae05a == cache_frame_426c61a7442cc30105e9a06349eae05a )
    {
        Py_DECREF( frame_426c61a7442cc30105e9a06349eae05a );
    }
    cache_frame_426c61a7442cc30105e9a06349eae05a = NULL;

    assertFrameObject( frame_426c61a7442cc30105e9a06349eae05a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_7_patch );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_7_patch );
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


static PyObject *impl_requests$api$$$function_8_delete( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_b8bafa1b42a843052dde825f237ba1d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b8bafa1b42a843052dde825f237ba1d2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b8bafa1b42a843052dde825f237ba1d2, codeobj_b8bafa1b42a843052dde825f237ba1d2, module_requests$api, sizeof(void *)+sizeof(void *) );
    frame_b8bafa1b42a843052dde825f237ba1d2 = cache_frame_b8bafa1b42a843052dde825f237ba1d2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b8bafa1b42a843052dde825f237ba1d2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b8bafa1b42a843052dde825f237ba1d2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_request );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_request );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "request" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 158;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        tmp_tuple_element_1 = const_str_plain_delete;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_url );
        tmp_tuple_element_1 = par_url;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b8bafa1b42a843052dde825f237ba1d2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b8bafa1b42a843052dde825f237ba1d2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b8bafa1b42a843052dde825f237ba1d2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b8bafa1b42a843052dde825f237ba1d2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b8bafa1b42a843052dde825f237ba1d2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b8bafa1b42a843052dde825f237ba1d2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b8bafa1b42a843052dde825f237ba1d2,
        type_description_1,
        par_url,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_b8bafa1b42a843052dde825f237ba1d2 == cache_frame_b8bafa1b42a843052dde825f237ba1d2 )
    {
        Py_DECREF( frame_b8bafa1b42a843052dde825f237ba1d2 );
    }
    cache_frame_b8bafa1b42a843052dde825f237ba1d2 = NULL;

    assertFrameObject( frame_b8bafa1b42a843052dde825f237ba1d2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_8_delete );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_8_delete );
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



static PyObject *MAKE_FUNCTION_requests$api$$$function_1_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function_1_request,
        const_str_plain_request,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3fe1a42f60b1620184c84424bdb40b92,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$api,
        const_str_digest_02b9125f62dea1c6b60a1a6e455cc930,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function_2_get( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function_2_get,
        const_str_plain_get,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2360f07c30589b8c8a717db4951315fe,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$api,
        const_str_digest_276107dad0b38194fb0b040c6dbb15ec,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function_3_options(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function_3_options,
        const_str_plain_options,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e74563d5100e832730a6277f3e7df1df,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$api,
        const_str_digest_cae14719162f8d25632f36871021aaaf,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function_4_head(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function_4_head,
        const_str_plain_head,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d1b0ceec9fbb48f54488ede4dcc4993a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$api,
        const_str_digest_2a855d7e75d5ae01c88b757d781beef1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function_5_post( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function_5_post,
        const_str_plain_post,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6f61ab8ea5dcc2ace782a197d5eaf17c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$api,
        const_str_digest_f47e76f765bb2c97da294e64403e6027,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function_6_put( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function_6_put,
        const_str_plain_put,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_76475dd142150b67dad2140da636cc67,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$api,
        const_str_digest_6962348d8f10f7d363564118bc3614f8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function_7_patch( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function_7_patch,
        const_str_plain_patch,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_426c61a7442cc30105e9a06349eae05a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$api,
        const_str_digest_eecde9d9895ac3b5efede276a2d62a06,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function_8_delete(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function_8_delete,
        const_str_plain_delete,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b8bafa1b42a843052dde825f237ba1d2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$api,
        const_str_digest_c1ec17d8ceaaa6ed18f5bd6653da2b27,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$api =
{
    PyModuleDef_HEAD_INIT,
    "requests.api",
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

MOD_INIT_DECL( requests$api )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$api );
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
    puts("requests.api: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.api: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.api: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$api" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$api = Py_InitModule4(
        "requests.api",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_requests$api = PyModule_Create( &mdef_requests$api );
#endif

    moduledict_requests$api = MODULE_DICT( module_requests$api );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_requests$api,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_requests$api,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_requests$api );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_b115530482cfc542e130350f9a85acf7, module_requests$api );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_4db404c6e11af7a26f27121110bf92f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_add3f921aeb256f9d071a9968c8d439a;
        UPDATE_STRING_DICT0( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_4db404c6e11af7a26f27121110bf92f4 = MAKE_MODULE_FRAME( codeobj_4db404c6e11af7a26f27121110bf92f4, module_requests$api );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_4db404c6e11af7a26f27121110bf92f4 );
    assert( Py_REFCNT( frame_4db404c6e11af7a26f27121110bf92f4 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_empty;
        tmp_globals_name_1 = (PyObject *)moduledict_requests$api;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_sessions_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_4db404c6e11af7a26f27121110bf92f4->m_frame.f_lineno = 13;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_requests$api,
                const_str_plain_sessions,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_sessions );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_sessions, tmp_assign_source_4 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4db404c6e11af7a26f27121110bf92f4 );
#endif
    popFrameStack();

    assertFrameObject( frame_4db404c6e11af7a26f27121110bf92f4 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4db404c6e11af7a26f27121110bf92f4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4db404c6e11af7a26f27121110bf92f4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4db404c6e11af7a26f27121110bf92f4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4db404c6e11af7a26f27121110bf92f4, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_FUNCTION_requests$api$$$function_1_request(  );



        UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_request, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_6 = MAKE_FUNCTION_requests$api$$$function_2_get( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_get, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_requests$api$$$function_3_options(  );



        UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_options, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_requests$api$$$function_4_head(  );



        UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_head, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_9 = MAKE_FUNCTION_requests$api$$$function_5_post( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_post, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_10 = MAKE_FUNCTION_requests$api$$$function_6_put( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_put, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_11 = MAKE_FUNCTION_requests$api$$$function_7_patch( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_patch, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_requests$api$$$function_8_delete(  );



        UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_delete, tmp_assign_source_12 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_requests$api );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
