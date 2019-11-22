/* Generated code for Python module 'urllib3.util.request'
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

/* The "_module_urllib3$util$request" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$request;
PyDictObject *moduledict_urllib3$util$request;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_d2b904b25d381938ff5e527197f159f9;
extern PyObject *const_str_plain_b;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
static PyObject *const_tuple_str_plain_body_str_plain_body_pos_str_plain_body_seek_tuple;
extern PyObject *const_str_plain_headers;
extern PyObject *const_str_plain_rewind_body;
static PyObject *const_str_digest_0209911ea85084279425c4a3b9b4322a;
static PyObject *const_tuple_bf13d4977692576812fdd050c4821ab2_tuple;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_body_pos;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_str;
static PyObject *const_str_plain_keep_alive;
static PyObject *const_str_plain_ACCEPT_ENCODING;
extern PyObject *const_str_chr_44;
extern PyObject *const_tuple_none_none_none_none_none_none_tuple;
static PyObject *const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple;
static PyObject *const_str_digest_6c6cf011b66fe0cd25c3666fb019702d;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain_UnrewindableBodyError;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_connection;
static PyObject *const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537;
static PyObject *const_str_digest_77bc5054242d5f3e5269bd07a4342f1b;
static PyObject *const_str_plain_accept_encoding;
static PyObject *const_str_plain_user_agent;
static PyObject *const_tuple_str_plain_UnrewindableBodyError_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_141f53ac830b1d16e6fa74a381d6e6a2;
static PyObject *const_str_digest_a97b46010ba2d7a042fbaf3749619f69;
static PyObject *const_tuple_str_plain_b_str_plain_integer_types_tuple;
static PyObject *const_str_digest_5f141d838086b56fa77388201c41468d;
extern PyObject *const_str_plain_brotli;
static PyObject *const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2;
static PyObject *const_str_digest_62602cb6603929977f40e7e98d6957ef;
extern PyObject *const_str_plain_base64;
extern PyObject *const_str_plain_seek;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_edd9cb70c3537b6a2b58ab6b4487087a;
extern PyObject *const_str_plain_set_file_position;
extern PyObject *const_str_plain_b64encode;
static PyObject *const_str_plain_disable_cache;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
static PyObject *const_tuple_str_plain_body_str_plain_pos_tuple;
static PyObject *const_str_digest_de34be5091ab4ac19953db79567103ed;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_integer_types;
static PyObject *const_str_digest_5bbc1e7723c5316999b643d8effd069e;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain__unused_module_brotli;
static PyObject *const_str_plain_basic_auth;
static PyObject *const_str_plain_proxy_basic_auth;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_make_headers;
static PyObject *const_str_digest_47d4abcbaab2ba783709ab98383a7f12;
static PyObject *const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple;
static PyObject *const_str_digest_a11559a1f0b9dc4b626402a68b9ebc45;
extern PyObject *const_str_plain_join;
static PyObject *const_str_plain__FAILEDTELL;
extern PyObject *const_str_plain_body;
static PyObject *const_str_digest_726f4c9a876879b008c85b6851a1570f;
extern PyObject *const_str_plain_tell;
static PyObject *const_str_digest_cc5c142a5aaab5d4cf43012035230cc0;
extern PyObject *const_str_plain_pos;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain_body_seek;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_authorization;
extern PyObject *const_tuple_type_OSError_type_OSError_tuple;
extern PyObject *const_tuple_str_plain_b64encode_tuple;
extern PyObject *const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_d2b904b25d381938ff5e527197f159f9 = UNSTREAM_STRING_ASCII( &constant_bin[ 5195910 ], 3, 0 );
    const_tuple_str_plain_body_str_plain_body_pos_str_plain_body_seek_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_body_str_plain_body_pos_str_plain_body_seek_tuple, 0, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_str_plain_body_str_plain_body_pos_str_plain_body_seek_tuple, 1, const_str_plain_body_pos ); Py_INCREF( const_str_plain_body_pos );
    PyTuple_SET_ITEM( const_tuple_str_plain_body_str_plain_body_pos_str_plain_body_seek_tuple, 2, const_str_plain_body_seek ); Py_INCREF( const_str_plain_body_seek );
    const_str_digest_0209911ea85084279425c4a3b9b4322a = UNSTREAM_STRING_ASCII( &constant_bin[ 5913629 ], 230, 0 );
    const_tuple_bf13d4977692576812fdd050c4821ab2_tuple = PyTuple_New( 7 );
    const_str_plain_keep_alive = UNSTREAM_STRING_ASCII( &constant_bin[ 5913859 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 0, const_str_plain_keep_alive ); Py_INCREF( const_str_plain_keep_alive );
    const_str_plain_accept_encoding = UNSTREAM_STRING_ASCII( &constant_bin[ 5913869 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 1, const_str_plain_accept_encoding ); Py_INCREF( const_str_plain_accept_encoding );
    const_str_plain_user_agent = UNSTREAM_STRING_ASCII( &constant_bin[ 4055276 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 2, const_str_plain_user_agent ); Py_INCREF( const_str_plain_user_agent );
    const_str_plain_basic_auth = UNSTREAM_STRING_ASCII( &constant_bin[ 5913884 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 3, const_str_plain_basic_auth ); Py_INCREF( const_str_plain_basic_auth );
    const_str_plain_proxy_basic_auth = UNSTREAM_STRING_ASCII( &constant_bin[ 5913894 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 4, const_str_plain_proxy_basic_auth ); Py_INCREF( const_str_plain_proxy_basic_auth );
    const_str_plain_disable_cache = UNSTREAM_STRING_ASCII( &constant_bin[ 5913910 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 5, const_str_plain_disable_cache ); Py_INCREF( const_str_plain_disable_cache );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 6, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    const_str_plain_ACCEPT_ENCODING = UNSTREAM_STRING_ASCII( &constant_bin[ 5913923 ], 15, 1 );
    const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple = PyTuple_New( 1 );
    const_str_digest_5bbc1e7723c5316999b643d8effd069e = UNSTREAM_STRING_ASCII( &constant_bin[ 5913938 ], 82, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple, 0, const_str_digest_5bbc1e7723c5316999b643d8effd069e ); Py_INCREF( const_str_digest_5bbc1e7723c5316999b643d8effd069e );
    const_str_digest_6c6cf011b66fe0cd25c3666fb019702d = UNSTREAM_STRING_ASCII( &constant_bin[ 5914020 ], 23, 0 );
    const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537 = UNSTREAM_STRING_ASCII( &constant_bin[ 5914043 ], 13, 0 );
    const_str_digest_77bc5054242d5f3e5269bd07a4342f1b = UNSTREAM_STRING_ASCII( &constant_bin[ 5914056 ], 12, 0 );
    const_tuple_str_plain_UnrewindableBodyError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_UnrewindableBodyError_tuple, 0, const_str_plain_UnrewindableBodyError ); Py_INCREF( const_str_plain_UnrewindableBodyError );
    const_str_digest_a97b46010ba2d7a042fbaf3749619f69 = UNSTREAM_STRING_ASCII( &constant_bin[ 5914068 ], 8, 0 );
    const_tuple_str_plain_b_str_plain_integer_types_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_integer_types_tuple, 0, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_integer_types_tuple, 1, const_str_plain_integer_types ); Py_INCREF( const_str_plain_integer_types );
    const_str_digest_5f141d838086b56fa77388201c41468d = UNSTREAM_STRING_ASCII( &constant_bin[ 5914076 ], 52, 0 );
    const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5914128 ], 19, 0 );
    const_str_digest_62602cb6603929977f40e7e98d6957ef = UNSTREAM_STRING_ASCII( &constant_bin[ 5914147 ], 29, 0 );
    const_tuple_str_plain_body_str_plain_pos_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_body_str_plain_pos_tuple, 0, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_str_plain_body_str_plain_pos_tuple, 1, const_str_plain_pos ); Py_INCREF( const_str_plain_pos );
    const_str_digest_de34be5091ab4ac19953db79567103ed = UNSTREAM_STRING_ASCII( &constant_bin[ 5914176 ], 65, 0 );
    const_str_plain__unused_module_brotli = UNSTREAM_STRING_ASCII( &constant_bin[ 5914241 ], 21, 1 );
    const_str_digest_47d4abcbaab2ba783709ab98383a7f12 = UNSTREAM_STRING_ASCII( &constant_bin[ 5914262 ], 1035, 0 );
    const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple, 0, const_str_digest_de34be5091ab4ac19953db79567103ed ); Py_INCREF( const_str_digest_de34be5091ab4ac19953db79567103ed );
    const_str_digest_a11559a1f0b9dc4b626402a68b9ebc45 = UNSTREAM_STRING_ASCII( &constant_bin[ 5914155 ], 20, 0 );
    const_str_plain__FAILEDTELL = UNSTREAM_STRING_ASCII( &constant_bin[ 5915297 ], 11, 1 );
    const_str_digest_726f4c9a876879b008c85b6851a1570f = UNSTREAM_STRING_ASCII( &constant_bin[ 5914647 ], 10, 0 );
    const_str_digest_cc5c142a5aaab5d4cf43012035230cc0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5915308 ], 127, 0 );
    const_str_plain_authorization = UNSTREAM_STRING_ASCII( &constant_bin[ 5914134 ], 13, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$request( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c62624ac9b380449d105cca88c22de02;
static PyCodeObject *codeobj_dd1ef03c8391075f5bc84c7cfb52f16d;
static PyCodeObject *codeobj_edb79cc105c3b7c4800a884c6c93feb3;
static PyCodeObject *codeobj_0572f8b59f954db60c6c6427f3895cc2;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_6c6cf011b66fe0cd25c3666fb019702d );
    codeobj_c62624ac9b380449d105cca88c22de02 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_62602cb6603929977f40e7e98d6957ef, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_dd1ef03c8391075f5bc84c7cfb52f16d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_make_headers, 18, const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_edb79cc105c3b7c4800a884c6c93feb3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rewind_body, 102, const_tuple_str_plain_body_str_plain_body_pos_str_plain_body_seek_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0572f8b59f954db60c6c6427f3895cc2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_file_position, 84, const_tuple_str_plain_body_str_plain_pos_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function_1_make_headers( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function_2_set_file_position(  );


static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function_3_rewind_body(  );


// The module function definitions.
static PyObject *impl_urllib3$util$request$$$function_1_make_headers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_keep_alive = python_pars[ 0 ];
    PyObject *par_accept_encoding = python_pars[ 1 ];
    PyObject *par_user_agent = python_pars[ 2 ];
    PyObject *par_basic_auth = python_pars[ 3 ];
    PyObject *par_proxy_basic_auth = python_pars[ 4 ];
    PyObject *par_disable_cache = python_pars[ 5 ];
    PyObject *var_headers = NULL;
    struct Nuitka_FrameObject *frame_dd1ef03c8391075f5bc84c7cfb52f16d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    static struct Nuitka_FrameObject *cache_frame_dd1ef03c8391075f5bc84c7cfb52f16d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert( var_headers == NULL );
        var_headers = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dd1ef03c8391075f5bc84c7cfb52f16d, codeobj_dd1ef03c8391075f5bc84c7cfb52f16d, module_urllib3$util$request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_dd1ef03c8391075f5bc84c7cfb52f16d = cache_frame_dd1ef03c8391075f5bc84c7cfb52f16d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dd1ef03c8391075f5bc84c7cfb52f16d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dd1ef03c8391075f5bc84c7cfb52f16d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_accept_encoding );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_accept_encoding );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "ooooooo";
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            CHECK_OBJECT( par_accept_encoding );
            tmp_isinstance_inst_1 = par_accept_encoding;
            tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "ooooooo";
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
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_isinstance_inst_2;
                PyObject *tmp_isinstance_cls_2;
                CHECK_OBJECT( par_accept_encoding );
                tmp_isinstance_inst_2 = par_accept_encoding;
                tmp_isinstance_cls_2 = (PyObject *)&PyList_Type;
                tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 58;
                    type_description_1 = "ooooooo";
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
                    PyObject *tmp_assign_source_2;
                    PyObject *tmp_called_instance_1;
                    PyObject *tmp_args_element_name_1;
                    tmp_called_instance_1 = const_str_chr_44;
                    CHECK_OBJECT( par_accept_encoding );
                    tmp_args_element_name_1 = par_accept_encoding;
                    frame_dd1ef03c8391075f5bc84c7cfb52f16d->m_frame.f_lineno = 59;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_1 };
                        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_join, call_args );
                    }

                    if ( tmp_assign_source_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 59;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_accept_encoding;
                        assert( old != NULL );
                        par_accept_encoding = tmp_assign_source_2;
                        Py_DECREF( old );
                    }

                }
                goto branch_end_3;
                branch_no_3:;
                {
                    PyObject *tmp_assign_source_3;
                    PyObject *tmp_mvar_value_1;
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_ACCEPT_ENCODING );

                    if (unlikely( tmp_mvar_value_1 == NULL ))
                    {
                        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACCEPT_ENCODING );
                    }

                    if ( tmp_mvar_value_1 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ACCEPT_ENCODING" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 61;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_assign_source_3 = tmp_mvar_value_1;
                    {
                        PyObject *old = par_accept_encoding;
                        assert( old != NULL );
                        par_accept_encoding = tmp_assign_source_3;
                        Py_INCREF( par_accept_encoding );
                        Py_DECREF( old );
                    }

                }
                branch_end_3:;
            }
            branch_no_2:;
        }
        if ( par_accept_encoding == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "accept_encoding" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 62;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dictset_value = par_accept_encoding;
        CHECK_OBJECT( var_headers );
        tmp_dictset_dict = var_headers;
        tmp_dictset_key = const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_user_agent );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_user_agent );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        CHECK_OBJECT( par_user_agent );
        tmp_dictset_value = par_user_agent;
        CHECK_OBJECT( var_headers );
        tmp_dictset_dict = var_headers;
        tmp_dictset_key = const_str_digest_726f4c9a876879b008c85b6851a1570f;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_keep_alive );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_keep_alive );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        tmp_dictset_value = const_str_digest_141f53ac830b1d16e6fa74a381d6e6a2;
        CHECK_OBJECT( var_headers );
        tmp_dictset_dict = var_headers;
        tmp_dictset_key = const_str_plain_connection;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_4;
        CHECK_OBJECT( par_basic_auth );
        tmp_truth_name_4 = CHECK_IF_TRUE( par_basic_auth );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_left_name_1 = const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b64encode );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b64encode );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "b64encode" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 72;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "b" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 72;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( par_basic_auth );
            tmp_args_element_name_3 = par_basic_auth;
            frame_dd1ef03c8391075f5bc84c7cfb52f16d->m_frame.f_lineno = 72;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_dd1ef03c8391075f5bc84c7cfb52f16d->m_frame.f_lineno = 72;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_called_instance_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_dd1ef03c8391075f5bc84c7cfb52f16d->m_frame.f_lineno = 72;
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dictset_value = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_headers );
            tmp_dictset_dict = var_headers;
            tmp_dictset_key = const_str_plain_authorization;
            tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_5;
        CHECK_OBJECT( par_proxy_basic_auth );
        tmp_truth_name_5 = CHECK_IF_TRUE( par_proxy_basic_auth );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_5;
            tmp_left_name_2 = const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b64encode );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b64encode );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "b64encode" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 76;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_4;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "b" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 76;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_5;
            CHECK_OBJECT( par_proxy_basic_auth );
            tmp_args_element_name_5 = par_proxy_basic_auth;
            frame_dd1ef03c8391075f5bc84c7cfb52f16d->m_frame.f_lineno = 76;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_dd1ef03c8391075f5bc84c7cfb52f16d->m_frame.f_lineno = 76;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_called_instance_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_dd1ef03c8391075f5bc84c7cfb52f16d->m_frame.f_lineno = 76;
            tmp_right_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dictset_value = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_headers );
            tmp_dictset_dict = var_headers;
            tmp_dictset_key = const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2;
            tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_6;
        CHECK_OBJECT( par_disable_cache );
        tmp_truth_name_6 = CHECK_IF_TRUE( par_disable_cache );
        if ( tmp_truth_name_6 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        tmp_dictset_value = const_str_digest_a97b46010ba2d7a042fbaf3749619f69;
        CHECK_OBJECT( var_headers );
        tmp_dictset_dict = var_headers;
        tmp_dictset_key = const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_8:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd1ef03c8391075f5bc84c7cfb52f16d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd1ef03c8391075f5bc84c7cfb52f16d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dd1ef03c8391075f5bc84c7cfb52f16d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dd1ef03c8391075f5bc84c7cfb52f16d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dd1ef03c8391075f5bc84c7cfb52f16d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dd1ef03c8391075f5bc84c7cfb52f16d,
        type_description_1,
        par_keep_alive,
        par_accept_encoding,
        par_user_agent,
        par_basic_auth,
        par_proxy_basic_auth,
        par_disable_cache,
        var_headers
    );


    // Release cached frame.
    if ( frame_dd1ef03c8391075f5bc84c7cfb52f16d == cache_frame_dd1ef03c8391075f5bc84c7cfb52f16d )
    {
        Py_DECREF( frame_dd1ef03c8391075f5bc84c7cfb52f16d );
    }
    cache_frame_dd1ef03c8391075f5bc84c7cfb52f16d = NULL;

    assertFrameObject( frame_dd1ef03c8391075f5bc84c7cfb52f16d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_headers );
    tmp_return_value = var_headers;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$request$$$function_1_make_headers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_keep_alive );
    Py_DECREF( par_keep_alive );
    par_keep_alive = NULL;

    Py_XDECREF( par_accept_encoding );
    par_accept_encoding = NULL;

    CHECK_OBJECT( (PyObject *)par_user_agent );
    Py_DECREF( par_user_agent );
    par_user_agent = NULL;

    CHECK_OBJECT( (PyObject *)par_basic_auth );
    Py_DECREF( par_basic_auth );
    par_basic_auth = NULL;

    CHECK_OBJECT( (PyObject *)par_proxy_basic_auth );
    Py_DECREF( par_proxy_basic_auth );
    par_proxy_basic_auth = NULL;

    CHECK_OBJECT( (PyObject *)par_disable_cache );
    Py_DECREF( par_disable_cache );
    par_disable_cache = NULL;

    CHECK_OBJECT( (PyObject *)var_headers );
    Py_DECREF( var_headers );
    var_headers = NULL;

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

    CHECK_OBJECT( (PyObject *)par_keep_alive );
    Py_DECREF( par_keep_alive );
    par_keep_alive = NULL;

    Py_XDECREF( par_accept_encoding );
    par_accept_encoding = NULL;

    CHECK_OBJECT( (PyObject *)par_user_agent );
    Py_DECREF( par_user_agent );
    par_user_agent = NULL;

    CHECK_OBJECT( (PyObject *)par_basic_auth );
    Py_DECREF( par_basic_auth );
    par_basic_auth = NULL;

    CHECK_OBJECT( (PyObject *)par_proxy_basic_auth );
    Py_DECREF( par_proxy_basic_auth );
    par_proxy_basic_auth = NULL;

    CHECK_OBJECT( (PyObject *)par_disable_cache );
    Py_DECREF( par_disable_cache );
    par_disable_cache = NULL;

    CHECK_OBJECT( (PyObject *)var_headers );
    Py_DECREF( var_headers );
    var_headers = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$request$$$function_1_make_headers );
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


static PyObject *impl_urllib3$util$request$$$function_2_set_file_position( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_body = python_pars[ 0 ];
    PyObject *par_pos = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_0572f8b59f954db60c6c6427f3895cc2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0572f8b59f954db60c6c6427f3895cc2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0572f8b59f954db60c6c6427f3895cc2, codeobj_0572f8b59f954db60c6c6427f3895cc2, module_urllib3$util$request, sizeof(void *)+sizeof(void *) );
    frame_0572f8b59f954db60c6c6427f3895cc2 = cache_frame_0572f8b59f954db60c6c6427f3895cc2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0572f8b59f954db60c6c6427f3895cc2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0572f8b59f954db60c6c6427f3895cc2 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_pos );
        tmp_compexpr_left_1 = par_pos;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_rewind_body );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rewind_body );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rewind_body" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 90;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_body );
            tmp_args_element_name_1 = par_body;
            CHECK_OBJECT( par_pos );
            tmp_args_element_name_2 = par_pos;
            frame_0572f8b59f954db60c6c6427f3895cc2->m_frame.f_lineno = 90;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 90;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_getattr_attr_1;
            PyObject *tmp_getattr_default_1;
            CHECK_OBJECT( par_body );
            tmp_getattr_target_1 = par_body;
            tmp_getattr_attr_1 = const_str_plain_tell;
            tmp_getattr_default_1 = Py_None;
            tmp_compexpr_left_2 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 91;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = Py_None;
            tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            // Tried code:
            {
                PyObject *tmp_assign_source_1;
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT( par_body );
                tmp_called_instance_1 = par_body;
                frame_0572f8b59f954db60c6c6427f3895cc2->m_frame.f_lineno = 93;
                tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_tell );
                if ( tmp_assign_source_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 93;
                    type_description_1 = "oo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = par_pos;
                    assert( old != NULL );
                    par_pos = tmp_assign_source_1;
                    Py_DECREF( old );
                }

            }
            goto try_end_1;
            // Exception handler code:
            try_except_handler_2:;
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
                exception_keeper_tb_1 = MAKE_TRACEBACK( frame_0572f8b59f954db60c6c6427f3895cc2, exception_keeper_lineno_1 );
            }
            else if ( exception_keeper_lineno_1 != 0 )
            {
                exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_0572f8b59f954db60c6c6427f3895cc2, exception_keeper_lineno_1 );
            }

            NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
            PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
            PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
            // Tried code:
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_3 = const_tuple_type_OSError_type_OSError_tuple;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 94;
                    type_description_1 = "oo";
                    goto try_except_handler_3;
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
                    PyObject *tmp_assign_source_2;
                    PyObject *tmp_mvar_value_2;
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain__FAILEDTELL );

                    if (unlikely( tmp_mvar_value_2 == NULL ))
                    {
                        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__FAILEDTELL );
                    }

                    if ( tmp_mvar_value_2 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_FAILEDTELL" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 97;
                        type_description_1 = "oo";
                        goto try_except_handler_3;
                    }

                    tmp_assign_source_2 = tmp_mvar_value_2;
                    {
                        PyObject *old = par_pos;
                        assert( old != NULL );
                        par_pos = tmp_assign_source_2;
                        Py_INCREF( par_pos );
                        Py_DECREF( old );
                    }

                }
                goto branch_end_3;
                branch_no_3:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 92;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_0572f8b59f954db60c6c6427f3895cc2->m_frame) frame_0572f8b59f954db60c6c6427f3895cc2->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oo";
                goto try_except_handler_3;
                branch_end_3:;
            }
            goto try_end_2;
            // Exception handler code:
            try_except_handler_3:;
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

            goto frame_exception_exit_1;
            // End of try:
            try_end_2:;
            // Restore previous exception.
            SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
            goto try_end_1;
            // exception handler codes exits in all cases
            NUITKA_CANNOT_GET_HERE( urllib3$util$request$$$function_2_set_file_position );
            return NULL;
            // End of try:
            try_end_1:;
            branch_no_2:;
        }
        branch_end_1:;
    }
    if ( par_pos == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_pos;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0572f8b59f954db60c6c6427f3895cc2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0572f8b59f954db60c6c6427f3895cc2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0572f8b59f954db60c6c6427f3895cc2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0572f8b59f954db60c6c6427f3895cc2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0572f8b59f954db60c6c6427f3895cc2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0572f8b59f954db60c6c6427f3895cc2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0572f8b59f954db60c6c6427f3895cc2,
        type_description_1,
        par_body,
        par_pos
    );


    // Release cached frame.
    if ( frame_0572f8b59f954db60c6c6427f3895cc2 == cache_frame_0572f8b59f954db60c6c6427f3895cc2 )
    {
        Py_DECREF( frame_0572f8b59f954db60c6c6427f3895cc2 );
    }
    cache_frame_0572f8b59f954db60c6c6427f3895cc2 = NULL;

    assertFrameObject( frame_0572f8b59f954db60c6c6427f3895cc2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$request$$$function_2_set_file_position );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_body );
    Py_DECREF( par_body );
    par_body = NULL;

    Py_XDECREF( par_pos );
    par_pos = NULL;

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

    CHECK_OBJECT( (PyObject *)par_body );
    Py_DECREF( par_body );
    par_body = NULL;

    Py_XDECREF( par_pos );
    par_pos = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$request$$$function_2_set_file_position );
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


static PyObject *impl_urllib3$util$request$$$function_3_rewind_body( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_body = python_pars[ 0 ];
    PyObject *par_body_pos = python_pars[ 1 ];
    PyObject *var_body_seek = NULL;
    struct Nuitka_FrameObject *frame_edb79cc105c3b7c4800a884c6c93feb3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    static struct Nuitka_FrameObject *cache_frame_edb79cc105c3b7c4800a884c6c93feb3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_edb79cc105c3b7c4800a884c6c93feb3, codeobj_edb79cc105c3b7c4800a884c6c93feb3, module_urllib3$util$request, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_edb79cc105c3b7c4800a884c6c93feb3 = cache_frame_edb79cc105c3b7c4800a884c6c93feb3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_edb79cc105c3b7c4800a884c6c93feb3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_edb79cc105c3b7c4800a884c6c93feb3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT( par_body );
        tmp_getattr_target_1 = par_body;
        tmp_getattr_attr_1 = const_str_plain_seek;
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_body_seek == NULL );
        var_body_seek = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( var_body_seek );
        tmp_compexpr_left_1 = var_body_seek;
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
        CHECK_OBJECT( par_body_pos );
        tmp_isinstance_inst_1 = par_body_pos;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_integer_types );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "integer_types" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 114;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        // Tried code:
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( var_body_seek );
            tmp_called_name_1 = var_body_seek;
            CHECK_OBJECT( par_body_pos );
            tmp_args_element_name_1 = par_body_pos;
            frame_edb79cc105c3b7c4800a884c6c93feb3->m_frame.f_lineno = 116;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_2:;
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
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_edb79cc105c3b7c4800a884c6c93feb3, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_edb79cc105c3b7c4800a884c6c93feb3, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_2 = const_tuple_type_OSError_type_OSError_tuple;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 117;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_2;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UnrewindableBodyError" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 118;
                    type_description_1 = "ooo";
                    goto try_except_handler_3;
                }

                tmp_called_name_2 = tmp_mvar_value_2;
                frame_edb79cc105c3b7c4800a884c6c93feb3->m_frame.f_lineno = 118;
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple, 0 ) );

                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 118;
                    type_description_1 = "ooo";
                    goto try_except_handler_3;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 118;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            goto branch_end_2;
            branch_no_2:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 115;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_edb79cc105c3b7c4800a884c6c93feb3->m_frame) frame_edb79cc105c3b7c4800a884c6c93feb3->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooo";
            goto try_except_handler_3;
            branch_end_2:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$util$request$$$function_3_rewind_body );
        return NULL;
        // Exception handler code:
        try_except_handler_3:;
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

        goto frame_exception_exit_1;
        // End of try:
        // End of try:
        try_end_1:;
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT( par_body_pos );
            tmp_compexpr_left_3 = par_body_pos;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain__FAILEDTELL );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__FAILEDTELL );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_FAILEDTELL" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 120;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_3 = tmp_mvar_value_3;
            tmp_condition_result_3 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_4;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UnrewindableBodyError" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 121;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_4;
                frame_edb79cc105c3b7c4800a884c6c93feb3->m_frame.f_lineno = 121;
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple, 0 ) );

                if ( tmp_raise_type_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 121;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_2;
                exception_lineno = 121;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_type_arg_1;
                tmp_left_name_1 = const_str_digest_5f141d838086b56fa77388201c41468d;
                CHECK_OBJECT( par_body_pos );
                tmp_type_arg_1 = par_body_pos;
                tmp_right_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
                assert( !(tmp_right_name_1 == NULL) );
                tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_make_exception_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 124;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_edb79cc105c3b7c4800a884c6c93feb3->m_frame.f_lineno = 124;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_1 );
                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 124;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            branch_end_3:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_edb79cc105c3b7c4800a884c6c93feb3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_edb79cc105c3b7c4800a884c6c93feb3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_edb79cc105c3b7c4800a884c6c93feb3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_edb79cc105c3b7c4800a884c6c93feb3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_edb79cc105c3b7c4800a884c6c93feb3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_edb79cc105c3b7c4800a884c6c93feb3,
        type_description_1,
        par_body,
        par_body_pos,
        var_body_seek
    );


    // Release cached frame.
    if ( frame_edb79cc105c3b7c4800a884c6c93feb3 == cache_frame_edb79cc105c3b7c4800a884c6c93feb3 )
    {
        Py_DECREF( frame_edb79cc105c3b7c4800a884c6c93feb3 );
    }
    cache_frame_edb79cc105c3b7c4800a884c6c93feb3 = NULL;

    assertFrameObject( frame_edb79cc105c3b7c4800a884c6c93feb3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$request$$$function_3_rewind_body );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_body );
    Py_DECREF( par_body );
    par_body = NULL;

    CHECK_OBJECT( (PyObject *)par_body_pos );
    Py_DECREF( par_body_pos );
    par_body_pos = NULL;

    CHECK_OBJECT( (PyObject *)var_body_seek );
    Py_DECREF( var_body_seek );
    var_body_seek = NULL;

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

    CHECK_OBJECT( (PyObject *)par_body );
    Py_DECREF( par_body );
    par_body = NULL;

    CHECK_OBJECT( (PyObject *)par_body_pos );
    Py_DECREF( par_body_pos );
    par_body_pos = NULL;

    Py_XDECREF( var_body_seek );
    var_body_seek = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$request$$$function_3_rewind_body );
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



static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function_1_make_headers( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$request$$$function_1_make_headers,
        const_str_plain_make_headers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dd1ef03c8391075f5bc84c7cfb52f16d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$request,
        const_str_digest_47d4abcbaab2ba783709ab98383a7f12,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function_2_set_file_position(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$request$$$function_2_set_file_position,
        const_str_plain_set_file_position,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0572f8b59f954db60c6c6427f3895cc2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$request,
        const_str_digest_cc5c142a5aaab5d4cf43012035230cc0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function_3_rewind_body(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$request$$$function_3_rewind_body,
        const_str_plain_rewind_body,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_edb79cc105c3b7c4800a884c6c93feb3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$request,
        const_str_digest_0209911ea85084279425c4a3b9b4322a,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$request =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.util.request",
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

MOD_INIT_DECL( urllib3$util$request )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$util$request );
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
    puts("urllib3.util.request: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.request: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.request: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$util$request" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$request = Py_InitModule4(
        "urllib3.util.request",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$util$request = PyModule_Create( &mdef_urllib3$util$request );
#endif

    moduledict_urllib3$util$request = MODULE_DICT( module_urllib3$util$request );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_urllib3$util$request,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$util$request,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$request,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$request,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$util$request );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_a11559a1f0b9dc4b626402a68b9ebc45, module_urllib3$util$request );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_c62624ac9b380449d105cca88c22de02;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_inplace_orig;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_c62624ac9b380449d105cca88c22de02 = MAKE_MODULE_FRAME( codeobj_c62624ac9b380449d105cca88c22de02, module_urllib3$util$request );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_c62624ac9b380449d105cca88c22de02 );
    assert( Py_REFCNT( frame_c62624ac9b380449d105cca88c22de02 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_c62624ac9b380449d105cca88c22de02->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert( !(tmp_import_name_from_1 == NULL) );
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_base64;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$request;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_b64encode_tuple;
        tmp_level_name_1 = const_int_0;
        frame_c62624ac9b380449d105cca88c22de02->m_frame.f_lineno = 2;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_b64encode );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b64encode, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_edd9cb70c3537b6a2b58ab6b4487087a;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util$request;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_b_str_plain_integer_types_tuple;
        tmp_level_name_2 = const_int_pos_2;
        frame_c62624ac9b380449d105cca88c22de02->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_3 ) )
        {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_urllib3$util$request,
                const_str_plain_b,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_b );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_urllib3$util$request,
                const_str_plain_integer_types,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_integer_types );
        }

        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_8 );
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_exceptions;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$util$request;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_UnrewindableBodyError_tuple;
        tmp_level_name_3 = const_int_pos_2;
        frame_c62624ac9b380449d105cca88c22de02->m_frame.f_lineno = 5;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
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
                (PyObject *)moduledict_urllib3$util$request,
                const_str_plain_UnrewindableBodyError,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_UnrewindableBodyError );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_str_digest_77bc5054242d5f3e5269bd07a4342f1b;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_ACCEPT_ENCODING, tmp_assign_source_10 );
    }
    {
        nuitka_bool tmp_assign_source_11;
        tmp_assign_source_11 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_11;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_brotli;
        tmp_globals_name_4 = (PyObject *)moduledict_urllib3$util$request;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_c62624ac9b380449d105cca88c22de02->m_frame.f_lineno = 9;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain__unused_module_brotli, tmp_assign_source_12 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_assign_source_13;
        tmp_assign_source_13 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_13;
    }
    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_c62624ac9b380449d105cca88c22de02, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_c62624ac9b380449d105cca88c22de02, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_4;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_4;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 8;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c62624ac9b380449d105cca88c22de02->m_frame) frame_c62624ac9b380449d105cca88c22de02->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_4;
        branch_no_1:;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$request );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_2:;
    {
        nuitka_bool tmp_condition_result_2;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert( tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_try_except_1__unhandled_indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
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
            PyObject *tmp_assign_source_14;
            PyObject *tmp_left_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_right_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_ACCEPT_ENCODING );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACCEPT_ENCODING );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ACCEPT_ENCODING" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 13;

                goto try_except_handler_2;
            }

            tmp_left_name_1 = tmp_mvar_value_3;
            tmp_right_name_1 = const_str_digest_d2b904b25d381938ff5e527197f159f9;
            tmp_inplace_orig = tmp_left_name_1;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_UNICODE_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 13;

                goto try_except_handler_2;
            }
            tmp_assign_source_14 = tmp_left_name_1;
            if (tmp_inplace_orig != tmp_assign_source_14) {
            UPDATE_STRING_DICT_INPLACE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_ACCEPT_ENCODING, tmp_assign_source_14 );
            }
        }
        branch_no_2:;
    }
    goto try_end_4;
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

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = (PyObject *)&PyBaseObject_Type;
        frame_c62624ac9b380449d105cca88c22de02->m_frame.f_lineno = 15;
        tmp_assign_source_15 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain__FAILEDTELL, tmp_assign_source_15 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c62624ac9b380449d105cca88c22de02 );
#endif
    popFrameStack();

    assertFrameObject( frame_c62624ac9b380449d105cca88c22de02 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c62624ac9b380449d105cca88c22de02 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c62624ac9b380449d105cca88c22de02, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c62624ac9b380449d105cca88c22de02->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c62624ac9b380449d105cca88c22de02, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_none_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_16 = MAKE_FUNCTION_urllib3$util$request$$$function_1_make_headers( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_make_headers, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_urllib3$util$request$$$function_2_set_file_position(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_set_file_position, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_urllib3$util$request$$$function_3_rewind_body(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_rewind_body, tmp_assign_source_18 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_urllib3$util$request );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
