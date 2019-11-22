/* Generated code for Python module 'requests.exceptions'
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

/* The "_module_requests$exceptions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$exceptions;
PyDictObject *moduledict_requests$exceptions;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_Warning;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_args;
static PyObject *const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0;
extern PyObject *const_str_plain_URLRequired;
extern PyObject *const_str_plain_ConnectTimeout;
static PyObject *const_str_digest_225332b778bf59fe5fff32593da4030a;
static PyObject *const_tuple_str_plain_request_none_tuple;
static PyObject *const_str_digest_4aae44da769befc767278be58ddca255;
static PyObject *const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple;
extern PyObject *const_str_plain_InvalidURL;
extern PyObject *const_str_plain_MissingSchema;
static PyObject *const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
static PyObject *const_str_digest_2ad78bd49ece92478753ce0fc79a6e93;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_ReadTimeout;
static PyObject *const_str_digest_b8f960a38723097fb701d7986528073c;
extern PyObject *const_str_digest_c8562bbff9d721153deb2fdd066393d0;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_plain_RequestException_tuple_type_OSError_tuple_tuple;
static PyObject *const_str_plain_BaseHTTPError;
extern PyObject *const_str_plain_InvalidProxyURL;
extern PyObject *const_str_plain_StreamConsumedError;
static PyObject *const_str_digest_6587f4880f76e0aa0a701cb246dbfaa8;
static PyObject *const_str_digest_4333d27c21ed032b37168f9421cfc46d;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_c7a80113e8376f2f52f7ee120f1360d2;
extern PyObject *const_str_plain_DeprecationWarning;
static PyObject *const_str_digest_b3f79f0ff88ef53ddf2012488144e436;
extern PyObject *const_str_plain_ChunkedEncodingError;
extern PyObject *const_str_plain_ProxyError;
static PyObject *const_str_digest_3aedd4c9c88f311ca62d0cad34678af2;
static PyObject *const_str_digest_cb488f69655ce887e5155c9a2e164928;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_RequestsWarning;
extern PyObject *const_str_plain_ContentDecodingError;
static PyObject *const_str_digest_3b2add8be5d440c36ae0b41135415fa9;
static PyObject *const_str_digest_382efa1ab11fb4a35860fc2596b633ab;
static PyObject *const_str_digest_0689849403be684eb33eb3512cfc2389;
extern PyObject *const_tuple_type_OSError_tuple;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_UnrewindableBodyError;
extern PyObject *const_tuple_str_plain_HTTPError_tuple;
extern PyObject *const_str_plain_pop;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_response;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_Timeout;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_HTTPError;
extern PyObject *const_str_plain_InvalidSchema;
static PyObject *const_str_digest_841f485de6d4157389a41ea63dc14155;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_InvalidHeader;
extern PyObject *const_str_plain_ConnectionError;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_b2c98825348c9fcd71a85ac1bfc67cf8;
extern PyObject *const_str_plain_FileModeWarning;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_231982acca444de8f23c0288db53eaef;
extern PyObject *const_str_digest_c1f4dcdf3195a093500cff5b8859ecc9;
static PyObject *const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc;
extern PyObject *const_str_plain_RequestsDependencyWarning;
static PyObject *const_tuple_str_plain_response_none_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8;
static PyObject *const_str_digest_3a035decbb1d48c6b204b28e42512076;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_RetryError;
static PyObject *const_str_digest_183e1365483754a66afafc5046591b5f;
static PyObject *const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e;
static PyObject *const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2;
static PyObject *const_str_digest_e91f0a06d295e9fdd4c3972666eefa40;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a;
static PyObject *const_str_digest_34a451307fc6aab1649478fed3307568;
extern PyObject *const_str_plain_RequestException;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_str_plain_TooManyRedirects;
static PyObject *const_str_digest_35d6e09b700b272e1f4429814168031d;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4025403 ], 28, 0 );
    const_str_digest_225332b778bf59fe5fff32593da4030a = UNSTREAM_STRING_ASCII( &constant_bin[ 4025431 ], 37, 0 );
    const_tuple_str_plain_request_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_request_none_tuple, 0, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_str_plain_request_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_4aae44da769befc767278be58ddca255 = UNSTREAM_STRING_ASCII( &constant_bin[ 4025468 ], 46, 0 );
    const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple, 3, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple, 4, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4025514 ], 19, 0 );
    const_str_digest_2ad78bd49ece92478753ce0fc79a6e93 = UNSTREAM_STRING_ASCII( &constant_bin[ 4025533 ], 84, 0 );
    const_str_digest_b8f960a38723097fb701d7986528073c = UNSTREAM_STRING_ASCII( &constant_bin[ 4025617 ], 64, 0 );
    const_tuple_str_plain_RequestException_tuple_type_OSError_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_RequestException_tuple_type_OSError_tuple_tuple, 0, const_str_plain_RequestException ); Py_INCREF( const_str_plain_RequestException );
    PyTuple_SET_ITEM( const_tuple_str_plain_RequestException_tuple_type_OSError_tuple_tuple, 1, const_tuple_type_OSError_tuple ); Py_INCREF( const_tuple_type_OSError_tuple );
    const_str_plain_BaseHTTPError = UNSTREAM_STRING_ASCII( &constant_bin[ 4025681 ], 13, 1 );
    const_str_digest_6587f4880f76e0aa0a701cb246dbfaa8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4025694 ], 25, 0 );
    const_str_digest_4333d27c21ed032b37168f9421cfc46d = UNSTREAM_STRING_ASCII( &constant_bin[ 4025719 ], 22, 0 );
    const_str_digest_c7a80113e8376f2f52f7ee120f1360d2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4025741 ], 47, 0 );
    const_str_digest_b3f79f0ff88ef53ddf2012488144e436 = UNSTREAM_STRING_ASCII( &constant_bin[ 4025788 ], 27, 0 );
    const_str_digest_3aedd4c9c88f311ca62d0cad34678af2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4025815 ], 23, 0 );
    const_str_digest_cb488f69655ce887e5155c9a2e164928 = UNSTREAM_STRING_ASCII( &constant_bin[ 4025838 ], 66, 0 );
    const_str_plain_RequestsWarning = UNSTREAM_STRING_ASCII( &constant_bin[ 4025904 ], 15, 1 );
    const_str_digest_3b2add8be5d440c36ae0b41135415fa9 = UNSTREAM_STRING_ASCII( &constant_bin[ 4025919 ], 34, 0 );
    const_str_digest_382efa1ab11fb4a35860fc2596b633ab = UNSTREAM_STRING_ASCII( &constant_bin[ 4025953 ], 58, 0 );
    const_str_digest_0689849403be684eb33eb3512cfc2389 = UNSTREAM_STRING_ASCII( &constant_bin[ 4026011 ], 34, 0 );
    const_str_digest_841f485de6d4157389a41ea63dc14155 = UNSTREAM_STRING_ASCII( &constant_bin[ 4026045 ], 42, 0 );
    const_str_digest_b2c98825348c9fcd71a85ac1bfc67cf8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4026087 ], 96, 0 );
    const_str_digest_231982acca444de8f23c0288db53eaef = UNSTREAM_STRING_ASCII( &constant_bin[ 4026183 ], 26, 0 );
    const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc = UNSTREAM_STRING_ASCII( &constant_bin[ 4026209 ], 23, 0 );
    const_tuple_str_plain_response_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_response_none_tuple, 0, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_str_plain_response_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4026232 ], 130, 0 );
    const_str_digest_3a035decbb1d48c6b204b28e42512076 = UNSTREAM_STRING_ASCII( &constant_bin[ 4026362 ], 64, 0 );
    const_str_digest_183e1365483754a66afafc5046591b5f = UNSTREAM_STRING_ASCII( &constant_bin[ 4026426 ], 28, 0 );
    const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e = UNSTREAM_STRING_ASCII( &constant_bin[ 4026454 ], 19, 0 );
    const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4026473 ], 74, 0 );
    const_str_digest_e91f0a06d295e9fdd4c3972666eefa40 = UNSTREAM_STRING_ASCII( &constant_bin[ 4026547 ], 33, 0 );
    const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a = UNSTREAM_STRING_ASCII( &constant_bin[ 4026580 ], 63, 0 );
    const_str_digest_34a451307fc6aab1649478fed3307568 = UNSTREAM_STRING_ASCII( &constant_bin[ 4026643 ], 171, 0 );
    const_str_digest_35d6e09b700b272e1f4429814168031d = UNSTREAM_STRING_ASCII( &constant_bin[ 4026814 ], 22, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$exceptions( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_ccaa0df725a909f813710f0c4d7020fd;
static PyCodeObject *codeobj_fd70ec83cec94c93240bfa2ea1964325;
static PyCodeObject *codeobj_2861ba24b069ad20801106f3c4a6b8c2;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_4333d27c21ed032b37168f9421cfc46d );
    codeobj_ccaa0df725a909f813710f0c4d7020fd = MAKE_CODEOBJ( module_filename_obj, const_str_digest_183e1365483754a66afafc5046591b5f, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_fd70ec83cec94c93240bfa2ea1964325 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RequestException, 12, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_2861ba24b069ad20801106f3c4a6b8c2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 17, const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_requests$exceptions$$$function_1___init__(  );


// The module function definitions.
static PyObject *impl_requests$exceptions$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_response = NULL;
    struct Nuitka_FrameObject *frame_2861ba24b069ad20801106f3c4a6b8c2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2861ba24b069ad20801106f3c4a6b8c2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2861ba24b069ad20801106f3c4a6b8c2, codeobj_2861ba24b069ad20801106f3c4a6b8c2, module_requests$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2861ba24b069ad20801106f3c4a6b8c2 = cache_frame_2861ba24b069ad20801106f3c4a6b8c2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2861ba24b069ad20801106f3c4a6b8c2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2861ba24b069ad20801106f3c4a6b8c2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_1 = par_kwargs;
        frame_2861ba24b069ad20801106f3c4a6b8c2->m_frame.f_lineno = 19;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_response_none_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        assert( var_response == NULL );
        var_response = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( var_response );
        tmp_assattr_name_1 = var_response;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_response, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_2 = par_kwargs;
        frame_2861ba24b069ad20801106f3c4a6b8c2->m_frame.f_lineno = 21;
        tmp_assattr_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_request_none_tuple, 0 ) );

        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_request, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT( var_response );
        tmp_compexpr_left_1 = var_response;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_response );
        tmp_source_name_2 = var_response;
        tmp_attribute_name_1 = const_str_plain_request;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_2, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_assattr_target_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_response );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 24;
                type_description_1 = "ooooN";
                goto frame_exception_exit_1;
            }
            tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_request );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_assattr_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 24;
                type_description_1 = "ooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_request, tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 24;
                type_description_1 = "ooooN";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_source_name_5 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___init__ );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2861ba24b069ad20801106f3c4a6b8c2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2861ba24b069ad20801106f3c4a6b8c2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2861ba24b069ad20801106f3c4a6b8c2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2861ba24b069ad20801106f3c4a6b8c2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2861ba24b069ad20801106f3c4a6b8c2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2861ba24b069ad20801106f3c4a6b8c2,
        type_description_1,
        par_self,
        par_args,
        par_kwargs,
        var_response,
        NULL
    );


    // Release cached frame.
    if ( frame_2861ba24b069ad20801106f3c4a6b8c2 == cache_frame_2861ba24b069ad20801106f3c4a6b8c2 )
    {
        Py_DECREF( frame_2861ba24b069ad20801106f3c4a6b8c2 );
    }
    cache_frame_2861ba24b069ad20801106f3c4a6b8c2 = NULL;

    assertFrameObject( frame_2861ba24b069ad20801106f3c4a6b8c2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_response );
    Py_DECREF( var_response );
    var_response = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_response );
    var_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions$$$function_1___init__ );
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



static PyObject *MAKE_FUNCTION_requests$exceptions$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$exceptions$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_6587f4880f76e0aa0a701cb246dbfaa8,
#endif
        codeobj_2861ba24b069ad20801106f3c4a6b8c2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$exceptions,
        const_str_digest_cb488f69655ce887e5155c9a2e164928,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$exceptions =
{
    PyModuleDef_HEAD_INIT,
    "requests.exceptions",
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

MOD_INIT_DECL( requests$exceptions )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$exceptions );
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
    puts("requests.exceptions: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.exceptions: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.exceptions: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$exceptions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$exceptions = Py_InitModule4(
        "requests.exceptions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_requests$exceptions = PyModule_Create( &mdef_requests$exceptions );
#endif

    moduledict_requests$exceptions = MODULE_DICT( module_requests$exceptions );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_requests$exceptions,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_requests$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_requests$exceptions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2, module_requests$exceptions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_14_var___class__ = NULL;
    PyObject *outline_15_var___class__ = NULL;
    PyObject *outline_16_var___class__ = NULL;
    PyObject *outline_17_var___class__ = NULL;
    PyObject *outline_18_var___class__ = NULL;
    PyObject *outline_19_var___class__ = NULL;
    PyObject *outline_20_var___class__ = NULL;
    PyObject *outline_21_var___class__ = NULL;
    PyObject *outline_22_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_15__prepared = NULL;
    PyObject *tmp_class_creation_16__bases = NULL;
    PyObject *tmp_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_16__prepared = NULL;
    PyObject *tmp_class_creation_17__bases = NULL;
    PyObject *tmp_class_creation_17__class_decl_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_17__prepared = NULL;
    PyObject *tmp_class_creation_18__bases = NULL;
    PyObject *tmp_class_creation_18__class_decl_dict = NULL;
    PyObject *tmp_class_creation_18__metaclass = NULL;
    PyObject *tmp_class_creation_18__prepared = NULL;
    PyObject *tmp_class_creation_19__bases = NULL;
    PyObject *tmp_class_creation_19__class_decl_dict = NULL;
    PyObject *tmp_class_creation_19__metaclass = NULL;
    PyObject *tmp_class_creation_19__prepared = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_20__bases = NULL;
    PyObject *tmp_class_creation_20__class_decl_dict = NULL;
    PyObject *tmp_class_creation_20__metaclass = NULL;
    PyObject *tmp_class_creation_20__prepared = NULL;
    PyObject *tmp_class_creation_21__bases = NULL;
    PyObject *tmp_class_creation_21__class_decl_dict = NULL;
    PyObject *tmp_class_creation_21__metaclass = NULL;
    PyObject *tmp_class_creation_21__prepared = NULL;
    PyObject *tmp_class_creation_22__bases = NULL;
    PyObject *tmp_class_creation_22__class_decl_dict = NULL;
    PyObject *tmp_class_creation_22__metaclass = NULL;
    PyObject *tmp_class_creation_22__prepared = NULL;
    PyObject *tmp_class_creation_23__bases = NULL;
    PyObject *tmp_class_creation_23__class_decl_dict = NULL;
    PyObject *tmp_class_creation_23__metaclass = NULL;
    PyObject *tmp_class_creation_23__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    struct Nuitka_FrameObject *frame_ccaa0df725a909f813710f0c4d7020fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_requests$exceptions_12 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_fd70ec83cec94c93240bfa2ea1964325_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_fd70ec83cec94c93240bfa2ea1964325_2 = NULL;
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
    PyObject *locals_requests$exceptions_28 = NULL;
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
    PyObject *locals_requests$exceptions_32 = NULL;
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
    PyObject *locals_requests$exceptions_36 = NULL;
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
    PyObject *locals_requests$exceptions_40 = NULL;
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
    PyObject *locals_requests$exceptions_44 = NULL;
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
    PyObject *locals_requests$exceptions_53 = NULL;
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
    PyObject *locals_requests$exceptions_60 = NULL;
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
    PyObject *locals_requests$exceptions_64 = NULL;
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
    PyObject *locals_requests$exceptions_68 = NULL;
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
    PyObject *locals_requests$exceptions_72 = NULL;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *locals_requests$exceptions_76 = NULL;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *locals_requests$exceptions_80 = NULL;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *locals_requests$exceptions_84 = NULL;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *locals_requests$exceptions_88 = NULL;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *locals_requests$exceptions_92 = NULL;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *locals_requests$exceptions_96 = NULL;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *locals_requests$exceptions_100 = NULL;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *locals_requests$exceptions_104 = NULL;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *locals_requests$exceptions_108 = NULL;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *locals_requests$exceptions_114 = NULL;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    PyObject *locals_requests$exceptions_119 = NULL;
    PyObject *exception_keeper_type_64;
    PyObject *exception_keeper_value_64;
    PyTracebackObject *exception_keeper_tb_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    PyObject *exception_keeper_type_65;
    PyObject *exception_keeper_value_65;
    PyTracebackObject *exception_keeper_tb_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    PyObject *exception_keeper_type_66;
    PyObject *exception_keeper_value_66;
    PyTracebackObject *exception_keeper_tb_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
    PyObject *locals_requests$exceptions_124 = NULL;
    PyObject *exception_keeper_type_67;
    PyObject *exception_keeper_value_67;
    PyTracebackObject *exception_keeper_tb_67;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
    PyObject *exception_keeper_type_68;
    PyObject *exception_keeper_value_68;
    PyTracebackObject *exception_keeper_tb_68;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
    PyObject *exception_keeper_type_69;
    PyObject *exception_keeper_value_69;
    PyTracebackObject *exception_keeper_tb_69;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_b2c98825348c9fcd71a85ac1bfc67cf8;
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_ccaa0df725a909f813710f0c4d7020fd = MAKE_MODULE_FRAME( codeobj_ccaa0df725a909f813710f0c4d7020fd, module_requests$exceptions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_ccaa0df725a909f813710f0c4d7020fd );
    assert( Py_REFCNT( frame_ccaa0df725a909f813710f0c4d7020fd ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_1 = (PyObject *)moduledict_requests$exceptions;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_HTTPError_tuple;
        tmp_level_name_1 = const_int_0;
        frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 9;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_HTTPError );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_BaseHTTPError, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = const_str_plain_metaclass;
        tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
        assert( tmp_metaclass_name_1 != NULL );
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_type_OSError_tuple;
        tmp_assign_source_6 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_1 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_1, const_str_plain___prepare__ );
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;

                goto try_except_handler_1;
            }
            tmp_args_name_1 = const_tuple_str_plain_RequestException_tuple_type_OSError_tuple_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 12;
            tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_7;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_3 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_3, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;

                goto try_except_handler_1;
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
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_raise_value_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_type_arg_1;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 12;

                    goto try_except_handler_1;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_1 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_1 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 12;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 12;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 12;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_8;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_9;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_requests$exceptions_12 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_12, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_digest_2ad78bd49ece92478753ce0fc79a6e93;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_12, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_RequestException;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_12, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_fd70ec83cec94c93240bfa2ea1964325_2, codeobj_fd70ec83cec94c93240bfa2ea1964325, module_requests$exceptions, sizeof(void *) );
        frame_fd70ec83cec94c93240bfa2ea1964325_2 = cache_frame_fd70ec83cec94c93240bfa2ea1964325_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_fd70ec83cec94c93240bfa2ea1964325_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_fd70ec83cec94c93240bfa2ea1964325_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_requests$exceptions$$$function_1___init__(  );



        tmp_res = PyObject_SetItem( locals_requests$exceptions_12, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_fd70ec83cec94c93240bfa2ea1964325_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_fd70ec83cec94c93240bfa2ea1964325_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_fd70ec83cec94c93240bfa2ea1964325_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_fd70ec83cec94c93240bfa2ea1964325_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_fd70ec83cec94c93240bfa2ea1964325_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_fd70ec83cec94c93240bfa2ea1964325_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_fd70ec83cec94c93240bfa2ea1964325_2 == cache_frame_fd70ec83cec94c93240bfa2ea1964325_2 )
        {
            Py_DECREF( frame_fd70ec83cec94c93240bfa2ea1964325_2 );
        }
        cache_frame_fd70ec83cec94c93240bfa2ea1964325_2 = NULL;

        assertFrameObject( frame_fd70ec83cec94c93240bfa2ea1964325_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain_RequestException;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_type_OSError_tuple;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_requests$exceptions_12;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 12;
            tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_10;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_9 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_9 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_requests$exceptions_12 );
        locals_requests$exceptions_12 = NULL;
        goto try_return_handler_2;
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

        Py_DECREF( locals_requests$exceptions_12 );
        locals_requests$exceptions_12 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 12;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException, tmp_assign_source_9 );
    }
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 28;

            goto try_except_handler_4;
        }

        tmp_tuple_element_3 = tmp_mvar_value_3;
        tmp_assign_source_11 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_assign_source_11, 0, tmp_tuple_element_3 );
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        PyObject *tmp_type_arg_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_4;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_subscribed_name_1 = tmp_class_creation_2__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_type_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
        Py_DECREF( tmp_type_arg_2 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_4;
        }
        condexpr_end_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_13 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_name_6;
        tmp_key_name_6 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_4;
        }
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_4;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_5 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_5, const_str_plain___prepare__ );
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_6 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_4;
            }
            tmp_tuple_element_4 = const_str_plain_HTTPError;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_4 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 28;
            tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_4;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_14;
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_7 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_7, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_4;
            }
            tmp_condition_result_8 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_raise_value_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_8;
                PyObject *tmp_type_arg_3;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_5 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 28;

                    goto try_except_handler_4;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_5 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_3 = tmp_class_creation_2__prepared;
                tmp_source_name_8 = BUILTIN_TYPE1( tmp_type_arg_3 );
                assert( !(tmp_source_name_8 == NULL) );
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_8 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 28;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_5 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 28;

                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 28;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_4;
            }
            branch_no_6:;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_15;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_16;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_requests$exceptions_28 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_28, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_28, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_HTTPError;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_28, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_6;
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = const_str_plain_HTTPError;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
            tmp_tuple_element_6 = locals_requests$exceptions_28;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 28;
            tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_6;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_17;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_16 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_16 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_requests$exceptions_28 );
        locals_requests$exceptions_28 = NULL;
        goto try_return_handler_5;
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

        Py_DECREF( locals_requests$exceptions_28 );
        locals_requests$exceptions_28 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 28;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError, tmp_assign_source_16 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 32;

            goto try_except_handler_7;
        }

        tmp_tuple_element_7 = tmp_mvar_value_4;
        tmp_assign_source_18 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_assign_source_18, 0, tmp_tuple_element_7 );
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = PyDict_New();
        assert( tmp_class_creation_3__class_decl_dict == NULL );
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        PyObject *tmp_type_arg_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_3;
        }
        else
        {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = const_str_plain_metaclass;
        tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_subscribed_name_2 = tmp_class_creation_3__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_type_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_4 );
        Py_DECREF( tmp_type_arg_4 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        condexpr_end_3:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_20 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
        Py_DECREF( tmp_metaclass_name_3 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        tmp_key_name_9 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_source_name_9 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_9, const_str_plain___prepare__ );
        tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_source_name_10 = tmp_class_creation_3__metaclass;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 32;

                goto try_except_handler_7;
            }
            tmp_tuple_element_8 = const_str_plain_ConnectionError;
            tmp_args_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_8 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 32;
            tmp_assign_source_21 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_5 );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 32;

                goto try_except_handler_7;
            }
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_21;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_source_name_11 = tmp_class_creation_3__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_11, const_str_plain___getitem__ );
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 32;

                goto try_except_handler_7;
            }
            tmp_condition_result_12 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_9;
            }
            else
            {
                goto branch_no_9;
            }
            branch_yes_9:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_raise_value_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_getattr_target_3;
                PyObject *tmp_getattr_attr_3;
                PyObject *tmp_getattr_default_3;
                PyObject *tmp_source_name_12;
                PyObject *tmp_type_arg_5;
                tmp_raise_type_3 = PyExc_TypeError;
                tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_3__metaclass );
                tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
                tmp_getattr_attr_3 = const_str_plain___name__;
                tmp_getattr_default_3 = const_str_angle_metaclass;
                tmp_tuple_element_9 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
                if ( tmp_tuple_element_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 32;

                    goto try_except_handler_7;
                }
                tmp_right_name_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_9 );
                CHECK_OBJECT( tmp_class_creation_3__prepared );
                tmp_type_arg_5 = tmp_class_creation_3__prepared;
                tmp_source_name_12 = BUILTIN_TYPE1( tmp_type_arg_5 );
                assert( !(tmp_source_name_12 == NULL) );
                tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_12 );
                if ( tmp_tuple_element_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_3 );

                    exception_lineno = 32;

                    goto try_except_handler_7;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_9 );
                tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 32;

                    goto try_except_handler_7;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_value = tmp_raise_value_3;
                exception_lineno = 32;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_7;
            }
            branch_no_9:;
        }
        goto branch_end_8;
        branch_no_8:;
        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = PyDict_New();
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_22;
        }
        branch_end_8:;
    }
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_requests$exceptions_32 = tmp_set_locals_3;
            Py_INCREF( tmp_set_locals_3 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_32, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_32, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_plain_ConnectionError;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_32, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_9;
        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_called_name_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_10 = const_str_plain_ConnectionError;
            tmp_args_name_6 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_10 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_10 );
            tmp_tuple_element_10 = locals_requests$exceptions_32;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 32;
            tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_args_name_6 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 32;

                goto try_except_handler_9;
            }
            assert( outline_2_var___class__ == NULL );
            outline_2_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT( outline_2_var___class__ );
        tmp_assign_source_23 = outline_2_var___class__;
        Py_INCREF( tmp_assign_source_23 );
        goto try_return_handler_9;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF( locals_requests$exceptions_32 );
        locals_requests$exceptions_32 = NULL;
        goto try_return_handler_8;
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

        Py_DECREF( locals_requests$exceptions_32 );
        locals_requests$exceptions_32 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
        Py_DECREF( outline_2_var___class__ );
        outline_2_var___class__ = NULL;

        goto outline_result_3;
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

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 32;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_23 );
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__prepared );
    Py_DECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectionError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 36;

            goto try_except_handler_10;
        }

        tmp_tuple_element_11 = tmp_mvar_value_5;
        tmp_assign_source_25 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_assign_source_25, 0, tmp_tuple_element_11 );
        assert( tmp_class_creation_4__bases == NULL );
        tmp_class_creation_4__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert( tmp_class_creation_4__class_decl_dict == NULL );
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_key_name_11;
        PyObject *tmp_type_arg_6;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_bases_name_4;
        tmp_key_name_10 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_10;
        }
        tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_4;
        }
        else
        {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_name_11 = const_str_plain_metaclass;
        tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
        if ( tmp_metaclass_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_10;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_subscribed_name_3 = tmp_class_creation_4__bases;
        tmp_subscript_name_3 = const_int_0;
        tmp_type_arg_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        if ( tmp_type_arg_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_10;
        }
        tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_6 );
        Py_DECREF( tmp_type_arg_6 );
        if ( tmp_metaclass_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_10;
        }
        condexpr_end_4:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_bases_name_4 = tmp_class_creation_4__bases;
        tmp_assign_source_27 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
        Py_DECREF( tmp_metaclass_name_4 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_10;
        }
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_27;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_key_name_12;
        PyObject *tmp_dict_name_12;
        tmp_key_name_12 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_10;
        }
        tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_10;
        }
        branch_no_10:;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_source_name_13;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_source_name_13 = tmp_class_creation_4__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_13, const_str_plain___prepare__ );
        tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_11;
        }
        else
        {
            goto branch_no_11;
        }
        branch_yes_11:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_14;
            PyObject *tmp_args_name_7;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kw_name_7;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_source_name_14 = tmp_class_creation_4__metaclass;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___prepare__ );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;

                goto try_except_handler_10;
            }
            tmp_tuple_element_12 = const_str_plain_ProxyError;
            tmp_args_name_7 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_12 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_12 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_12 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 36;
            tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_name_7 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;

                goto try_except_handler_10;
            }
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_28;
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_source_name_15;
            CHECK_OBJECT( tmp_class_creation_4__prepared );
            tmp_source_name_15 = tmp_class_creation_4__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_15, const_str_plain___getitem__ );
            tmp_operand_name_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;

                goto try_except_handler_10;
            }
            tmp_condition_result_16 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_12;
            }
            else
            {
                goto branch_no_12;
            }
            branch_yes_12:;
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_raise_value_4;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_getattr_target_4;
                PyObject *tmp_getattr_attr_4;
                PyObject *tmp_getattr_default_4;
                PyObject *tmp_source_name_16;
                PyObject *tmp_type_arg_7;
                tmp_raise_type_4 = PyExc_TypeError;
                tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_4__metaclass );
                tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
                tmp_getattr_attr_4 = const_str_plain___name__;
                tmp_getattr_default_4 = const_str_angle_metaclass;
                tmp_tuple_element_13 = BUILTIN_GETATTR( tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4 );
                if ( tmp_tuple_element_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 36;

                    goto try_except_handler_10;
                }
                tmp_right_name_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_13 );
                CHECK_OBJECT( tmp_class_creation_4__prepared );
                tmp_type_arg_7 = tmp_class_creation_4__prepared;
                tmp_source_name_16 = BUILTIN_TYPE1( tmp_type_arg_7 );
                assert( !(tmp_source_name_16 == NULL) );
                tmp_tuple_element_13 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_16 );
                if ( tmp_tuple_element_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_4 );

                    exception_lineno = 36;

                    goto try_except_handler_10;
                }
                PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_13 );
                tmp_raise_value_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_raise_value_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 36;

                    goto try_except_handler_10;
                }
                exception_type = tmp_raise_type_4;
                Py_INCREF( tmp_raise_type_4 );
                exception_value = tmp_raise_value_4;
                exception_lineno = 36;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_10;
            }
            branch_no_12:;
        }
        goto branch_end_11;
        branch_no_11:;
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = PyDict_New();
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_29;
        }
        branch_end_11:;
    }
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT( tmp_class_creation_4__prepared );
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_requests$exceptions_36 = tmp_set_locals_4;
            Py_INCREF( tmp_set_locals_4 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_36, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_12;
        }
        tmp_dictset_value = const_str_digest_3aedd4c9c88f311ca62d0cad34678af2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_36, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_12;
        }
        tmp_dictset_value = const_str_plain_ProxyError;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_36, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_12;
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_called_name_8 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_14 = const_str_plain_ProxyError;
            tmp_args_name_8 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_14 );
            PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_14 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_14 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_14 );
            PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_14 );
            tmp_tuple_element_14 = locals_requests$exceptions_36;
            Py_INCREF( tmp_tuple_element_14 );
            PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_14 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 36;
            tmp_assign_source_31 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
            Py_DECREF( tmp_args_name_8 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;

                goto try_except_handler_12;
            }
            assert( outline_3_var___class__ == NULL );
            outline_3_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT( outline_3_var___class__ );
        tmp_assign_source_30 = outline_3_var___class__;
        Py_INCREF( tmp_assign_source_30 );
        goto try_return_handler_12;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF( locals_requests$exceptions_36 );
        locals_requests$exceptions_36 = NULL;
        goto try_return_handler_11;
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

        Py_DECREF( locals_requests$exceptions_36 );
        locals_requests$exceptions_36 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
        Py_DECREF( outline_3_var___class__ );
        outline_3_var___class__ = NULL;

        goto outline_result_4;
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

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_4:;
        exception_lineno = 36;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ProxyError, tmp_assign_source_30 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__prepared );
    Py_DECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectionError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;

            goto try_except_handler_13;
        }

        tmp_tuple_element_15 = tmp_mvar_value_6;
        tmp_assign_source_32 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_15 );
        PyTuple_SET_ITEM( tmp_assign_source_32, 0, tmp_tuple_element_15 );
        assert( tmp_class_creation_5__bases == NULL );
        tmp_class_creation_5__bases = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = PyDict_New();
        assert( tmp_class_creation_5__class_decl_dict == NULL );
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_metaclass_name_5;
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_name_13;
        PyObject *tmp_dict_name_14;
        PyObject *tmp_key_name_14;
        PyObject *tmp_type_arg_8;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_bases_name_5;
        tmp_key_name_13 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dict_name_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_13, tmp_key_name_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_13;
        }
        tmp_condition_result_17 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_5;
        }
        else
        {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dict_name_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_name_14 = const_str_plain_metaclass;
        tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
        if ( tmp_metaclass_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_13;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT( tmp_class_creation_5__bases );
        tmp_subscribed_name_4 = tmp_class_creation_5__bases;
        tmp_subscript_name_4 = const_int_0;
        tmp_type_arg_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        if ( tmp_type_arg_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_13;
        }
        tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_8 );
        Py_DECREF( tmp_type_arg_8 );
        if ( tmp_metaclass_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_13;
        }
        condexpr_end_5:;
        CHECK_OBJECT( tmp_class_creation_5__bases );
        tmp_bases_name_5 = tmp_class_creation_5__bases;
        tmp_assign_source_34 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
        Py_DECREF( tmp_metaclass_name_5 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_13;
        }
        assert( tmp_class_creation_5__metaclass == NULL );
        tmp_class_creation_5__metaclass = tmp_assign_source_34;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_name_15;
        tmp_key_name_15 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dict_name_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_15, tmp_key_name_15 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_13;
        }
        tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_13;
        }
        else
        {
            goto branch_no_13;
        }
        branch_yes_13:;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_13;
        }
        branch_no_13:;
    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_source_name_17;
        CHECK_OBJECT( tmp_class_creation_5__metaclass );
        tmp_source_name_17 = tmp_class_creation_5__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_17, const_str_plain___prepare__ );
        tmp_condition_result_19 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_14;
        }
        else
        {
            goto branch_no_14;
        }
        branch_yes_14:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_18;
            PyObject *tmp_args_name_9;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kw_name_9;
            CHECK_OBJECT( tmp_class_creation_5__metaclass );
            tmp_source_name_18 = tmp_class_creation_5__metaclass;
            tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain___prepare__ );
            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;

                goto try_except_handler_13;
            }
            tmp_tuple_element_16 = const_str_plain_SSLError;
            tmp_args_name_9 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_16 );
            PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_16 );
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_tuple_element_16 = tmp_class_creation_5__bases;
            Py_INCREF( tmp_tuple_element_16 );
            PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_16 );
            CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
            tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 40;
            tmp_assign_source_35 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_9, tmp_kw_name_9 );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_name_9 );
            if ( tmp_assign_source_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;

                goto try_except_handler_13;
            }
            assert( tmp_class_creation_5__prepared == NULL );
            tmp_class_creation_5__prepared = tmp_assign_source_35;
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_operand_name_5;
            PyObject *tmp_source_name_19;
            CHECK_OBJECT( tmp_class_creation_5__prepared );
            tmp_source_name_19 = tmp_class_creation_5__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_19, const_str_plain___getitem__ );
            tmp_operand_name_5 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;

                goto try_except_handler_13;
            }
            tmp_condition_result_20 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_15;
            }
            else
            {
                goto branch_no_15;
            }
            branch_yes_15:;
            {
                PyObject *tmp_raise_type_5;
                PyObject *tmp_raise_value_5;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                PyObject *tmp_tuple_element_17;
                PyObject *tmp_getattr_target_5;
                PyObject *tmp_getattr_attr_5;
                PyObject *tmp_getattr_default_5;
                PyObject *tmp_source_name_20;
                PyObject *tmp_type_arg_9;
                tmp_raise_type_5 = PyExc_TypeError;
                tmp_left_name_5 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_5__metaclass );
                tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
                tmp_getattr_attr_5 = const_str_plain___name__;
                tmp_getattr_default_5 = const_str_angle_metaclass;
                tmp_tuple_element_17 = BUILTIN_GETATTR( tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5 );
                if ( tmp_tuple_element_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 40;

                    goto try_except_handler_13;
                }
                tmp_right_name_5 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_5, 0, tmp_tuple_element_17 );
                CHECK_OBJECT( tmp_class_creation_5__prepared );
                tmp_type_arg_9 = tmp_class_creation_5__prepared;
                tmp_source_name_20 = BUILTIN_TYPE1( tmp_type_arg_9 );
                assert( !(tmp_source_name_20 == NULL) );
                tmp_tuple_element_17 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_20 );
                if ( tmp_tuple_element_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_5 );

                    exception_lineno = 40;

                    goto try_except_handler_13;
                }
                PyTuple_SET_ITEM( tmp_right_name_5, 1, tmp_tuple_element_17 );
                tmp_raise_value_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_right_name_5 );
                if ( tmp_raise_value_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 40;

                    goto try_except_handler_13;
                }
                exception_type = tmp_raise_type_5;
                Py_INCREF( tmp_raise_type_5 );
                exception_value = tmp_raise_value_5;
                exception_lineno = 40;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_13;
            }
            branch_no_15:;
        }
        goto branch_end_14;
        branch_no_14:;
        {
            PyObject *tmp_assign_source_36;
            tmp_assign_source_36 = PyDict_New();
            assert( tmp_class_creation_5__prepared == NULL );
            tmp_class_creation_5__prepared = tmp_assign_source_36;
        }
        branch_end_14:;
    }
    {
        PyObject *tmp_assign_source_37;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT( tmp_class_creation_5__prepared );
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_requests$exceptions_40 = tmp_set_locals_5;
            Py_INCREF( tmp_set_locals_5 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_40, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_15;
        }
        tmp_dictset_value = const_str_digest_35d6e09b700b272e1f4429814168031d;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_40, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_15;
        }
        tmp_dictset_value = const_str_plain_SSLError;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_40, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_15;
        }
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_name_10;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kw_name_10;
            CHECK_OBJECT( tmp_class_creation_5__metaclass );
            tmp_called_name_10 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_18 = const_str_plain_SSLError;
            tmp_args_name_10 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_18 );
            PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_18 );
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_tuple_element_18 = tmp_class_creation_5__bases;
            Py_INCREF( tmp_tuple_element_18 );
            PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_18 );
            tmp_tuple_element_18 = locals_requests$exceptions_40;
            Py_INCREF( tmp_tuple_element_18 );
            PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_18 );
            CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
            tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 40;
            tmp_assign_source_38 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_10, tmp_kw_name_10 );
            Py_DECREF( tmp_args_name_10 );
            if ( tmp_assign_source_38 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;

                goto try_except_handler_15;
            }
            assert( outline_4_var___class__ == NULL );
            outline_4_var___class__ = tmp_assign_source_38;
        }
        CHECK_OBJECT( outline_4_var___class__ );
        tmp_assign_source_37 = outline_4_var___class__;
        Py_INCREF( tmp_assign_source_37 );
        goto try_return_handler_15;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF( locals_requests$exceptions_40 );
        locals_requests$exceptions_40 = NULL;
        goto try_return_handler_14;
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

        Py_DECREF( locals_requests$exceptions_40 );
        locals_requests$exceptions_40 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
        Py_DECREF( outline_4_var___class__ );
        outline_4_var___class__ = NULL;

        goto outline_result_5;
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

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_5:;
        exception_lineno = 40;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_SSLError, tmp_assign_source_37 );
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_decl_dict );
    Py_DECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__prepared );
    Py_DECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 44;

            goto try_except_handler_16;
        }

        tmp_tuple_element_19 = tmp_mvar_value_7;
        tmp_assign_source_39 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_19 );
        PyTuple_SET_ITEM( tmp_assign_source_39, 0, tmp_tuple_element_19 );
        assert( tmp_class_creation_6__bases == NULL );
        tmp_class_creation_6__bases = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = PyDict_New();
        assert( tmp_class_creation_6__class_decl_dict == NULL );
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_metaclass_name_6;
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_key_name_16;
        PyObject *tmp_dict_name_16;
        PyObject *tmp_dict_name_17;
        PyObject *tmp_key_name_17;
        PyObject *tmp_type_arg_10;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_bases_name_6;
        tmp_key_name_16 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
        tmp_dict_name_16 = tmp_class_creation_6__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_16, tmp_key_name_16 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto try_except_handler_16;
        }
        tmp_condition_result_21 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_6;
        }
        else
        {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
        tmp_dict_name_17 = tmp_class_creation_6__class_decl_dict;
        tmp_key_name_17 = const_str_plain_metaclass;
        tmp_metaclass_name_6 = DICT_GET_ITEM( tmp_dict_name_17, tmp_key_name_17 );
        if ( tmp_metaclass_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto try_except_handler_16;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        CHECK_OBJECT( tmp_class_creation_6__bases );
        tmp_subscribed_name_5 = tmp_class_creation_6__bases;
        tmp_subscript_name_5 = const_int_0;
        tmp_type_arg_10 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
        if ( tmp_type_arg_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto try_except_handler_16;
        }
        tmp_metaclass_name_6 = BUILTIN_TYPE1( tmp_type_arg_10 );
        Py_DECREF( tmp_type_arg_10 );
        if ( tmp_metaclass_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto try_except_handler_16;
        }
        condexpr_end_6:;
        CHECK_OBJECT( tmp_class_creation_6__bases );
        tmp_bases_name_6 = tmp_class_creation_6__bases;
        tmp_assign_source_41 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
        Py_DECREF( tmp_metaclass_name_6 );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto try_except_handler_16;
        }
        assert( tmp_class_creation_6__metaclass == NULL );
        tmp_class_creation_6__metaclass = tmp_assign_source_41;
    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_key_name_18;
        PyObject *tmp_dict_name_18;
        tmp_key_name_18 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
        tmp_dict_name_18 = tmp_class_creation_6__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_18, tmp_key_name_18 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto try_except_handler_16;
        }
        tmp_condition_result_22 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_16;
        }
        else
        {
            goto branch_no_16;
        }
        branch_yes_16:;
        CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto try_except_handler_16;
        }
        branch_no_16:;
    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_source_name_21;
        CHECK_OBJECT( tmp_class_creation_6__metaclass );
        tmp_source_name_21 = tmp_class_creation_6__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_21, const_str_plain___prepare__ );
        tmp_condition_result_23 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_23 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_17;
        }
        else
        {
            goto branch_no_17;
        }
        branch_yes_17:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_22;
            PyObject *tmp_args_name_11;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kw_name_11;
            CHECK_OBJECT( tmp_class_creation_6__metaclass );
            tmp_source_name_22 = tmp_class_creation_6__metaclass;
            tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain___prepare__ );
            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;

                goto try_except_handler_16;
            }
            tmp_tuple_element_20 = const_str_plain_Timeout;
            tmp_args_name_11 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_20 );
            PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_20 );
            CHECK_OBJECT( tmp_class_creation_6__bases );
            tmp_tuple_element_20 = tmp_class_creation_6__bases;
            Py_INCREF( tmp_tuple_element_20 );
            PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_20 );
            CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
            tmp_kw_name_11 = tmp_class_creation_6__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 44;
            tmp_assign_source_42 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_11, tmp_kw_name_11 );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_args_name_11 );
            if ( tmp_assign_source_42 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;

                goto try_except_handler_16;
            }
            assert( tmp_class_creation_6__prepared == NULL );
            tmp_class_creation_6__prepared = tmp_assign_source_42;
        }
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_operand_name_6;
            PyObject *tmp_source_name_23;
            CHECK_OBJECT( tmp_class_creation_6__prepared );
            tmp_source_name_23 = tmp_class_creation_6__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_23, const_str_plain___getitem__ );
            tmp_operand_name_6 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;

                goto try_except_handler_16;
            }
            tmp_condition_result_24 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_24 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_18;
            }
            else
            {
                goto branch_no_18;
            }
            branch_yes_18:;
            {
                PyObject *tmp_raise_type_6;
                PyObject *tmp_raise_value_6;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                PyObject *tmp_tuple_element_21;
                PyObject *tmp_getattr_target_6;
                PyObject *tmp_getattr_attr_6;
                PyObject *tmp_getattr_default_6;
                PyObject *tmp_source_name_24;
                PyObject *tmp_type_arg_11;
                tmp_raise_type_6 = PyExc_TypeError;
                tmp_left_name_6 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_6__metaclass );
                tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
                tmp_getattr_attr_6 = const_str_plain___name__;
                tmp_getattr_default_6 = const_str_angle_metaclass;
                tmp_tuple_element_21 = BUILTIN_GETATTR( tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6 );
                if ( tmp_tuple_element_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 44;

                    goto try_except_handler_16;
                }
                tmp_right_name_6 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_6, 0, tmp_tuple_element_21 );
                CHECK_OBJECT( tmp_class_creation_6__prepared );
                tmp_type_arg_11 = tmp_class_creation_6__prepared;
                tmp_source_name_24 = BUILTIN_TYPE1( tmp_type_arg_11 );
                assert( !(tmp_source_name_24 == NULL) );
                tmp_tuple_element_21 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_24 );
                if ( tmp_tuple_element_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_6 );

                    exception_lineno = 44;

                    goto try_except_handler_16;
                }
                PyTuple_SET_ITEM( tmp_right_name_6, 1, tmp_tuple_element_21 );
                tmp_raise_value_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_right_name_6 );
                if ( tmp_raise_value_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 44;

                    goto try_except_handler_16;
                }
                exception_type = tmp_raise_type_6;
                Py_INCREF( tmp_raise_type_6 );
                exception_value = tmp_raise_value_6;
                exception_lineno = 44;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_16;
            }
            branch_no_18:;
        }
        goto branch_end_17;
        branch_no_17:;
        {
            PyObject *tmp_assign_source_43;
            tmp_assign_source_43 = PyDict_New();
            assert( tmp_class_creation_6__prepared == NULL );
            tmp_class_creation_6__prepared = tmp_assign_source_43;
        }
        branch_end_17:;
    }
    {
        PyObject *tmp_assign_source_44;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT( tmp_class_creation_6__prepared );
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_requests$exceptions_44 = tmp_set_locals_6;
            Py_INCREF( tmp_set_locals_6 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_44, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto try_except_handler_18;
        }
        tmp_dictset_value = const_str_digest_34a451307fc6aab1649478fed3307568;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_44, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto try_except_handler_18;
        }
        tmp_dictset_value = const_str_plain_Timeout;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_44, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto try_except_handler_18;
        }
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_name_12;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_kw_name_12;
            CHECK_OBJECT( tmp_class_creation_6__metaclass );
            tmp_called_name_12 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_22 = const_str_plain_Timeout;
            tmp_args_name_12 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_22 );
            PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_22 );
            CHECK_OBJECT( tmp_class_creation_6__bases );
            tmp_tuple_element_22 = tmp_class_creation_6__bases;
            Py_INCREF( tmp_tuple_element_22 );
            PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_22 );
            tmp_tuple_element_22 = locals_requests$exceptions_44;
            Py_INCREF( tmp_tuple_element_22 );
            PyTuple_SET_ITEM( tmp_args_name_12, 2, tmp_tuple_element_22 );
            CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
            tmp_kw_name_12 = tmp_class_creation_6__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 44;
            tmp_assign_source_45 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_12, tmp_kw_name_12 );
            Py_DECREF( tmp_args_name_12 );
            if ( tmp_assign_source_45 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;

                goto try_except_handler_18;
            }
            assert( outline_5_var___class__ == NULL );
            outline_5_var___class__ = tmp_assign_source_45;
        }
        CHECK_OBJECT( outline_5_var___class__ );
        tmp_assign_source_44 = outline_5_var___class__;
        Py_INCREF( tmp_assign_source_44 );
        goto try_return_handler_18;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF( locals_requests$exceptions_44 );
        locals_requests$exceptions_44 = NULL;
        goto try_return_handler_17;
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

        Py_DECREF( locals_requests$exceptions_44 );
        locals_requests$exceptions_44 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT( (PyObject *)outline_5_var___class__ );
        Py_DECREF( outline_5_var___class__ );
        outline_5_var___class__ = NULL;

        goto outline_result_6;
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

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_6:;
        exception_lineno = 44;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Timeout, tmp_assign_source_44 );
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases );
    Py_DECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_decl_dict );
    Py_DECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__prepared );
    Py_DECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectionError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 53;

            goto try_except_handler_19;
        }

        tmp_tuple_element_23 = tmp_mvar_value_8;
        tmp_assign_source_46 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_23 );
        PyTuple_SET_ITEM( tmp_assign_source_46, 0, tmp_tuple_element_23 );
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Timeout );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Timeout );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_assign_source_46 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Timeout" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 53;

            goto try_except_handler_19;
        }

        tmp_tuple_element_23 = tmp_mvar_value_9;
        Py_INCREF( tmp_tuple_element_23 );
        PyTuple_SET_ITEM( tmp_assign_source_46, 1, tmp_tuple_element_23 );
        assert( tmp_class_creation_7__bases == NULL );
        tmp_class_creation_7__bases = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = PyDict_New();
        assert( tmp_class_creation_7__class_decl_dict == NULL );
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_metaclass_name_7;
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_key_name_19;
        PyObject *tmp_dict_name_19;
        PyObject *tmp_dict_name_20;
        PyObject *tmp_key_name_20;
        PyObject *tmp_type_arg_12;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_bases_name_7;
        tmp_key_name_19 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
        tmp_dict_name_19 = tmp_class_creation_7__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_19, tmp_key_name_19 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_19;
        }
        tmp_condition_result_25 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_25 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_7;
        }
        else
        {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
        tmp_dict_name_20 = tmp_class_creation_7__class_decl_dict;
        tmp_key_name_20 = const_str_plain_metaclass;
        tmp_metaclass_name_7 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
        if ( tmp_metaclass_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_19;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT( tmp_class_creation_7__bases );
        tmp_subscribed_name_6 = tmp_class_creation_7__bases;
        tmp_subscript_name_6 = const_int_0;
        tmp_type_arg_12 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
        if ( tmp_type_arg_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_19;
        }
        tmp_metaclass_name_7 = BUILTIN_TYPE1( tmp_type_arg_12 );
        Py_DECREF( tmp_type_arg_12 );
        if ( tmp_metaclass_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_19;
        }
        condexpr_end_7:;
        CHECK_OBJECT( tmp_class_creation_7__bases );
        tmp_bases_name_7 = tmp_class_creation_7__bases;
        tmp_assign_source_48 = SELECT_METACLASS( tmp_metaclass_name_7, tmp_bases_name_7 );
        Py_DECREF( tmp_metaclass_name_7 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_19;
        }
        assert( tmp_class_creation_7__metaclass == NULL );
        tmp_class_creation_7__metaclass = tmp_assign_source_48;
    }
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_key_name_21;
        PyObject *tmp_dict_name_21;
        tmp_key_name_21 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
        tmp_dict_name_21 = tmp_class_creation_7__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_21, tmp_key_name_21 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_19;
        }
        tmp_condition_result_26 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_26 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_19;
        }
        else
        {
            goto branch_no_19;
        }
        branch_yes_19:;
        CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_19;
        }
        branch_no_19:;
    }
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_source_name_25;
        CHECK_OBJECT( tmp_class_creation_7__metaclass );
        tmp_source_name_25 = tmp_class_creation_7__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_25, const_str_plain___prepare__ );
        tmp_condition_result_27 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_27 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_20;
        }
        else
        {
            goto branch_no_20;
        }
        branch_yes_20:;
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_called_name_13;
            PyObject *tmp_source_name_26;
            PyObject *tmp_args_name_13;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kw_name_13;
            CHECK_OBJECT( tmp_class_creation_7__metaclass );
            tmp_source_name_26 = tmp_class_creation_7__metaclass;
            tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain___prepare__ );
            if ( tmp_called_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;

                goto try_except_handler_19;
            }
            tmp_tuple_element_24 = const_str_plain_ConnectTimeout;
            tmp_args_name_13 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_24 );
            PyTuple_SET_ITEM( tmp_args_name_13, 0, tmp_tuple_element_24 );
            CHECK_OBJECT( tmp_class_creation_7__bases );
            tmp_tuple_element_24 = tmp_class_creation_7__bases;
            Py_INCREF( tmp_tuple_element_24 );
            PyTuple_SET_ITEM( tmp_args_name_13, 1, tmp_tuple_element_24 );
            CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
            tmp_kw_name_13 = tmp_class_creation_7__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 53;
            tmp_assign_source_49 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_13, tmp_kw_name_13 );
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_name_13 );
            if ( tmp_assign_source_49 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;

                goto try_except_handler_19;
            }
            assert( tmp_class_creation_7__prepared == NULL );
            tmp_class_creation_7__prepared = tmp_assign_source_49;
        }
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_operand_name_7;
            PyObject *tmp_source_name_27;
            CHECK_OBJECT( tmp_class_creation_7__prepared );
            tmp_source_name_27 = tmp_class_creation_7__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_27, const_str_plain___getitem__ );
            tmp_operand_name_7 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;

                goto try_except_handler_19;
            }
            tmp_condition_result_28 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_28 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_21;
            }
            else
            {
                goto branch_no_21;
            }
            branch_yes_21:;
            {
                PyObject *tmp_raise_type_7;
                PyObject *tmp_raise_value_7;
                PyObject *tmp_left_name_7;
                PyObject *tmp_right_name_7;
                PyObject *tmp_tuple_element_25;
                PyObject *tmp_getattr_target_7;
                PyObject *tmp_getattr_attr_7;
                PyObject *tmp_getattr_default_7;
                PyObject *tmp_source_name_28;
                PyObject *tmp_type_arg_13;
                tmp_raise_type_7 = PyExc_TypeError;
                tmp_left_name_7 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_7__metaclass );
                tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
                tmp_getattr_attr_7 = const_str_plain___name__;
                tmp_getattr_default_7 = const_str_angle_metaclass;
                tmp_tuple_element_25 = BUILTIN_GETATTR( tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7 );
                if ( tmp_tuple_element_25 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 53;

                    goto try_except_handler_19;
                }
                tmp_right_name_7 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_7, 0, tmp_tuple_element_25 );
                CHECK_OBJECT( tmp_class_creation_7__prepared );
                tmp_type_arg_13 = tmp_class_creation_7__prepared;
                tmp_source_name_28 = BUILTIN_TYPE1( tmp_type_arg_13 );
                assert( !(tmp_source_name_28 == NULL) );
                tmp_tuple_element_25 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_28 );
                if ( tmp_tuple_element_25 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_7 );

                    exception_lineno = 53;

                    goto try_except_handler_19;
                }
                PyTuple_SET_ITEM( tmp_right_name_7, 1, tmp_tuple_element_25 );
                tmp_raise_value_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
                Py_DECREF( tmp_right_name_7 );
                if ( tmp_raise_value_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 53;

                    goto try_except_handler_19;
                }
                exception_type = tmp_raise_type_7;
                Py_INCREF( tmp_raise_type_7 );
                exception_value = tmp_raise_value_7;
                exception_lineno = 53;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_19;
            }
            branch_no_21:;
        }
        goto branch_end_20;
        branch_no_20:;
        {
            PyObject *tmp_assign_source_50;
            tmp_assign_source_50 = PyDict_New();
            assert( tmp_class_creation_7__prepared == NULL );
            tmp_class_creation_7__prepared = tmp_assign_source_50;
        }
        branch_end_20:;
    }
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT( tmp_class_creation_7__prepared );
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_requests$exceptions_53 = tmp_set_locals_7;
            Py_INCREF( tmp_set_locals_7 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_53, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_21;
        }
        tmp_dictset_value = const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_53, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_21;
        }
        tmp_dictset_value = const_str_plain_ConnectTimeout;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_53, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_21;
        }
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_name_14;
            PyObject *tmp_args_name_14;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_kw_name_14;
            CHECK_OBJECT( tmp_class_creation_7__metaclass );
            tmp_called_name_14 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_26 = const_str_plain_ConnectTimeout;
            tmp_args_name_14 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_26 );
            PyTuple_SET_ITEM( tmp_args_name_14, 0, tmp_tuple_element_26 );
            CHECK_OBJECT( tmp_class_creation_7__bases );
            tmp_tuple_element_26 = tmp_class_creation_7__bases;
            Py_INCREF( tmp_tuple_element_26 );
            PyTuple_SET_ITEM( tmp_args_name_14, 1, tmp_tuple_element_26 );
            tmp_tuple_element_26 = locals_requests$exceptions_53;
            Py_INCREF( tmp_tuple_element_26 );
            PyTuple_SET_ITEM( tmp_args_name_14, 2, tmp_tuple_element_26 );
            CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
            tmp_kw_name_14 = tmp_class_creation_7__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 53;
            tmp_assign_source_52 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_14, tmp_kw_name_14 );
            Py_DECREF( tmp_args_name_14 );
            if ( tmp_assign_source_52 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;

                goto try_except_handler_21;
            }
            assert( outline_6_var___class__ == NULL );
            outline_6_var___class__ = tmp_assign_source_52;
        }
        CHECK_OBJECT( outline_6_var___class__ );
        tmp_assign_source_51 = outline_6_var___class__;
        Py_INCREF( tmp_assign_source_51 );
        goto try_return_handler_21;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF( locals_requests$exceptions_53 );
        locals_requests$exceptions_53 = NULL;
        goto try_return_handler_20;
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

        Py_DECREF( locals_requests$exceptions_53 );
        locals_requests$exceptions_53 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_20;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT( (PyObject *)outline_6_var___class__ );
        Py_DECREF( outline_6_var___class__ );
        outline_6_var___class__ = NULL;

        goto outline_result_7;
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

        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_7;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_7:;
        exception_lineno = 53;
        goto try_except_handler_19;
        outline_result_7:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectTimeout, tmp_assign_source_51 );
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__bases );
    Py_DECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_decl_dict );
    Py_DECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__prepared );
    Py_DECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Timeout );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Timeout );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Timeout" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 60;

            goto try_except_handler_22;
        }

        tmp_tuple_element_27 = tmp_mvar_value_10;
        tmp_assign_source_53 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_27 );
        PyTuple_SET_ITEM( tmp_assign_source_53, 0, tmp_tuple_element_27 );
        assert( tmp_class_creation_8__bases == NULL );
        tmp_class_creation_8__bases = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = PyDict_New();
        assert( tmp_class_creation_8__class_decl_dict == NULL );
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_metaclass_name_8;
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_key_name_22;
        PyObject *tmp_dict_name_22;
        PyObject *tmp_dict_name_23;
        PyObject *tmp_key_name_23;
        PyObject *tmp_type_arg_14;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_bases_name_8;
        tmp_key_name_22 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
        tmp_dict_name_22 = tmp_class_creation_8__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_22, tmp_key_name_22 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto try_except_handler_22;
        }
        tmp_condition_result_29 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_29 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_8;
        }
        else
        {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
        tmp_dict_name_23 = tmp_class_creation_8__class_decl_dict;
        tmp_key_name_23 = const_str_plain_metaclass;
        tmp_metaclass_name_8 = DICT_GET_ITEM( tmp_dict_name_23, tmp_key_name_23 );
        if ( tmp_metaclass_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto try_except_handler_22;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        CHECK_OBJECT( tmp_class_creation_8__bases );
        tmp_subscribed_name_7 = tmp_class_creation_8__bases;
        tmp_subscript_name_7 = const_int_0;
        tmp_type_arg_14 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 0 );
        if ( tmp_type_arg_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto try_except_handler_22;
        }
        tmp_metaclass_name_8 = BUILTIN_TYPE1( tmp_type_arg_14 );
        Py_DECREF( tmp_type_arg_14 );
        if ( tmp_metaclass_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto try_except_handler_22;
        }
        condexpr_end_8:;
        CHECK_OBJECT( tmp_class_creation_8__bases );
        tmp_bases_name_8 = tmp_class_creation_8__bases;
        tmp_assign_source_55 = SELECT_METACLASS( tmp_metaclass_name_8, tmp_bases_name_8 );
        Py_DECREF( tmp_metaclass_name_8 );
        if ( tmp_assign_source_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto try_except_handler_22;
        }
        assert( tmp_class_creation_8__metaclass == NULL );
        tmp_class_creation_8__metaclass = tmp_assign_source_55;
    }
    {
        nuitka_bool tmp_condition_result_30;
        PyObject *tmp_key_name_24;
        PyObject *tmp_dict_name_24;
        tmp_key_name_24 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
        tmp_dict_name_24 = tmp_class_creation_8__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_24, tmp_key_name_24 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto try_except_handler_22;
        }
        tmp_condition_result_30 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_30 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_22;
        }
        else
        {
            goto branch_no_22;
        }
        branch_yes_22:;
        CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto try_except_handler_22;
        }
        branch_no_22:;
    }
    {
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_source_name_29;
        CHECK_OBJECT( tmp_class_creation_8__metaclass );
        tmp_source_name_29 = tmp_class_creation_8__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_29, const_str_plain___prepare__ );
        tmp_condition_result_31 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_31 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_23;
        }
        else
        {
            goto branch_no_23;
        }
        branch_yes_23:;
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_called_name_15;
            PyObject *tmp_source_name_30;
            PyObject *tmp_args_name_15;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_kw_name_15;
            CHECK_OBJECT( tmp_class_creation_8__metaclass );
            tmp_source_name_30 = tmp_class_creation_8__metaclass;
            tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain___prepare__ );
            if ( tmp_called_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;

                goto try_except_handler_22;
            }
            tmp_tuple_element_28 = const_str_plain_ReadTimeout;
            tmp_args_name_15 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_28 );
            PyTuple_SET_ITEM( tmp_args_name_15, 0, tmp_tuple_element_28 );
            CHECK_OBJECT( tmp_class_creation_8__bases );
            tmp_tuple_element_28 = tmp_class_creation_8__bases;
            Py_INCREF( tmp_tuple_element_28 );
            PyTuple_SET_ITEM( tmp_args_name_15, 1, tmp_tuple_element_28 );
            CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
            tmp_kw_name_15 = tmp_class_creation_8__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 60;
            tmp_assign_source_56 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_15, tmp_kw_name_15 );
            Py_DECREF( tmp_called_name_15 );
            Py_DECREF( tmp_args_name_15 );
            if ( tmp_assign_source_56 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;

                goto try_except_handler_22;
            }
            assert( tmp_class_creation_8__prepared == NULL );
            tmp_class_creation_8__prepared = tmp_assign_source_56;
        }
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_operand_name_8;
            PyObject *tmp_source_name_31;
            CHECK_OBJECT( tmp_class_creation_8__prepared );
            tmp_source_name_31 = tmp_class_creation_8__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_31, const_str_plain___getitem__ );
            tmp_operand_name_8 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;

                goto try_except_handler_22;
            }
            tmp_condition_result_32 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_32 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_24;
            }
            else
            {
                goto branch_no_24;
            }
            branch_yes_24:;
            {
                PyObject *tmp_raise_type_8;
                PyObject *tmp_raise_value_8;
                PyObject *tmp_left_name_8;
                PyObject *tmp_right_name_8;
                PyObject *tmp_tuple_element_29;
                PyObject *tmp_getattr_target_8;
                PyObject *tmp_getattr_attr_8;
                PyObject *tmp_getattr_default_8;
                PyObject *tmp_source_name_32;
                PyObject *tmp_type_arg_15;
                tmp_raise_type_8 = PyExc_TypeError;
                tmp_left_name_8 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_8__metaclass );
                tmp_getattr_target_8 = tmp_class_creation_8__metaclass;
                tmp_getattr_attr_8 = const_str_plain___name__;
                tmp_getattr_default_8 = const_str_angle_metaclass;
                tmp_tuple_element_29 = BUILTIN_GETATTR( tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8 );
                if ( tmp_tuple_element_29 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 60;

                    goto try_except_handler_22;
                }
                tmp_right_name_8 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_8, 0, tmp_tuple_element_29 );
                CHECK_OBJECT( tmp_class_creation_8__prepared );
                tmp_type_arg_15 = tmp_class_creation_8__prepared;
                tmp_source_name_32 = BUILTIN_TYPE1( tmp_type_arg_15 );
                assert( !(tmp_source_name_32 == NULL) );
                tmp_tuple_element_29 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_32 );
                if ( tmp_tuple_element_29 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_8 );

                    exception_lineno = 60;

                    goto try_except_handler_22;
                }
                PyTuple_SET_ITEM( tmp_right_name_8, 1, tmp_tuple_element_29 );
                tmp_raise_value_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_8, tmp_right_name_8 );
                Py_DECREF( tmp_right_name_8 );
                if ( tmp_raise_value_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 60;

                    goto try_except_handler_22;
                }
                exception_type = tmp_raise_type_8;
                Py_INCREF( tmp_raise_type_8 );
                exception_value = tmp_raise_value_8;
                exception_lineno = 60;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_22;
            }
            branch_no_24:;
        }
        goto branch_end_23;
        branch_no_23:;
        {
            PyObject *tmp_assign_source_57;
            tmp_assign_source_57 = PyDict_New();
            assert( tmp_class_creation_8__prepared == NULL );
            tmp_class_creation_8__prepared = tmp_assign_source_57;
        }
        branch_end_23:;
    }
    {
        PyObject *tmp_assign_source_58;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT( tmp_class_creation_8__prepared );
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_requests$exceptions_60 = tmp_set_locals_8;
            Py_INCREF( tmp_set_locals_8 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_60, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto try_except_handler_24;
        }
        tmp_dictset_value = const_str_digest_b8f960a38723097fb701d7986528073c;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_60, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto try_except_handler_24;
        }
        tmp_dictset_value = const_str_plain_ReadTimeout;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_60, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto try_except_handler_24;
        }
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_called_name_16;
            PyObject *tmp_args_name_16;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_kw_name_16;
            CHECK_OBJECT( tmp_class_creation_8__metaclass );
            tmp_called_name_16 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_30 = const_str_plain_ReadTimeout;
            tmp_args_name_16 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_30 );
            PyTuple_SET_ITEM( tmp_args_name_16, 0, tmp_tuple_element_30 );
            CHECK_OBJECT( tmp_class_creation_8__bases );
            tmp_tuple_element_30 = tmp_class_creation_8__bases;
            Py_INCREF( tmp_tuple_element_30 );
            PyTuple_SET_ITEM( tmp_args_name_16, 1, tmp_tuple_element_30 );
            tmp_tuple_element_30 = locals_requests$exceptions_60;
            Py_INCREF( tmp_tuple_element_30 );
            PyTuple_SET_ITEM( tmp_args_name_16, 2, tmp_tuple_element_30 );
            CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
            tmp_kw_name_16 = tmp_class_creation_8__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 60;
            tmp_assign_source_59 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_16, tmp_kw_name_16 );
            Py_DECREF( tmp_args_name_16 );
            if ( tmp_assign_source_59 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;

                goto try_except_handler_24;
            }
            assert( outline_7_var___class__ == NULL );
            outline_7_var___class__ = tmp_assign_source_59;
        }
        CHECK_OBJECT( outline_7_var___class__ );
        tmp_assign_source_58 = outline_7_var___class__;
        Py_INCREF( tmp_assign_source_58 );
        goto try_return_handler_24;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF( locals_requests$exceptions_60 );
        locals_requests$exceptions_60 = NULL;
        goto try_return_handler_23;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_requests$exceptions_60 );
        locals_requests$exceptions_60 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_23;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_23:;
        CHECK_OBJECT( (PyObject *)outline_7_var___class__ );
        Py_DECREF( outline_7_var___class__ );
        outline_7_var___class__ = NULL;

        goto outline_result_8;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto outline_exception_8;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_8:;
        exception_lineno = 60;
        goto try_except_handler_22;
        outline_result_8:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ReadTimeout, tmp_assign_source_58 );
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__bases );
    Py_DECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_decl_dict );
    Py_DECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__metaclass );
    Py_DECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__prepared );
    Py_DECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 64;

            goto try_except_handler_25;
        }

        tmp_tuple_element_31 = tmp_mvar_value_11;
        tmp_assign_source_60 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_31 );
        PyTuple_SET_ITEM( tmp_assign_source_60, 0, tmp_tuple_element_31 );
        assert( tmp_class_creation_9__bases == NULL );
        tmp_class_creation_9__bases = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = PyDict_New();
        assert( tmp_class_creation_9__class_decl_dict == NULL );
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_metaclass_name_9;
        nuitka_bool tmp_condition_result_33;
        PyObject *tmp_key_name_25;
        PyObject *tmp_dict_name_25;
        PyObject *tmp_dict_name_26;
        PyObject *tmp_key_name_26;
        PyObject *tmp_type_arg_16;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_bases_name_9;
        tmp_key_name_25 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_9__class_decl_dict );
        tmp_dict_name_25 = tmp_class_creation_9__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_25, tmp_key_name_25 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_25;
        }
        tmp_condition_result_33 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_33 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_9;
        }
        else
        {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT( tmp_class_creation_9__class_decl_dict );
        tmp_dict_name_26 = tmp_class_creation_9__class_decl_dict;
        tmp_key_name_26 = const_str_plain_metaclass;
        tmp_metaclass_name_9 = DICT_GET_ITEM( tmp_dict_name_26, tmp_key_name_26 );
        if ( tmp_metaclass_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_25;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        CHECK_OBJECT( tmp_class_creation_9__bases );
        tmp_subscribed_name_8 = tmp_class_creation_9__bases;
        tmp_subscript_name_8 = const_int_0;
        tmp_type_arg_16 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, 0 );
        if ( tmp_type_arg_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_25;
        }
        tmp_metaclass_name_9 = BUILTIN_TYPE1( tmp_type_arg_16 );
        Py_DECREF( tmp_type_arg_16 );
        if ( tmp_metaclass_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_25;
        }
        condexpr_end_9:;
        CHECK_OBJECT( tmp_class_creation_9__bases );
        tmp_bases_name_9 = tmp_class_creation_9__bases;
        tmp_assign_source_62 = SELECT_METACLASS( tmp_metaclass_name_9, tmp_bases_name_9 );
        Py_DECREF( tmp_metaclass_name_9 );
        if ( tmp_assign_source_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_25;
        }
        assert( tmp_class_creation_9__metaclass == NULL );
        tmp_class_creation_9__metaclass = tmp_assign_source_62;
    }
    {
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_key_name_27;
        PyObject *tmp_dict_name_27;
        tmp_key_name_27 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_9__class_decl_dict );
        tmp_dict_name_27 = tmp_class_creation_9__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_27, tmp_key_name_27 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_25;
        }
        tmp_condition_result_34 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_34 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_25;
        }
        else
        {
            goto branch_no_25;
        }
        branch_yes_25:;
        CHECK_OBJECT( tmp_class_creation_9__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_25;
        }
        branch_no_25:;
    }
    {
        nuitka_bool tmp_condition_result_35;
        PyObject *tmp_source_name_33;
        CHECK_OBJECT( tmp_class_creation_9__metaclass );
        tmp_source_name_33 = tmp_class_creation_9__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_33, const_str_plain___prepare__ );
        tmp_condition_result_35 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_35 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_26;
        }
        else
        {
            goto branch_no_26;
        }
        branch_yes_26:;
        {
            PyObject *tmp_assign_source_63;
            PyObject *tmp_called_name_17;
            PyObject *tmp_source_name_34;
            PyObject *tmp_args_name_17;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_kw_name_17;
            CHECK_OBJECT( tmp_class_creation_9__metaclass );
            tmp_source_name_34 = tmp_class_creation_9__metaclass;
            tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain___prepare__ );
            if ( tmp_called_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

                goto try_except_handler_25;
            }
            tmp_tuple_element_32 = const_str_plain_URLRequired;
            tmp_args_name_17 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_32 );
            PyTuple_SET_ITEM( tmp_args_name_17, 0, tmp_tuple_element_32 );
            CHECK_OBJECT( tmp_class_creation_9__bases );
            tmp_tuple_element_32 = tmp_class_creation_9__bases;
            Py_INCREF( tmp_tuple_element_32 );
            PyTuple_SET_ITEM( tmp_args_name_17, 1, tmp_tuple_element_32 );
            CHECK_OBJECT( tmp_class_creation_9__class_decl_dict );
            tmp_kw_name_17 = tmp_class_creation_9__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 64;
            tmp_assign_source_63 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_17, tmp_kw_name_17 );
            Py_DECREF( tmp_called_name_17 );
            Py_DECREF( tmp_args_name_17 );
            if ( tmp_assign_source_63 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

                goto try_except_handler_25;
            }
            assert( tmp_class_creation_9__prepared == NULL );
            tmp_class_creation_9__prepared = tmp_assign_source_63;
        }
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_operand_name_9;
            PyObject *tmp_source_name_35;
            CHECK_OBJECT( tmp_class_creation_9__prepared );
            tmp_source_name_35 = tmp_class_creation_9__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_35, const_str_plain___getitem__ );
            tmp_operand_name_9 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_9 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

                goto try_except_handler_25;
            }
            tmp_condition_result_36 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_36 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_27;
            }
            else
            {
                goto branch_no_27;
            }
            branch_yes_27:;
            {
                PyObject *tmp_raise_type_9;
                PyObject *tmp_raise_value_9;
                PyObject *tmp_left_name_9;
                PyObject *tmp_right_name_9;
                PyObject *tmp_tuple_element_33;
                PyObject *tmp_getattr_target_9;
                PyObject *tmp_getattr_attr_9;
                PyObject *tmp_getattr_default_9;
                PyObject *tmp_source_name_36;
                PyObject *tmp_type_arg_17;
                tmp_raise_type_9 = PyExc_TypeError;
                tmp_left_name_9 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_9__metaclass );
                tmp_getattr_target_9 = tmp_class_creation_9__metaclass;
                tmp_getattr_attr_9 = const_str_plain___name__;
                tmp_getattr_default_9 = const_str_angle_metaclass;
                tmp_tuple_element_33 = BUILTIN_GETATTR( tmp_getattr_target_9, tmp_getattr_attr_9, tmp_getattr_default_9 );
                if ( tmp_tuple_element_33 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 64;

                    goto try_except_handler_25;
                }
                tmp_right_name_9 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_9, 0, tmp_tuple_element_33 );
                CHECK_OBJECT( tmp_class_creation_9__prepared );
                tmp_type_arg_17 = tmp_class_creation_9__prepared;
                tmp_source_name_36 = BUILTIN_TYPE1( tmp_type_arg_17 );
                assert( !(tmp_source_name_36 == NULL) );
                tmp_tuple_element_33 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_36 );
                if ( tmp_tuple_element_33 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_9 );

                    exception_lineno = 64;

                    goto try_except_handler_25;
                }
                PyTuple_SET_ITEM( tmp_right_name_9, 1, tmp_tuple_element_33 );
                tmp_raise_value_9 = BINARY_OPERATION_REMAINDER( tmp_left_name_9, tmp_right_name_9 );
                Py_DECREF( tmp_right_name_9 );
                if ( tmp_raise_value_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 64;

                    goto try_except_handler_25;
                }
                exception_type = tmp_raise_type_9;
                Py_INCREF( tmp_raise_type_9 );
                exception_value = tmp_raise_value_9;
                exception_lineno = 64;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_25;
            }
            branch_no_27:;
        }
        goto branch_end_26;
        branch_no_26:;
        {
            PyObject *tmp_assign_source_64;
            tmp_assign_source_64 = PyDict_New();
            assert( tmp_class_creation_9__prepared == NULL );
            tmp_class_creation_9__prepared = tmp_assign_source_64;
        }
        branch_end_26:;
    }
    {
        PyObject *tmp_assign_source_65;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT( tmp_class_creation_9__prepared );
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_requests$exceptions_64 = tmp_set_locals_9;
            Py_INCREF( tmp_set_locals_9 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_64, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_27;
        }
        tmp_dictset_value = const_str_digest_841f485de6d4157389a41ea63dc14155;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_64, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_27;
        }
        tmp_dictset_value = const_str_plain_URLRequired;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_64, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_27;
        }
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_called_name_18;
            PyObject *tmp_args_name_18;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_kw_name_18;
            CHECK_OBJECT( tmp_class_creation_9__metaclass );
            tmp_called_name_18 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_34 = const_str_plain_URLRequired;
            tmp_args_name_18 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_34 );
            PyTuple_SET_ITEM( tmp_args_name_18, 0, tmp_tuple_element_34 );
            CHECK_OBJECT( tmp_class_creation_9__bases );
            tmp_tuple_element_34 = tmp_class_creation_9__bases;
            Py_INCREF( tmp_tuple_element_34 );
            PyTuple_SET_ITEM( tmp_args_name_18, 1, tmp_tuple_element_34 );
            tmp_tuple_element_34 = locals_requests$exceptions_64;
            Py_INCREF( tmp_tuple_element_34 );
            PyTuple_SET_ITEM( tmp_args_name_18, 2, tmp_tuple_element_34 );
            CHECK_OBJECT( tmp_class_creation_9__class_decl_dict );
            tmp_kw_name_18 = tmp_class_creation_9__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 64;
            tmp_assign_source_66 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_18, tmp_kw_name_18 );
            Py_DECREF( tmp_args_name_18 );
            if ( tmp_assign_source_66 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

                goto try_except_handler_27;
            }
            assert( outline_8_var___class__ == NULL );
            outline_8_var___class__ = tmp_assign_source_66;
        }
        CHECK_OBJECT( outline_8_var___class__ );
        tmp_assign_source_65 = outline_8_var___class__;
        Py_INCREF( tmp_assign_source_65 );
        goto try_return_handler_27;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF( locals_requests$exceptions_64 );
        locals_requests$exceptions_64 = NULL;
        goto try_return_handler_26;
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

        Py_DECREF( locals_requests$exceptions_64 );
        locals_requests$exceptions_64 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto try_except_handler_26;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_26:;
        CHECK_OBJECT( (PyObject *)outline_8_var___class__ );
        Py_DECREF( outline_8_var___class__ );
        outline_8_var___class__ = NULL;

        goto outline_result_9;
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

        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto outline_exception_9;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_9:;
        exception_lineno = 64;
        goto try_except_handler_25;
        outline_result_9:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_URLRequired, tmp_assign_source_65 );
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__bases );
    Py_DECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_decl_dict );
    Py_DECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__metaclass );
    Py_DECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__prepared );
    Py_DECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 68;

            goto try_except_handler_28;
        }

        tmp_tuple_element_35 = tmp_mvar_value_12;
        tmp_assign_source_67 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_35 );
        PyTuple_SET_ITEM( tmp_assign_source_67, 0, tmp_tuple_element_35 );
        assert( tmp_class_creation_10__bases == NULL );
        tmp_class_creation_10__bases = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = PyDict_New();
        assert( tmp_class_creation_10__class_decl_dict == NULL );
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_metaclass_name_10;
        nuitka_bool tmp_condition_result_37;
        PyObject *tmp_key_name_28;
        PyObject *tmp_dict_name_28;
        PyObject *tmp_dict_name_29;
        PyObject *tmp_key_name_29;
        PyObject *tmp_type_arg_18;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_bases_name_10;
        tmp_key_name_28 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_10__class_decl_dict );
        tmp_dict_name_28 = tmp_class_creation_10__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_28, tmp_key_name_28 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;

            goto try_except_handler_28;
        }
        tmp_condition_result_37 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_37 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_10;
        }
        else
        {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT( tmp_class_creation_10__class_decl_dict );
        tmp_dict_name_29 = tmp_class_creation_10__class_decl_dict;
        tmp_key_name_29 = const_str_plain_metaclass;
        tmp_metaclass_name_10 = DICT_GET_ITEM( tmp_dict_name_29, tmp_key_name_29 );
        if ( tmp_metaclass_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;

            goto try_except_handler_28;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        CHECK_OBJECT( tmp_class_creation_10__bases );
        tmp_subscribed_name_9 = tmp_class_creation_10__bases;
        tmp_subscript_name_9 = const_int_0;
        tmp_type_arg_18 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_9, tmp_subscript_name_9, 0 );
        if ( tmp_type_arg_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;

            goto try_except_handler_28;
        }
        tmp_metaclass_name_10 = BUILTIN_TYPE1( tmp_type_arg_18 );
        Py_DECREF( tmp_type_arg_18 );
        if ( tmp_metaclass_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;

            goto try_except_handler_28;
        }
        condexpr_end_10:;
        CHECK_OBJECT( tmp_class_creation_10__bases );
        tmp_bases_name_10 = tmp_class_creation_10__bases;
        tmp_assign_source_69 = SELECT_METACLASS( tmp_metaclass_name_10, tmp_bases_name_10 );
        Py_DECREF( tmp_metaclass_name_10 );
        if ( tmp_assign_source_69 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;

            goto try_except_handler_28;
        }
        assert( tmp_class_creation_10__metaclass == NULL );
        tmp_class_creation_10__metaclass = tmp_assign_source_69;
    }
    {
        nuitka_bool tmp_condition_result_38;
        PyObject *tmp_key_name_30;
        PyObject *tmp_dict_name_30;
        tmp_key_name_30 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_10__class_decl_dict );
        tmp_dict_name_30 = tmp_class_creation_10__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_30, tmp_key_name_30 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;

            goto try_except_handler_28;
        }
        tmp_condition_result_38 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_38 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_28;
        }
        else
        {
            goto branch_no_28;
        }
        branch_yes_28:;
        CHECK_OBJECT( tmp_class_creation_10__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_10__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;

            goto try_except_handler_28;
        }
        branch_no_28:;
    }
    {
        nuitka_bool tmp_condition_result_39;
        PyObject *tmp_source_name_37;
        CHECK_OBJECT( tmp_class_creation_10__metaclass );
        tmp_source_name_37 = tmp_class_creation_10__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_37, const_str_plain___prepare__ );
        tmp_condition_result_39 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_39 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_29;
        }
        else
        {
            goto branch_no_29;
        }
        branch_yes_29:;
        {
            PyObject *tmp_assign_source_70;
            PyObject *tmp_called_name_19;
            PyObject *tmp_source_name_38;
            PyObject *tmp_args_name_19;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_kw_name_19;
            CHECK_OBJECT( tmp_class_creation_10__metaclass );
            tmp_source_name_38 = tmp_class_creation_10__metaclass;
            tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain___prepare__ );
            if ( tmp_called_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;

                goto try_except_handler_28;
            }
            tmp_tuple_element_36 = const_str_plain_TooManyRedirects;
            tmp_args_name_19 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_36 );
            PyTuple_SET_ITEM( tmp_args_name_19, 0, tmp_tuple_element_36 );
            CHECK_OBJECT( tmp_class_creation_10__bases );
            tmp_tuple_element_36 = tmp_class_creation_10__bases;
            Py_INCREF( tmp_tuple_element_36 );
            PyTuple_SET_ITEM( tmp_args_name_19, 1, tmp_tuple_element_36 );
            CHECK_OBJECT( tmp_class_creation_10__class_decl_dict );
            tmp_kw_name_19 = tmp_class_creation_10__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 68;
            tmp_assign_source_70 = CALL_FUNCTION( tmp_called_name_19, tmp_args_name_19, tmp_kw_name_19 );
            Py_DECREF( tmp_called_name_19 );
            Py_DECREF( tmp_args_name_19 );
            if ( tmp_assign_source_70 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;

                goto try_except_handler_28;
            }
            assert( tmp_class_creation_10__prepared == NULL );
            tmp_class_creation_10__prepared = tmp_assign_source_70;
        }
        {
            nuitka_bool tmp_condition_result_40;
            PyObject *tmp_operand_name_10;
            PyObject *tmp_source_name_39;
            CHECK_OBJECT( tmp_class_creation_10__prepared );
            tmp_source_name_39 = tmp_class_creation_10__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_39, const_str_plain___getitem__ );
            tmp_operand_name_10 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_10 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;

                goto try_except_handler_28;
            }
            tmp_condition_result_40 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_40 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_30;
            }
            else
            {
                goto branch_no_30;
            }
            branch_yes_30:;
            {
                PyObject *tmp_raise_type_10;
                PyObject *tmp_raise_value_10;
                PyObject *tmp_left_name_10;
                PyObject *tmp_right_name_10;
                PyObject *tmp_tuple_element_37;
                PyObject *tmp_getattr_target_10;
                PyObject *tmp_getattr_attr_10;
                PyObject *tmp_getattr_default_10;
                PyObject *tmp_source_name_40;
                PyObject *tmp_type_arg_19;
                tmp_raise_type_10 = PyExc_TypeError;
                tmp_left_name_10 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_10__metaclass );
                tmp_getattr_target_10 = tmp_class_creation_10__metaclass;
                tmp_getattr_attr_10 = const_str_plain___name__;
                tmp_getattr_default_10 = const_str_angle_metaclass;
                tmp_tuple_element_37 = BUILTIN_GETATTR( tmp_getattr_target_10, tmp_getattr_attr_10, tmp_getattr_default_10 );
                if ( tmp_tuple_element_37 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 68;

                    goto try_except_handler_28;
                }
                tmp_right_name_10 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_10, 0, tmp_tuple_element_37 );
                CHECK_OBJECT( tmp_class_creation_10__prepared );
                tmp_type_arg_19 = tmp_class_creation_10__prepared;
                tmp_source_name_40 = BUILTIN_TYPE1( tmp_type_arg_19 );
                assert( !(tmp_source_name_40 == NULL) );
                tmp_tuple_element_37 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_40 );
                if ( tmp_tuple_element_37 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_10 );

                    exception_lineno = 68;

                    goto try_except_handler_28;
                }
                PyTuple_SET_ITEM( tmp_right_name_10, 1, tmp_tuple_element_37 );
                tmp_raise_value_10 = BINARY_OPERATION_REMAINDER( tmp_left_name_10, tmp_right_name_10 );
                Py_DECREF( tmp_right_name_10 );
                if ( tmp_raise_value_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 68;

                    goto try_except_handler_28;
                }
                exception_type = tmp_raise_type_10;
                Py_INCREF( tmp_raise_type_10 );
                exception_value = tmp_raise_value_10;
                exception_lineno = 68;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_28;
            }
            branch_no_30:;
        }
        goto branch_end_29;
        branch_no_29:;
        {
            PyObject *tmp_assign_source_71;
            tmp_assign_source_71 = PyDict_New();
            assert( tmp_class_creation_10__prepared == NULL );
            tmp_class_creation_10__prepared = tmp_assign_source_71;
        }
        branch_end_29:;
    }
    {
        PyObject *tmp_assign_source_72;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT( tmp_class_creation_10__prepared );
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_requests$exceptions_68 = tmp_set_locals_10;
            Py_INCREF( tmp_set_locals_10 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_68, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;

            goto try_except_handler_30;
        }
        tmp_dictset_value = const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_68, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;

            goto try_except_handler_30;
        }
        tmp_dictset_value = const_str_plain_TooManyRedirects;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_68, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;

            goto try_except_handler_30;
        }
        {
            PyObject *tmp_assign_source_73;
            PyObject *tmp_called_name_20;
            PyObject *tmp_args_name_20;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_kw_name_20;
            CHECK_OBJECT( tmp_class_creation_10__metaclass );
            tmp_called_name_20 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_38 = const_str_plain_TooManyRedirects;
            tmp_args_name_20 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_38 );
            PyTuple_SET_ITEM( tmp_args_name_20, 0, tmp_tuple_element_38 );
            CHECK_OBJECT( tmp_class_creation_10__bases );
            tmp_tuple_element_38 = tmp_class_creation_10__bases;
            Py_INCREF( tmp_tuple_element_38 );
            PyTuple_SET_ITEM( tmp_args_name_20, 1, tmp_tuple_element_38 );
            tmp_tuple_element_38 = locals_requests$exceptions_68;
            Py_INCREF( tmp_tuple_element_38 );
            PyTuple_SET_ITEM( tmp_args_name_20, 2, tmp_tuple_element_38 );
            CHECK_OBJECT( tmp_class_creation_10__class_decl_dict );
            tmp_kw_name_20 = tmp_class_creation_10__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 68;
            tmp_assign_source_73 = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_20, tmp_kw_name_20 );
            Py_DECREF( tmp_args_name_20 );
            if ( tmp_assign_source_73 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;

                goto try_except_handler_30;
            }
            assert( outline_9_var___class__ == NULL );
            outline_9_var___class__ = tmp_assign_source_73;
        }
        CHECK_OBJECT( outline_9_var___class__ );
        tmp_assign_source_72 = outline_9_var___class__;
        Py_INCREF( tmp_assign_source_72 );
        goto try_return_handler_30;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_30:;
        Py_DECREF( locals_requests$exceptions_68 );
        locals_requests$exceptions_68 = NULL;
        goto try_return_handler_29;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_requests$exceptions_68 );
        locals_requests$exceptions_68 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto try_except_handler_29;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_29:;
        CHECK_OBJECT( (PyObject *)outline_9_var___class__ );
        Py_DECREF( outline_9_var___class__ );
        outline_9_var___class__ = NULL;

        goto outline_result_10;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto outline_exception_10;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_10:;
        exception_lineno = 68;
        goto try_except_handler_28;
        outline_result_10:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_TooManyRedirects, tmp_assign_source_72 );
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_class_creation_10__class_decl_dict );
    tmp_class_creation_10__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_10__prepared );
    tmp_class_creation_10__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__bases );
    Py_DECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__class_decl_dict );
    Py_DECREF( tmp_class_creation_10__class_decl_dict );
    tmp_class_creation_10__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__metaclass );
    Py_DECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__prepared );
    Py_DECREF( tmp_class_creation_10__prepared );
    tmp_class_creation_10__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_tuple_element_39;
        PyObject *tmp_mvar_value_13;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 72;

            goto try_except_handler_31;
        }

        tmp_tuple_element_39 = tmp_mvar_value_13;
        tmp_assign_source_74 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_39 );
        PyTuple_SET_ITEM( tmp_assign_source_74, 0, tmp_tuple_element_39 );
        tmp_tuple_element_39 = PyExc_ValueError;
        Py_INCREF( tmp_tuple_element_39 );
        PyTuple_SET_ITEM( tmp_assign_source_74, 1, tmp_tuple_element_39 );
        assert( tmp_class_creation_11__bases == NULL );
        tmp_class_creation_11__bases = tmp_assign_source_74;
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = PyDict_New();
        assert( tmp_class_creation_11__class_decl_dict == NULL );
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_metaclass_name_11;
        nuitka_bool tmp_condition_result_41;
        PyObject *tmp_key_name_31;
        PyObject *tmp_dict_name_31;
        PyObject *tmp_dict_name_32;
        PyObject *tmp_key_name_32;
        PyObject *tmp_type_arg_20;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_bases_name_11;
        tmp_key_name_31 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_11__class_decl_dict );
        tmp_dict_name_31 = tmp_class_creation_11__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_31, tmp_key_name_31 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_31;
        }
        tmp_condition_result_41 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_41 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_11;
        }
        else
        {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT( tmp_class_creation_11__class_decl_dict );
        tmp_dict_name_32 = tmp_class_creation_11__class_decl_dict;
        tmp_key_name_32 = const_str_plain_metaclass;
        tmp_metaclass_name_11 = DICT_GET_ITEM( tmp_dict_name_32, tmp_key_name_32 );
        if ( tmp_metaclass_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_31;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        CHECK_OBJECT( tmp_class_creation_11__bases );
        tmp_subscribed_name_10 = tmp_class_creation_11__bases;
        tmp_subscript_name_10 = const_int_0;
        tmp_type_arg_20 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_10, tmp_subscript_name_10, 0 );
        if ( tmp_type_arg_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_31;
        }
        tmp_metaclass_name_11 = BUILTIN_TYPE1( tmp_type_arg_20 );
        Py_DECREF( tmp_type_arg_20 );
        if ( tmp_metaclass_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_31;
        }
        condexpr_end_11:;
        CHECK_OBJECT( tmp_class_creation_11__bases );
        tmp_bases_name_11 = tmp_class_creation_11__bases;
        tmp_assign_source_76 = SELECT_METACLASS( tmp_metaclass_name_11, tmp_bases_name_11 );
        Py_DECREF( tmp_metaclass_name_11 );
        if ( tmp_assign_source_76 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_31;
        }
        assert( tmp_class_creation_11__metaclass == NULL );
        tmp_class_creation_11__metaclass = tmp_assign_source_76;
    }
    {
        nuitka_bool tmp_condition_result_42;
        PyObject *tmp_key_name_33;
        PyObject *tmp_dict_name_33;
        tmp_key_name_33 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_11__class_decl_dict );
        tmp_dict_name_33 = tmp_class_creation_11__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_33, tmp_key_name_33 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_31;
        }
        tmp_condition_result_42 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_42 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_31;
        }
        else
        {
            goto branch_no_31;
        }
        branch_yes_31:;
        CHECK_OBJECT( tmp_class_creation_11__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_11__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_31;
        }
        branch_no_31:;
    }
    {
        nuitka_bool tmp_condition_result_43;
        PyObject *tmp_source_name_41;
        CHECK_OBJECT( tmp_class_creation_11__metaclass );
        tmp_source_name_41 = tmp_class_creation_11__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_41, const_str_plain___prepare__ );
        tmp_condition_result_43 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_43 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_32;
        }
        else
        {
            goto branch_no_32;
        }
        branch_yes_32:;
        {
            PyObject *tmp_assign_source_77;
            PyObject *tmp_called_name_21;
            PyObject *tmp_source_name_42;
            PyObject *tmp_args_name_21;
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_kw_name_21;
            CHECK_OBJECT( tmp_class_creation_11__metaclass );
            tmp_source_name_42 = tmp_class_creation_11__metaclass;
            tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain___prepare__ );
            if ( tmp_called_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_31;
            }
            tmp_tuple_element_40 = const_str_plain_MissingSchema;
            tmp_args_name_21 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_40 );
            PyTuple_SET_ITEM( tmp_args_name_21, 0, tmp_tuple_element_40 );
            CHECK_OBJECT( tmp_class_creation_11__bases );
            tmp_tuple_element_40 = tmp_class_creation_11__bases;
            Py_INCREF( tmp_tuple_element_40 );
            PyTuple_SET_ITEM( tmp_args_name_21, 1, tmp_tuple_element_40 );
            CHECK_OBJECT( tmp_class_creation_11__class_decl_dict );
            tmp_kw_name_21 = tmp_class_creation_11__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 72;
            tmp_assign_source_77 = CALL_FUNCTION( tmp_called_name_21, tmp_args_name_21, tmp_kw_name_21 );
            Py_DECREF( tmp_called_name_21 );
            Py_DECREF( tmp_args_name_21 );
            if ( tmp_assign_source_77 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_31;
            }
            assert( tmp_class_creation_11__prepared == NULL );
            tmp_class_creation_11__prepared = tmp_assign_source_77;
        }
        {
            nuitka_bool tmp_condition_result_44;
            PyObject *tmp_operand_name_11;
            PyObject *tmp_source_name_43;
            CHECK_OBJECT( tmp_class_creation_11__prepared );
            tmp_source_name_43 = tmp_class_creation_11__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_43, const_str_plain___getitem__ );
            tmp_operand_name_11 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_11 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_31;
            }
            tmp_condition_result_44 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_44 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_33;
            }
            else
            {
                goto branch_no_33;
            }
            branch_yes_33:;
            {
                PyObject *tmp_raise_type_11;
                PyObject *tmp_raise_value_11;
                PyObject *tmp_left_name_11;
                PyObject *tmp_right_name_11;
                PyObject *tmp_tuple_element_41;
                PyObject *tmp_getattr_target_11;
                PyObject *tmp_getattr_attr_11;
                PyObject *tmp_getattr_default_11;
                PyObject *tmp_source_name_44;
                PyObject *tmp_type_arg_21;
                tmp_raise_type_11 = PyExc_TypeError;
                tmp_left_name_11 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_11__metaclass );
                tmp_getattr_target_11 = tmp_class_creation_11__metaclass;
                tmp_getattr_attr_11 = const_str_plain___name__;
                tmp_getattr_default_11 = const_str_angle_metaclass;
                tmp_tuple_element_41 = BUILTIN_GETATTR( tmp_getattr_target_11, tmp_getattr_attr_11, tmp_getattr_default_11 );
                if ( tmp_tuple_element_41 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;

                    goto try_except_handler_31;
                }
                tmp_right_name_11 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_11, 0, tmp_tuple_element_41 );
                CHECK_OBJECT( tmp_class_creation_11__prepared );
                tmp_type_arg_21 = tmp_class_creation_11__prepared;
                tmp_source_name_44 = BUILTIN_TYPE1( tmp_type_arg_21 );
                assert( !(tmp_source_name_44 == NULL) );
                tmp_tuple_element_41 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_44 );
                if ( tmp_tuple_element_41 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_11 );

                    exception_lineno = 72;

                    goto try_except_handler_31;
                }
                PyTuple_SET_ITEM( tmp_right_name_11, 1, tmp_tuple_element_41 );
                tmp_raise_value_11 = BINARY_OPERATION_REMAINDER( tmp_left_name_11, tmp_right_name_11 );
                Py_DECREF( tmp_right_name_11 );
                if ( tmp_raise_value_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;

                    goto try_except_handler_31;
                }
                exception_type = tmp_raise_type_11;
                Py_INCREF( tmp_raise_type_11 );
                exception_value = tmp_raise_value_11;
                exception_lineno = 72;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_31;
            }
            branch_no_33:;
        }
        goto branch_end_32;
        branch_no_32:;
        {
            PyObject *tmp_assign_source_78;
            tmp_assign_source_78 = PyDict_New();
            assert( tmp_class_creation_11__prepared == NULL );
            tmp_class_creation_11__prepared = tmp_assign_source_78;
        }
        branch_end_32:;
    }
    {
        PyObject *tmp_assign_source_79;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT( tmp_class_creation_11__prepared );
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_requests$exceptions_72 = tmp_set_locals_11;
            Py_INCREF( tmp_set_locals_11 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_72, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_33;
        }
        tmp_dictset_value = const_str_digest_c7a80113e8376f2f52f7ee120f1360d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_72, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_33;
        }
        tmp_dictset_value = const_str_plain_MissingSchema;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_72, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_33;
        }
        {
            PyObject *tmp_assign_source_80;
            PyObject *tmp_called_name_22;
            PyObject *tmp_args_name_22;
            PyObject *tmp_tuple_element_42;
            PyObject *tmp_kw_name_22;
            CHECK_OBJECT( tmp_class_creation_11__metaclass );
            tmp_called_name_22 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_42 = const_str_plain_MissingSchema;
            tmp_args_name_22 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_42 );
            PyTuple_SET_ITEM( tmp_args_name_22, 0, tmp_tuple_element_42 );
            CHECK_OBJECT( tmp_class_creation_11__bases );
            tmp_tuple_element_42 = tmp_class_creation_11__bases;
            Py_INCREF( tmp_tuple_element_42 );
            PyTuple_SET_ITEM( tmp_args_name_22, 1, tmp_tuple_element_42 );
            tmp_tuple_element_42 = locals_requests$exceptions_72;
            Py_INCREF( tmp_tuple_element_42 );
            PyTuple_SET_ITEM( tmp_args_name_22, 2, tmp_tuple_element_42 );
            CHECK_OBJECT( tmp_class_creation_11__class_decl_dict );
            tmp_kw_name_22 = tmp_class_creation_11__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 72;
            tmp_assign_source_80 = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_22, tmp_kw_name_22 );
            Py_DECREF( tmp_args_name_22 );
            if ( tmp_assign_source_80 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_33;
            }
            assert( outline_10_var___class__ == NULL );
            outline_10_var___class__ = tmp_assign_source_80;
        }
        CHECK_OBJECT( outline_10_var___class__ );
        tmp_assign_source_79 = outline_10_var___class__;
        Py_INCREF( tmp_assign_source_79 );
        goto try_return_handler_33;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_33:;
        Py_DECREF( locals_requests$exceptions_72 );
        locals_requests$exceptions_72 = NULL;
        goto try_return_handler_32;
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

        Py_DECREF( locals_requests$exceptions_72 );
        locals_requests$exceptions_72 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto try_except_handler_32;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_32:;
        CHECK_OBJECT( (PyObject *)outline_10_var___class__ );
        Py_DECREF( outline_10_var___class__ );
        outline_10_var___class__ = NULL;

        goto outline_result_11;
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

        // Re-raise.
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;
        exception_lineno = exception_keeper_lineno_32;

        goto outline_exception_11;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_11:;
        exception_lineno = 72;
        goto try_except_handler_31;
        outline_result_11:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_MissingSchema, tmp_assign_source_79 );
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_11__bases );
    tmp_class_creation_11__bases = NULL;

    Py_XDECREF( tmp_class_creation_11__class_decl_dict );
    tmp_class_creation_11__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_11__prepared );
    tmp_class_creation_11__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__bases );
    Py_DECREF( tmp_class_creation_11__bases );
    tmp_class_creation_11__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__class_decl_dict );
    Py_DECREF( tmp_class_creation_11__class_decl_dict );
    tmp_class_creation_11__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__metaclass );
    Py_DECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__prepared );
    Py_DECREF( tmp_class_creation_11__prepared );
    tmp_class_creation_11__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_tuple_element_43;
        PyObject *tmp_mvar_value_14;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;

            goto try_except_handler_34;
        }

        tmp_tuple_element_43 = tmp_mvar_value_14;
        tmp_assign_source_81 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_43 );
        PyTuple_SET_ITEM( tmp_assign_source_81, 0, tmp_tuple_element_43 );
        tmp_tuple_element_43 = PyExc_ValueError;
        Py_INCREF( tmp_tuple_element_43 );
        PyTuple_SET_ITEM( tmp_assign_source_81, 1, tmp_tuple_element_43 );
        assert( tmp_class_creation_12__bases == NULL );
        tmp_class_creation_12__bases = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = PyDict_New();
        assert( tmp_class_creation_12__class_decl_dict == NULL );
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_82;
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_metaclass_name_12;
        nuitka_bool tmp_condition_result_45;
        PyObject *tmp_key_name_34;
        PyObject *tmp_dict_name_34;
        PyObject *tmp_dict_name_35;
        PyObject *tmp_key_name_35;
        PyObject *tmp_type_arg_22;
        PyObject *tmp_subscribed_name_11;
        PyObject *tmp_subscript_name_11;
        PyObject *tmp_bases_name_12;
        tmp_key_name_34 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_12__class_decl_dict );
        tmp_dict_name_34 = tmp_class_creation_12__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_34, tmp_key_name_34 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_34;
        }
        tmp_condition_result_45 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_45 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_12;
        }
        else
        {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT( tmp_class_creation_12__class_decl_dict );
        tmp_dict_name_35 = tmp_class_creation_12__class_decl_dict;
        tmp_key_name_35 = const_str_plain_metaclass;
        tmp_metaclass_name_12 = DICT_GET_ITEM( tmp_dict_name_35, tmp_key_name_35 );
        if ( tmp_metaclass_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_34;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        CHECK_OBJECT( tmp_class_creation_12__bases );
        tmp_subscribed_name_11 = tmp_class_creation_12__bases;
        tmp_subscript_name_11 = const_int_0;
        tmp_type_arg_22 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_11, tmp_subscript_name_11, 0 );
        if ( tmp_type_arg_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_34;
        }
        tmp_metaclass_name_12 = BUILTIN_TYPE1( tmp_type_arg_22 );
        Py_DECREF( tmp_type_arg_22 );
        if ( tmp_metaclass_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_34;
        }
        condexpr_end_12:;
        CHECK_OBJECT( tmp_class_creation_12__bases );
        tmp_bases_name_12 = tmp_class_creation_12__bases;
        tmp_assign_source_83 = SELECT_METACLASS( tmp_metaclass_name_12, tmp_bases_name_12 );
        Py_DECREF( tmp_metaclass_name_12 );
        if ( tmp_assign_source_83 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_34;
        }
        assert( tmp_class_creation_12__metaclass == NULL );
        tmp_class_creation_12__metaclass = tmp_assign_source_83;
    }
    {
        nuitka_bool tmp_condition_result_46;
        PyObject *tmp_key_name_36;
        PyObject *tmp_dict_name_36;
        tmp_key_name_36 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_12__class_decl_dict );
        tmp_dict_name_36 = tmp_class_creation_12__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_36, tmp_key_name_36 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_34;
        }
        tmp_condition_result_46 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_46 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_34;
        }
        else
        {
            goto branch_no_34;
        }
        branch_yes_34:;
        CHECK_OBJECT( tmp_class_creation_12__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_12__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_34;
        }
        branch_no_34:;
    }
    {
        nuitka_bool tmp_condition_result_47;
        PyObject *tmp_source_name_45;
        CHECK_OBJECT( tmp_class_creation_12__metaclass );
        tmp_source_name_45 = tmp_class_creation_12__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_45, const_str_plain___prepare__ );
        tmp_condition_result_47 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_47 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_35;
        }
        else
        {
            goto branch_no_35;
        }
        branch_yes_35:;
        {
            PyObject *tmp_assign_source_84;
            PyObject *tmp_called_name_23;
            PyObject *tmp_source_name_46;
            PyObject *tmp_args_name_23;
            PyObject *tmp_tuple_element_44;
            PyObject *tmp_kw_name_23;
            CHECK_OBJECT( tmp_class_creation_12__metaclass );
            tmp_source_name_46 = tmp_class_creation_12__metaclass;
            tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain___prepare__ );
            if ( tmp_called_name_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;

                goto try_except_handler_34;
            }
            tmp_tuple_element_44 = const_str_plain_InvalidSchema;
            tmp_args_name_23 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_44 );
            PyTuple_SET_ITEM( tmp_args_name_23, 0, tmp_tuple_element_44 );
            CHECK_OBJECT( tmp_class_creation_12__bases );
            tmp_tuple_element_44 = tmp_class_creation_12__bases;
            Py_INCREF( tmp_tuple_element_44 );
            PyTuple_SET_ITEM( tmp_args_name_23, 1, tmp_tuple_element_44 );
            CHECK_OBJECT( tmp_class_creation_12__class_decl_dict );
            tmp_kw_name_23 = tmp_class_creation_12__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 76;
            tmp_assign_source_84 = CALL_FUNCTION( tmp_called_name_23, tmp_args_name_23, tmp_kw_name_23 );
            Py_DECREF( tmp_called_name_23 );
            Py_DECREF( tmp_args_name_23 );
            if ( tmp_assign_source_84 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;

                goto try_except_handler_34;
            }
            assert( tmp_class_creation_12__prepared == NULL );
            tmp_class_creation_12__prepared = tmp_assign_source_84;
        }
        {
            nuitka_bool tmp_condition_result_48;
            PyObject *tmp_operand_name_12;
            PyObject *tmp_source_name_47;
            CHECK_OBJECT( tmp_class_creation_12__prepared );
            tmp_source_name_47 = tmp_class_creation_12__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_47, const_str_plain___getitem__ );
            tmp_operand_name_12 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_12 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;

                goto try_except_handler_34;
            }
            tmp_condition_result_48 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_48 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_36;
            }
            else
            {
                goto branch_no_36;
            }
            branch_yes_36:;
            {
                PyObject *tmp_raise_type_12;
                PyObject *tmp_raise_value_12;
                PyObject *tmp_left_name_12;
                PyObject *tmp_right_name_12;
                PyObject *tmp_tuple_element_45;
                PyObject *tmp_getattr_target_12;
                PyObject *tmp_getattr_attr_12;
                PyObject *tmp_getattr_default_12;
                PyObject *tmp_source_name_48;
                PyObject *tmp_type_arg_23;
                tmp_raise_type_12 = PyExc_TypeError;
                tmp_left_name_12 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_12__metaclass );
                tmp_getattr_target_12 = tmp_class_creation_12__metaclass;
                tmp_getattr_attr_12 = const_str_plain___name__;
                tmp_getattr_default_12 = const_str_angle_metaclass;
                tmp_tuple_element_45 = BUILTIN_GETATTR( tmp_getattr_target_12, tmp_getattr_attr_12, tmp_getattr_default_12 );
                if ( tmp_tuple_element_45 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 76;

                    goto try_except_handler_34;
                }
                tmp_right_name_12 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_12, 0, tmp_tuple_element_45 );
                CHECK_OBJECT( tmp_class_creation_12__prepared );
                tmp_type_arg_23 = tmp_class_creation_12__prepared;
                tmp_source_name_48 = BUILTIN_TYPE1( tmp_type_arg_23 );
                assert( !(tmp_source_name_48 == NULL) );
                tmp_tuple_element_45 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_48 );
                if ( tmp_tuple_element_45 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_12 );

                    exception_lineno = 76;

                    goto try_except_handler_34;
                }
                PyTuple_SET_ITEM( tmp_right_name_12, 1, tmp_tuple_element_45 );
                tmp_raise_value_12 = BINARY_OPERATION_REMAINDER( tmp_left_name_12, tmp_right_name_12 );
                Py_DECREF( tmp_right_name_12 );
                if ( tmp_raise_value_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 76;

                    goto try_except_handler_34;
                }
                exception_type = tmp_raise_type_12;
                Py_INCREF( tmp_raise_type_12 );
                exception_value = tmp_raise_value_12;
                exception_lineno = 76;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_34;
            }
            branch_no_36:;
        }
        goto branch_end_35;
        branch_no_35:;
        {
            PyObject *tmp_assign_source_85;
            tmp_assign_source_85 = PyDict_New();
            assert( tmp_class_creation_12__prepared == NULL );
            tmp_class_creation_12__prepared = tmp_assign_source_85;
        }
        branch_end_35:;
    }
    {
        PyObject *tmp_assign_source_86;
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT( tmp_class_creation_12__prepared );
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_requests$exceptions_76 = tmp_set_locals_12;
            Py_INCREF( tmp_set_locals_12 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_76, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_36;
        }
        tmp_dictset_value = const_str_digest_0689849403be684eb33eb3512cfc2389;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_76, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_36;
        }
        tmp_dictset_value = const_str_plain_InvalidSchema;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_76, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_36;
        }
        {
            PyObject *tmp_assign_source_87;
            PyObject *tmp_called_name_24;
            PyObject *tmp_args_name_24;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_kw_name_24;
            CHECK_OBJECT( tmp_class_creation_12__metaclass );
            tmp_called_name_24 = tmp_class_creation_12__metaclass;
            tmp_tuple_element_46 = const_str_plain_InvalidSchema;
            tmp_args_name_24 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_46 );
            PyTuple_SET_ITEM( tmp_args_name_24, 0, tmp_tuple_element_46 );
            CHECK_OBJECT( tmp_class_creation_12__bases );
            tmp_tuple_element_46 = tmp_class_creation_12__bases;
            Py_INCREF( tmp_tuple_element_46 );
            PyTuple_SET_ITEM( tmp_args_name_24, 1, tmp_tuple_element_46 );
            tmp_tuple_element_46 = locals_requests$exceptions_76;
            Py_INCREF( tmp_tuple_element_46 );
            PyTuple_SET_ITEM( tmp_args_name_24, 2, tmp_tuple_element_46 );
            CHECK_OBJECT( tmp_class_creation_12__class_decl_dict );
            tmp_kw_name_24 = tmp_class_creation_12__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 76;
            tmp_assign_source_87 = CALL_FUNCTION( tmp_called_name_24, tmp_args_name_24, tmp_kw_name_24 );
            Py_DECREF( tmp_args_name_24 );
            if ( tmp_assign_source_87 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;

                goto try_except_handler_36;
            }
            assert( outline_11_var___class__ == NULL );
            outline_11_var___class__ = tmp_assign_source_87;
        }
        CHECK_OBJECT( outline_11_var___class__ );
        tmp_assign_source_86 = outline_11_var___class__;
        Py_INCREF( tmp_assign_source_86 );
        goto try_return_handler_36;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_36:;
        Py_DECREF( locals_requests$exceptions_76 );
        locals_requests$exceptions_76 = NULL;
        goto try_return_handler_35;
        // Exception handler code:
        try_except_handler_36:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_requests$exceptions_76 );
        locals_requests$exceptions_76 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;
        exception_lineno = exception_keeper_lineno_34;

        goto try_except_handler_35;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_35:;
        CHECK_OBJECT( (PyObject *)outline_11_var___class__ );
        Py_DECREF( outline_11_var___class__ );
        outline_11_var___class__ = NULL;

        goto outline_result_12;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_35 = exception_type;
        exception_keeper_value_35 = exception_value;
        exception_keeper_tb_35 = exception_tb;
        exception_keeper_lineno_35 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;
        exception_lineno = exception_keeper_lineno_35;

        goto outline_exception_12;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_12:;
        exception_lineno = 76;
        goto try_except_handler_34;
        outline_result_12:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidSchema, tmp_assign_source_86 );
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_12__bases );
    tmp_class_creation_12__bases = NULL;

    Py_XDECREF( tmp_class_creation_12__class_decl_dict );
    tmp_class_creation_12__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_12__prepared );
    tmp_class_creation_12__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__bases );
    Py_DECREF( tmp_class_creation_12__bases );
    tmp_class_creation_12__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__class_decl_dict );
    Py_DECREF( tmp_class_creation_12__class_decl_dict );
    tmp_class_creation_12__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__metaclass );
    Py_DECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__prepared );
    Py_DECREF( tmp_class_creation_12__prepared );
    tmp_class_creation_12__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_tuple_element_47;
        PyObject *tmp_mvar_value_15;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 80;

            goto try_except_handler_37;
        }

        tmp_tuple_element_47 = tmp_mvar_value_15;
        tmp_assign_source_88 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_47 );
        PyTuple_SET_ITEM( tmp_assign_source_88, 0, tmp_tuple_element_47 );
        tmp_tuple_element_47 = PyExc_ValueError;
        Py_INCREF( tmp_tuple_element_47 );
        PyTuple_SET_ITEM( tmp_assign_source_88, 1, tmp_tuple_element_47 );
        assert( tmp_class_creation_13__bases == NULL );
        tmp_class_creation_13__bases = tmp_assign_source_88;
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = PyDict_New();
        assert( tmp_class_creation_13__class_decl_dict == NULL );
        tmp_class_creation_13__class_decl_dict = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_metaclass_name_13;
        nuitka_bool tmp_condition_result_49;
        PyObject *tmp_key_name_37;
        PyObject *tmp_dict_name_37;
        PyObject *tmp_dict_name_38;
        PyObject *tmp_key_name_38;
        PyObject *tmp_type_arg_24;
        PyObject *tmp_subscribed_name_12;
        PyObject *tmp_subscript_name_12;
        PyObject *tmp_bases_name_13;
        tmp_key_name_37 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_13__class_decl_dict );
        tmp_dict_name_37 = tmp_class_creation_13__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_37, tmp_key_name_37 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto try_except_handler_37;
        }
        tmp_condition_result_49 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_49 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_13;
        }
        else
        {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT( tmp_class_creation_13__class_decl_dict );
        tmp_dict_name_38 = tmp_class_creation_13__class_decl_dict;
        tmp_key_name_38 = const_str_plain_metaclass;
        tmp_metaclass_name_13 = DICT_GET_ITEM( tmp_dict_name_38, tmp_key_name_38 );
        if ( tmp_metaclass_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto try_except_handler_37;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        CHECK_OBJECT( tmp_class_creation_13__bases );
        tmp_subscribed_name_12 = tmp_class_creation_13__bases;
        tmp_subscript_name_12 = const_int_0;
        tmp_type_arg_24 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_12, tmp_subscript_name_12, 0 );
        if ( tmp_type_arg_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto try_except_handler_37;
        }
        tmp_metaclass_name_13 = BUILTIN_TYPE1( tmp_type_arg_24 );
        Py_DECREF( tmp_type_arg_24 );
        if ( tmp_metaclass_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto try_except_handler_37;
        }
        condexpr_end_13:;
        CHECK_OBJECT( tmp_class_creation_13__bases );
        tmp_bases_name_13 = tmp_class_creation_13__bases;
        tmp_assign_source_90 = SELECT_METACLASS( tmp_metaclass_name_13, tmp_bases_name_13 );
        Py_DECREF( tmp_metaclass_name_13 );
        if ( tmp_assign_source_90 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto try_except_handler_37;
        }
        assert( tmp_class_creation_13__metaclass == NULL );
        tmp_class_creation_13__metaclass = tmp_assign_source_90;
    }
    {
        nuitka_bool tmp_condition_result_50;
        PyObject *tmp_key_name_39;
        PyObject *tmp_dict_name_39;
        tmp_key_name_39 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_13__class_decl_dict );
        tmp_dict_name_39 = tmp_class_creation_13__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_39, tmp_key_name_39 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto try_except_handler_37;
        }
        tmp_condition_result_50 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_50 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_37;
        }
        else
        {
            goto branch_no_37;
        }
        branch_yes_37:;
        CHECK_OBJECT( tmp_class_creation_13__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_13__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto try_except_handler_37;
        }
        branch_no_37:;
    }
    {
        nuitka_bool tmp_condition_result_51;
        PyObject *tmp_source_name_49;
        CHECK_OBJECT( tmp_class_creation_13__metaclass );
        tmp_source_name_49 = tmp_class_creation_13__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_49, const_str_plain___prepare__ );
        tmp_condition_result_51 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_51 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_38;
        }
        else
        {
            goto branch_no_38;
        }
        branch_yes_38:;
        {
            PyObject *tmp_assign_source_91;
            PyObject *tmp_called_name_25;
            PyObject *tmp_source_name_50;
            PyObject *tmp_args_name_25;
            PyObject *tmp_tuple_element_48;
            PyObject *tmp_kw_name_25;
            CHECK_OBJECT( tmp_class_creation_13__metaclass );
            tmp_source_name_50 = tmp_class_creation_13__metaclass;
            tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain___prepare__ );
            if ( tmp_called_name_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;

                goto try_except_handler_37;
            }
            tmp_tuple_element_48 = const_str_plain_InvalidURL;
            tmp_args_name_25 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_48 );
            PyTuple_SET_ITEM( tmp_args_name_25, 0, tmp_tuple_element_48 );
            CHECK_OBJECT( tmp_class_creation_13__bases );
            tmp_tuple_element_48 = tmp_class_creation_13__bases;
            Py_INCREF( tmp_tuple_element_48 );
            PyTuple_SET_ITEM( tmp_args_name_25, 1, tmp_tuple_element_48 );
            CHECK_OBJECT( tmp_class_creation_13__class_decl_dict );
            tmp_kw_name_25 = tmp_class_creation_13__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 80;
            tmp_assign_source_91 = CALL_FUNCTION( tmp_called_name_25, tmp_args_name_25, tmp_kw_name_25 );
            Py_DECREF( tmp_called_name_25 );
            Py_DECREF( tmp_args_name_25 );
            if ( tmp_assign_source_91 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;

                goto try_except_handler_37;
            }
            assert( tmp_class_creation_13__prepared == NULL );
            tmp_class_creation_13__prepared = tmp_assign_source_91;
        }
        {
            nuitka_bool tmp_condition_result_52;
            PyObject *tmp_operand_name_13;
            PyObject *tmp_source_name_51;
            CHECK_OBJECT( tmp_class_creation_13__prepared );
            tmp_source_name_51 = tmp_class_creation_13__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_51, const_str_plain___getitem__ );
            tmp_operand_name_13 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_13 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;

                goto try_except_handler_37;
            }
            tmp_condition_result_52 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_52 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_39;
            }
            else
            {
                goto branch_no_39;
            }
            branch_yes_39:;
            {
                PyObject *tmp_raise_type_13;
                PyObject *tmp_raise_value_13;
                PyObject *tmp_left_name_13;
                PyObject *tmp_right_name_13;
                PyObject *tmp_tuple_element_49;
                PyObject *tmp_getattr_target_13;
                PyObject *tmp_getattr_attr_13;
                PyObject *tmp_getattr_default_13;
                PyObject *tmp_source_name_52;
                PyObject *tmp_type_arg_25;
                tmp_raise_type_13 = PyExc_TypeError;
                tmp_left_name_13 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_13__metaclass );
                tmp_getattr_target_13 = tmp_class_creation_13__metaclass;
                tmp_getattr_attr_13 = const_str_plain___name__;
                tmp_getattr_default_13 = const_str_angle_metaclass;
                tmp_tuple_element_49 = BUILTIN_GETATTR( tmp_getattr_target_13, tmp_getattr_attr_13, tmp_getattr_default_13 );
                if ( tmp_tuple_element_49 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 80;

                    goto try_except_handler_37;
                }
                tmp_right_name_13 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_13, 0, tmp_tuple_element_49 );
                CHECK_OBJECT( tmp_class_creation_13__prepared );
                tmp_type_arg_25 = tmp_class_creation_13__prepared;
                tmp_source_name_52 = BUILTIN_TYPE1( tmp_type_arg_25 );
                assert( !(tmp_source_name_52 == NULL) );
                tmp_tuple_element_49 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_52 );
                if ( tmp_tuple_element_49 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_13 );

                    exception_lineno = 80;

                    goto try_except_handler_37;
                }
                PyTuple_SET_ITEM( tmp_right_name_13, 1, tmp_tuple_element_49 );
                tmp_raise_value_13 = BINARY_OPERATION_REMAINDER( tmp_left_name_13, tmp_right_name_13 );
                Py_DECREF( tmp_right_name_13 );
                if ( tmp_raise_value_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 80;

                    goto try_except_handler_37;
                }
                exception_type = tmp_raise_type_13;
                Py_INCREF( tmp_raise_type_13 );
                exception_value = tmp_raise_value_13;
                exception_lineno = 80;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_37;
            }
            branch_no_39:;
        }
        goto branch_end_38;
        branch_no_38:;
        {
            PyObject *tmp_assign_source_92;
            tmp_assign_source_92 = PyDict_New();
            assert( tmp_class_creation_13__prepared == NULL );
            tmp_class_creation_13__prepared = tmp_assign_source_92;
        }
        branch_end_38:;
    }
    {
        PyObject *tmp_assign_source_93;
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT( tmp_class_creation_13__prepared );
            tmp_set_locals_13 = tmp_class_creation_13__prepared;
            locals_requests$exceptions_80 = tmp_set_locals_13;
            Py_INCREF( tmp_set_locals_13 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_80, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto try_except_handler_39;
        }
        tmp_dictset_value = const_str_digest_225332b778bf59fe5fff32593da4030a;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_80, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto try_except_handler_39;
        }
        tmp_dictset_value = const_str_plain_InvalidURL;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_80, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto try_except_handler_39;
        }
        {
            PyObject *tmp_assign_source_94;
            PyObject *tmp_called_name_26;
            PyObject *tmp_args_name_26;
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_kw_name_26;
            CHECK_OBJECT( tmp_class_creation_13__metaclass );
            tmp_called_name_26 = tmp_class_creation_13__metaclass;
            tmp_tuple_element_50 = const_str_plain_InvalidURL;
            tmp_args_name_26 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_50 );
            PyTuple_SET_ITEM( tmp_args_name_26, 0, tmp_tuple_element_50 );
            CHECK_OBJECT( tmp_class_creation_13__bases );
            tmp_tuple_element_50 = tmp_class_creation_13__bases;
            Py_INCREF( tmp_tuple_element_50 );
            PyTuple_SET_ITEM( tmp_args_name_26, 1, tmp_tuple_element_50 );
            tmp_tuple_element_50 = locals_requests$exceptions_80;
            Py_INCREF( tmp_tuple_element_50 );
            PyTuple_SET_ITEM( tmp_args_name_26, 2, tmp_tuple_element_50 );
            CHECK_OBJECT( tmp_class_creation_13__class_decl_dict );
            tmp_kw_name_26 = tmp_class_creation_13__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 80;
            tmp_assign_source_94 = CALL_FUNCTION( tmp_called_name_26, tmp_args_name_26, tmp_kw_name_26 );
            Py_DECREF( tmp_args_name_26 );
            if ( tmp_assign_source_94 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;

                goto try_except_handler_39;
            }
            assert( outline_12_var___class__ == NULL );
            outline_12_var___class__ = tmp_assign_source_94;
        }
        CHECK_OBJECT( outline_12_var___class__ );
        tmp_assign_source_93 = outline_12_var___class__;
        Py_INCREF( tmp_assign_source_93 );
        goto try_return_handler_39;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_39:;
        Py_DECREF( locals_requests$exceptions_80 );
        locals_requests$exceptions_80 = NULL;
        goto try_return_handler_38;
        // Exception handler code:
        try_except_handler_39:;
        exception_keeper_type_37 = exception_type;
        exception_keeper_value_37 = exception_value;
        exception_keeper_tb_37 = exception_tb;
        exception_keeper_lineno_37 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_requests$exceptions_80 );
        locals_requests$exceptions_80 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_37;
        exception_value = exception_keeper_value_37;
        exception_tb = exception_keeper_tb_37;
        exception_lineno = exception_keeper_lineno_37;

        goto try_except_handler_38;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_38:;
        CHECK_OBJECT( (PyObject *)outline_12_var___class__ );
        Py_DECREF( outline_12_var___class__ );
        outline_12_var___class__ = NULL;

        goto outline_result_13;
        // Exception handler code:
        try_except_handler_38:;
        exception_keeper_type_38 = exception_type;
        exception_keeper_value_38 = exception_value;
        exception_keeper_tb_38 = exception_tb;
        exception_keeper_lineno_38 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_38;
        exception_value = exception_keeper_value_38;
        exception_tb = exception_keeper_tb_38;
        exception_lineno = exception_keeper_lineno_38;

        goto outline_exception_13;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_13:;
        exception_lineno = 80;
        goto try_except_handler_37;
        outline_result_13:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidURL, tmp_assign_source_93 );
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_13__bases );
    tmp_class_creation_13__bases = NULL;

    Py_XDECREF( tmp_class_creation_13__class_decl_dict );
    tmp_class_creation_13__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_13__prepared );
    tmp_class_creation_13__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__bases );
    Py_DECREF( tmp_class_creation_13__bases );
    tmp_class_creation_13__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__class_decl_dict );
    Py_DECREF( tmp_class_creation_13__class_decl_dict );
    tmp_class_creation_13__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__metaclass );
    Py_DECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__prepared );
    Py_DECREF( tmp_class_creation_13__prepared );
    tmp_class_creation_13__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_tuple_element_51;
        PyObject *tmp_mvar_value_16;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 84;

            goto try_except_handler_40;
        }

        tmp_tuple_element_51 = tmp_mvar_value_16;
        tmp_assign_source_95 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_51 );
        PyTuple_SET_ITEM( tmp_assign_source_95, 0, tmp_tuple_element_51 );
        tmp_tuple_element_51 = PyExc_ValueError;
        Py_INCREF( tmp_tuple_element_51 );
        PyTuple_SET_ITEM( tmp_assign_source_95, 1, tmp_tuple_element_51 );
        assert( tmp_class_creation_14__bases == NULL );
        tmp_class_creation_14__bases = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = PyDict_New();
        assert( tmp_class_creation_14__class_decl_dict == NULL );
        tmp_class_creation_14__class_decl_dict = tmp_assign_source_96;
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_metaclass_name_14;
        nuitka_bool tmp_condition_result_53;
        PyObject *tmp_key_name_40;
        PyObject *tmp_dict_name_40;
        PyObject *tmp_dict_name_41;
        PyObject *tmp_key_name_41;
        PyObject *tmp_type_arg_26;
        PyObject *tmp_subscribed_name_13;
        PyObject *tmp_subscript_name_13;
        PyObject *tmp_bases_name_14;
        tmp_key_name_40 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_14__class_decl_dict );
        tmp_dict_name_40 = tmp_class_creation_14__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_40, tmp_key_name_40 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

            goto try_except_handler_40;
        }
        tmp_condition_result_53 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_53 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_14;
        }
        else
        {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT( tmp_class_creation_14__class_decl_dict );
        tmp_dict_name_41 = tmp_class_creation_14__class_decl_dict;
        tmp_key_name_41 = const_str_plain_metaclass;
        tmp_metaclass_name_14 = DICT_GET_ITEM( tmp_dict_name_41, tmp_key_name_41 );
        if ( tmp_metaclass_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

            goto try_except_handler_40;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        CHECK_OBJECT( tmp_class_creation_14__bases );
        tmp_subscribed_name_13 = tmp_class_creation_14__bases;
        tmp_subscript_name_13 = const_int_0;
        tmp_type_arg_26 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_13, tmp_subscript_name_13, 0 );
        if ( tmp_type_arg_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

            goto try_except_handler_40;
        }
        tmp_metaclass_name_14 = BUILTIN_TYPE1( tmp_type_arg_26 );
        Py_DECREF( tmp_type_arg_26 );
        if ( tmp_metaclass_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

            goto try_except_handler_40;
        }
        condexpr_end_14:;
        CHECK_OBJECT( tmp_class_creation_14__bases );
        tmp_bases_name_14 = tmp_class_creation_14__bases;
        tmp_assign_source_97 = SELECT_METACLASS( tmp_metaclass_name_14, tmp_bases_name_14 );
        Py_DECREF( tmp_metaclass_name_14 );
        if ( tmp_assign_source_97 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

            goto try_except_handler_40;
        }
        assert( tmp_class_creation_14__metaclass == NULL );
        tmp_class_creation_14__metaclass = tmp_assign_source_97;
    }
    {
        nuitka_bool tmp_condition_result_54;
        PyObject *tmp_key_name_42;
        PyObject *tmp_dict_name_42;
        tmp_key_name_42 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_14__class_decl_dict );
        tmp_dict_name_42 = tmp_class_creation_14__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_42, tmp_key_name_42 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

            goto try_except_handler_40;
        }
        tmp_condition_result_54 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_54 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_40;
        }
        else
        {
            goto branch_no_40;
        }
        branch_yes_40:;
        CHECK_OBJECT( tmp_class_creation_14__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_14__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

            goto try_except_handler_40;
        }
        branch_no_40:;
    }
    {
        nuitka_bool tmp_condition_result_55;
        PyObject *tmp_source_name_53;
        CHECK_OBJECT( tmp_class_creation_14__metaclass );
        tmp_source_name_53 = tmp_class_creation_14__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_53, const_str_plain___prepare__ );
        tmp_condition_result_55 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_55 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_41;
        }
        else
        {
            goto branch_no_41;
        }
        branch_yes_41:;
        {
            PyObject *tmp_assign_source_98;
            PyObject *tmp_called_name_27;
            PyObject *tmp_source_name_54;
            PyObject *tmp_args_name_27;
            PyObject *tmp_tuple_element_52;
            PyObject *tmp_kw_name_27;
            CHECK_OBJECT( tmp_class_creation_14__metaclass );
            tmp_source_name_54 = tmp_class_creation_14__metaclass;
            tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain___prepare__ );
            if ( tmp_called_name_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;

                goto try_except_handler_40;
            }
            tmp_tuple_element_52 = const_str_plain_InvalidHeader;
            tmp_args_name_27 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_52 );
            PyTuple_SET_ITEM( tmp_args_name_27, 0, tmp_tuple_element_52 );
            CHECK_OBJECT( tmp_class_creation_14__bases );
            tmp_tuple_element_52 = tmp_class_creation_14__bases;
            Py_INCREF( tmp_tuple_element_52 );
            PyTuple_SET_ITEM( tmp_args_name_27, 1, tmp_tuple_element_52 );
            CHECK_OBJECT( tmp_class_creation_14__class_decl_dict );
            tmp_kw_name_27 = tmp_class_creation_14__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 84;
            tmp_assign_source_98 = CALL_FUNCTION( tmp_called_name_27, tmp_args_name_27, tmp_kw_name_27 );
            Py_DECREF( tmp_called_name_27 );
            Py_DECREF( tmp_args_name_27 );
            if ( tmp_assign_source_98 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;

                goto try_except_handler_40;
            }
            assert( tmp_class_creation_14__prepared == NULL );
            tmp_class_creation_14__prepared = tmp_assign_source_98;
        }
        {
            nuitka_bool tmp_condition_result_56;
            PyObject *tmp_operand_name_14;
            PyObject *tmp_source_name_55;
            CHECK_OBJECT( tmp_class_creation_14__prepared );
            tmp_source_name_55 = tmp_class_creation_14__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_55, const_str_plain___getitem__ );
            tmp_operand_name_14 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_14 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;

                goto try_except_handler_40;
            }
            tmp_condition_result_56 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_56 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_42;
            }
            else
            {
                goto branch_no_42;
            }
            branch_yes_42:;
            {
                PyObject *tmp_raise_type_14;
                PyObject *tmp_raise_value_14;
                PyObject *tmp_left_name_14;
                PyObject *tmp_right_name_14;
                PyObject *tmp_tuple_element_53;
                PyObject *tmp_getattr_target_14;
                PyObject *tmp_getattr_attr_14;
                PyObject *tmp_getattr_default_14;
                PyObject *tmp_source_name_56;
                PyObject *tmp_type_arg_27;
                tmp_raise_type_14 = PyExc_TypeError;
                tmp_left_name_14 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_14__metaclass );
                tmp_getattr_target_14 = tmp_class_creation_14__metaclass;
                tmp_getattr_attr_14 = const_str_plain___name__;
                tmp_getattr_default_14 = const_str_angle_metaclass;
                tmp_tuple_element_53 = BUILTIN_GETATTR( tmp_getattr_target_14, tmp_getattr_attr_14, tmp_getattr_default_14 );
                if ( tmp_tuple_element_53 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 84;

                    goto try_except_handler_40;
                }
                tmp_right_name_14 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_14, 0, tmp_tuple_element_53 );
                CHECK_OBJECT( tmp_class_creation_14__prepared );
                tmp_type_arg_27 = tmp_class_creation_14__prepared;
                tmp_source_name_56 = BUILTIN_TYPE1( tmp_type_arg_27 );
                assert( !(tmp_source_name_56 == NULL) );
                tmp_tuple_element_53 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_56 );
                if ( tmp_tuple_element_53 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_14 );

                    exception_lineno = 84;

                    goto try_except_handler_40;
                }
                PyTuple_SET_ITEM( tmp_right_name_14, 1, tmp_tuple_element_53 );
                tmp_raise_value_14 = BINARY_OPERATION_REMAINDER( tmp_left_name_14, tmp_right_name_14 );
                Py_DECREF( tmp_right_name_14 );
                if ( tmp_raise_value_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 84;

                    goto try_except_handler_40;
                }
                exception_type = tmp_raise_type_14;
                Py_INCREF( tmp_raise_type_14 );
                exception_value = tmp_raise_value_14;
                exception_lineno = 84;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_40;
            }
            branch_no_42:;
        }
        goto branch_end_41;
        branch_no_41:;
        {
            PyObject *tmp_assign_source_99;
            tmp_assign_source_99 = PyDict_New();
            assert( tmp_class_creation_14__prepared == NULL );
            tmp_class_creation_14__prepared = tmp_assign_source_99;
        }
        branch_end_41:;
    }
    {
        PyObject *tmp_assign_source_100;
        {
            PyObject *tmp_set_locals_14;
            CHECK_OBJECT( tmp_class_creation_14__prepared );
            tmp_set_locals_14 = tmp_class_creation_14__prepared;
            locals_requests$exceptions_84 = tmp_set_locals_14;
            Py_INCREF( tmp_set_locals_14 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_84, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

            goto try_except_handler_42;
        }
        tmp_dictset_value = const_str_digest_4aae44da769befc767278be58ddca255;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_84, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

            goto try_except_handler_42;
        }
        tmp_dictset_value = const_str_plain_InvalidHeader;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_84, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

            goto try_except_handler_42;
        }
        {
            PyObject *tmp_assign_source_101;
            PyObject *tmp_called_name_28;
            PyObject *tmp_args_name_28;
            PyObject *tmp_tuple_element_54;
            PyObject *tmp_kw_name_28;
            CHECK_OBJECT( tmp_class_creation_14__metaclass );
            tmp_called_name_28 = tmp_class_creation_14__metaclass;
            tmp_tuple_element_54 = const_str_plain_InvalidHeader;
            tmp_args_name_28 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_54 );
            PyTuple_SET_ITEM( tmp_args_name_28, 0, tmp_tuple_element_54 );
            CHECK_OBJECT( tmp_class_creation_14__bases );
            tmp_tuple_element_54 = tmp_class_creation_14__bases;
            Py_INCREF( tmp_tuple_element_54 );
            PyTuple_SET_ITEM( tmp_args_name_28, 1, tmp_tuple_element_54 );
            tmp_tuple_element_54 = locals_requests$exceptions_84;
            Py_INCREF( tmp_tuple_element_54 );
            PyTuple_SET_ITEM( tmp_args_name_28, 2, tmp_tuple_element_54 );
            CHECK_OBJECT( tmp_class_creation_14__class_decl_dict );
            tmp_kw_name_28 = tmp_class_creation_14__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 84;
            tmp_assign_source_101 = CALL_FUNCTION( tmp_called_name_28, tmp_args_name_28, tmp_kw_name_28 );
            Py_DECREF( tmp_args_name_28 );
            if ( tmp_assign_source_101 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;

                goto try_except_handler_42;
            }
            assert( outline_13_var___class__ == NULL );
            outline_13_var___class__ = tmp_assign_source_101;
        }
        CHECK_OBJECT( outline_13_var___class__ );
        tmp_assign_source_100 = outline_13_var___class__;
        Py_INCREF( tmp_assign_source_100 );
        goto try_return_handler_42;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_42:;
        Py_DECREF( locals_requests$exceptions_84 );
        locals_requests$exceptions_84 = NULL;
        goto try_return_handler_41;
        // Exception handler code:
        try_except_handler_42:;
        exception_keeper_type_40 = exception_type;
        exception_keeper_value_40 = exception_value;
        exception_keeper_tb_40 = exception_tb;
        exception_keeper_lineno_40 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_requests$exceptions_84 );
        locals_requests$exceptions_84 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_40;
        exception_value = exception_keeper_value_40;
        exception_tb = exception_keeper_tb_40;
        exception_lineno = exception_keeper_lineno_40;

        goto try_except_handler_41;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_41:;
        CHECK_OBJECT( (PyObject *)outline_13_var___class__ );
        Py_DECREF( outline_13_var___class__ );
        outline_13_var___class__ = NULL;

        goto outline_result_14;
        // Exception handler code:
        try_except_handler_41:;
        exception_keeper_type_41 = exception_type;
        exception_keeper_value_41 = exception_value;
        exception_keeper_tb_41 = exception_tb;
        exception_keeper_lineno_41 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_41;
        exception_value = exception_keeper_value_41;
        exception_tb = exception_keeper_tb_41;
        exception_lineno = exception_keeper_lineno_41;

        goto outline_exception_14;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_14:;
        exception_lineno = 84;
        goto try_except_handler_40;
        outline_result_14:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidHeader, tmp_assign_source_100 );
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_14__bases );
    tmp_class_creation_14__bases = NULL;

    Py_XDECREF( tmp_class_creation_14__class_decl_dict );
    tmp_class_creation_14__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_14__prepared );
    tmp_class_creation_14__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_42;
    exception_value = exception_keeper_value_42;
    exception_tb = exception_keeper_tb_42;
    exception_lineno = exception_keeper_lineno_42;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__bases );
    Py_DECREF( tmp_class_creation_14__bases );
    tmp_class_creation_14__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__class_decl_dict );
    Py_DECREF( tmp_class_creation_14__class_decl_dict );
    tmp_class_creation_14__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__metaclass );
    Py_DECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__prepared );
    Py_DECREF( tmp_class_creation_14__prepared );
    tmp_class_creation_14__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_tuple_element_55;
        PyObject *tmp_mvar_value_17;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidURL );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidURL );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InvalidURL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 88;

            goto try_except_handler_43;
        }

        tmp_tuple_element_55 = tmp_mvar_value_17;
        tmp_assign_source_102 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_55 );
        PyTuple_SET_ITEM( tmp_assign_source_102, 0, tmp_tuple_element_55 );
        assert( tmp_class_creation_15__bases == NULL );
        tmp_class_creation_15__bases = tmp_assign_source_102;
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = PyDict_New();
        assert( tmp_class_creation_15__class_decl_dict == NULL );
        tmp_class_creation_15__class_decl_dict = tmp_assign_source_103;
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_metaclass_name_15;
        nuitka_bool tmp_condition_result_57;
        PyObject *tmp_key_name_43;
        PyObject *tmp_dict_name_43;
        PyObject *tmp_dict_name_44;
        PyObject *tmp_key_name_44;
        PyObject *tmp_type_arg_28;
        PyObject *tmp_subscribed_name_14;
        PyObject *tmp_subscript_name_14;
        PyObject *tmp_bases_name_15;
        tmp_key_name_43 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_15__class_decl_dict );
        tmp_dict_name_43 = tmp_class_creation_15__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_43, tmp_key_name_43 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_43;
        }
        tmp_condition_result_57 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_57 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_15;
        }
        else
        {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT( tmp_class_creation_15__class_decl_dict );
        tmp_dict_name_44 = tmp_class_creation_15__class_decl_dict;
        tmp_key_name_44 = const_str_plain_metaclass;
        tmp_metaclass_name_15 = DICT_GET_ITEM( tmp_dict_name_44, tmp_key_name_44 );
        if ( tmp_metaclass_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_43;
        }
        goto condexpr_end_15;
        condexpr_false_15:;
        CHECK_OBJECT( tmp_class_creation_15__bases );
        tmp_subscribed_name_14 = tmp_class_creation_15__bases;
        tmp_subscript_name_14 = const_int_0;
        tmp_type_arg_28 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_14, tmp_subscript_name_14, 0 );
        if ( tmp_type_arg_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_43;
        }
        tmp_metaclass_name_15 = BUILTIN_TYPE1( tmp_type_arg_28 );
        Py_DECREF( tmp_type_arg_28 );
        if ( tmp_metaclass_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_43;
        }
        condexpr_end_15:;
        CHECK_OBJECT( tmp_class_creation_15__bases );
        tmp_bases_name_15 = tmp_class_creation_15__bases;
        tmp_assign_source_104 = SELECT_METACLASS( tmp_metaclass_name_15, tmp_bases_name_15 );
        Py_DECREF( tmp_metaclass_name_15 );
        if ( tmp_assign_source_104 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_43;
        }
        assert( tmp_class_creation_15__metaclass == NULL );
        tmp_class_creation_15__metaclass = tmp_assign_source_104;
    }
    {
        nuitka_bool tmp_condition_result_58;
        PyObject *tmp_key_name_45;
        PyObject *tmp_dict_name_45;
        tmp_key_name_45 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_15__class_decl_dict );
        tmp_dict_name_45 = tmp_class_creation_15__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_45, tmp_key_name_45 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_43;
        }
        tmp_condition_result_58 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_58 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_43;
        }
        else
        {
            goto branch_no_43;
        }
        branch_yes_43:;
        CHECK_OBJECT( tmp_class_creation_15__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_15__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_43;
        }
        branch_no_43:;
    }
    {
        nuitka_bool tmp_condition_result_59;
        PyObject *tmp_source_name_57;
        CHECK_OBJECT( tmp_class_creation_15__metaclass );
        tmp_source_name_57 = tmp_class_creation_15__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_57, const_str_plain___prepare__ );
        tmp_condition_result_59 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_59 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_44;
        }
        else
        {
            goto branch_no_44;
        }
        branch_yes_44:;
        {
            PyObject *tmp_assign_source_105;
            PyObject *tmp_called_name_29;
            PyObject *tmp_source_name_58;
            PyObject *tmp_args_name_29;
            PyObject *tmp_tuple_element_56;
            PyObject *tmp_kw_name_29;
            CHECK_OBJECT( tmp_class_creation_15__metaclass );
            tmp_source_name_58 = tmp_class_creation_15__metaclass;
            tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain___prepare__ );
            if ( tmp_called_name_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;

                goto try_except_handler_43;
            }
            tmp_tuple_element_56 = const_str_plain_InvalidProxyURL;
            tmp_args_name_29 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_56 );
            PyTuple_SET_ITEM( tmp_args_name_29, 0, tmp_tuple_element_56 );
            CHECK_OBJECT( tmp_class_creation_15__bases );
            tmp_tuple_element_56 = tmp_class_creation_15__bases;
            Py_INCREF( tmp_tuple_element_56 );
            PyTuple_SET_ITEM( tmp_args_name_29, 1, tmp_tuple_element_56 );
            CHECK_OBJECT( tmp_class_creation_15__class_decl_dict );
            tmp_kw_name_29 = tmp_class_creation_15__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 88;
            tmp_assign_source_105 = CALL_FUNCTION( tmp_called_name_29, tmp_args_name_29, tmp_kw_name_29 );
            Py_DECREF( tmp_called_name_29 );
            Py_DECREF( tmp_args_name_29 );
            if ( tmp_assign_source_105 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;

                goto try_except_handler_43;
            }
            assert( tmp_class_creation_15__prepared == NULL );
            tmp_class_creation_15__prepared = tmp_assign_source_105;
        }
        {
            nuitka_bool tmp_condition_result_60;
            PyObject *tmp_operand_name_15;
            PyObject *tmp_source_name_59;
            CHECK_OBJECT( tmp_class_creation_15__prepared );
            tmp_source_name_59 = tmp_class_creation_15__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_59, const_str_plain___getitem__ );
            tmp_operand_name_15 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_15 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;

                goto try_except_handler_43;
            }
            tmp_condition_result_60 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_60 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_45;
            }
            else
            {
                goto branch_no_45;
            }
            branch_yes_45:;
            {
                PyObject *tmp_raise_type_15;
                PyObject *tmp_raise_value_15;
                PyObject *tmp_left_name_15;
                PyObject *tmp_right_name_15;
                PyObject *tmp_tuple_element_57;
                PyObject *tmp_getattr_target_15;
                PyObject *tmp_getattr_attr_15;
                PyObject *tmp_getattr_default_15;
                PyObject *tmp_source_name_60;
                PyObject *tmp_type_arg_29;
                tmp_raise_type_15 = PyExc_TypeError;
                tmp_left_name_15 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_15__metaclass );
                tmp_getattr_target_15 = tmp_class_creation_15__metaclass;
                tmp_getattr_attr_15 = const_str_plain___name__;
                tmp_getattr_default_15 = const_str_angle_metaclass;
                tmp_tuple_element_57 = BUILTIN_GETATTR( tmp_getattr_target_15, tmp_getattr_attr_15, tmp_getattr_default_15 );
                if ( tmp_tuple_element_57 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 88;

                    goto try_except_handler_43;
                }
                tmp_right_name_15 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_15, 0, tmp_tuple_element_57 );
                CHECK_OBJECT( tmp_class_creation_15__prepared );
                tmp_type_arg_29 = tmp_class_creation_15__prepared;
                tmp_source_name_60 = BUILTIN_TYPE1( tmp_type_arg_29 );
                assert( !(tmp_source_name_60 == NULL) );
                tmp_tuple_element_57 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_60 );
                if ( tmp_tuple_element_57 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_15 );

                    exception_lineno = 88;

                    goto try_except_handler_43;
                }
                PyTuple_SET_ITEM( tmp_right_name_15, 1, tmp_tuple_element_57 );
                tmp_raise_value_15 = BINARY_OPERATION_REMAINDER( tmp_left_name_15, tmp_right_name_15 );
                Py_DECREF( tmp_right_name_15 );
                if ( tmp_raise_value_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 88;

                    goto try_except_handler_43;
                }
                exception_type = tmp_raise_type_15;
                Py_INCREF( tmp_raise_type_15 );
                exception_value = tmp_raise_value_15;
                exception_lineno = 88;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_43;
            }
            branch_no_45:;
        }
        goto branch_end_44;
        branch_no_44:;
        {
            PyObject *tmp_assign_source_106;
            tmp_assign_source_106 = PyDict_New();
            assert( tmp_class_creation_15__prepared == NULL );
            tmp_class_creation_15__prepared = tmp_assign_source_106;
        }
        branch_end_44:;
    }
    {
        PyObject *tmp_assign_source_107;
        {
            PyObject *tmp_set_locals_15;
            CHECK_OBJECT( tmp_class_creation_15__prepared );
            tmp_set_locals_15 = tmp_class_creation_15__prepared;
            locals_requests$exceptions_88 = tmp_set_locals_15;
            Py_INCREF( tmp_set_locals_15 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_88, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_45;
        }
        tmp_dictset_value = const_str_digest_3b2add8be5d440c36ae0b41135415fa9;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_88, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_45;
        }
        tmp_dictset_value = const_str_plain_InvalidProxyURL;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_88, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_45;
        }
        {
            PyObject *tmp_assign_source_108;
            PyObject *tmp_called_name_30;
            PyObject *tmp_args_name_30;
            PyObject *tmp_tuple_element_58;
            PyObject *tmp_kw_name_30;
            CHECK_OBJECT( tmp_class_creation_15__metaclass );
            tmp_called_name_30 = tmp_class_creation_15__metaclass;
            tmp_tuple_element_58 = const_str_plain_InvalidProxyURL;
            tmp_args_name_30 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_58 );
            PyTuple_SET_ITEM( tmp_args_name_30, 0, tmp_tuple_element_58 );
            CHECK_OBJECT( tmp_class_creation_15__bases );
            tmp_tuple_element_58 = tmp_class_creation_15__bases;
            Py_INCREF( tmp_tuple_element_58 );
            PyTuple_SET_ITEM( tmp_args_name_30, 1, tmp_tuple_element_58 );
            tmp_tuple_element_58 = locals_requests$exceptions_88;
            Py_INCREF( tmp_tuple_element_58 );
            PyTuple_SET_ITEM( tmp_args_name_30, 2, tmp_tuple_element_58 );
            CHECK_OBJECT( tmp_class_creation_15__class_decl_dict );
            tmp_kw_name_30 = tmp_class_creation_15__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 88;
            tmp_assign_source_108 = CALL_FUNCTION( tmp_called_name_30, tmp_args_name_30, tmp_kw_name_30 );
            Py_DECREF( tmp_args_name_30 );
            if ( tmp_assign_source_108 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;

                goto try_except_handler_45;
            }
            assert( outline_14_var___class__ == NULL );
            outline_14_var___class__ = tmp_assign_source_108;
        }
        CHECK_OBJECT( outline_14_var___class__ );
        tmp_assign_source_107 = outline_14_var___class__;
        Py_INCREF( tmp_assign_source_107 );
        goto try_return_handler_45;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_45:;
        Py_DECREF( locals_requests$exceptions_88 );
        locals_requests$exceptions_88 = NULL;
        goto try_return_handler_44;
        // Exception handler code:
        try_except_handler_45:;
        exception_keeper_type_43 = exception_type;
        exception_keeper_value_43 = exception_value;
        exception_keeper_tb_43 = exception_tb;
        exception_keeper_lineno_43 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_requests$exceptions_88 );
        locals_requests$exceptions_88 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_43;
        exception_value = exception_keeper_value_43;
        exception_tb = exception_keeper_tb_43;
        exception_lineno = exception_keeper_lineno_43;

        goto try_except_handler_44;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_44:;
        CHECK_OBJECT( (PyObject *)outline_14_var___class__ );
        Py_DECREF( outline_14_var___class__ );
        outline_14_var___class__ = NULL;

        goto outline_result_15;
        // Exception handler code:
        try_except_handler_44:;
        exception_keeper_type_44 = exception_type;
        exception_keeper_value_44 = exception_value;
        exception_keeper_tb_44 = exception_tb;
        exception_keeper_lineno_44 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_44;
        exception_value = exception_keeper_value_44;
        exception_tb = exception_keeper_tb_44;
        exception_lineno = exception_keeper_lineno_44;

        goto outline_exception_15;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_15:;
        exception_lineno = 88;
        goto try_except_handler_43;
        outline_result_15:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidProxyURL, tmp_assign_source_107 );
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_15__bases );
    tmp_class_creation_15__bases = NULL;

    Py_XDECREF( tmp_class_creation_15__class_decl_dict );
    tmp_class_creation_15__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_15__metaclass );
    tmp_class_creation_15__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_15__prepared );
    tmp_class_creation_15__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_45;
    exception_value = exception_keeper_value_45;
    exception_tb = exception_keeper_tb_45;
    exception_lineno = exception_keeper_lineno_45;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__bases );
    Py_DECREF( tmp_class_creation_15__bases );
    tmp_class_creation_15__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__class_decl_dict );
    Py_DECREF( tmp_class_creation_15__class_decl_dict );
    tmp_class_creation_15__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__metaclass );
    Py_DECREF( tmp_class_creation_15__metaclass );
    tmp_class_creation_15__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__prepared );
    Py_DECREF( tmp_class_creation_15__prepared );
    tmp_class_creation_15__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_tuple_element_59;
        PyObject *tmp_mvar_value_18;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 92;

            goto try_except_handler_46;
        }

        tmp_tuple_element_59 = tmp_mvar_value_18;
        tmp_assign_source_109 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_59 );
        PyTuple_SET_ITEM( tmp_assign_source_109, 0, tmp_tuple_element_59 );
        assert( tmp_class_creation_16__bases == NULL );
        tmp_class_creation_16__bases = tmp_assign_source_109;
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = PyDict_New();
        assert( tmp_class_creation_16__class_decl_dict == NULL );
        tmp_class_creation_16__class_decl_dict = tmp_assign_source_110;
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_metaclass_name_16;
        nuitka_bool tmp_condition_result_61;
        PyObject *tmp_key_name_46;
        PyObject *tmp_dict_name_46;
        PyObject *tmp_dict_name_47;
        PyObject *tmp_key_name_47;
        PyObject *tmp_type_arg_30;
        PyObject *tmp_subscribed_name_15;
        PyObject *tmp_subscript_name_15;
        PyObject *tmp_bases_name_16;
        tmp_key_name_46 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_16__class_decl_dict );
        tmp_dict_name_46 = tmp_class_creation_16__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_46, tmp_key_name_46 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto try_except_handler_46;
        }
        tmp_condition_result_61 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_61 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_16;
        }
        else
        {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT( tmp_class_creation_16__class_decl_dict );
        tmp_dict_name_47 = tmp_class_creation_16__class_decl_dict;
        tmp_key_name_47 = const_str_plain_metaclass;
        tmp_metaclass_name_16 = DICT_GET_ITEM( tmp_dict_name_47, tmp_key_name_47 );
        if ( tmp_metaclass_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto try_except_handler_46;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        CHECK_OBJECT( tmp_class_creation_16__bases );
        tmp_subscribed_name_15 = tmp_class_creation_16__bases;
        tmp_subscript_name_15 = const_int_0;
        tmp_type_arg_30 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_15, tmp_subscript_name_15, 0 );
        if ( tmp_type_arg_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto try_except_handler_46;
        }
        tmp_metaclass_name_16 = BUILTIN_TYPE1( tmp_type_arg_30 );
        Py_DECREF( tmp_type_arg_30 );
        if ( tmp_metaclass_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto try_except_handler_46;
        }
        condexpr_end_16:;
        CHECK_OBJECT( tmp_class_creation_16__bases );
        tmp_bases_name_16 = tmp_class_creation_16__bases;
        tmp_assign_source_111 = SELECT_METACLASS( tmp_metaclass_name_16, tmp_bases_name_16 );
        Py_DECREF( tmp_metaclass_name_16 );
        if ( tmp_assign_source_111 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto try_except_handler_46;
        }
        assert( tmp_class_creation_16__metaclass == NULL );
        tmp_class_creation_16__metaclass = tmp_assign_source_111;
    }
    {
        nuitka_bool tmp_condition_result_62;
        PyObject *tmp_key_name_48;
        PyObject *tmp_dict_name_48;
        tmp_key_name_48 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_16__class_decl_dict );
        tmp_dict_name_48 = tmp_class_creation_16__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_48, tmp_key_name_48 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto try_except_handler_46;
        }
        tmp_condition_result_62 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_62 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_46;
        }
        else
        {
            goto branch_no_46;
        }
        branch_yes_46:;
        CHECK_OBJECT( tmp_class_creation_16__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_16__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto try_except_handler_46;
        }
        branch_no_46:;
    }
    {
        nuitka_bool tmp_condition_result_63;
        PyObject *tmp_source_name_61;
        CHECK_OBJECT( tmp_class_creation_16__metaclass );
        tmp_source_name_61 = tmp_class_creation_16__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_61, const_str_plain___prepare__ );
        tmp_condition_result_63 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_63 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_47;
        }
        else
        {
            goto branch_no_47;
        }
        branch_yes_47:;
        {
            PyObject *tmp_assign_source_112;
            PyObject *tmp_called_name_31;
            PyObject *tmp_source_name_62;
            PyObject *tmp_args_name_31;
            PyObject *tmp_tuple_element_60;
            PyObject *tmp_kw_name_31;
            CHECK_OBJECT( tmp_class_creation_16__metaclass );
            tmp_source_name_62 = tmp_class_creation_16__metaclass;
            tmp_called_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain___prepare__ );
            if ( tmp_called_name_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;

                goto try_except_handler_46;
            }
            tmp_tuple_element_60 = const_str_plain_ChunkedEncodingError;
            tmp_args_name_31 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_60 );
            PyTuple_SET_ITEM( tmp_args_name_31, 0, tmp_tuple_element_60 );
            CHECK_OBJECT( tmp_class_creation_16__bases );
            tmp_tuple_element_60 = tmp_class_creation_16__bases;
            Py_INCREF( tmp_tuple_element_60 );
            PyTuple_SET_ITEM( tmp_args_name_31, 1, tmp_tuple_element_60 );
            CHECK_OBJECT( tmp_class_creation_16__class_decl_dict );
            tmp_kw_name_31 = tmp_class_creation_16__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 92;
            tmp_assign_source_112 = CALL_FUNCTION( tmp_called_name_31, tmp_args_name_31, tmp_kw_name_31 );
            Py_DECREF( tmp_called_name_31 );
            Py_DECREF( tmp_args_name_31 );
            if ( tmp_assign_source_112 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;

                goto try_except_handler_46;
            }
            assert( tmp_class_creation_16__prepared == NULL );
            tmp_class_creation_16__prepared = tmp_assign_source_112;
        }
        {
            nuitka_bool tmp_condition_result_64;
            PyObject *tmp_operand_name_16;
            PyObject *tmp_source_name_63;
            CHECK_OBJECT( tmp_class_creation_16__prepared );
            tmp_source_name_63 = tmp_class_creation_16__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_63, const_str_plain___getitem__ );
            tmp_operand_name_16 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_16 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;

                goto try_except_handler_46;
            }
            tmp_condition_result_64 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_64 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_48;
            }
            else
            {
                goto branch_no_48;
            }
            branch_yes_48:;
            {
                PyObject *tmp_raise_type_16;
                PyObject *tmp_raise_value_16;
                PyObject *tmp_left_name_16;
                PyObject *tmp_right_name_16;
                PyObject *tmp_tuple_element_61;
                PyObject *tmp_getattr_target_16;
                PyObject *tmp_getattr_attr_16;
                PyObject *tmp_getattr_default_16;
                PyObject *tmp_source_name_64;
                PyObject *tmp_type_arg_31;
                tmp_raise_type_16 = PyExc_TypeError;
                tmp_left_name_16 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_16__metaclass );
                tmp_getattr_target_16 = tmp_class_creation_16__metaclass;
                tmp_getattr_attr_16 = const_str_plain___name__;
                tmp_getattr_default_16 = const_str_angle_metaclass;
                tmp_tuple_element_61 = BUILTIN_GETATTR( tmp_getattr_target_16, tmp_getattr_attr_16, tmp_getattr_default_16 );
                if ( tmp_tuple_element_61 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 92;

                    goto try_except_handler_46;
                }
                tmp_right_name_16 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_16, 0, tmp_tuple_element_61 );
                CHECK_OBJECT( tmp_class_creation_16__prepared );
                tmp_type_arg_31 = tmp_class_creation_16__prepared;
                tmp_source_name_64 = BUILTIN_TYPE1( tmp_type_arg_31 );
                assert( !(tmp_source_name_64 == NULL) );
                tmp_tuple_element_61 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_64 );
                if ( tmp_tuple_element_61 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_16 );

                    exception_lineno = 92;

                    goto try_except_handler_46;
                }
                PyTuple_SET_ITEM( tmp_right_name_16, 1, tmp_tuple_element_61 );
                tmp_raise_value_16 = BINARY_OPERATION_REMAINDER( tmp_left_name_16, tmp_right_name_16 );
                Py_DECREF( tmp_right_name_16 );
                if ( tmp_raise_value_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 92;

                    goto try_except_handler_46;
                }
                exception_type = tmp_raise_type_16;
                Py_INCREF( tmp_raise_type_16 );
                exception_value = tmp_raise_value_16;
                exception_lineno = 92;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_46;
            }
            branch_no_48:;
        }
        goto branch_end_47;
        branch_no_47:;
        {
            PyObject *tmp_assign_source_113;
            tmp_assign_source_113 = PyDict_New();
            assert( tmp_class_creation_16__prepared == NULL );
            tmp_class_creation_16__prepared = tmp_assign_source_113;
        }
        branch_end_47:;
    }
    {
        PyObject *tmp_assign_source_114;
        {
            PyObject *tmp_set_locals_16;
            CHECK_OBJECT( tmp_class_creation_16__prepared );
            tmp_set_locals_16 = tmp_class_creation_16__prepared;
            locals_requests$exceptions_92 = tmp_set_locals_16;
            Py_INCREF( tmp_set_locals_16 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_92, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto try_except_handler_48;
        }
        tmp_dictset_value = const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_92, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto try_except_handler_48;
        }
        tmp_dictset_value = const_str_plain_ChunkedEncodingError;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_92, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto try_except_handler_48;
        }
        {
            PyObject *tmp_assign_source_115;
            PyObject *tmp_called_name_32;
            PyObject *tmp_args_name_32;
            PyObject *tmp_tuple_element_62;
            PyObject *tmp_kw_name_32;
            CHECK_OBJECT( tmp_class_creation_16__metaclass );
            tmp_called_name_32 = tmp_class_creation_16__metaclass;
            tmp_tuple_element_62 = const_str_plain_ChunkedEncodingError;
            tmp_args_name_32 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_62 );
            PyTuple_SET_ITEM( tmp_args_name_32, 0, tmp_tuple_element_62 );
            CHECK_OBJECT( tmp_class_creation_16__bases );
            tmp_tuple_element_62 = tmp_class_creation_16__bases;
            Py_INCREF( tmp_tuple_element_62 );
            PyTuple_SET_ITEM( tmp_args_name_32, 1, tmp_tuple_element_62 );
            tmp_tuple_element_62 = locals_requests$exceptions_92;
            Py_INCREF( tmp_tuple_element_62 );
            PyTuple_SET_ITEM( tmp_args_name_32, 2, tmp_tuple_element_62 );
            CHECK_OBJECT( tmp_class_creation_16__class_decl_dict );
            tmp_kw_name_32 = tmp_class_creation_16__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 92;
            tmp_assign_source_115 = CALL_FUNCTION( tmp_called_name_32, tmp_args_name_32, tmp_kw_name_32 );
            Py_DECREF( tmp_args_name_32 );
            if ( tmp_assign_source_115 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;

                goto try_except_handler_48;
            }
            assert( outline_15_var___class__ == NULL );
            outline_15_var___class__ = tmp_assign_source_115;
        }
        CHECK_OBJECT( outline_15_var___class__ );
        tmp_assign_source_114 = outline_15_var___class__;
        Py_INCREF( tmp_assign_source_114 );
        goto try_return_handler_48;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_48:;
        Py_DECREF( locals_requests$exceptions_92 );
        locals_requests$exceptions_92 = NULL;
        goto try_return_handler_47;
        // Exception handler code:
        try_except_handler_48:;
        exception_keeper_type_46 = exception_type;
        exception_keeper_value_46 = exception_value;
        exception_keeper_tb_46 = exception_tb;
        exception_keeper_lineno_46 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_requests$exceptions_92 );
        locals_requests$exceptions_92 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_46;
        exception_value = exception_keeper_value_46;
        exception_tb = exception_keeper_tb_46;
        exception_lineno = exception_keeper_lineno_46;

        goto try_except_handler_47;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_47:;
        CHECK_OBJECT( (PyObject *)outline_15_var___class__ );
        Py_DECREF( outline_15_var___class__ );
        outline_15_var___class__ = NULL;

        goto outline_result_16;
        // Exception handler code:
        try_except_handler_47:;
        exception_keeper_type_47 = exception_type;
        exception_keeper_value_47 = exception_value;
        exception_keeper_tb_47 = exception_tb;
        exception_keeper_lineno_47 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_47;
        exception_value = exception_keeper_value_47;
        exception_tb = exception_keeper_tb_47;
        exception_lineno = exception_keeper_lineno_47;

        goto outline_exception_16;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_16:;
        exception_lineno = 92;
        goto try_except_handler_46;
        outline_result_16:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ChunkedEncodingError, tmp_assign_source_114 );
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_keeper_lineno_48 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_16__bases );
    tmp_class_creation_16__bases = NULL;

    Py_XDECREF( tmp_class_creation_16__class_decl_dict );
    tmp_class_creation_16__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_16__metaclass );
    tmp_class_creation_16__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_16__prepared );
    tmp_class_creation_16__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_48;
    exception_value = exception_keeper_value_48;
    exception_tb = exception_keeper_tb_48;
    exception_lineno = exception_keeper_lineno_48;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__bases );
    Py_DECREF( tmp_class_creation_16__bases );
    tmp_class_creation_16__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__class_decl_dict );
    Py_DECREF( tmp_class_creation_16__class_decl_dict );
    tmp_class_creation_16__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__metaclass );
    Py_DECREF( tmp_class_creation_16__metaclass );
    tmp_class_creation_16__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__prepared );
    Py_DECREF( tmp_class_creation_16__prepared );
    tmp_class_creation_16__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_tuple_element_63;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_mvar_value_20;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 96;

            goto try_except_handler_49;
        }

        tmp_tuple_element_63 = tmp_mvar_value_19;
        tmp_assign_source_116 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_63 );
        PyTuple_SET_ITEM( tmp_assign_source_116, 0, tmp_tuple_element_63 );
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_BaseHTTPError );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseHTTPError );
        }

        if ( tmp_mvar_value_20 == NULL )
        {
            Py_DECREF( tmp_assign_source_116 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BaseHTTPError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 96;

            goto try_except_handler_49;
        }

        tmp_tuple_element_63 = tmp_mvar_value_20;
        Py_INCREF( tmp_tuple_element_63 );
        PyTuple_SET_ITEM( tmp_assign_source_116, 1, tmp_tuple_element_63 );
        assert( tmp_class_creation_17__bases == NULL );
        tmp_class_creation_17__bases = tmp_assign_source_116;
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = PyDict_New();
        assert( tmp_class_creation_17__class_decl_dict == NULL );
        tmp_class_creation_17__class_decl_dict = tmp_assign_source_117;
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_metaclass_name_17;
        nuitka_bool tmp_condition_result_65;
        PyObject *tmp_key_name_49;
        PyObject *tmp_dict_name_49;
        PyObject *tmp_dict_name_50;
        PyObject *tmp_key_name_50;
        PyObject *tmp_type_arg_32;
        PyObject *tmp_subscribed_name_16;
        PyObject *tmp_subscript_name_16;
        PyObject *tmp_bases_name_17;
        tmp_key_name_49 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_17__class_decl_dict );
        tmp_dict_name_49 = tmp_class_creation_17__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_49, tmp_key_name_49 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto try_except_handler_49;
        }
        tmp_condition_result_65 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_65 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_17;
        }
        else
        {
            goto condexpr_false_17;
        }
        condexpr_true_17:;
        CHECK_OBJECT( tmp_class_creation_17__class_decl_dict );
        tmp_dict_name_50 = tmp_class_creation_17__class_decl_dict;
        tmp_key_name_50 = const_str_plain_metaclass;
        tmp_metaclass_name_17 = DICT_GET_ITEM( tmp_dict_name_50, tmp_key_name_50 );
        if ( tmp_metaclass_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto try_except_handler_49;
        }
        goto condexpr_end_17;
        condexpr_false_17:;
        CHECK_OBJECT( tmp_class_creation_17__bases );
        tmp_subscribed_name_16 = tmp_class_creation_17__bases;
        tmp_subscript_name_16 = const_int_0;
        tmp_type_arg_32 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_16, tmp_subscript_name_16, 0 );
        if ( tmp_type_arg_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto try_except_handler_49;
        }
        tmp_metaclass_name_17 = BUILTIN_TYPE1( tmp_type_arg_32 );
        Py_DECREF( tmp_type_arg_32 );
        if ( tmp_metaclass_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto try_except_handler_49;
        }
        condexpr_end_17:;
        CHECK_OBJECT( tmp_class_creation_17__bases );
        tmp_bases_name_17 = tmp_class_creation_17__bases;
        tmp_assign_source_118 = SELECT_METACLASS( tmp_metaclass_name_17, tmp_bases_name_17 );
        Py_DECREF( tmp_metaclass_name_17 );
        if ( tmp_assign_source_118 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto try_except_handler_49;
        }
        assert( tmp_class_creation_17__metaclass == NULL );
        tmp_class_creation_17__metaclass = tmp_assign_source_118;
    }
    {
        nuitka_bool tmp_condition_result_66;
        PyObject *tmp_key_name_51;
        PyObject *tmp_dict_name_51;
        tmp_key_name_51 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_17__class_decl_dict );
        tmp_dict_name_51 = tmp_class_creation_17__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_51, tmp_key_name_51 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto try_except_handler_49;
        }
        tmp_condition_result_66 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_66 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_49;
        }
        else
        {
            goto branch_no_49;
        }
        branch_yes_49:;
        CHECK_OBJECT( tmp_class_creation_17__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_17__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto try_except_handler_49;
        }
        branch_no_49:;
    }
    {
        nuitka_bool tmp_condition_result_67;
        PyObject *tmp_source_name_65;
        CHECK_OBJECT( tmp_class_creation_17__metaclass );
        tmp_source_name_65 = tmp_class_creation_17__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_65, const_str_plain___prepare__ );
        tmp_condition_result_67 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_67 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_50;
        }
        else
        {
            goto branch_no_50;
        }
        branch_yes_50:;
        {
            PyObject *tmp_assign_source_119;
            PyObject *tmp_called_name_33;
            PyObject *tmp_source_name_66;
            PyObject *tmp_args_name_33;
            PyObject *tmp_tuple_element_64;
            PyObject *tmp_kw_name_33;
            CHECK_OBJECT( tmp_class_creation_17__metaclass );
            tmp_source_name_66 = tmp_class_creation_17__metaclass;
            tmp_called_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain___prepare__ );
            if ( tmp_called_name_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;

                goto try_except_handler_49;
            }
            tmp_tuple_element_64 = const_str_plain_ContentDecodingError;
            tmp_args_name_33 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_64 );
            PyTuple_SET_ITEM( tmp_args_name_33, 0, tmp_tuple_element_64 );
            CHECK_OBJECT( tmp_class_creation_17__bases );
            tmp_tuple_element_64 = tmp_class_creation_17__bases;
            Py_INCREF( tmp_tuple_element_64 );
            PyTuple_SET_ITEM( tmp_args_name_33, 1, tmp_tuple_element_64 );
            CHECK_OBJECT( tmp_class_creation_17__class_decl_dict );
            tmp_kw_name_33 = tmp_class_creation_17__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 96;
            tmp_assign_source_119 = CALL_FUNCTION( tmp_called_name_33, tmp_args_name_33, tmp_kw_name_33 );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_name_33 );
            if ( tmp_assign_source_119 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;

                goto try_except_handler_49;
            }
            assert( tmp_class_creation_17__prepared == NULL );
            tmp_class_creation_17__prepared = tmp_assign_source_119;
        }
        {
            nuitka_bool tmp_condition_result_68;
            PyObject *tmp_operand_name_17;
            PyObject *tmp_source_name_67;
            CHECK_OBJECT( tmp_class_creation_17__prepared );
            tmp_source_name_67 = tmp_class_creation_17__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_67, const_str_plain___getitem__ );
            tmp_operand_name_17 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_17 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;

                goto try_except_handler_49;
            }
            tmp_condition_result_68 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_68 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_51;
            }
            else
            {
                goto branch_no_51;
            }
            branch_yes_51:;
            {
                PyObject *tmp_raise_type_17;
                PyObject *tmp_raise_value_17;
                PyObject *tmp_left_name_17;
                PyObject *tmp_right_name_17;
                PyObject *tmp_tuple_element_65;
                PyObject *tmp_getattr_target_17;
                PyObject *tmp_getattr_attr_17;
                PyObject *tmp_getattr_default_17;
                PyObject *tmp_source_name_68;
                PyObject *tmp_type_arg_33;
                tmp_raise_type_17 = PyExc_TypeError;
                tmp_left_name_17 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_17__metaclass );
                tmp_getattr_target_17 = tmp_class_creation_17__metaclass;
                tmp_getattr_attr_17 = const_str_plain___name__;
                tmp_getattr_default_17 = const_str_angle_metaclass;
                tmp_tuple_element_65 = BUILTIN_GETATTR( tmp_getattr_target_17, tmp_getattr_attr_17, tmp_getattr_default_17 );
                if ( tmp_tuple_element_65 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 96;

                    goto try_except_handler_49;
                }
                tmp_right_name_17 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_17, 0, tmp_tuple_element_65 );
                CHECK_OBJECT( tmp_class_creation_17__prepared );
                tmp_type_arg_33 = tmp_class_creation_17__prepared;
                tmp_source_name_68 = BUILTIN_TYPE1( tmp_type_arg_33 );
                assert( !(tmp_source_name_68 == NULL) );
                tmp_tuple_element_65 = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_68 );
                if ( tmp_tuple_element_65 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_17 );

                    exception_lineno = 96;

                    goto try_except_handler_49;
                }
                PyTuple_SET_ITEM( tmp_right_name_17, 1, tmp_tuple_element_65 );
                tmp_raise_value_17 = BINARY_OPERATION_REMAINDER( tmp_left_name_17, tmp_right_name_17 );
                Py_DECREF( tmp_right_name_17 );
                if ( tmp_raise_value_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 96;

                    goto try_except_handler_49;
                }
                exception_type = tmp_raise_type_17;
                Py_INCREF( tmp_raise_type_17 );
                exception_value = tmp_raise_value_17;
                exception_lineno = 96;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_49;
            }
            branch_no_51:;
        }
        goto branch_end_50;
        branch_no_50:;
        {
            PyObject *tmp_assign_source_120;
            tmp_assign_source_120 = PyDict_New();
            assert( tmp_class_creation_17__prepared == NULL );
            tmp_class_creation_17__prepared = tmp_assign_source_120;
        }
        branch_end_50:;
    }
    {
        PyObject *tmp_assign_source_121;
        {
            PyObject *tmp_set_locals_17;
            CHECK_OBJECT( tmp_class_creation_17__prepared );
            tmp_set_locals_17 = tmp_class_creation_17__prepared;
            locals_requests$exceptions_96 = tmp_set_locals_17;
            Py_INCREF( tmp_set_locals_17 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_96, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto try_except_handler_51;
        }
        tmp_dictset_value = const_str_digest_e91f0a06d295e9fdd4c3972666eefa40;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_96, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto try_except_handler_51;
        }
        tmp_dictset_value = const_str_plain_ContentDecodingError;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_96, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto try_except_handler_51;
        }
        {
            PyObject *tmp_assign_source_122;
            PyObject *tmp_called_name_34;
            PyObject *tmp_args_name_34;
            PyObject *tmp_tuple_element_66;
            PyObject *tmp_kw_name_34;
            CHECK_OBJECT( tmp_class_creation_17__metaclass );
            tmp_called_name_34 = tmp_class_creation_17__metaclass;
            tmp_tuple_element_66 = const_str_plain_ContentDecodingError;
            tmp_args_name_34 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_66 );
            PyTuple_SET_ITEM( tmp_args_name_34, 0, tmp_tuple_element_66 );
            CHECK_OBJECT( tmp_class_creation_17__bases );
            tmp_tuple_element_66 = tmp_class_creation_17__bases;
            Py_INCREF( tmp_tuple_element_66 );
            PyTuple_SET_ITEM( tmp_args_name_34, 1, tmp_tuple_element_66 );
            tmp_tuple_element_66 = locals_requests$exceptions_96;
            Py_INCREF( tmp_tuple_element_66 );
            PyTuple_SET_ITEM( tmp_args_name_34, 2, tmp_tuple_element_66 );
            CHECK_OBJECT( tmp_class_creation_17__class_decl_dict );
            tmp_kw_name_34 = tmp_class_creation_17__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 96;
            tmp_assign_source_122 = CALL_FUNCTION( tmp_called_name_34, tmp_args_name_34, tmp_kw_name_34 );
            Py_DECREF( tmp_args_name_34 );
            if ( tmp_assign_source_122 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;

                goto try_except_handler_51;
            }
            assert( outline_16_var___class__ == NULL );
            outline_16_var___class__ = tmp_assign_source_122;
        }
        CHECK_OBJECT( outline_16_var___class__ );
        tmp_assign_source_121 = outline_16_var___class__;
        Py_INCREF( tmp_assign_source_121 );
        goto try_return_handler_51;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_51:;
        Py_DECREF( locals_requests$exceptions_96 );
        locals_requests$exceptions_96 = NULL;
        goto try_return_handler_50;
        // Exception handler code:
        try_except_handler_51:;
        exception_keeper_type_49 = exception_type;
        exception_keeper_value_49 = exception_value;
        exception_keeper_tb_49 = exception_tb;
        exception_keeper_lineno_49 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_requests$exceptions_96 );
        locals_requests$exceptions_96 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_49;
        exception_value = exception_keeper_value_49;
        exception_tb = exception_keeper_tb_49;
        exception_lineno = exception_keeper_lineno_49;

        goto try_except_handler_50;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_50:;
        CHECK_OBJECT( (PyObject *)outline_16_var___class__ );
        Py_DECREF( outline_16_var___class__ );
        outline_16_var___class__ = NULL;

        goto outline_result_17;
        // Exception handler code:
        try_except_handler_50:;
        exception_keeper_type_50 = exception_type;
        exception_keeper_value_50 = exception_value;
        exception_keeper_tb_50 = exception_tb;
        exception_keeper_lineno_50 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_50;
        exception_value = exception_keeper_value_50;
        exception_tb = exception_keeper_tb_50;
        exception_lineno = exception_keeper_lineno_50;

        goto outline_exception_17;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_17:;
        exception_lineno = 96;
        goto try_except_handler_49;
        outline_result_17:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ContentDecodingError, tmp_assign_source_121 );
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_17__bases );
    tmp_class_creation_17__bases = NULL;

    Py_XDECREF( tmp_class_creation_17__class_decl_dict );
    tmp_class_creation_17__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_17__metaclass );
    tmp_class_creation_17__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_17__prepared );
    tmp_class_creation_17__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_51;
    exception_value = exception_keeper_value_51;
    exception_tb = exception_keeper_tb_51;
    exception_lineno = exception_keeper_lineno_51;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__bases );
    Py_DECREF( tmp_class_creation_17__bases );
    tmp_class_creation_17__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__class_decl_dict );
    Py_DECREF( tmp_class_creation_17__class_decl_dict );
    tmp_class_creation_17__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__metaclass );
    Py_DECREF( tmp_class_creation_17__metaclass );
    tmp_class_creation_17__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__prepared );
    Py_DECREF( tmp_class_creation_17__prepared );
    tmp_class_creation_17__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_tuple_element_67;
        PyObject *tmp_mvar_value_21;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 100;

            goto try_except_handler_52;
        }

        tmp_tuple_element_67 = tmp_mvar_value_21;
        tmp_assign_source_123 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_67 );
        PyTuple_SET_ITEM( tmp_assign_source_123, 0, tmp_tuple_element_67 );
        tmp_tuple_element_67 = PyExc_TypeError;
        Py_INCREF( tmp_tuple_element_67 );
        PyTuple_SET_ITEM( tmp_assign_source_123, 1, tmp_tuple_element_67 );
        assert( tmp_class_creation_18__bases == NULL );
        tmp_class_creation_18__bases = tmp_assign_source_123;
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = PyDict_New();
        assert( tmp_class_creation_18__class_decl_dict == NULL );
        tmp_class_creation_18__class_decl_dict = tmp_assign_source_124;
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_metaclass_name_18;
        nuitka_bool tmp_condition_result_69;
        PyObject *tmp_key_name_52;
        PyObject *tmp_dict_name_52;
        PyObject *tmp_dict_name_53;
        PyObject *tmp_key_name_53;
        PyObject *tmp_type_arg_34;
        PyObject *tmp_subscribed_name_17;
        PyObject *tmp_subscript_name_17;
        PyObject *tmp_bases_name_18;
        tmp_key_name_52 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_18__class_decl_dict );
        tmp_dict_name_52 = tmp_class_creation_18__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_52, tmp_key_name_52 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto try_except_handler_52;
        }
        tmp_condition_result_69 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_69 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_18;
        }
        else
        {
            goto condexpr_false_18;
        }
        condexpr_true_18:;
        CHECK_OBJECT( tmp_class_creation_18__class_decl_dict );
        tmp_dict_name_53 = tmp_class_creation_18__class_decl_dict;
        tmp_key_name_53 = const_str_plain_metaclass;
        tmp_metaclass_name_18 = DICT_GET_ITEM( tmp_dict_name_53, tmp_key_name_53 );
        if ( tmp_metaclass_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto try_except_handler_52;
        }
        goto condexpr_end_18;
        condexpr_false_18:;
        CHECK_OBJECT( tmp_class_creation_18__bases );
        tmp_subscribed_name_17 = tmp_class_creation_18__bases;
        tmp_subscript_name_17 = const_int_0;
        tmp_type_arg_34 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_17, tmp_subscript_name_17, 0 );
        if ( tmp_type_arg_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto try_except_handler_52;
        }
        tmp_metaclass_name_18 = BUILTIN_TYPE1( tmp_type_arg_34 );
        Py_DECREF( tmp_type_arg_34 );
        if ( tmp_metaclass_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto try_except_handler_52;
        }
        condexpr_end_18:;
        CHECK_OBJECT( tmp_class_creation_18__bases );
        tmp_bases_name_18 = tmp_class_creation_18__bases;
        tmp_assign_source_125 = SELECT_METACLASS( tmp_metaclass_name_18, tmp_bases_name_18 );
        Py_DECREF( tmp_metaclass_name_18 );
        if ( tmp_assign_source_125 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto try_except_handler_52;
        }
        assert( tmp_class_creation_18__metaclass == NULL );
        tmp_class_creation_18__metaclass = tmp_assign_source_125;
    }
    {
        nuitka_bool tmp_condition_result_70;
        PyObject *tmp_key_name_54;
        PyObject *tmp_dict_name_54;
        tmp_key_name_54 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_18__class_decl_dict );
        tmp_dict_name_54 = tmp_class_creation_18__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_54, tmp_key_name_54 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto try_except_handler_52;
        }
        tmp_condition_result_70 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_70 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_52;
        }
        else
        {
            goto branch_no_52;
        }
        branch_yes_52:;
        CHECK_OBJECT( tmp_class_creation_18__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_18__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto try_except_handler_52;
        }
        branch_no_52:;
    }
    {
        nuitka_bool tmp_condition_result_71;
        PyObject *tmp_source_name_69;
        CHECK_OBJECT( tmp_class_creation_18__metaclass );
        tmp_source_name_69 = tmp_class_creation_18__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_69, const_str_plain___prepare__ );
        tmp_condition_result_71 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_71 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_53;
        }
        else
        {
            goto branch_no_53;
        }
        branch_yes_53:;
        {
            PyObject *tmp_assign_source_126;
            PyObject *tmp_called_name_35;
            PyObject *tmp_source_name_70;
            PyObject *tmp_args_name_35;
            PyObject *tmp_tuple_element_68;
            PyObject *tmp_kw_name_35;
            CHECK_OBJECT( tmp_class_creation_18__metaclass );
            tmp_source_name_70 = tmp_class_creation_18__metaclass;
            tmp_called_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain___prepare__ );
            if ( tmp_called_name_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;

                goto try_except_handler_52;
            }
            tmp_tuple_element_68 = const_str_plain_StreamConsumedError;
            tmp_args_name_35 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_68 );
            PyTuple_SET_ITEM( tmp_args_name_35, 0, tmp_tuple_element_68 );
            CHECK_OBJECT( tmp_class_creation_18__bases );
            tmp_tuple_element_68 = tmp_class_creation_18__bases;
            Py_INCREF( tmp_tuple_element_68 );
            PyTuple_SET_ITEM( tmp_args_name_35, 1, tmp_tuple_element_68 );
            CHECK_OBJECT( tmp_class_creation_18__class_decl_dict );
            tmp_kw_name_35 = tmp_class_creation_18__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 100;
            tmp_assign_source_126 = CALL_FUNCTION( tmp_called_name_35, tmp_args_name_35, tmp_kw_name_35 );
            Py_DECREF( tmp_called_name_35 );
            Py_DECREF( tmp_args_name_35 );
            if ( tmp_assign_source_126 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;

                goto try_except_handler_52;
            }
            assert( tmp_class_creation_18__prepared == NULL );
            tmp_class_creation_18__prepared = tmp_assign_source_126;
        }
        {
            nuitka_bool tmp_condition_result_72;
            PyObject *tmp_operand_name_18;
            PyObject *tmp_source_name_71;
            CHECK_OBJECT( tmp_class_creation_18__prepared );
            tmp_source_name_71 = tmp_class_creation_18__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_71, const_str_plain___getitem__ );
            tmp_operand_name_18 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_18 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;

                goto try_except_handler_52;
            }
            tmp_condition_result_72 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_72 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_54;
            }
            else
            {
                goto branch_no_54;
            }
            branch_yes_54:;
            {
                PyObject *tmp_raise_type_18;
                PyObject *tmp_raise_value_18;
                PyObject *tmp_left_name_18;
                PyObject *tmp_right_name_18;
                PyObject *tmp_tuple_element_69;
                PyObject *tmp_getattr_target_18;
                PyObject *tmp_getattr_attr_18;
                PyObject *tmp_getattr_default_18;
                PyObject *tmp_source_name_72;
                PyObject *tmp_type_arg_35;
                tmp_raise_type_18 = PyExc_TypeError;
                tmp_left_name_18 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_18__metaclass );
                tmp_getattr_target_18 = tmp_class_creation_18__metaclass;
                tmp_getattr_attr_18 = const_str_plain___name__;
                tmp_getattr_default_18 = const_str_angle_metaclass;
                tmp_tuple_element_69 = BUILTIN_GETATTR( tmp_getattr_target_18, tmp_getattr_attr_18, tmp_getattr_default_18 );
                if ( tmp_tuple_element_69 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 100;

                    goto try_except_handler_52;
                }
                tmp_right_name_18 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_18, 0, tmp_tuple_element_69 );
                CHECK_OBJECT( tmp_class_creation_18__prepared );
                tmp_type_arg_35 = tmp_class_creation_18__prepared;
                tmp_source_name_72 = BUILTIN_TYPE1( tmp_type_arg_35 );
                assert( !(tmp_source_name_72 == NULL) );
                tmp_tuple_element_69 = LOOKUP_ATTRIBUTE( tmp_source_name_72, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_72 );
                if ( tmp_tuple_element_69 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_18 );

                    exception_lineno = 100;

                    goto try_except_handler_52;
                }
                PyTuple_SET_ITEM( tmp_right_name_18, 1, tmp_tuple_element_69 );
                tmp_raise_value_18 = BINARY_OPERATION_REMAINDER( tmp_left_name_18, tmp_right_name_18 );
                Py_DECREF( tmp_right_name_18 );
                if ( tmp_raise_value_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 100;

                    goto try_except_handler_52;
                }
                exception_type = tmp_raise_type_18;
                Py_INCREF( tmp_raise_type_18 );
                exception_value = tmp_raise_value_18;
                exception_lineno = 100;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_52;
            }
            branch_no_54:;
        }
        goto branch_end_53;
        branch_no_53:;
        {
            PyObject *tmp_assign_source_127;
            tmp_assign_source_127 = PyDict_New();
            assert( tmp_class_creation_18__prepared == NULL );
            tmp_class_creation_18__prepared = tmp_assign_source_127;
        }
        branch_end_53:;
    }
    {
        PyObject *tmp_assign_source_128;
        {
            PyObject *tmp_set_locals_18;
            CHECK_OBJECT( tmp_class_creation_18__prepared );
            tmp_set_locals_18 = tmp_class_creation_18__prepared;
            locals_requests$exceptions_100 = tmp_set_locals_18;
            Py_INCREF( tmp_set_locals_18 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_100, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto try_except_handler_54;
        }
        tmp_dictset_value = const_str_digest_c1f4dcdf3195a093500cff5b8859ecc9;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_100, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto try_except_handler_54;
        }
        tmp_dictset_value = const_str_plain_StreamConsumedError;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_100, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto try_except_handler_54;
        }
        {
            PyObject *tmp_assign_source_129;
            PyObject *tmp_called_name_36;
            PyObject *tmp_args_name_36;
            PyObject *tmp_tuple_element_70;
            PyObject *tmp_kw_name_36;
            CHECK_OBJECT( tmp_class_creation_18__metaclass );
            tmp_called_name_36 = tmp_class_creation_18__metaclass;
            tmp_tuple_element_70 = const_str_plain_StreamConsumedError;
            tmp_args_name_36 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_70 );
            PyTuple_SET_ITEM( tmp_args_name_36, 0, tmp_tuple_element_70 );
            CHECK_OBJECT( tmp_class_creation_18__bases );
            tmp_tuple_element_70 = tmp_class_creation_18__bases;
            Py_INCREF( tmp_tuple_element_70 );
            PyTuple_SET_ITEM( tmp_args_name_36, 1, tmp_tuple_element_70 );
            tmp_tuple_element_70 = locals_requests$exceptions_100;
            Py_INCREF( tmp_tuple_element_70 );
            PyTuple_SET_ITEM( tmp_args_name_36, 2, tmp_tuple_element_70 );
            CHECK_OBJECT( tmp_class_creation_18__class_decl_dict );
            tmp_kw_name_36 = tmp_class_creation_18__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 100;
            tmp_assign_source_129 = CALL_FUNCTION( tmp_called_name_36, tmp_args_name_36, tmp_kw_name_36 );
            Py_DECREF( tmp_args_name_36 );
            if ( tmp_assign_source_129 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;

                goto try_except_handler_54;
            }
            assert( outline_17_var___class__ == NULL );
            outline_17_var___class__ = tmp_assign_source_129;
        }
        CHECK_OBJECT( outline_17_var___class__ );
        tmp_assign_source_128 = outline_17_var___class__;
        Py_INCREF( tmp_assign_source_128 );
        goto try_return_handler_54;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_54:;
        Py_DECREF( locals_requests$exceptions_100 );
        locals_requests$exceptions_100 = NULL;
        goto try_return_handler_53;
        // Exception handler code:
        try_except_handler_54:;
        exception_keeper_type_52 = exception_type;
        exception_keeper_value_52 = exception_value;
        exception_keeper_tb_52 = exception_tb;
        exception_keeper_lineno_52 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_requests$exceptions_100 );
        locals_requests$exceptions_100 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_52;
        exception_value = exception_keeper_value_52;
        exception_tb = exception_keeper_tb_52;
        exception_lineno = exception_keeper_lineno_52;

        goto try_except_handler_53;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_53:;
        CHECK_OBJECT( (PyObject *)outline_17_var___class__ );
        Py_DECREF( outline_17_var___class__ );
        outline_17_var___class__ = NULL;

        goto outline_result_18;
        // Exception handler code:
        try_except_handler_53:;
        exception_keeper_type_53 = exception_type;
        exception_keeper_value_53 = exception_value;
        exception_keeper_tb_53 = exception_tb;
        exception_keeper_lineno_53 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_53;
        exception_value = exception_keeper_value_53;
        exception_tb = exception_keeper_tb_53;
        exception_lineno = exception_keeper_lineno_53;

        goto outline_exception_18;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_18:;
        exception_lineno = 100;
        goto try_except_handler_52;
        outline_result_18:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_StreamConsumedError, tmp_assign_source_128 );
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_52:;
    exception_keeper_type_54 = exception_type;
    exception_keeper_value_54 = exception_value;
    exception_keeper_tb_54 = exception_tb;
    exception_keeper_lineno_54 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_18__bases );
    tmp_class_creation_18__bases = NULL;

    Py_XDECREF( tmp_class_creation_18__class_decl_dict );
    tmp_class_creation_18__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_18__metaclass );
    tmp_class_creation_18__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_18__prepared );
    tmp_class_creation_18__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_54;
    exception_value = exception_keeper_value_54;
    exception_tb = exception_keeper_tb_54;
    exception_lineno = exception_keeper_lineno_54;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__bases );
    Py_DECREF( tmp_class_creation_18__bases );
    tmp_class_creation_18__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__class_decl_dict );
    Py_DECREF( tmp_class_creation_18__class_decl_dict );
    tmp_class_creation_18__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__metaclass );
    Py_DECREF( tmp_class_creation_18__metaclass );
    tmp_class_creation_18__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__prepared );
    Py_DECREF( tmp_class_creation_18__prepared );
    tmp_class_creation_18__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_tuple_element_71;
        PyObject *tmp_mvar_value_22;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 104;

            goto try_except_handler_55;
        }

        tmp_tuple_element_71 = tmp_mvar_value_22;
        tmp_assign_source_130 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_71 );
        PyTuple_SET_ITEM( tmp_assign_source_130, 0, tmp_tuple_element_71 );
        assert( tmp_class_creation_19__bases == NULL );
        tmp_class_creation_19__bases = tmp_assign_source_130;
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = PyDict_New();
        assert( tmp_class_creation_19__class_decl_dict == NULL );
        tmp_class_creation_19__class_decl_dict = tmp_assign_source_131;
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_metaclass_name_19;
        nuitka_bool tmp_condition_result_73;
        PyObject *tmp_key_name_55;
        PyObject *tmp_dict_name_55;
        PyObject *tmp_dict_name_56;
        PyObject *tmp_key_name_56;
        PyObject *tmp_type_arg_36;
        PyObject *tmp_subscribed_name_18;
        PyObject *tmp_subscript_name_18;
        PyObject *tmp_bases_name_19;
        tmp_key_name_55 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_19__class_decl_dict );
        tmp_dict_name_55 = tmp_class_creation_19__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_55, tmp_key_name_55 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_55;
        }
        tmp_condition_result_73 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_73 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_19;
        }
        else
        {
            goto condexpr_false_19;
        }
        condexpr_true_19:;
        CHECK_OBJECT( tmp_class_creation_19__class_decl_dict );
        tmp_dict_name_56 = tmp_class_creation_19__class_decl_dict;
        tmp_key_name_56 = const_str_plain_metaclass;
        tmp_metaclass_name_19 = DICT_GET_ITEM( tmp_dict_name_56, tmp_key_name_56 );
        if ( tmp_metaclass_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_55;
        }
        goto condexpr_end_19;
        condexpr_false_19:;
        CHECK_OBJECT( tmp_class_creation_19__bases );
        tmp_subscribed_name_18 = tmp_class_creation_19__bases;
        tmp_subscript_name_18 = const_int_0;
        tmp_type_arg_36 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_18, tmp_subscript_name_18, 0 );
        if ( tmp_type_arg_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_55;
        }
        tmp_metaclass_name_19 = BUILTIN_TYPE1( tmp_type_arg_36 );
        Py_DECREF( tmp_type_arg_36 );
        if ( tmp_metaclass_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_55;
        }
        condexpr_end_19:;
        CHECK_OBJECT( tmp_class_creation_19__bases );
        tmp_bases_name_19 = tmp_class_creation_19__bases;
        tmp_assign_source_132 = SELECT_METACLASS( tmp_metaclass_name_19, tmp_bases_name_19 );
        Py_DECREF( tmp_metaclass_name_19 );
        if ( tmp_assign_source_132 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_55;
        }
        assert( tmp_class_creation_19__metaclass == NULL );
        tmp_class_creation_19__metaclass = tmp_assign_source_132;
    }
    {
        nuitka_bool tmp_condition_result_74;
        PyObject *tmp_key_name_57;
        PyObject *tmp_dict_name_57;
        tmp_key_name_57 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_19__class_decl_dict );
        tmp_dict_name_57 = tmp_class_creation_19__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_57, tmp_key_name_57 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_55;
        }
        tmp_condition_result_74 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_74 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_55;
        }
        else
        {
            goto branch_no_55;
        }
        branch_yes_55:;
        CHECK_OBJECT( tmp_class_creation_19__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_19__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_55;
        }
        branch_no_55:;
    }
    {
        nuitka_bool tmp_condition_result_75;
        PyObject *tmp_source_name_73;
        CHECK_OBJECT( tmp_class_creation_19__metaclass );
        tmp_source_name_73 = tmp_class_creation_19__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_73, const_str_plain___prepare__ );
        tmp_condition_result_75 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_75 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_56;
        }
        else
        {
            goto branch_no_56;
        }
        branch_yes_56:;
        {
            PyObject *tmp_assign_source_133;
            PyObject *tmp_called_name_37;
            PyObject *tmp_source_name_74;
            PyObject *tmp_args_name_37;
            PyObject *tmp_tuple_element_72;
            PyObject *tmp_kw_name_37;
            CHECK_OBJECT( tmp_class_creation_19__metaclass );
            tmp_source_name_74 = tmp_class_creation_19__metaclass;
            tmp_called_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_74, const_str_plain___prepare__ );
            if ( tmp_called_name_37 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_55;
            }
            tmp_tuple_element_72 = const_str_plain_RetryError;
            tmp_args_name_37 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_72 );
            PyTuple_SET_ITEM( tmp_args_name_37, 0, tmp_tuple_element_72 );
            CHECK_OBJECT( tmp_class_creation_19__bases );
            tmp_tuple_element_72 = tmp_class_creation_19__bases;
            Py_INCREF( tmp_tuple_element_72 );
            PyTuple_SET_ITEM( tmp_args_name_37, 1, tmp_tuple_element_72 );
            CHECK_OBJECT( tmp_class_creation_19__class_decl_dict );
            tmp_kw_name_37 = tmp_class_creation_19__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 104;
            tmp_assign_source_133 = CALL_FUNCTION( tmp_called_name_37, tmp_args_name_37, tmp_kw_name_37 );
            Py_DECREF( tmp_called_name_37 );
            Py_DECREF( tmp_args_name_37 );
            if ( tmp_assign_source_133 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_55;
            }
            assert( tmp_class_creation_19__prepared == NULL );
            tmp_class_creation_19__prepared = tmp_assign_source_133;
        }
        {
            nuitka_bool tmp_condition_result_76;
            PyObject *tmp_operand_name_19;
            PyObject *tmp_source_name_75;
            CHECK_OBJECT( tmp_class_creation_19__prepared );
            tmp_source_name_75 = tmp_class_creation_19__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_75, const_str_plain___getitem__ );
            tmp_operand_name_19 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_19 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_55;
            }
            tmp_condition_result_76 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_76 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_57;
            }
            else
            {
                goto branch_no_57;
            }
            branch_yes_57:;
            {
                PyObject *tmp_raise_type_19;
                PyObject *tmp_raise_value_19;
                PyObject *tmp_left_name_19;
                PyObject *tmp_right_name_19;
                PyObject *tmp_tuple_element_73;
                PyObject *tmp_getattr_target_19;
                PyObject *tmp_getattr_attr_19;
                PyObject *tmp_getattr_default_19;
                PyObject *tmp_source_name_76;
                PyObject *tmp_type_arg_37;
                tmp_raise_type_19 = PyExc_TypeError;
                tmp_left_name_19 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_19__metaclass );
                tmp_getattr_target_19 = tmp_class_creation_19__metaclass;
                tmp_getattr_attr_19 = const_str_plain___name__;
                tmp_getattr_default_19 = const_str_angle_metaclass;
                tmp_tuple_element_73 = BUILTIN_GETATTR( tmp_getattr_target_19, tmp_getattr_attr_19, tmp_getattr_default_19 );
                if ( tmp_tuple_element_73 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 104;

                    goto try_except_handler_55;
                }
                tmp_right_name_19 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_19, 0, tmp_tuple_element_73 );
                CHECK_OBJECT( tmp_class_creation_19__prepared );
                tmp_type_arg_37 = tmp_class_creation_19__prepared;
                tmp_source_name_76 = BUILTIN_TYPE1( tmp_type_arg_37 );
                assert( !(tmp_source_name_76 == NULL) );
                tmp_tuple_element_73 = LOOKUP_ATTRIBUTE( tmp_source_name_76, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_76 );
                if ( tmp_tuple_element_73 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_19 );

                    exception_lineno = 104;

                    goto try_except_handler_55;
                }
                PyTuple_SET_ITEM( tmp_right_name_19, 1, tmp_tuple_element_73 );
                tmp_raise_value_19 = BINARY_OPERATION_REMAINDER( tmp_left_name_19, tmp_right_name_19 );
                Py_DECREF( tmp_right_name_19 );
                if ( tmp_raise_value_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 104;

                    goto try_except_handler_55;
                }
                exception_type = tmp_raise_type_19;
                Py_INCREF( tmp_raise_type_19 );
                exception_value = tmp_raise_value_19;
                exception_lineno = 104;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_55;
            }
            branch_no_57:;
        }
        goto branch_end_56;
        branch_no_56:;
        {
            PyObject *tmp_assign_source_134;
            tmp_assign_source_134 = PyDict_New();
            assert( tmp_class_creation_19__prepared == NULL );
            tmp_class_creation_19__prepared = tmp_assign_source_134;
        }
        branch_end_56:;
    }
    {
        PyObject *tmp_assign_source_135;
        {
            PyObject *tmp_set_locals_19;
            CHECK_OBJECT( tmp_class_creation_19__prepared );
            tmp_set_locals_19 = tmp_class_creation_19__prepared;
            locals_requests$exceptions_104 = tmp_set_locals_19;
            Py_INCREF( tmp_set_locals_19 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_104, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_57;
        }
        tmp_dictset_value = const_str_digest_b3f79f0ff88ef53ddf2012488144e436;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_104, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_57;
        }
        tmp_dictset_value = const_str_plain_RetryError;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_104, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_57;
        }
        {
            PyObject *tmp_assign_source_136;
            PyObject *tmp_called_name_38;
            PyObject *tmp_args_name_38;
            PyObject *tmp_tuple_element_74;
            PyObject *tmp_kw_name_38;
            CHECK_OBJECT( tmp_class_creation_19__metaclass );
            tmp_called_name_38 = tmp_class_creation_19__metaclass;
            tmp_tuple_element_74 = const_str_plain_RetryError;
            tmp_args_name_38 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_74 );
            PyTuple_SET_ITEM( tmp_args_name_38, 0, tmp_tuple_element_74 );
            CHECK_OBJECT( tmp_class_creation_19__bases );
            tmp_tuple_element_74 = tmp_class_creation_19__bases;
            Py_INCREF( tmp_tuple_element_74 );
            PyTuple_SET_ITEM( tmp_args_name_38, 1, tmp_tuple_element_74 );
            tmp_tuple_element_74 = locals_requests$exceptions_104;
            Py_INCREF( tmp_tuple_element_74 );
            PyTuple_SET_ITEM( tmp_args_name_38, 2, tmp_tuple_element_74 );
            CHECK_OBJECT( tmp_class_creation_19__class_decl_dict );
            tmp_kw_name_38 = tmp_class_creation_19__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 104;
            tmp_assign_source_136 = CALL_FUNCTION( tmp_called_name_38, tmp_args_name_38, tmp_kw_name_38 );
            Py_DECREF( tmp_args_name_38 );
            if ( tmp_assign_source_136 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_57;
            }
            assert( outline_18_var___class__ == NULL );
            outline_18_var___class__ = tmp_assign_source_136;
        }
        CHECK_OBJECT( outline_18_var___class__ );
        tmp_assign_source_135 = outline_18_var___class__;
        Py_INCREF( tmp_assign_source_135 );
        goto try_return_handler_57;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_57:;
        Py_DECREF( locals_requests$exceptions_104 );
        locals_requests$exceptions_104 = NULL;
        goto try_return_handler_56;
        // Exception handler code:
        try_except_handler_57:;
        exception_keeper_type_55 = exception_type;
        exception_keeper_value_55 = exception_value;
        exception_keeper_tb_55 = exception_tb;
        exception_keeper_lineno_55 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_requests$exceptions_104 );
        locals_requests$exceptions_104 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_55;
        exception_value = exception_keeper_value_55;
        exception_tb = exception_keeper_tb_55;
        exception_lineno = exception_keeper_lineno_55;

        goto try_except_handler_56;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_56:;
        CHECK_OBJECT( (PyObject *)outline_18_var___class__ );
        Py_DECREF( outline_18_var___class__ );
        outline_18_var___class__ = NULL;

        goto outline_result_19;
        // Exception handler code:
        try_except_handler_56:;
        exception_keeper_type_56 = exception_type;
        exception_keeper_value_56 = exception_value;
        exception_keeper_tb_56 = exception_tb;
        exception_keeper_lineno_56 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_56;
        exception_value = exception_keeper_value_56;
        exception_tb = exception_keeper_tb_56;
        exception_lineno = exception_keeper_lineno_56;

        goto outline_exception_19;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_19:;
        exception_lineno = 104;
        goto try_except_handler_55;
        outline_result_19:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RetryError, tmp_assign_source_135 );
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_55:;
    exception_keeper_type_57 = exception_type;
    exception_keeper_value_57 = exception_value;
    exception_keeper_tb_57 = exception_tb;
    exception_keeper_lineno_57 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_19__bases );
    tmp_class_creation_19__bases = NULL;

    Py_XDECREF( tmp_class_creation_19__class_decl_dict );
    tmp_class_creation_19__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_19__metaclass );
    tmp_class_creation_19__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_19__prepared );
    tmp_class_creation_19__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_57;
    exception_value = exception_keeper_value_57;
    exception_tb = exception_keeper_tb_57;
    exception_lineno = exception_keeper_lineno_57;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__bases );
    Py_DECREF( tmp_class_creation_19__bases );
    tmp_class_creation_19__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__class_decl_dict );
    Py_DECREF( tmp_class_creation_19__class_decl_dict );
    tmp_class_creation_19__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__metaclass );
    Py_DECREF( tmp_class_creation_19__metaclass );
    tmp_class_creation_19__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__prepared );
    Py_DECREF( tmp_class_creation_19__prepared );
    tmp_class_creation_19__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_tuple_element_75;
        PyObject *tmp_mvar_value_23;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 108;

            goto try_except_handler_58;
        }

        tmp_tuple_element_75 = tmp_mvar_value_23;
        tmp_assign_source_137 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_75 );
        PyTuple_SET_ITEM( tmp_assign_source_137, 0, tmp_tuple_element_75 );
        assert( tmp_class_creation_20__bases == NULL );
        tmp_class_creation_20__bases = tmp_assign_source_137;
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = PyDict_New();
        assert( tmp_class_creation_20__class_decl_dict == NULL );
        tmp_class_creation_20__class_decl_dict = tmp_assign_source_138;
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_metaclass_name_20;
        nuitka_bool tmp_condition_result_77;
        PyObject *tmp_key_name_58;
        PyObject *tmp_dict_name_58;
        PyObject *tmp_dict_name_59;
        PyObject *tmp_key_name_59;
        PyObject *tmp_type_arg_38;
        PyObject *tmp_subscribed_name_19;
        PyObject *tmp_subscript_name_19;
        PyObject *tmp_bases_name_20;
        tmp_key_name_58 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_20__class_decl_dict );
        tmp_dict_name_58 = tmp_class_creation_20__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_58, tmp_key_name_58 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto try_except_handler_58;
        }
        tmp_condition_result_77 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_77 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_20;
        }
        else
        {
            goto condexpr_false_20;
        }
        condexpr_true_20:;
        CHECK_OBJECT( tmp_class_creation_20__class_decl_dict );
        tmp_dict_name_59 = tmp_class_creation_20__class_decl_dict;
        tmp_key_name_59 = const_str_plain_metaclass;
        tmp_metaclass_name_20 = DICT_GET_ITEM( tmp_dict_name_59, tmp_key_name_59 );
        if ( tmp_metaclass_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto try_except_handler_58;
        }
        goto condexpr_end_20;
        condexpr_false_20:;
        CHECK_OBJECT( tmp_class_creation_20__bases );
        tmp_subscribed_name_19 = tmp_class_creation_20__bases;
        tmp_subscript_name_19 = const_int_0;
        tmp_type_arg_38 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_19, tmp_subscript_name_19, 0 );
        if ( tmp_type_arg_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto try_except_handler_58;
        }
        tmp_metaclass_name_20 = BUILTIN_TYPE1( tmp_type_arg_38 );
        Py_DECREF( tmp_type_arg_38 );
        if ( tmp_metaclass_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto try_except_handler_58;
        }
        condexpr_end_20:;
        CHECK_OBJECT( tmp_class_creation_20__bases );
        tmp_bases_name_20 = tmp_class_creation_20__bases;
        tmp_assign_source_139 = SELECT_METACLASS( tmp_metaclass_name_20, tmp_bases_name_20 );
        Py_DECREF( tmp_metaclass_name_20 );
        if ( tmp_assign_source_139 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto try_except_handler_58;
        }
        assert( tmp_class_creation_20__metaclass == NULL );
        tmp_class_creation_20__metaclass = tmp_assign_source_139;
    }
    {
        nuitka_bool tmp_condition_result_78;
        PyObject *tmp_key_name_60;
        PyObject *tmp_dict_name_60;
        tmp_key_name_60 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_20__class_decl_dict );
        tmp_dict_name_60 = tmp_class_creation_20__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_60, tmp_key_name_60 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto try_except_handler_58;
        }
        tmp_condition_result_78 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_78 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_58;
        }
        else
        {
            goto branch_no_58;
        }
        branch_yes_58:;
        CHECK_OBJECT( tmp_class_creation_20__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_20__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto try_except_handler_58;
        }
        branch_no_58:;
    }
    {
        nuitka_bool tmp_condition_result_79;
        PyObject *tmp_source_name_77;
        CHECK_OBJECT( tmp_class_creation_20__metaclass );
        tmp_source_name_77 = tmp_class_creation_20__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_77, const_str_plain___prepare__ );
        tmp_condition_result_79 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_79 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_59;
        }
        else
        {
            goto branch_no_59;
        }
        branch_yes_59:;
        {
            PyObject *tmp_assign_source_140;
            PyObject *tmp_called_name_39;
            PyObject *tmp_source_name_78;
            PyObject *tmp_args_name_39;
            PyObject *tmp_tuple_element_76;
            PyObject *tmp_kw_name_39;
            CHECK_OBJECT( tmp_class_creation_20__metaclass );
            tmp_source_name_78 = tmp_class_creation_20__metaclass;
            tmp_called_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_78, const_str_plain___prepare__ );
            if ( tmp_called_name_39 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;

                goto try_except_handler_58;
            }
            tmp_tuple_element_76 = const_str_plain_UnrewindableBodyError;
            tmp_args_name_39 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_76 );
            PyTuple_SET_ITEM( tmp_args_name_39, 0, tmp_tuple_element_76 );
            CHECK_OBJECT( tmp_class_creation_20__bases );
            tmp_tuple_element_76 = tmp_class_creation_20__bases;
            Py_INCREF( tmp_tuple_element_76 );
            PyTuple_SET_ITEM( tmp_args_name_39, 1, tmp_tuple_element_76 );
            CHECK_OBJECT( tmp_class_creation_20__class_decl_dict );
            tmp_kw_name_39 = tmp_class_creation_20__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 108;
            tmp_assign_source_140 = CALL_FUNCTION( tmp_called_name_39, tmp_args_name_39, tmp_kw_name_39 );
            Py_DECREF( tmp_called_name_39 );
            Py_DECREF( tmp_args_name_39 );
            if ( tmp_assign_source_140 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;

                goto try_except_handler_58;
            }
            assert( tmp_class_creation_20__prepared == NULL );
            tmp_class_creation_20__prepared = tmp_assign_source_140;
        }
        {
            nuitka_bool tmp_condition_result_80;
            PyObject *tmp_operand_name_20;
            PyObject *tmp_source_name_79;
            CHECK_OBJECT( tmp_class_creation_20__prepared );
            tmp_source_name_79 = tmp_class_creation_20__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_79, const_str_plain___getitem__ );
            tmp_operand_name_20 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_20 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;

                goto try_except_handler_58;
            }
            tmp_condition_result_80 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_80 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_60;
            }
            else
            {
                goto branch_no_60;
            }
            branch_yes_60:;
            {
                PyObject *tmp_raise_type_20;
                PyObject *tmp_raise_value_20;
                PyObject *tmp_left_name_20;
                PyObject *tmp_right_name_20;
                PyObject *tmp_tuple_element_77;
                PyObject *tmp_getattr_target_20;
                PyObject *tmp_getattr_attr_20;
                PyObject *tmp_getattr_default_20;
                PyObject *tmp_source_name_80;
                PyObject *tmp_type_arg_39;
                tmp_raise_type_20 = PyExc_TypeError;
                tmp_left_name_20 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_20__metaclass );
                tmp_getattr_target_20 = tmp_class_creation_20__metaclass;
                tmp_getattr_attr_20 = const_str_plain___name__;
                tmp_getattr_default_20 = const_str_angle_metaclass;
                tmp_tuple_element_77 = BUILTIN_GETATTR( tmp_getattr_target_20, tmp_getattr_attr_20, tmp_getattr_default_20 );
                if ( tmp_tuple_element_77 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 108;

                    goto try_except_handler_58;
                }
                tmp_right_name_20 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_20, 0, tmp_tuple_element_77 );
                CHECK_OBJECT( tmp_class_creation_20__prepared );
                tmp_type_arg_39 = tmp_class_creation_20__prepared;
                tmp_source_name_80 = BUILTIN_TYPE1( tmp_type_arg_39 );
                assert( !(tmp_source_name_80 == NULL) );
                tmp_tuple_element_77 = LOOKUP_ATTRIBUTE( tmp_source_name_80, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_80 );
                if ( tmp_tuple_element_77 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_20 );

                    exception_lineno = 108;

                    goto try_except_handler_58;
                }
                PyTuple_SET_ITEM( tmp_right_name_20, 1, tmp_tuple_element_77 );
                tmp_raise_value_20 = BINARY_OPERATION_REMAINDER( tmp_left_name_20, tmp_right_name_20 );
                Py_DECREF( tmp_right_name_20 );
                if ( tmp_raise_value_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 108;

                    goto try_except_handler_58;
                }
                exception_type = tmp_raise_type_20;
                Py_INCREF( tmp_raise_type_20 );
                exception_value = tmp_raise_value_20;
                exception_lineno = 108;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_58;
            }
            branch_no_60:;
        }
        goto branch_end_59;
        branch_no_59:;
        {
            PyObject *tmp_assign_source_141;
            tmp_assign_source_141 = PyDict_New();
            assert( tmp_class_creation_20__prepared == NULL );
            tmp_class_creation_20__prepared = tmp_assign_source_141;
        }
        branch_end_59:;
    }
    {
        PyObject *tmp_assign_source_142;
        {
            PyObject *tmp_set_locals_20;
            CHECK_OBJECT( tmp_class_creation_20__prepared );
            tmp_set_locals_20 = tmp_class_creation_20__prepared;
            locals_requests$exceptions_108 = tmp_set_locals_20;
            Py_INCREF( tmp_set_locals_20 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_108, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto try_except_handler_60;
        }
        tmp_dictset_value = const_str_digest_382efa1ab11fb4a35860fc2596b633ab;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_108, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto try_except_handler_60;
        }
        tmp_dictset_value = const_str_plain_UnrewindableBodyError;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_108, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto try_except_handler_60;
        }
        {
            PyObject *tmp_assign_source_143;
            PyObject *tmp_called_name_40;
            PyObject *tmp_args_name_40;
            PyObject *tmp_tuple_element_78;
            PyObject *tmp_kw_name_40;
            CHECK_OBJECT( tmp_class_creation_20__metaclass );
            tmp_called_name_40 = tmp_class_creation_20__metaclass;
            tmp_tuple_element_78 = const_str_plain_UnrewindableBodyError;
            tmp_args_name_40 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_78 );
            PyTuple_SET_ITEM( tmp_args_name_40, 0, tmp_tuple_element_78 );
            CHECK_OBJECT( tmp_class_creation_20__bases );
            tmp_tuple_element_78 = tmp_class_creation_20__bases;
            Py_INCREF( tmp_tuple_element_78 );
            PyTuple_SET_ITEM( tmp_args_name_40, 1, tmp_tuple_element_78 );
            tmp_tuple_element_78 = locals_requests$exceptions_108;
            Py_INCREF( tmp_tuple_element_78 );
            PyTuple_SET_ITEM( tmp_args_name_40, 2, tmp_tuple_element_78 );
            CHECK_OBJECT( tmp_class_creation_20__class_decl_dict );
            tmp_kw_name_40 = tmp_class_creation_20__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 108;
            tmp_assign_source_143 = CALL_FUNCTION( tmp_called_name_40, tmp_args_name_40, tmp_kw_name_40 );
            Py_DECREF( tmp_args_name_40 );
            if ( tmp_assign_source_143 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;

                goto try_except_handler_60;
            }
            assert( outline_19_var___class__ == NULL );
            outline_19_var___class__ = tmp_assign_source_143;
        }
        CHECK_OBJECT( outline_19_var___class__ );
        tmp_assign_source_142 = outline_19_var___class__;
        Py_INCREF( tmp_assign_source_142 );
        goto try_return_handler_60;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_60:;
        Py_DECREF( locals_requests$exceptions_108 );
        locals_requests$exceptions_108 = NULL;
        goto try_return_handler_59;
        // Exception handler code:
        try_except_handler_60:;
        exception_keeper_type_58 = exception_type;
        exception_keeper_value_58 = exception_value;
        exception_keeper_tb_58 = exception_tb;
        exception_keeper_lineno_58 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_requests$exceptions_108 );
        locals_requests$exceptions_108 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_58;
        exception_value = exception_keeper_value_58;
        exception_tb = exception_keeper_tb_58;
        exception_lineno = exception_keeper_lineno_58;

        goto try_except_handler_59;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_59:;
        CHECK_OBJECT( (PyObject *)outline_19_var___class__ );
        Py_DECREF( outline_19_var___class__ );
        outline_19_var___class__ = NULL;

        goto outline_result_20;
        // Exception handler code:
        try_except_handler_59:;
        exception_keeper_type_59 = exception_type;
        exception_keeper_value_59 = exception_value;
        exception_keeper_tb_59 = exception_tb;
        exception_keeper_lineno_59 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_59;
        exception_value = exception_keeper_value_59;
        exception_tb = exception_keeper_tb_59;
        exception_lineno = exception_keeper_lineno_59;

        goto outline_exception_20;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_20:;
        exception_lineno = 108;
        goto try_except_handler_58;
        outline_result_20:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError, tmp_assign_source_142 );
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_58:;
    exception_keeper_type_60 = exception_type;
    exception_keeper_value_60 = exception_value;
    exception_keeper_tb_60 = exception_tb;
    exception_keeper_lineno_60 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_20__bases );
    tmp_class_creation_20__bases = NULL;

    Py_XDECREF( tmp_class_creation_20__class_decl_dict );
    tmp_class_creation_20__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_20__metaclass );
    tmp_class_creation_20__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_20__prepared );
    tmp_class_creation_20__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_60;
    exception_value = exception_keeper_value_60;
    exception_tb = exception_keeper_tb_60;
    exception_lineno = exception_keeper_lineno_60;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__bases );
    Py_DECREF( tmp_class_creation_20__bases );
    tmp_class_creation_20__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__class_decl_dict );
    Py_DECREF( tmp_class_creation_20__class_decl_dict );
    tmp_class_creation_20__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__metaclass );
    Py_DECREF( tmp_class_creation_20__metaclass );
    tmp_class_creation_20__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__prepared );
    Py_DECREF( tmp_class_creation_20__prepared );
    tmp_class_creation_20__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_tuple_element_79;
        PyObject *tmp_mvar_value_24;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Warning );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
        }

        if ( tmp_mvar_value_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 114;

            goto try_except_handler_61;
        }

        tmp_tuple_element_79 = tmp_mvar_value_24;
        tmp_assign_source_144 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_79 );
        PyTuple_SET_ITEM( tmp_assign_source_144, 0, tmp_tuple_element_79 );
        assert( tmp_class_creation_21__bases == NULL );
        tmp_class_creation_21__bases = tmp_assign_source_144;
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = PyDict_New();
        assert( tmp_class_creation_21__class_decl_dict == NULL );
        tmp_class_creation_21__class_decl_dict = tmp_assign_source_145;
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_metaclass_name_21;
        nuitka_bool tmp_condition_result_81;
        PyObject *tmp_key_name_61;
        PyObject *tmp_dict_name_61;
        PyObject *tmp_dict_name_62;
        PyObject *tmp_key_name_62;
        PyObject *tmp_type_arg_40;
        PyObject *tmp_subscribed_name_20;
        PyObject *tmp_subscript_name_20;
        PyObject *tmp_bases_name_21;
        tmp_key_name_61 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_21__class_decl_dict );
        tmp_dict_name_61 = tmp_class_creation_21__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_61, tmp_key_name_61 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;

            goto try_except_handler_61;
        }
        tmp_condition_result_81 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_81 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_21;
        }
        else
        {
            goto condexpr_false_21;
        }
        condexpr_true_21:;
        CHECK_OBJECT( tmp_class_creation_21__class_decl_dict );
        tmp_dict_name_62 = tmp_class_creation_21__class_decl_dict;
        tmp_key_name_62 = const_str_plain_metaclass;
        tmp_metaclass_name_21 = DICT_GET_ITEM( tmp_dict_name_62, tmp_key_name_62 );
        if ( tmp_metaclass_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;

            goto try_except_handler_61;
        }
        goto condexpr_end_21;
        condexpr_false_21:;
        CHECK_OBJECT( tmp_class_creation_21__bases );
        tmp_subscribed_name_20 = tmp_class_creation_21__bases;
        tmp_subscript_name_20 = const_int_0;
        tmp_type_arg_40 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_20, tmp_subscript_name_20, 0 );
        if ( tmp_type_arg_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;

            goto try_except_handler_61;
        }
        tmp_metaclass_name_21 = BUILTIN_TYPE1( tmp_type_arg_40 );
        Py_DECREF( tmp_type_arg_40 );
        if ( tmp_metaclass_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;

            goto try_except_handler_61;
        }
        condexpr_end_21:;
        CHECK_OBJECT( tmp_class_creation_21__bases );
        tmp_bases_name_21 = tmp_class_creation_21__bases;
        tmp_assign_source_146 = SELECT_METACLASS( tmp_metaclass_name_21, tmp_bases_name_21 );
        Py_DECREF( tmp_metaclass_name_21 );
        if ( tmp_assign_source_146 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;

            goto try_except_handler_61;
        }
        assert( tmp_class_creation_21__metaclass == NULL );
        tmp_class_creation_21__metaclass = tmp_assign_source_146;
    }
    {
        nuitka_bool tmp_condition_result_82;
        PyObject *tmp_key_name_63;
        PyObject *tmp_dict_name_63;
        tmp_key_name_63 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_21__class_decl_dict );
        tmp_dict_name_63 = tmp_class_creation_21__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_63, tmp_key_name_63 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;

            goto try_except_handler_61;
        }
        tmp_condition_result_82 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_82 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_61;
        }
        else
        {
            goto branch_no_61;
        }
        branch_yes_61:;
        CHECK_OBJECT( tmp_class_creation_21__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_21__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;

            goto try_except_handler_61;
        }
        branch_no_61:;
    }
    {
        nuitka_bool tmp_condition_result_83;
        PyObject *tmp_source_name_81;
        CHECK_OBJECT( tmp_class_creation_21__metaclass );
        tmp_source_name_81 = tmp_class_creation_21__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_81, const_str_plain___prepare__ );
        tmp_condition_result_83 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_83 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_62;
        }
        else
        {
            goto branch_no_62;
        }
        branch_yes_62:;
        {
            PyObject *tmp_assign_source_147;
            PyObject *tmp_called_name_41;
            PyObject *tmp_source_name_82;
            PyObject *tmp_args_name_41;
            PyObject *tmp_tuple_element_80;
            PyObject *tmp_kw_name_41;
            CHECK_OBJECT( tmp_class_creation_21__metaclass );
            tmp_source_name_82 = tmp_class_creation_21__metaclass;
            tmp_called_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_82, const_str_plain___prepare__ );
            if ( tmp_called_name_41 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 114;

                goto try_except_handler_61;
            }
            tmp_tuple_element_80 = const_str_plain_RequestsWarning;
            tmp_args_name_41 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_80 );
            PyTuple_SET_ITEM( tmp_args_name_41, 0, tmp_tuple_element_80 );
            CHECK_OBJECT( tmp_class_creation_21__bases );
            tmp_tuple_element_80 = tmp_class_creation_21__bases;
            Py_INCREF( tmp_tuple_element_80 );
            PyTuple_SET_ITEM( tmp_args_name_41, 1, tmp_tuple_element_80 );
            CHECK_OBJECT( tmp_class_creation_21__class_decl_dict );
            tmp_kw_name_41 = tmp_class_creation_21__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 114;
            tmp_assign_source_147 = CALL_FUNCTION( tmp_called_name_41, tmp_args_name_41, tmp_kw_name_41 );
            Py_DECREF( tmp_called_name_41 );
            Py_DECREF( tmp_args_name_41 );
            if ( tmp_assign_source_147 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 114;

                goto try_except_handler_61;
            }
            assert( tmp_class_creation_21__prepared == NULL );
            tmp_class_creation_21__prepared = tmp_assign_source_147;
        }
        {
            nuitka_bool tmp_condition_result_84;
            PyObject *tmp_operand_name_21;
            PyObject *tmp_source_name_83;
            CHECK_OBJECT( tmp_class_creation_21__prepared );
            tmp_source_name_83 = tmp_class_creation_21__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_83, const_str_plain___getitem__ );
            tmp_operand_name_21 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_21 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 114;

                goto try_except_handler_61;
            }
            tmp_condition_result_84 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_84 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_63;
            }
            else
            {
                goto branch_no_63;
            }
            branch_yes_63:;
            {
                PyObject *tmp_raise_type_21;
                PyObject *tmp_raise_value_21;
                PyObject *tmp_left_name_21;
                PyObject *tmp_right_name_21;
                PyObject *tmp_tuple_element_81;
                PyObject *tmp_getattr_target_21;
                PyObject *tmp_getattr_attr_21;
                PyObject *tmp_getattr_default_21;
                PyObject *tmp_source_name_84;
                PyObject *tmp_type_arg_41;
                tmp_raise_type_21 = PyExc_TypeError;
                tmp_left_name_21 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_21__metaclass );
                tmp_getattr_target_21 = tmp_class_creation_21__metaclass;
                tmp_getattr_attr_21 = const_str_plain___name__;
                tmp_getattr_default_21 = const_str_angle_metaclass;
                tmp_tuple_element_81 = BUILTIN_GETATTR( tmp_getattr_target_21, tmp_getattr_attr_21, tmp_getattr_default_21 );
                if ( tmp_tuple_element_81 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 114;

                    goto try_except_handler_61;
                }
                tmp_right_name_21 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_21, 0, tmp_tuple_element_81 );
                CHECK_OBJECT( tmp_class_creation_21__prepared );
                tmp_type_arg_41 = tmp_class_creation_21__prepared;
                tmp_source_name_84 = BUILTIN_TYPE1( tmp_type_arg_41 );
                assert( !(tmp_source_name_84 == NULL) );
                tmp_tuple_element_81 = LOOKUP_ATTRIBUTE( tmp_source_name_84, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_84 );
                if ( tmp_tuple_element_81 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_21 );

                    exception_lineno = 114;

                    goto try_except_handler_61;
                }
                PyTuple_SET_ITEM( tmp_right_name_21, 1, tmp_tuple_element_81 );
                tmp_raise_value_21 = BINARY_OPERATION_REMAINDER( tmp_left_name_21, tmp_right_name_21 );
                Py_DECREF( tmp_right_name_21 );
                if ( tmp_raise_value_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 114;

                    goto try_except_handler_61;
                }
                exception_type = tmp_raise_type_21;
                Py_INCREF( tmp_raise_type_21 );
                exception_value = tmp_raise_value_21;
                exception_lineno = 114;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_61;
            }
            branch_no_63:;
        }
        goto branch_end_62;
        branch_no_62:;
        {
            PyObject *tmp_assign_source_148;
            tmp_assign_source_148 = PyDict_New();
            assert( tmp_class_creation_21__prepared == NULL );
            tmp_class_creation_21__prepared = tmp_assign_source_148;
        }
        branch_end_62:;
    }
    {
        PyObject *tmp_assign_source_149;
        {
            PyObject *tmp_set_locals_21;
            CHECK_OBJECT( tmp_class_creation_21__prepared );
            tmp_set_locals_21 = tmp_class_creation_21__prepared;
            locals_requests$exceptions_114 = tmp_set_locals_21;
            Py_INCREF( tmp_set_locals_21 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_114, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;

            goto try_except_handler_63;
        }
        tmp_dictset_value = const_str_digest_231982acca444de8f23c0288db53eaef;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_114, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;

            goto try_except_handler_63;
        }
        tmp_dictset_value = const_str_plain_RequestsWarning;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_114, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;

            goto try_except_handler_63;
        }
        {
            PyObject *tmp_assign_source_150;
            PyObject *tmp_called_name_42;
            PyObject *tmp_args_name_42;
            PyObject *tmp_tuple_element_82;
            PyObject *tmp_kw_name_42;
            CHECK_OBJECT( tmp_class_creation_21__metaclass );
            tmp_called_name_42 = tmp_class_creation_21__metaclass;
            tmp_tuple_element_82 = const_str_plain_RequestsWarning;
            tmp_args_name_42 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_82 );
            PyTuple_SET_ITEM( tmp_args_name_42, 0, tmp_tuple_element_82 );
            CHECK_OBJECT( tmp_class_creation_21__bases );
            tmp_tuple_element_82 = tmp_class_creation_21__bases;
            Py_INCREF( tmp_tuple_element_82 );
            PyTuple_SET_ITEM( tmp_args_name_42, 1, tmp_tuple_element_82 );
            tmp_tuple_element_82 = locals_requests$exceptions_114;
            Py_INCREF( tmp_tuple_element_82 );
            PyTuple_SET_ITEM( tmp_args_name_42, 2, tmp_tuple_element_82 );
            CHECK_OBJECT( tmp_class_creation_21__class_decl_dict );
            tmp_kw_name_42 = tmp_class_creation_21__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 114;
            tmp_assign_source_150 = CALL_FUNCTION( tmp_called_name_42, tmp_args_name_42, tmp_kw_name_42 );
            Py_DECREF( tmp_args_name_42 );
            if ( tmp_assign_source_150 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 114;

                goto try_except_handler_63;
            }
            assert( outline_20_var___class__ == NULL );
            outline_20_var___class__ = tmp_assign_source_150;
        }
        CHECK_OBJECT( outline_20_var___class__ );
        tmp_assign_source_149 = outline_20_var___class__;
        Py_INCREF( tmp_assign_source_149 );
        goto try_return_handler_63;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_63:;
        Py_DECREF( locals_requests$exceptions_114 );
        locals_requests$exceptions_114 = NULL;
        goto try_return_handler_62;
        // Exception handler code:
        try_except_handler_63:;
        exception_keeper_type_61 = exception_type;
        exception_keeper_value_61 = exception_value;
        exception_keeper_tb_61 = exception_tb;
        exception_keeper_lineno_61 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_requests$exceptions_114 );
        locals_requests$exceptions_114 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_61;
        exception_value = exception_keeper_value_61;
        exception_tb = exception_keeper_tb_61;
        exception_lineno = exception_keeper_lineno_61;

        goto try_except_handler_62;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_62:;
        CHECK_OBJECT( (PyObject *)outline_20_var___class__ );
        Py_DECREF( outline_20_var___class__ );
        outline_20_var___class__ = NULL;

        goto outline_result_21;
        // Exception handler code:
        try_except_handler_62:;
        exception_keeper_type_62 = exception_type;
        exception_keeper_value_62 = exception_value;
        exception_keeper_tb_62 = exception_tb;
        exception_keeper_lineno_62 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_62;
        exception_value = exception_keeper_value_62;
        exception_tb = exception_keeper_tb_62;
        exception_lineno = exception_keeper_lineno_62;

        goto outline_exception_21;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_21:;
        exception_lineno = 114;
        goto try_except_handler_61;
        outline_result_21:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestsWarning, tmp_assign_source_149 );
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_61:;
    exception_keeper_type_63 = exception_type;
    exception_keeper_value_63 = exception_value;
    exception_keeper_tb_63 = exception_tb;
    exception_keeper_lineno_63 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_21__bases );
    tmp_class_creation_21__bases = NULL;

    Py_XDECREF( tmp_class_creation_21__class_decl_dict );
    tmp_class_creation_21__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_21__metaclass );
    tmp_class_creation_21__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_21__prepared );
    tmp_class_creation_21__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_63;
    exception_value = exception_keeper_value_63;
    exception_tb = exception_keeper_tb_63;
    exception_lineno = exception_keeper_lineno_63;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__bases );
    Py_DECREF( tmp_class_creation_21__bases );
    tmp_class_creation_21__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__class_decl_dict );
    Py_DECREF( tmp_class_creation_21__class_decl_dict );
    tmp_class_creation_21__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__metaclass );
    Py_DECREF( tmp_class_creation_21__metaclass );
    tmp_class_creation_21__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__prepared );
    Py_DECREF( tmp_class_creation_21__prepared );
    tmp_class_creation_21__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_tuple_element_83;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_mvar_value_26;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestsWarning );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsWarning );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestsWarning" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 119;

            goto try_except_handler_64;
        }

        tmp_tuple_element_83 = tmp_mvar_value_25;
        tmp_assign_source_151 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_83 );
        PyTuple_SET_ITEM( tmp_assign_source_151, 0, tmp_tuple_element_83 );
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
        }

        if ( tmp_mvar_value_26 == NULL )
        {
            Py_DECREF( tmp_assign_source_151 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 119;

            goto try_except_handler_64;
        }

        tmp_tuple_element_83 = tmp_mvar_value_26;
        Py_INCREF( tmp_tuple_element_83 );
        PyTuple_SET_ITEM( tmp_assign_source_151, 1, tmp_tuple_element_83 );
        assert( tmp_class_creation_22__bases == NULL );
        tmp_class_creation_22__bases = tmp_assign_source_151;
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = PyDict_New();
        assert( tmp_class_creation_22__class_decl_dict == NULL );
        tmp_class_creation_22__class_decl_dict = tmp_assign_source_152;
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_metaclass_name_22;
        nuitka_bool tmp_condition_result_85;
        PyObject *tmp_key_name_64;
        PyObject *tmp_dict_name_64;
        PyObject *tmp_dict_name_65;
        PyObject *tmp_key_name_65;
        PyObject *tmp_type_arg_42;
        PyObject *tmp_subscribed_name_21;
        PyObject *tmp_subscript_name_21;
        PyObject *tmp_bases_name_22;
        tmp_key_name_64 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_22__class_decl_dict );
        tmp_dict_name_64 = tmp_class_creation_22__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_64, tmp_key_name_64 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;

            goto try_except_handler_64;
        }
        tmp_condition_result_85 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_85 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_22;
        }
        else
        {
            goto condexpr_false_22;
        }
        condexpr_true_22:;
        CHECK_OBJECT( tmp_class_creation_22__class_decl_dict );
        tmp_dict_name_65 = tmp_class_creation_22__class_decl_dict;
        tmp_key_name_65 = const_str_plain_metaclass;
        tmp_metaclass_name_22 = DICT_GET_ITEM( tmp_dict_name_65, tmp_key_name_65 );
        if ( tmp_metaclass_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;

            goto try_except_handler_64;
        }
        goto condexpr_end_22;
        condexpr_false_22:;
        CHECK_OBJECT( tmp_class_creation_22__bases );
        tmp_subscribed_name_21 = tmp_class_creation_22__bases;
        tmp_subscript_name_21 = const_int_0;
        tmp_type_arg_42 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_21, tmp_subscript_name_21, 0 );
        if ( tmp_type_arg_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;

            goto try_except_handler_64;
        }
        tmp_metaclass_name_22 = BUILTIN_TYPE1( tmp_type_arg_42 );
        Py_DECREF( tmp_type_arg_42 );
        if ( tmp_metaclass_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;

            goto try_except_handler_64;
        }
        condexpr_end_22:;
        CHECK_OBJECT( tmp_class_creation_22__bases );
        tmp_bases_name_22 = tmp_class_creation_22__bases;
        tmp_assign_source_153 = SELECT_METACLASS( tmp_metaclass_name_22, tmp_bases_name_22 );
        Py_DECREF( tmp_metaclass_name_22 );
        if ( tmp_assign_source_153 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;

            goto try_except_handler_64;
        }
        assert( tmp_class_creation_22__metaclass == NULL );
        tmp_class_creation_22__metaclass = tmp_assign_source_153;
    }
    {
        nuitka_bool tmp_condition_result_86;
        PyObject *tmp_key_name_66;
        PyObject *tmp_dict_name_66;
        tmp_key_name_66 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_22__class_decl_dict );
        tmp_dict_name_66 = tmp_class_creation_22__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_66, tmp_key_name_66 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;

            goto try_except_handler_64;
        }
        tmp_condition_result_86 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_86 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_64;
        }
        else
        {
            goto branch_no_64;
        }
        branch_yes_64:;
        CHECK_OBJECT( tmp_class_creation_22__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_22__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;

            goto try_except_handler_64;
        }
        branch_no_64:;
    }
    {
        nuitka_bool tmp_condition_result_87;
        PyObject *tmp_source_name_85;
        CHECK_OBJECT( tmp_class_creation_22__metaclass );
        tmp_source_name_85 = tmp_class_creation_22__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_85, const_str_plain___prepare__ );
        tmp_condition_result_87 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_87 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_65;
        }
        else
        {
            goto branch_no_65;
        }
        branch_yes_65:;
        {
            PyObject *tmp_assign_source_154;
            PyObject *tmp_called_name_43;
            PyObject *tmp_source_name_86;
            PyObject *tmp_args_name_43;
            PyObject *tmp_tuple_element_84;
            PyObject *tmp_kw_name_43;
            CHECK_OBJECT( tmp_class_creation_22__metaclass );
            tmp_source_name_86 = tmp_class_creation_22__metaclass;
            tmp_called_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_86, const_str_plain___prepare__ );
            if ( tmp_called_name_43 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;

                goto try_except_handler_64;
            }
            tmp_tuple_element_84 = const_str_plain_FileModeWarning;
            tmp_args_name_43 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_84 );
            PyTuple_SET_ITEM( tmp_args_name_43, 0, tmp_tuple_element_84 );
            CHECK_OBJECT( tmp_class_creation_22__bases );
            tmp_tuple_element_84 = tmp_class_creation_22__bases;
            Py_INCREF( tmp_tuple_element_84 );
            PyTuple_SET_ITEM( tmp_args_name_43, 1, tmp_tuple_element_84 );
            CHECK_OBJECT( tmp_class_creation_22__class_decl_dict );
            tmp_kw_name_43 = tmp_class_creation_22__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 119;
            tmp_assign_source_154 = CALL_FUNCTION( tmp_called_name_43, tmp_args_name_43, tmp_kw_name_43 );
            Py_DECREF( tmp_called_name_43 );
            Py_DECREF( tmp_args_name_43 );
            if ( tmp_assign_source_154 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;

                goto try_except_handler_64;
            }
            assert( tmp_class_creation_22__prepared == NULL );
            tmp_class_creation_22__prepared = tmp_assign_source_154;
        }
        {
            nuitka_bool tmp_condition_result_88;
            PyObject *tmp_operand_name_22;
            PyObject *tmp_source_name_87;
            CHECK_OBJECT( tmp_class_creation_22__prepared );
            tmp_source_name_87 = tmp_class_creation_22__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_87, const_str_plain___getitem__ );
            tmp_operand_name_22 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_22 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;

                goto try_except_handler_64;
            }
            tmp_condition_result_88 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_88 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_66;
            }
            else
            {
                goto branch_no_66;
            }
            branch_yes_66:;
            {
                PyObject *tmp_raise_type_22;
                PyObject *tmp_raise_value_22;
                PyObject *tmp_left_name_22;
                PyObject *tmp_right_name_22;
                PyObject *tmp_tuple_element_85;
                PyObject *tmp_getattr_target_22;
                PyObject *tmp_getattr_attr_22;
                PyObject *tmp_getattr_default_22;
                PyObject *tmp_source_name_88;
                PyObject *tmp_type_arg_43;
                tmp_raise_type_22 = PyExc_TypeError;
                tmp_left_name_22 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_22__metaclass );
                tmp_getattr_target_22 = tmp_class_creation_22__metaclass;
                tmp_getattr_attr_22 = const_str_plain___name__;
                tmp_getattr_default_22 = const_str_angle_metaclass;
                tmp_tuple_element_85 = BUILTIN_GETATTR( tmp_getattr_target_22, tmp_getattr_attr_22, tmp_getattr_default_22 );
                if ( tmp_tuple_element_85 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 119;

                    goto try_except_handler_64;
                }
                tmp_right_name_22 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_22, 0, tmp_tuple_element_85 );
                CHECK_OBJECT( tmp_class_creation_22__prepared );
                tmp_type_arg_43 = tmp_class_creation_22__prepared;
                tmp_source_name_88 = BUILTIN_TYPE1( tmp_type_arg_43 );
                assert( !(tmp_source_name_88 == NULL) );
                tmp_tuple_element_85 = LOOKUP_ATTRIBUTE( tmp_source_name_88, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_88 );
                if ( tmp_tuple_element_85 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_22 );

                    exception_lineno = 119;

                    goto try_except_handler_64;
                }
                PyTuple_SET_ITEM( tmp_right_name_22, 1, tmp_tuple_element_85 );
                tmp_raise_value_22 = BINARY_OPERATION_REMAINDER( tmp_left_name_22, tmp_right_name_22 );
                Py_DECREF( tmp_right_name_22 );
                if ( tmp_raise_value_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 119;

                    goto try_except_handler_64;
                }
                exception_type = tmp_raise_type_22;
                Py_INCREF( tmp_raise_type_22 );
                exception_value = tmp_raise_value_22;
                exception_lineno = 119;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_64;
            }
            branch_no_66:;
        }
        goto branch_end_65;
        branch_no_65:;
        {
            PyObject *tmp_assign_source_155;
            tmp_assign_source_155 = PyDict_New();
            assert( tmp_class_creation_22__prepared == NULL );
            tmp_class_creation_22__prepared = tmp_assign_source_155;
        }
        branch_end_65:;
    }
    {
        PyObject *tmp_assign_source_156;
        {
            PyObject *tmp_set_locals_22;
            CHECK_OBJECT( tmp_class_creation_22__prepared );
            tmp_set_locals_22 = tmp_class_creation_22__prepared;
            locals_requests$exceptions_119 = tmp_set_locals_22;
            Py_INCREF( tmp_set_locals_22 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_119, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;

            goto try_except_handler_66;
        }
        tmp_dictset_value = const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_119, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;

            goto try_except_handler_66;
        }
        tmp_dictset_value = const_str_plain_FileModeWarning;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_119, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;

            goto try_except_handler_66;
        }
        {
            PyObject *tmp_assign_source_157;
            PyObject *tmp_called_name_44;
            PyObject *tmp_args_name_44;
            PyObject *tmp_tuple_element_86;
            PyObject *tmp_kw_name_44;
            CHECK_OBJECT( tmp_class_creation_22__metaclass );
            tmp_called_name_44 = tmp_class_creation_22__metaclass;
            tmp_tuple_element_86 = const_str_plain_FileModeWarning;
            tmp_args_name_44 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_86 );
            PyTuple_SET_ITEM( tmp_args_name_44, 0, tmp_tuple_element_86 );
            CHECK_OBJECT( tmp_class_creation_22__bases );
            tmp_tuple_element_86 = tmp_class_creation_22__bases;
            Py_INCREF( tmp_tuple_element_86 );
            PyTuple_SET_ITEM( tmp_args_name_44, 1, tmp_tuple_element_86 );
            tmp_tuple_element_86 = locals_requests$exceptions_119;
            Py_INCREF( tmp_tuple_element_86 );
            PyTuple_SET_ITEM( tmp_args_name_44, 2, tmp_tuple_element_86 );
            CHECK_OBJECT( tmp_class_creation_22__class_decl_dict );
            tmp_kw_name_44 = tmp_class_creation_22__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 119;
            tmp_assign_source_157 = CALL_FUNCTION( tmp_called_name_44, tmp_args_name_44, tmp_kw_name_44 );
            Py_DECREF( tmp_args_name_44 );
            if ( tmp_assign_source_157 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;

                goto try_except_handler_66;
            }
            assert( outline_21_var___class__ == NULL );
            outline_21_var___class__ = tmp_assign_source_157;
        }
        CHECK_OBJECT( outline_21_var___class__ );
        tmp_assign_source_156 = outline_21_var___class__;
        Py_INCREF( tmp_assign_source_156 );
        goto try_return_handler_66;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_66:;
        Py_DECREF( locals_requests$exceptions_119 );
        locals_requests$exceptions_119 = NULL;
        goto try_return_handler_65;
        // Exception handler code:
        try_except_handler_66:;
        exception_keeper_type_64 = exception_type;
        exception_keeper_value_64 = exception_value;
        exception_keeper_tb_64 = exception_tb;
        exception_keeper_lineno_64 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_requests$exceptions_119 );
        locals_requests$exceptions_119 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_64;
        exception_value = exception_keeper_value_64;
        exception_tb = exception_keeper_tb_64;
        exception_lineno = exception_keeper_lineno_64;

        goto try_except_handler_65;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_65:;
        CHECK_OBJECT( (PyObject *)outline_21_var___class__ );
        Py_DECREF( outline_21_var___class__ );
        outline_21_var___class__ = NULL;

        goto outline_result_22;
        // Exception handler code:
        try_except_handler_65:;
        exception_keeper_type_65 = exception_type;
        exception_keeper_value_65 = exception_value;
        exception_keeper_tb_65 = exception_tb;
        exception_keeper_lineno_65 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_65;
        exception_value = exception_keeper_value_65;
        exception_tb = exception_keeper_tb_65;
        exception_lineno = exception_keeper_lineno_65;

        goto outline_exception_22;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_22:;
        exception_lineno = 119;
        goto try_except_handler_64;
        outline_result_22:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_FileModeWarning, tmp_assign_source_156 );
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_64:;
    exception_keeper_type_66 = exception_type;
    exception_keeper_value_66 = exception_value;
    exception_keeper_tb_66 = exception_tb;
    exception_keeper_lineno_66 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_22__bases );
    tmp_class_creation_22__bases = NULL;

    Py_XDECREF( tmp_class_creation_22__class_decl_dict );
    tmp_class_creation_22__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_22__metaclass );
    tmp_class_creation_22__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_22__prepared );
    tmp_class_creation_22__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_66;
    exception_value = exception_keeper_value_66;
    exception_tb = exception_keeper_tb_66;
    exception_lineno = exception_keeper_lineno_66;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__bases );
    Py_DECREF( tmp_class_creation_22__bases );
    tmp_class_creation_22__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__class_decl_dict );
    Py_DECREF( tmp_class_creation_22__class_decl_dict );
    tmp_class_creation_22__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__metaclass );
    Py_DECREF( tmp_class_creation_22__metaclass );
    tmp_class_creation_22__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__prepared );
    Py_DECREF( tmp_class_creation_22__prepared );
    tmp_class_creation_22__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_tuple_element_87;
        PyObject *tmp_mvar_value_27;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestsWarning );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsWarning );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestsWarning" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 124;

            goto try_except_handler_67;
        }

        tmp_tuple_element_87 = tmp_mvar_value_27;
        tmp_assign_source_158 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_87 );
        PyTuple_SET_ITEM( tmp_assign_source_158, 0, tmp_tuple_element_87 );
        assert( tmp_class_creation_23__bases == NULL );
        tmp_class_creation_23__bases = tmp_assign_source_158;
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = PyDict_New();
        assert( tmp_class_creation_23__class_decl_dict == NULL );
        tmp_class_creation_23__class_decl_dict = tmp_assign_source_159;
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_metaclass_name_23;
        nuitka_bool tmp_condition_result_89;
        PyObject *tmp_key_name_67;
        PyObject *tmp_dict_name_67;
        PyObject *tmp_dict_name_68;
        PyObject *tmp_key_name_68;
        PyObject *tmp_type_arg_44;
        PyObject *tmp_subscribed_name_22;
        PyObject *tmp_subscript_name_22;
        PyObject *tmp_bases_name_23;
        tmp_key_name_67 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_23__class_decl_dict );
        tmp_dict_name_67 = tmp_class_creation_23__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_67, tmp_key_name_67 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto try_except_handler_67;
        }
        tmp_condition_result_89 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_89 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_23;
        }
        else
        {
            goto condexpr_false_23;
        }
        condexpr_true_23:;
        CHECK_OBJECT( tmp_class_creation_23__class_decl_dict );
        tmp_dict_name_68 = tmp_class_creation_23__class_decl_dict;
        tmp_key_name_68 = const_str_plain_metaclass;
        tmp_metaclass_name_23 = DICT_GET_ITEM( tmp_dict_name_68, tmp_key_name_68 );
        if ( tmp_metaclass_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto try_except_handler_67;
        }
        goto condexpr_end_23;
        condexpr_false_23:;
        CHECK_OBJECT( tmp_class_creation_23__bases );
        tmp_subscribed_name_22 = tmp_class_creation_23__bases;
        tmp_subscript_name_22 = const_int_0;
        tmp_type_arg_44 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_22, tmp_subscript_name_22, 0 );
        if ( tmp_type_arg_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto try_except_handler_67;
        }
        tmp_metaclass_name_23 = BUILTIN_TYPE1( tmp_type_arg_44 );
        Py_DECREF( tmp_type_arg_44 );
        if ( tmp_metaclass_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto try_except_handler_67;
        }
        condexpr_end_23:;
        CHECK_OBJECT( tmp_class_creation_23__bases );
        tmp_bases_name_23 = tmp_class_creation_23__bases;
        tmp_assign_source_160 = SELECT_METACLASS( tmp_metaclass_name_23, tmp_bases_name_23 );
        Py_DECREF( tmp_metaclass_name_23 );
        if ( tmp_assign_source_160 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto try_except_handler_67;
        }
        assert( tmp_class_creation_23__metaclass == NULL );
        tmp_class_creation_23__metaclass = tmp_assign_source_160;
    }
    {
        nuitka_bool tmp_condition_result_90;
        PyObject *tmp_key_name_69;
        PyObject *tmp_dict_name_69;
        tmp_key_name_69 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_23__class_decl_dict );
        tmp_dict_name_69 = tmp_class_creation_23__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_69, tmp_key_name_69 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto try_except_handler_67;
        }
        tmp_condition_result_90 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_90 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_67;
        }
        else
        {
            goto branch_no_67;
        }
        branch_yes_67:;
        CHECK_OBJECT( tmp_class_creation_23__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_23__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto try_except_handler_67;
        }
        branch_no_67:;
    }
    {
        nuitka_bool tmp_condition_result_91;
        PyObject *tmp_source_name_89;
        CHECK_OBJECT( tmp_class_creation_23__metaclass );
        tmp_source_name_89 = tmp_class_creation_23__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_89, const_str_plain___prepare__ );
        tmp_condition_result_91 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_91 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_68;
        }
        else
        {
            goto branch_no_68;
        }
        branch_yes_68:;
        {
            PyObject *tmp_assign_source_161;
            PyObject *tmp_called_name_45;
            PyObject *tmp_source_name_90;
            PyObject *tmp_args_name_45;
            PyObject *tmp_tuple_element_88;
            PyObject *tmp_kw_name_45;
            CHECK_OBJECT( tmp_class_creation_23__metaclass );
            tmp_source_name_90 = tmp_class_creation_23__metaclass;
            tmp_called_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_90, const_str_plain___prepare__ );
            if ( tmp_called_name_45 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;

                goto try_except_handler_67;
            }
            tmp_tuple_element_88 = const_str_plain_RequestsDependencyWarning;
            tmp_args_name_45 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_88 );
            PyTuple_SET_ITEM( tmp_args_name_45, 0, tmp_tuple_element_88 );
            CHECK_OBJECT( tmp_class_creation_23__bases );
            tmp_tuple_element_88 = tmp_class_creation_23__bases;
            Py_INCREF( tmp_tuple_element_88 );
            PyTuple_SET_ITEM( tmp_args_name_45, 1, tmp_tuple_element_88 );
            CHECK_OBJECT( tmp_class_creation_23__class_decl_dict );
            tmp_kw_name_45 = tmp_class_creation_23__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 124;
            tmp_assign_source_161 = CALL_FUNCTION( tmp_called_name_45, tmp_args_name_45, tmp_kw_name_45 );
            Py_DECREF( tmp_called_name_45 );
            Py_DECREF( tmp_args_name_45 );
            if ( tmp_assign_source_161 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;

                goto try_except_handler_67;
            }
            assert( tmp_class_creation_23__prepared == NULL );
            tmp_class_creation_23__prepared = tmp_assign_source_161;
        }
        {
            nuitka_bool tmp_condition_result_92;
            PyObject *tmp_operand_name_23;
            PyObject *tmp_source_name_91;
            CHECK_OBJECT( tmp_class_creation_23__prepared );
            tmp_source_name_91 = tmp_class_creation_23__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_91, const_str_plain___getitem__ );
            tmp_operand_name_23 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_23 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;

                goto try_except_handler_67;
            }
            tmp_condition_result_92 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_92 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_69;
            }
            else
            {
                goto branch_no_69;
            }
            branch_yes_69:;
            {
                PyObject *tmp_raise_type_23;
                PyObject *tmp_raise_value_23;
                PyObject *tmp_left_name_23;
                PyObject *tmp_right_name_23;
                PyObject *tmp_tuple_element_89;
                PyObject *tmp_getattr_target_23;
                PyObject *tmp_getattr_attr_23;
                PyObject *tmp_getattr_default_23;
                PyObject *tmp_source_name_92;
                PyObject *tmp_type_arg_45;
                tmp_raise_type_23 = PyExc_TypeError;
                tmp_left_name_23 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_23__metaclass );
                tmp_getattr_target_23 = tmp_class_creation_23__metaclass;
                tmp_getattr_attr_23 = const_str_plain___name__;
                tmp_getattr_default_23 = const_str_angle_metaclass;
                tmp_tuple_element_89 = BUILTIN_GETATTR( tmp_getattr_target_23, tmp_getattr_attr_23, tmp_getattr_default_23 );
                if ( tmp_tuple_element_89 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 124;

                    goto try_except_handler_67;
                }
                tmp_right_name_23 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_23, 0, tmp_tuple_element_89 );
                CHECK_OBJECT( tmp_class_creation_23__prepared );
                tmp_type_arg_45 = tmp_class_creation_23__prepared;
                tmp_source_name_92 = BUILTIN_TYPE1( tmp_type_arg_45 );
                assert( !(tmp_source_name_92 == NULL) );
                tmp_tuple_element_89 = LOOKUP_ATTRIBUTE( tmp_source_name_92, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_92 );
                if ( tmp_tuple_element_89 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_23 );

                    exception_lineno = 124;

                    goto try_except_handler_67;
                }
                PyTuple_SET_ITEM( tmp_right_name_23, 1, tmp_tuple_element_89 );
                tmp_raise_value_23 = BINARY_OPERATION_REMAINDER( tmp_left_name_23, tmp_right_name_23 );
                Py_DECREF( tmp_right_name_23 );
                if ( tmp_raise_value_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 124;

                    goto try_except_handler_67;
                }
                exception_type = tmp_raise_type_23;
                Py_INCREF( tmp_raise_type_23 );
                exception_value = tmp_raise_value_23;
                exception_lineno = 124;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_67;
            }
            branch_no_69:;
        }
        goto branch_end_68;
        branch_no_68:;
        {
            PyObject *tmp_assign_source_162;
            tmp_assign_source_162 = PyDict_New();
            assert( tmp_class_creation_23__prepared == NULL );
            tmp_class_creation_23__prepared = tmp_assign_source_162;
        }
        branch_end_68:;
    }
    {
        PyObject *tmp_assign_source_163;
        {
            PyObject *tmp_set_locals_23;
            CHECK_OBJECT( tmp_class_creation_23__prepared );
            tmp_set_locals_23 = tmp_class_creation_23__prepared;
            locals_requests$exceptions_124 = tmp_set_locals_23;
            Py_INCREF( tmp_set_locals_23 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_124, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto try_except_handler_69;
        }
        tmp_dictset_value = const_str_digest_3a035decbb1d48c6b204b28e42512076;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_124, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto try_except_handler_69;
        }
        tmp_dictset_value = const_str_plain_RequestsDependencyWarning;
        tmp_res = PyObject_SetItem( locals_requests$exceptions_124, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto try_except_handler_69;
        }
        {
            PyObject *tmp_assign_source_164;
            PyObject *tmp_called_name_46;
            PyObject *tmp_args_name_46;
            PyObject *tmp_tuple_element_90;
            PyObject *tmp_kw_name_46;
            CHECK_OBJECT( tmp_class_creation_23__metaclass );
            tmp_called_name_46 = tmp_class_creation_23__metaclass;
            tmp_tuple_element_90 = const_str_plain_RequestsDependencyWarning;
            tmp_args_name_46 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_90 );
            PyTuple_SET_ITEM( tmp_args_name_46, 0, tmp_tuple_element_90 );
            CHECK_OBJECT( tmp_class_creation_23__bases );
            tmp_tuple_element_90 = tmp_class_creation_23__bases;
            Py_INCREF( tmp_tuple_element_90 );
            PyTuple_SET_ITEM( tmp_args_name_46, 1, tmp_tuple_element_90 );
            tmp_tuple_element_90 = locals_requests$exceptions_124;
            Py_INCREF( tmp_tuple_element_90 );
            PyTuple_SET_ITEM( tmp_args_name_46, 2, tmp_tuple_element_90 );
            CHECK_OBJECT( tmp_class_creation_23__class_decl_dict );
            tmp_kw_name_46 = tmp_class_creation_23__class_decl_dict;
            frame_ccaa0df725a909f813710f0c4d7020fd->m_frame.f_lineno = 124;
            tmp_assign_source_164 = CALL_FUNCTION( tmp_called_name_46, tmp_args_name_46, tmp_kw_name_46 );
            Py_DECREF( tmp_args_name_46 );
            if ( tmp_assign_source_164 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;

                goto try_except_handler_69;
            }
            assert( outline_22_var___class__ == NULL );
            outline_22_var___class__ = tmp_assign_source_164;
        }
        CHECK_OBJECT( outline_22_var___class__ );
        tmp_assign_source_163 = outline_22_var___class__;
        Py_INCREF( tmp_assign_source_163 );
        goto try_return_handler_69;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_69:;
        Py_DECREF( locals_requests$exceptions_124 );
        locals_requests$exceptions_124 = NULL;
        goto try_return_handler_68;
        // Exception handler code:
        try_except_handler_69:;
        exception_keeper_type_67 = exception_type;
        exception_keeper_value_67 = exception_value;
        exception_keeper_tb_67 = exception_tb;
        exception_keeper_lineno_67 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_requests$exceptions_124 );
        locals_requests$exceptions_124 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_67;
        exception_value = exception_keeper_value_67;
        exception_tb = exception_keeper_tb_67;
        exception_lineno = exception_keeper_lineno_67;

        goto try_except_handler_68;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_68:;
        CHECK_OBJECT( (PyObject *)outline_22_var___class__ );
        Py_DECREF( outline_22_var___class__ );
        outline_22_var___class__ = NULL;

        goto outline_result_23;
        // Exception handler code:
        try_except_handler_68:;
        exception_keeper_type_68 = exception_type;
        exception_keeper_value_68 = exception_value;
        exception_keeper_tb_68 = exception_tb;
        exception_keeper_lineno_68 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_68;
        exception_value = exception_keeper_value_68;
        exception_tb = exception_keeper_tb_68;
        exception_lineno = exception_keeper_lineno_68;

        goto outline_exception_23;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_23:;
        exception_lineno = 124;
        goto try_except_handler_67;
        outline_result_23:;
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestsDependencyWarning, tmp_assign_source_163 );
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_67:;
    exception_keeper_type_69 = exception_type;
    exception_keeper_value_69 = exception_value;
    exception_keeper_tb_69 = exception_tb;
    exception_keeper_lineno_69 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_23__bases );
    tmp_class_creation_23__bases = NULL;

    Py_XDECREF( tmp_class_creation_23__class_decl_dict );
    tmp_class_creation_23__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_23__metaclass );
    tmp_class_creation_23__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_23__prepared );
    tmp_class_creation_23__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_69;
    exception_value = exception_keeper_value_69;
    exception_tb = exception_keeper_tb_69;
    exception_lineno = exception_keeper_lineno_69;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ccaa0df725a909f813710f0c4d7020fd );
#endif
    popFrameStack();

    assertFrameObject( frame_ccaa0df725a909f813710f0c4d7020fd );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ccaa0df725a909f813710f0c4d7020fd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ccaa0df725a909f813710f0c4d7020fd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ccaa0df725a909f813710f0c4d7020fd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ccaa0df725a909f813710f0c4d7020fd, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__bases );
    Py_DECREF( tmp_class_creation_23__bases );
    tmp_class_creation_23__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__class_decl_dict );
    Py_DECREF( tmp_class_creation_23__class_decl_dict );
    tmp_class_creation_23__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__metaclass );
    Py_DECREF( tmp_class_creation_23__metaclass );
    tmp_class_creation_23__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__prepared );
    Py_DECREF( tmp_class_creation_23__prepared );
    tmp_class_creation_23__prepared = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_requests$exceptions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}