/* Generated code for Python module 'urllib3.packages.rfc3986.uri'
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

/* The "_module_urllib3$packages$rfc3986$uri" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$packages$rfc3986$uri;
PyDictObject *moduledict_urllib3$packages$rfc3986$uri;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_11a45dc36900384795a9e825b1a1bb64;
extern PyObject *const_str_plain_normalizers;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_digest_ce7aa83d0cf45de1799fc83b5f76e46c;
extern PyObject *const_str_plain_userinfo;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain_authority;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_normalize_fragment;
static PyObject *const_tuple_str_plain_URIMixin_tuple;
static PyObject *const_tuple_1df8484379502123dc55f739bcf1ff86_tuple;
extern PyObject *const_str_plain_scheme;
extern PyObject *const_str_plain_fragment;
extern PyObject *const_str_plain_from_string;
extern PyObject *const_tuple_d2ce223a7ba2dc3d76bcf5367cd199f8_tuple;
static PyObject *const_str_digest_696656ff64a62cbfb1235526438e5350;
extern PyObject *const_str_plain_classmethod;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_normalize_query;
static PyObject *const_str_digest_01caae4ed88148d389d5bbec8673bc84;
extern PyObject *const_str_plain_misc;
extern PyObject *const_str_plain_normalize_scheme;
static PyObject *const_str_plain_naive_equality;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_normalize_authority;
extern PyObject *const_str_plain_encode_component;
static PyObject *const_str_plain_split_uri;
static PyObject *const_str_digest_6d440907a5f03ffbe9d4ee721fdd2c33;
extern PyObject *const_tuple_str_plain_namedtuple_tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_host;
static PyObject *const_str_digest_1a73fc6939b6212e6843721aec913465;
static PyObject *const_str_digest_abbe28f6745f496aca98a9319f17cc07;
extern PyObject *const_str_plain_path;
static PyObject *const_str_digest_9cf71e6bdb00ff66707071c757c8dd1c;
static PyObject *const_str_digest_09b05c1caec27ac85d8ced726d08c5ce;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_collections;
extern PyObject *const_str_plain_query;
extern PyObject *const_str_plain_URI_COMPONENTS;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_72f50267826af28c7663b8809970cc8d;
extern PyObject *const_tuple_str_plain_misc_tuple;
extern PyObject *const_str_plain_groupdict;
extern PyObject *const_str_plain_URI_MATCHER;
extern PyObject *const_str_plain_match;
static PyObject *const_str_digest_7a253c1fd77a4b193de0eeb5f90894d5;
extern PyObject *const_tuple_str_plain_compat_tuple;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain___new__;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_str_plain___eq__;
extern PyObject *const_int_0;
extern PyObject *const_tuple_str_plain_normalizers_tuple;
extern PyObject *const_str_plain_ref;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_normalize_path;
static PyObject *const_str_plain__mixin;
extern PyObject *const_str_plain_namedtuple;
extern PyObject *const_str_plain_normalize;
extern PyObject *const_str_plain_slots;
static PyObject *const_str_digest_e03f936a083a208859ff168f30becda4;
extern PyObject *const_str_plain_other_ref;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_URIMixin;
static PyObject *const_tuple_ca0981b6473be09cf9b6dc5db7bc2827_tuple;
extern PyObject *const_str_plain___hash__;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_to_str;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_port;
extern PyObject *const_str_plain_URIReference;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_other;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_normalized_equality;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_22b60dcbcdeef2124f63ff10d5f91cf9;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_compat;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_uri_string;
static PyObject *const_str_digest_07dcd2f5448b3576d994a0a621d6b675;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_11a45dc36900384795a9e825b1a1bb64 = UNSTREAM_STRING_ASCII( &constant_bin[ 5883972 ], 63, 0 );
    const_tuple_str_plain_URIMixin_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_URIMixin_tuple, 0, const_str_plain_URIMixin ); Py_INCREF( const_str_plain_URIMixin );
    const_tuple_1df8484379502123dc55f739bcf1ff86_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_1df8484379502123dc55f739bcf1ff86_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_1df8484379502123dc55f739bcf1ff86_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    PyTuple_SET_ITEM( const_tuple_1df8484379502123dc55f739bcf1ff86_tuple, 2, const_str_plain_other_ref ); Py_INCREF( const_str_plain_other_ref );
    const_str_plain_naive_equality = UNSTREAM_STRING_ASCII( &constant_bin[ 5884035 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_1df8484379502123dc55f739bcf1ff86_tuple, 3, const_str_plain_naive_equality ); Py_INCREF( const_str_plain_naive_equality );
    const_str_digest_696656ff64a62cbfb1235526438e5350 = UNSTREAM_STRING_ASCII( &constant_bin[ 5884049 ], 20, 0 );
    const_str_digest_01caae4ed88148d389d5bbec8673bc84 = UNSTREAM_STRING_ASCII( &constant_bin[ 5884069 ], 1501, 0 );
    const_str_plain_split_uri = UNSTREAM_STRING_ASCII( &constant_bin[ 5885570 ], 9, 1 );
    const_str_digest_6d440907a5f03ffbe9d4ee721fdd2c33 = UNSTREAM_STRING_ASCII( &constant_bin[ 5874402 ], 24, 0 );
    const_str_digest_1a73fc6939b6212e6843721aec913465 = UNSTREAM_STRING_ASCII( &constant_bin[ 5885579 ], 26, 0 );
    const_str_digest_abbe28f6745f496aca98a9319f17cc07 = UNSTREAM_STRING_ASCII( &constant_bin[ 5885605 ], 37, 0 );
    const_str_digest_9cf71e6bdb00ff66707071c757c8dd1c = UNSTREAM_STRING_ASCII( &constant_bin[ 5885642 ], 22, 0 );
    const_str_digest_09b05c1caec27ac85d8ced726d08c5ce = UNSTREAM_STRING_ASCII( &constant_bin[ 5885664 ], 265, 0 );
    const_str_digest_72f50267826af28c7663b8809970cc8d = UNSTREAM_STRING_ASCII( &constant_bin[ 5885613 ], 28, 0 );
    const_str_digest_7a253c1fd77a4b193de0eeb5f90894d5 = UNSTREAM_STRING_ASCII( &constant_bin[ 5885929 ], 31, 0 );
    const_str_plain__mixin = UNSTREAM_STRING_ASCII( &constant_bin[ 5370205 ], 6, 1 );
    const_str_digest_e03f936a083a208859ff168f30becda4 = UNSTREAM_STRING_ASCII( &constant_bin[ 5885960 ], 260, 0 );
    const_tuple_ca0981b6473be09cf9b6dc5db7bc2827_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ca0981b6473be09cf9b6dc5db7bc2827_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_ca0981b6473be09cf9b6dc5db7bc2827_tuple, 1, const_str_plain_uri_string ); Py_INCREF( const_str_plain_uri_string );
    PyTuple_SET_ITEM( const_tuple_ca0981b6473be09cf9b6dc5db7bc2827_tuple, 2, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_ca0981b6473be09cf9b6dc5db7bc2827_tuple, 3, const_str_plain_split_uri ); Py_INCREF( const_str_plain_split_uri );
    const_str_digest_22b60dcbcdeef2124f63ff10d5f91cf9 = UNSTREAM_STRING_ASCII( &constant_bin[ 5886220 ], 41, 0 );
    const_str_digest_07dcd2f5448b3576d994a0a621d6b675 = UNSTREAM_STRING_ASCII( &constant_bin[ 5886261 ], 19, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$packages$rfc3986$uri( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d5988acdca12aa8410ed8276a0471f91;
static PyCodeObject *codeobj_0201833cb5087d3258365bf3c68c8d20;
static PyCodeObject *codeobj_60e2ff1088f7d642a7e425c77e3ea3eb;
static PyCodeObject *codeobj_33a07b303c9f810e6cd7e078fa85f43f;
static PyCodeObject *codeobj_66bbfbdf060f1c193cd2859d08680f66;
static PyCodeObject *codeobj_c6d7e12406de7b28761c19a60a03c410;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_7a253c1fd77a4b193de0eeb5f90894d5 );
    codeobj_d5988acdca12aa8410ed8276a0471f91 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_abbe28f6745f496aca98a9319f17cc07, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_0201833cb5087d3258365bf3c68c8d20 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_URIReference, 25, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_60e2ff1088f7d642a7e425c77e3ea3eb = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 100, const_tuple_1df8484379502123dc55f739bcf1ff86_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_33a07b303c9f810e6cd7e078fa85f43f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___new__, 85, const_tuple_d2ce223a7ba2dc3d76bcf5367cd199f8_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_66bbfbdf060f1c193cd2859d08680f66 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_string, 136, const_tuple_ca0981b6473be09cf9b6dc5db7bc2827_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c6d7e12406de7b28761c19a60a03c410 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_normalize, 117, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$uri$$$function_1___new__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$uri$$$function_2___eq__(  );


static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$uri$$$function_3_normalize(  );


static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$uri$$$function_4_from_string( PyObject *defaults );


// The module function definitions.
static PyObject *impl_urllib3$packages$rfc3986$uri$$$function_1___new__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_scheme = python_pars[ 1 ];
    PyObject *par_authority = python_pars[ 2 ];
    PyObject *par_path = python_pars[ 3 ];
    PyObject *par_query = python_pars[ 4 ];
    PyObject *par_fragment = python_pars[ 5 ];
    PyObject *par_encoding = python_pars[ 6 ];
    PyObject *var_ref = NULL;
    struct Nuitka_FrameObject *frame_33a07b303c9f810e6cd7e078fa85f43f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_33a07b303c9f810e6cd7e078fa85f43f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_33a07b303c9f810e6cd7e078fa85f43f, codeobj_33a07b303c9f810e6cd7e078fa85f43f, module_urllib3$packages$rfc3986$uri, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_33a07b303c9f810e6cd7e078fa85f43f = cache_frame_33a07b303c9f810e6cd7e078fa85f43f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_33a07b303c9f810e6cd7e078fa85f43f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_33a07b303c9f810e6cd7e078fa85f43f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_args_element_name_3;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_args_element_name_4;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_URIReference );

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

            exception_lineno = 88;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_cls );
        tmp_object_name_1 = par_cls;
        tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___new__ );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_cls );
        tmp_args_element_name_1 = par_cls;
        CHECK_OBJECT( par_scheme );
        tmp_or_left_value_1 = par_scheme;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 90;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = Py_None;
        tmp_args_element_name_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_name_2 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT( par_authority );
        tmp_or_left_value_2 = par_authority;
        tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
        if ( tmp_or_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 91;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_2 == 1 )
        {
            goto or_left_2;
        }
        else
        {
            goto or_right_2;
        }
        or_right_2:;
        tmp_or_right_value_2 = Py_None;
        tmp_args_element_name_3 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_args_element_name_3 = tmp_or_left_value_2;
        or_end_2:;
        CHECK_OBJECT( par_path );
        tmp_or_left_value_3 = par_path;
        tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
        if ( tmp_or_left_truth_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 92;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_3 == 1 )
        {
            goto or_left_3;
        }
        else
        {
            goto or_right_3;
        }
        or_right_3:;
        tmp_or_right_value_3 = Py_None;
        tmp_args_element_name_4 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_args_element_name_4 = tmp_or_left_value_3;
        or_end_3:;
        CHECK_OBJECT( par_query );
        tmp_args_element_name_5 = par_query;
        CHECK_OBJECT( par_fragment );
        tmp_args_element_name_6 = par_fragment;
        frame_33a07b303c9f810e6cd7e078fa85f43f->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        assert( var_ref == NULL );
        var_ref = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_encoding );
        tmp_assattr_name_1 = par_encoding;
        CHECK_OBJECT( var_ref );
        tmp_assattr_target_1 = var_ref;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_encoding, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_33a07b303c9f810e6cd7e078fa85f43f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_33a07b303c9f810e6cd7e078fa85f43f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_33a07b303c9f810e6cd7e078fa85f43f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_33a07b303c9f810e6cd7e078fa85f43f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_33a07b303c9f810e6cd7e078fa85f43f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_33a07b303c9f810e6cd7e078fa85f43f,
        type_description_1,
        par_cls,
        par_scheme,
        par_authority,
        par_path,
        par_query,
        par_fragment,
        par_encoding,
        var_ref,
        NULL
    );


    // Release cached frame.
    if ( frame_33a07b303c9f810e6cd7e078fa85f43f == cache_frame_33a07b303c9f810e6cd7e078fa85f43f )
    {
        Py_DECREF( frame_33a07b303c9f810e6cd7e078fa85f43f );
    }
    cache_frame_33a07b303c9f810e6cd7e078fa85f43f = NULL;

    assertFrameObject( frame_33a07b303c9f810e6cd7e078fa85f43f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_ref );
    tmp_return_value = var_ref;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$uri$$$function_1___new__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_scheme );
    Py_DECREF( par_scheme );
    par_scheme = NULL;

    CHECK_OBJECT( (PyObject *)par_authority );
    Py_DECREF( par_authority );
    par_authority = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)par_query );
    Py_DECREF( par_query );
    par_query = NULL;

    CHECK_OBJECT( (PyObject *)par_fragment );
    Py_DECREF( par_fragment );
    par_fragment = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    CHECK_OBJECT( (PyObject *)var_ref );
    Py_DECREF( var_ref );
    var_ref = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_scheme );
    Py_DECREF( par_scheme );
    par_scheme = NULL;

    CHECK_OBJECT( (PyObject *)par_authority );
    Py_DECREF( par_authority );
    par_authority = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)par_query );
    Py_DECREF( par_query );
    par_query = NULL;

    CHECK_OBJECT( (PyObject *)par_fragment );
    Py_DECREF( par_fragment );
    par_fragment = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( var_ref );
    var_ref = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$uri$$$function_1___new__ );
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


static PyObject *impl_urllib3$packages$rfc3986$uri$$$function_2___eq__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_other_ref = NULL;
    PyObject *var_naive_equality = NULL;
    struct Nuitka_FrameObject *frame_60e2ff1088f7d642a7e425c77e3ea3eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_60e2ff1088f7d642a7e425c77e3ea3eb = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( par_other );
        tmp_assign_source_1 = par_other;
        assert( var_other_ref == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_other_ref = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_60e2ff1088f7d642a7e425c77e3ea3eb, codeobj_60e2ff1088f7d642a7e425c77e3ea3eb, module_urllib3$packages$rfc3986$uri, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_60e2ff1088f7d642a7e425c77e3ea3eb = cache_frame_60e2ff1088f7d642a7e425c77e3ea3eb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_60e2ff1088f7d642a7e425c77e3ea3eb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_60e2ff1088f7d642a7e425c77e3ea3eb ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_other );
        tmp_isinstance_inst_1 = par_other;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_dircall_arg2_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_URIReference );

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

                exception_lineno = 104;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg1_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_other );
            tmp_dircall_arg2_1 = par_other;
            Py_INCREF( tmp_dircall_arg1_1 );
            Py_INCREF( tmp_dircall_arg2_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
                tmp_assign_source_2 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
            }
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_other_ref;
                assert( old != NULL );
                var_other_ref = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT( par_other );
            tmp_isinstance_inst_2 = par_other;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_URIReference );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_URIReference );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "URIReference" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 105;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_cls_2 = tmp_mvar_value_2;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_1 = "oooo";
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
            // Tried code:
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_1;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_URIReference );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_URIReference );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "URIReference" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 107;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }

                tmp_called_instance_1 = tmp_mvar_value_3;
                CHECK_OBJECT( par_other );
                tmp_args_element_name_1 = par_other;
                frame_60e2ff1088f7d642a7e425c77e3ea3eb->m_frame.f_lineno = 107;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_from_string, call_args );
                }

                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 107;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_other_ref;
                    assert( old != NULL );
                    var_other_ref = tmp_assign_source_3;
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
                exception_keeper_tb_1 = MAKE_TRACEBACK( frame_60e2ff1088f7d642a7e425c77e3ea3eb, exception_keeper_lineno_1 );
            }
            else if ( exception_keeper_lineno_1 != 0 )
            {
                exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_60e2ff1088f7d642a7e425c77e3ea3eb, exception_keeper_lineno_1 );
            }

            NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
            PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
            PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
            // Tried code:
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_1;
                PyObject *tmp_compexpr_right_1;
                tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_1 = PyExc_TypeError;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 108;
                    type_description_1 = "oooo";
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
                    PyObject *tmp_raise_type_1;
                    PyObject *tmp_make_exception_arg_1;
                    PyObject *tmp_called_name_1;
                    PyObject *tmp_source_name_1;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_source_name_2;
                    PyObject *tmp_type_arg_1;
                    tmp_source_name_1 = const_str_digest_22b60dcbcdeef2124f63ff10d5f91cf9;
                    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
                    assert( !(tmp_called_name_1 == NULL) );
                    CHECK_OBJECT( par_other );
                    tmp_type_arg_1 = par_other;
                    tmp_source_name_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
                    assert( !(tmp_source_name_2 == NULL) );
                    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___name__ );
                    Py_DECREF( tmp_source_name_2 );
                    if ( tmp_args_element_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_1 );

                        exception_lineno = 111;
                        type_description_1 = "oooo";
                        goto try_except_handler_3;
                    }
                    frame_60e2ff1088f7d642a7e425c77e3ea3eb->m_frame.f_lineno = 110;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_2 };
                        tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                    }

                    Py_DECREF( tmp_called_name_1 );
                    Py_DECREF( tmp_args_element_name_2 );
                    if ( tmp_make_exception_arg_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 110;
                        type_description_1 = "oooo";
                        goto try_except_handler_3;
                    }
                    frame_60e2ff1088f7d642a7e425c77e3ea3eb->m_frame.f_lineno = 109;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_1 };
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                    }

                    Py_DECREF( tmp_make_exception_arg_1 );
                    assert( !(tmp_raise_type_1 == NULL) );
                    exception_type = tmp_raise_type_1;
                    exception_lineno = 109;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooo";
                    goto try_except_handler_3;
                }
                goto branch_end_3;
                branch_no_3:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 106;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_60e2ff1088f7d642a7e425c77e3ea3eb->m_frame) frame_60e2ff1088f7d642a7e425c77e3ea3eb->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooo";
                goto try_except_handler_3;
                branch_end_3:;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$uri$$$function_2___eq__ );
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
            branch_no_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_tuple_arg_2;
        CHECK_OBJECT( par_self );
        tmp_tuple_arg_1 = par_self;
        tmp_compexpr_left_2 = PySequence_Tuple( tmp_tuple_arg_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if ( var_other_ref == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other_ref" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 114;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_arg_2 = var_other_ref;
        tmp_compexpr_right_2 = PySequence_Tuple( tmp_tuple_arg_2 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 114;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_naive_equality == NULL );
        var_naive_equality = tmp_assign_source_4;
    }
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( var_naive_equality );
        tmp_or_left_value_1 = var_naive_equality;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_normalized_equality );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if ( var_other_ref == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other_ref" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 115;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = var_other_ref;
        frame_60e2ff1088f7d642a7e425c77e3ea3eb->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_or_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        if ( tmp_or_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF( tmp_or_left_value_1 );
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_60e2ff1088f7d642a7e425c77e3ea3eb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_60e2ff1088f7d642a7e425c77e3ea3eb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_60e2ff1088f7d642a7e425c77e3ea3eb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_60e2ff1088f7d642a7e425c77e3ea3eb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_60e2ff1088f7d642a7e425c77e3ea3eb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_60e2ff1088f7d642a7e425c77e3ea3eb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_60e2ff1088f7d642a7e425c77e3ea3eb,
        type_description_1,
        par_self,
        par_other,
        var_other_ref,
        var_naive_equality
    );


    // Release cached frame.
    if ( frame_60e2ff1088f7d642a7e425c77e3ea3eb == cache_frame_60e2ff1088f7d642a7e425c77e3ea3eb )
    {
        Py_DECREF( frame_60e2ff1088f7d642a7e425c77e3ea3eb );
    }
    cache_frame_60e2ff1088f7d642a7e425c77e3ea3eb = NULL;

    assertFrameObject( frame_60e2ff1088f7d642a7e425c77e3ea3eb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$uri$$$function_2___eq__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_other_ref );
    var_other_ref = NULL;

    CHECK_OBJECT( (PyObject *)var_naive_equality );
    Py_DECREF( var_naive_equality );
    var_naive_equality = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_other_ref );
    var_other_ref = NULL;

    Py_XDECREF( var_naive_equality );
    var_naive_equality = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$uri$$$function_2___eq__ );
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


static PyObject *impl_urllib3$packages$rfc3986$uri$$$function_3_normalize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_c6d7e12406de7b28761c19a60a03c410;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c6d7e12406de7b28761c19a60a03c410 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c6d7e12406de7b28761c19a60a03c410, codeobj_c6d7e12406de7b28761c19a60a03c410, module_urllib3$packages$rfc3986$uri, sizeof(void *) );
    frame_c6d7e12406de7b28761c19a60a03c410 = cache_frame_c6d7e12406de7b28761c19a60a03c410;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c6d7e12406de7b28761c19a60a03c410 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c6d7e12406de7b28761c19a60a03c410 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_source_name_8;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_10;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_source_name_12;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_source_name_13;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_URIReference );

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

            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_normalizers );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalizers );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normalizers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_normalize_scheme );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_scheme );
        if ( tmp_or_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_or_left_value_1 );

            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF( tmp_or_left_value_1 );
        tmp_or_right_value_1 = const_str_empty;
        Py_INCREF( tmp_or_right_value_1 );
        tmp_args_element_name_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_name_2 = tmp_or_left_value_1;
        or_end_1:;
        frame_c6d7e12406de7b28761c19a60a03c410->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_normalizers );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalizers );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normalizers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_normalize_authority );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_userinfo );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_args_element_name_4, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_host );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_4, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_port );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_4, 2, tmp_tuple_element_1 );
        frame_c6d7e12406de7b28761c19a60a03c410->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_normalizers );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalizers );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normalizers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_4;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_normalize_path );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_or_left_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_path );
        if ( tmp_or_left_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
        if ( tmp_or_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_or_left_value_2 );

            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_2 == 1 )
        {
            goto or_left_2;
        }
        else
        {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF( tmp_or_left_value_2 );
        tmp_or_right_value_2 = const_str_empty;
        Py_INCREF( tmp_or_right_value_2 );
        tmp_args_element_name_6 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_args_element_name_6 = tmp_or_left_value_2;
        or_end_2:;
        frame_c6d7e12406de7b28761c19a60a03c410->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_normalizers );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalizers );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normalizers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_5;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_normalize_query );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_query );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c6d7e12406de7b28761c19a60a03c410->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_normalizers );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalizers );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normalizers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 133;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_6;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_normalize_fragment );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 133;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_12 = par_self;
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_fragment );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_7 );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 133;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c6d7e12406de7b28761c19a60a03c410->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_args_element_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 133;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_13 = par_self;
        tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_encoding );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_7 );
            Py_DECREF( tmp_args_element_name_9 );

            exception_lineno = 134;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c6d7e12406de7b28761c19a60a03c410->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3, tmp_args_element_name_5, tmp_args_element_name_7, tmp_args_element_name_9, tmp_args_element_name_11 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_element_name_9 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c6d7e12406de7b28761c19a60a03c410 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c6d7e12406de7b28761c19a60a03c410 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c6d7e12406de7b28761c19a60a03c410 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c6d7e12406de7b28761c19a60a03c410, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c6d7e12406de7b28761c19a60a03c410->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c6d7e12406de7b28761c19a60a03c410, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c6d7e12406de7b28761c19a60a03c410,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_c6d7e12406de7b28761c19a60a03c410 == cache_frame_c6d7e12406de7b28761c19a60a03c410 )
    {
        Py_DECREF( frame_c6d7e12406de7b28761c19a60a03c410 );
    }
    cache_frame_c6d7e12406de7b28761c19a60a03c410 = NULL;

    assertFrameObject( frame_c6d7e12406de7b28761c19a60a03c410 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$uri$$$function_3_normalize );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$uri$$$function_3_normalize );
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


static PyObject *impl_urllib3$packages$rfc3986$uri$$$function_4_from_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_uri_string = python_pars[ 1 ];
    PyObject *par_encoding = python_pars[ 2 ];
    PyObject *var_split_uri = NULL;
    struct Nuitka_FrameObject *frame_66bbfbdf060f1c193cd2859d08680f66;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_66bbfbdf060f1c193cd2859d08680f66 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_66bbfbdf060f1c193cd2859d08680f66, codeobj_66bbfbdf060f1c193cd2859d08680f66, module_urllib3$packages$rfc3986$uri, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_66bbfbdf060f1c193cd2859d08680f66 = cache_frame_66bbfbdf060f1c193cd2859d08680f66;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_66bbfbdf060f1c193cd2859d08680f66 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_66bbfbdf060f1c193cd2859d08680f66 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_compat );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compat );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compat" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 144;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_uri_string );
        tmp_args_element_name_1 = par_uri_string;
        CHECK_OBJECT( par_encoding );
        tmp_args_element_name_2 = par_encoding;
        frame_66bbfbdf060f1c193cd2859d08680f66->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_to_str, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_uri_string;
            assert( old != NULL );
            par_uri_string = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_misc );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_misc );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "misc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 146;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_URI_MATCHER );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_uri_string );
        tmp_args_element_name_3 = par_uri_string;
        frame_66bbfbdf060f1c193cd2859d08680f66->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_called_instance_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_match, call_args );
        }

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_66bbfbdf060f1c193cd2859d08680f66->m_frame.f_lineno = 146;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_groupdict );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_split_uri == NULL );
        var_split_uri = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        CHECK_OBJECT( par_cls );
        tmp_called_name_1 = par_cls;
        CHECK_OBJECT( var_split_uri );
        tmp_subscribed_name_1 = var_split_uri;
        tmp_subscript_name_1 = const_str_plain_scheme;
        tmp_args_element_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_split_uri );
        tmp_subscribed_name_2 = var_split_uri;
        tmp_subscript_name_2 = const_str_plain_authority;
        tmp_args_element_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 148;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_normalizers );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalizers );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normalizers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 149;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_encode_component );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 149;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_split_uri );
        tmp_subscribed_name_3 = var_split_uri;
        tmp_subscript_name_3 = const_str_plain_path;
        tmp_args_element_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 149;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_encoding );
        tmp_args_element_name_8 = par_encoding;
        frame_66bbfbdf060f1c193cd2859d08680f66->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 149;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_normalizers );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalizers );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normalizers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_encode_component );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_split_uri );
        tmp_subscribed_name_4 = var_split_uri;
        tmp_subscript_name_4 = const_str_plain_query;
        tmp_args_element_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_encoding );
        tmp_args_element_name_11 = par_encoding;
        frame_66bbfbdf060f1c193cd2859d08680f66->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_args_element_name_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_normalizers );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalizers );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            Py_DECREF( tmp_args_element_name_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normalizers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 151;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_encode_component );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            Py_DECREF( tmp_args_element_name_9 );

            exception_lineno = 151;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_split_uri );
        tmp_subscribed_name_5 = var_split_uri;
        tmp_subscript_name_5 = const_str_plain_fragment;
        tmp_args_element_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_args_element_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            Py_DECREF( tmp_args_element_name_9 );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 151;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_encoding );
        tmp_args_element_name_14 = par_encoding;
        frame_66bbfbdf060f1c193cd2859d08680f66->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_args_element_name_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_13 );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            Py_DECREF( tmp_args_element_name_9 );

            exception_lineno = 151;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_encoding );
        tmp_args_element_name_15 = par_encoding;
        frame_66bbfbdf060f1c193cd2859d08680f66->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_9, tmp_args_element_name_12, tmp_args_element_name_15 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_9 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66bbfbdf060f1c193cd2859d08680f66 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_66bbfbdf060f1c193cd2859d08680f66 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66bbfbdf060f1c193cd2859d08680f66 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_66bbfbdf060f1c193cd2859d08680f66, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_66bbfbdf060f1c193cd2859d08680f66->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_66bbfbdf060f1c193cd2859d08680f66, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_66bbfbdf060f1c193cd2859d08680f66,
        type_description_1,
        par_cls,
        par_uri_string,
        par_encoding,
        var_split_uri
    );


    // Release cached frame.
    if ( frame_66bbfbdf060f1c193cd2859d08680f66 == cache_frame_66bbfbdf060f1c193cd2859d08680f66 )
    {
        Py_DECREF( frame_66bbfbdf060f1c193cd2859d08680f66 );
    }
    cache_frame_66bbfbdf060f1c193cd2859d08680f66 = NULL;

    assertFrameObject( frame_66bbfbdf060f1c193cd2859d08680f66 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$uri$$$function_4_from_string );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_uri_string );
    Py_DECREF( par_uri_string );
    par_uri_string = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    CHECK_OBJECT( (PyObject *)var_split_uri );
    Py_DECREF( var_split_uri );
    var_split_uri = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_uri_string );
    Py_DECREF( par_uri_string );
    par_uri_string = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( var_split_uri );
    var_split_uri = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$uri$$$function_4_from_string );
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



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$uri$$$function_1___new__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$uri$$$function_1___new__,
        const_str_plain___new__,
#if PYTHON_VERSION >= 300
        const_str_digest_696656ff64a62cbfb1235526438e5350,
#endif
        codeobj_33a07b303c9f810e6cd7e078fa85f43f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$uri,
        const_str_digest_1a73fc6939b6212e6843721aec913465,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$uri$$$function_2___eq__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$uri$$$function_2___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 300
        const_str_digest_07dcd2f5448b3576d994a0a621d6b675,
#endif
        codeobj_60e2ff1088f7d642a7e425c77e3ea3eb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$uri,
        const_str_digest_ce7aa83d0cf45de1799fc83b5f76e46c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$uri$$$function_3_normalize(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$uri$$$function_3_normalize,
        const_str_plain_normalize,
#if PYTHON_VERSION >= 300
        const_str_digest_9cf71e6bdb00ff66707071c757c8dd1c,
#endif
        codeobj_c6d7e12406de7b28761c19a60a03c410,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$uri,
        const_str_digest_e03f936a083a208859ff168f30becda4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$rfc3986$uri$$$function_4_from_string( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$rfc3986$uri$$$function_4_from_string,
        const_str_plain_from_string,
#if PYTHON_VERSION >= 300
        const_str_digest_6d440907a5f03ffbe9d4ee721fdd2c33,
#endif
        codeobj_66bbfbdf060f1c193cd2859d08680f66,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$rfc3986$uri,
        const_str_digest_09b05c1caec27ac85d8ced726d08c5ce,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$packages$rfc3986$uri =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.packages.rfc3986.uri",
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

MOD_INIT_DECL( urllib3$packages$rfc3986$uri )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$packages$rfc3986$uri );
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
    puts("urllib3.packages.rfc3986.uri: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.packages.rfc3986.uri: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.packages.rfc3986.uri: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$packages$rfc3986$uri" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$packages$rfc3986$uri = Py_InitModule4(
        "urllib3.packages.rfc3986.uri",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$packages$rfc3986$uri = PyModule_Create( &mdef_urllib3$packages$rfc3986$uri );
#endif

    moduledict_urllib3$packages$rfc3986$uri = MODULE_DICT( module_urllib3$packages$rfc3986$uri );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_urllib3$packages$rfc3986$uri,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$packages$rfc3986$uri,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$packages$rfc3986$uri,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$packages$rfc3986$uri,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$packages$rfc3986$uri );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_72f50267826af28c7663b8809970cc8d, module_urllib3$packages$rfc3986$uri );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_d5988acdca12aa8410ed8276a0471f91;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_urllib3$packages$rfc3986$uri_25 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_0201833cb5087d3258365bf3c68c8d20_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0201833cb5087d3258365bf3c68c8d20_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_11a45dc36900384795a9e825b1a1bb64;
        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_d5988acdca12aa8410ed8276a0471f91 = MAKE_MODULE_FRAME( codeobj_d5988acdca12aa8410ed8276a0471f91, module_urllib3$packages$rfc3986$uri );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d5988acdca12aa8410ed8276a0471f91 );
    assert( Py_REFCNT( frame_d5988acdca12aa8410ed8276a0471f91 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_collections;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$packages$rfc3986$uri;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_namedtuple_tuple;
        tmp_level_name_1 = const_int_0;
        frame_d5988acdca12aa8410ed8276a0471f91->m_frame.f_lineno = 17;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_namedtuple );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_namedtuple, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_empty;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$packages$rfc3986$uri;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_compat_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_d5988acdca12aa8410ed8276a0471f91->m_frame.f_lineno = 19;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_2 ) )
        {
           tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_urllib3$packages$rfc3986$uri,
                const_str_plain_compat,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_compat );
        }

        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_compat, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_empty;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$packages$rfc3986$uri;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_misc_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_d5988acdca12aa8410ed8276a0471f91->m_frame.f_lineno = 20;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_3 ) )
        {
           tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_urllib3$packages$rfc3986$uri,
                const_str_plain_misc,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_misc );
        }

        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_misc, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_empty;
        tmp_globals_name_4 = (PyObject *)moduledict_urllib3$packages$rfc3986$uri;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_normalizers_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_d5988acdca12aa8410ed8276a0471f91->m_frame.f_lineno = 21;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_urllib3$packages$rfc3986$uri,
                const_str_plain_normalizers,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_normalizers );
        }

        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_normalizers, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain__mixin;
        tmp_globals_name_5 = (PyObject *)moduledict_urllib3$packages$rfc3986$uri;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_URIMixin_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_d5988acdca12aa8410ed8276a0471f91->m_frame.f_lineno = 22;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_urllib3$packages$rfc3986$uri,
                const_str_plain_URIMixin,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_URIMixin );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_URIMixin, tmp_assign_source_8 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_namedtuple );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_namedtuple );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "namedtuple" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;

            goto try_except_handler_1;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        tmp_args_element_name_1 = const_str_plain_URIReference;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_misc );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_misc );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "misc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;

            goto try_except_handler_1;
        }

        tmp_source_name_1 = tmp_mvar_value_4;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_URI_COMPONENTS );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        frame_d5988acdca12aa8410ed8276a0471f91->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        tmp_assign_source_9 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_assign_source_9, 0, tmp_tuple_element_1 );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_URIMixin );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_URIMixin );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_assign_source_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "URIMixin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;

            goto try_except_handler_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_5;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_9, 1, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

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


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_subscribed_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_type_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_11 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_11;
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


            exception_lineno = 25;

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


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_2 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_2, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_3 = tmp_class_creation_1__metaclass;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_1;
            }
            tmp_tuple_element_2 = const_str_plain_URIReference;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_d5988acdca12aa8410ed8276a0471f91->m_frame.f_lineno = 25;
            tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_12;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_4 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_4, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

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
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_5;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 25;

                    goto try_except_handler_1;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_5 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_5 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_5 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 25;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 25;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 25;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_13;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_14;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_urllib3$packages$rfc3986$uri_25 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_72f50267826af28c7663b8809970cc8d;
        tmp_res = PyObject_SetItem( locals_urllib3$packages$rfc3986$uri_25, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_digest_01caae4ed88148d389d5bbec8673bc84;
        tmp_res = PyObject_SetItem( locals_urllib3$packages$rfc3986$uri_25, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_URIReference;
        tmp_res = PyObject_SetItem( locals_urllib3$packages$rfc3986$uri_25, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_0201833cb5087d3258365bf3c68c8d20_2, codeobj_0201833cb5087d3258365bf3c68c8d20, module_urllib3$packages$rfc3986$uri, sizeof(void *) );
        frame_0201833cb5087d3258365bf3c68c8d20_2 = cache_frame_0201833cb5087d3258365bf3c68c8d20_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_0201833cb5087d3258365bf3c68c8d20_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_0201833cb5087d3258365bf3c68c8d20_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_tuple_empty;
        tmp_res = PyObject_SetItem( locals_urllib3$packages$rfc3986$uri_25, const_str_plain_slots, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$packages$rfc3986$uri$$$function_1___new__( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_urllib3$packages$rfc3986$uri_25, const_str_plain___new__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_source_name_6;
            tmp_source_name_6 = PyObject_GetItem( locals_urllib3$packages$rfc3986$uri_25, const_str_plain_tuple );

            if ( tmp_source_name_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_source_name_6 = (PyObject *)&PyTuple_Type;
                Py_INCREF( tmp_source_name_6 );
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___hash__ );
            Py_DECREF( tmp_source_name_6 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_urllib3$packages$rfc3986$uri_25, const_str_plain___hash__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$packages$rfc3986$uri$$$function_2___eq__(  );



        tmp_res = PyObject_SetItem( locals_urllib3$packages$rfc3986$uri_25, const_str_plain___eq__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$packages$rfc3986$uri$$$function_3_normalize(  );



        tmp_res = PyObject_SetItem( locals_urllib3$packages$rfc3986$uri_25, const_str_plain_normalize, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_defaults_2;
            PyObject *tmp_classmethod_arg_1;
            PyObject *tmp_defaults_3;
            tmp_res = MAPPING_HAS_ITEM( locals_urllib3$packages$rfc3986$uri_25, const_str_plain_classmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_2;
            }
            else
            {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_name_3 = PyObject_GetItem( locals_urllib3$packages$rfc3986$uri_25, const_str_plain_classmethod );

            if ( tmp_called_name_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "classmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_defaults_2 = const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_args_element_name_3 = MAKE_FUNCTION_urllib3$packages$rfc3986$uri$$$function_4_from_string( tmp_defaults_2 );



            frame_0201833cb5087d3258365bf3c68c8d20_2->m_frame.f_lineno = 136;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_defaults_3 = const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_classmethod_arg_1 = MAKE_FUNCTION_urllib3$packages$rfc3986$uri$$$function_4_from_string( tmp_defaults_3 );



            tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_1 );
            Py_DECREF( tmp_classmethod_arg_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem( locals_urllib3$packages$rfc3986$uri_25, const_str_plain_from_string, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0201833cb5087d3258365bf3c68c8d20_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0201833cb5087d3258365bf3c68c8d20_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_0201833cb5087d3258365bf3c68c8d20_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_0201833cb5087d3258365bf3c68c8d20_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_0201833cb5087d3258365bf3c68c8d20_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_0201833cb5087d3258365bf3c68c8d20_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_0201833cb5087d3258365bf3c68c8d20_2 == cache_frame_0201833cb5087d3258365bf3c68c8d20_2 )
        {
            Py_DECREF( frame_0201833cb5087d3258365bf3c68c8d20_2 );
        }
        cache_frame_0201833cb5087d3258365bf3c68c8d20_2 = NULL;

        assertFrameObject( frame_0201833cb5087d3258365bf3c68c8d20_2 );

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
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_URIReference;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_urllib3$packages$rfc3986$uri_25;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_d5988acdca12aa8410ed8276a0471f91->m_frame.f_lineno = 25;
            tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_15;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_14 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_14 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$uri );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_urllib3$packages$rfc3986$uri_25 );
        locals_urllib3$packages$rfc3986$uri_25 = NULL;
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

        Py_DECREF( locals_urllib3$packages$rfc3986$uri_25 );
        locals_urllib3$packages$rfc3986$uri_25 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$uri );
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
        NUITKA_CANNOT_GET_HERE( urllib3$packages$rfc3986$uri );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 25;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain_URIReference, tmp_assign_source_14 );
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5988acdca12aa8410ed8276a0471f91 );
#endif
    popFrameStack();

    assertFrameObject( frame_d5988acdca12aa8410ed8276a0471f91 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5988acdca12aa8410ed8276a0471f91 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d5988acdca12aa8410ed8276a0471f91, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d5988acdca12aa8410ed8276a0471f91->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d5988acdca12aa8410ed8276a0471f91, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986$uri, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_urllib3$packages$rfc3986$uri );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
