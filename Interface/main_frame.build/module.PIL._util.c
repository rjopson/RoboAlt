/* Generated code for Python module 'PIL._util'
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

/* The "_module_PIL$_util" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$_util;
PyDictObject *moduledict_PIL$_util;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_fc567ccc566ef0a896f3b426aebb1981;
extern PyObject *const_str_plain_basestring;
extern PyObject *const_str_plain_isdir;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_plain_isDirectory;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_deferred_error;
extern PyObject *const_str_plain_Path;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_tuple_str_plain_deferred_error_tuple_type_object_tuple_tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_f;
extern PyObject *const_tuple_int_pos_3_int_pos_6_tuple;
static PyObject *const_str_digest_aedbe268779e286926fd10f127e5eb95;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_type_bytes_type_str_tuple;
extern PyObject *const_str_plain_elt;
extern PyObject *const_tuple_str_plain_t_tuple;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_path;
extern PyObject *const_int_0;
static PyObject *const_str_digest_55f32188f83a55c7a6893b4ae7d8955e;
static PyObject *const_str_plain_py36;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_isStringType;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain_pathlib;
extern PyObject *const_str_plain_os;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_py3;
extern PyObject *const_tuple_str_plain_Path_tuple;
extern PyObject *const_str_plain_ex;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___getattr__;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_tuple_str_plain_f_tuple;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_1109bdcc2690bfb246bb9b880f6a0a9a;
extern PyObject *const_str_plain_isPath;
extern PyObject *const_str_plain_major;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_380c62224281712f109d537e21557b1d;
static PyObject *const_tuple_str_plain_self_str_plain_elt_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_tuple_str_plain_self_str_plain_ex_tuple;
extern PyObject *const_slice_int_0_int_pos_2_none;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_fc567ccc566ef0a896f3b426aebb1981 = UNSTREAM_STRING_ASCII( &constant_bin[ 113875 ], 12, 0 );
    const_str_plain_isDirectory = UNSTREAM_STRING_ASCII( &constant_bin[ 113887 ], 11, 1 );
    const_tuple_str_plain_deferred_error_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_deferred_error_tuple_type_object_tuple_tuple, 0, const_str_plain_deferred_error ); Py_INCREF( const_str_plain_deferred_error );
    PyTuple_SET_ITEM( const_tuple_str_plain_deferred_error_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_aedbe268779e286926fd10f127e5eb95 = UNSTREAM_STRING_ASCII( &constant_bin[ 113898 ], 23, 0 );
    const_str_digest_55f32188f83a55c7a6893b4ae7d8955e = UNSTREAM_STRING_ASCII( &constant_bin[ 113921 ], 9, 0 );
    const_str_plain_py36 = UNSTREAM_STRING_ASCII( &constant_bin[ 113930 ], 4, 1 );
    const_str_digest_1109bdcc2690bfb246bb9b880f6a0a9a = UNSTREAM_STRING_ASCII( &constant_bin[ 113934 ], 18, 0 );
    const_str_digest_380c62224281712f109d537e21557b1d = UNSTREAM_STRING_ASCII( &constant_bin[ 113952 ], 26, 0 );
    const_tuple_str_plain_self_str_plain_elt_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_elt_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_elt_tuple, 1, const_str_plain_elt ); Py_INCREF( const_str_plain_elt );
    const_tuple_str_plain_self_str_plain_ex_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_ex_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_ex_tuple, 1, const_str_plain_ex ); Py_INCREF( const_str_plain_ex );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_PIL$_util( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_cd998d9da3b74eecbcf2cfc1faaf83d3;
static PyCodeObject *codeobj_fc09793113c23de987a0942f180029a6;
static PyCodeObject *codeobj_04ffefe8a94a982da17ff38d986cce5e;
static PyCodeObject *codeobj_fcfc3c4b04b837266a268534a8f31fd5;
static PyCodeObject *codeobj_bc41783b6ff7327dfe09a4ffbd8df969;
static PyCodeObject *codeobj_7d15fadbed2e41280e1a8753c9d3f825;
static PyCodeObject *codeobj_dc1bee4cc8f0113dad0558f798161004;
static PyCodeObject *codeobj_68a0f2693effcbb66800eed04e01c3c4;
static PyCodeObject *codeobj_9cab14a5f1149138803c8371882c5ea1;
static PyCodeObject *codeobj_f7b5bc8793630e0419eba760883b4976;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_fc567ccc566ef0a896f3b426aebb1981 );
    codeobj_cd998d9da3b74eecbcf2cfc1faaf83d3 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1109bdcc2690bfb246bb9b880f6a0a9a, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_fc09793113c23de987a0942f180029a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getattr__, 42, const_tuple_str_plain_self_str_plain_elt_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_04ffefe8a94a982da17ff38d986cce5e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 39, const_tuple_str_plain_self_str_plain_ex_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fcfc3c4b04b837266a268534a8f31fd5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_deferred_error, 38, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_bc41783b6ff7327dfe09a4ffbd8df969 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isDirectory, 34, const_tuple_str_plain_f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7d15fadbed2e41280e1a8753c9d3f825 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isPath, 15, const_tuple_str_plain_f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dc1bee4cc8f0113dad0558f798161004 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isPath, 20, const_tuple_str_plain_f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_68a0f2693effcbb66800eed04e01c3c4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isPath, 29, const_tuple_str_plain_f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9cab14a5f1149138803c8371882c5ea1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isStringType, 9, const_tuple_str_plain_t_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f7b5bc8793630e0419eba760883b4976 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isStringType, 26, const_tuple_str_plain_t_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_PIL$_util$$$function_1_isStringType(  );


static PyObject *MAKE_FUNCTION_PIL$_util$$$function_2_isPath(  );


static PyObject *MAKE_FUNCTION_PIL$_util$$$function_3_isPath(  );


static PyObject *MAKE_FUNCTION_PIL$_util$$$function_4_isStringType(  );


static PyObject *MAKE_FUNCTION_PIL$_util$$$function_5_isPath(  );


static PyObject *MAKE_FUNCTION_PIL$_util$$$function_6_isDirectory(  );


static PyObject *MAKE_FUNCTION_PIL$_util$$$function_7___init__(  );


static PyObject *MAKE_FUNCTION_PIL$_util$$$function_8___getattr__(  );


// The module function definitions.
static PyObject *impl_PIL$_util$$$function_1_isStringType( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_9cab14a5f1149138803c8371882c5ea1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9cab14a5f1149138803c8371882c5ea1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9cab14a5f1149138803c8371882c5ea1, codeobj_9cab14a5f1149138803c8371882c5ea1, module_PIL$_util, sizeof(void *) );
    frame_9cab14a5f1149138803c8371882c5ea1 = cache_frame_9cab14a5f1149138803c8371882c5ea1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9cab14a5f1149138803c8371882c5ea1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9cab14a5f1149138803c8371882c5ea1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_t );
        tmp_isinstance_inst_1 = par_t;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9cab14a5f1149138803c8371882c5ea1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9cab14a5f1149138803c8371882c5ea1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9cab14a5f1149138803c8371882c5ea1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9cab14a5f1149138803c8371882c5ea1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9cab14a5f1149138803c8371882c5ea1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9cab14a5f1149138803c8371882c5ea1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9cab14a5f1149138803c8371882c5ea1,
        type_description_1,
        par_t
    );


    // Release cached frame.
    if ( frame_9cab14a5f1149138803c8371882c5ea1 == cache_frame_9cab14a5f1149138803c8371882c5ea1 )
    {
        Py_DECREF( frame_9cab14a5f1149138803c8371882c5ea1 );
    }
    cache_frame_9cab14a5f1149138803c8371882c5ea1 = NULL;

    assertFrameObject( frame_9cab14a5f1149138803c8371882c5ea1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_util$$$function_1_isStringType );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_util$$$function_1_isStringType );
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


static PyObject *impl_PIL$_util$$$function_2_isPath( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_7d15fadbed2e41280e1a8753c9d3f825;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7d15fadbed2e41280e1a8753c9d3f825 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7d15fadbed2e41280e1a8753c9d3f825, codeobj_7d15fadbed2e41280e1a8753c9d3f825, module_PIL$_util, sizeof(void *) );
    frame_7d15fadbed2e41280e1a8753c9d3f825 = cache_frame_7d15fadbed2e41280e1a8753c9d3f825;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7d15fadbed2e41280e1a8753c9d3f825 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7d15fadbed2e41280e1a8753c9d3f825 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_f );
        tmp_isinstance_inst_1 = par_f;
        tmp_tuple_element_1 = (PyObject *)&PyBytes_Type;
        tmp_isinstance_cls_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_Path );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Path );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_isinstance_cls_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Path" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 16;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 2, tmp_tuple_element_1 );
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d15fadbed2e41280e1a8753c9d3f825 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d15fadbed2e41280e1a8753c9d3f825 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d15fadbed2e41280e1a8753c9d3f825 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7d15fadbed2e41280e1a8753c9d3f825, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7d15fadbed2e41280e1a8753c9d3f825->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7d15fadbed2e41280e1a8753c9d3f825, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7d15fadbed2e41280e1a8753c9d3f825,
        type_description_1,
        par_f
    );


    // Release cached frame.
    if ( frame_7d15fadbed2e41280e1a8753c9d3f825 == cache_frame_7d15fadbed2e41280e1a8753c9d3f825 )
    {
        Py_DECREF( frame_7d15fadbed2e41280e1a8753c9d3f825 );
    }
    cache_frame_7d15fadbed2e41280e1a8753c9d3f825 = NULL;

    assertFrameObject( frame_7d15fadbed2e41280e1a8753c9d3f825 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_util$$$function_2_isPath );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

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

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_util$$$function_2_isPath );
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


static PyObject *impl_PIL$_util$$$function_3_isPath( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_dc1bee4cc8f0113dad0558f798161004;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dc1bee4cc8f0113dad0558f798161004 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dc1bee4cc8f0113dad0558f798161004, codeobj_dc1bee4cc8f0113dad0558f798161004, module_PIL$_util, sizeof(void *) );
    frame_dc1bee4cc8f0113dad0558f798161004 = cache_frame_dc1bee4cc8f0113dad0558f798161004;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dc1bee4cc8f0113dad0558f798161004 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dc1bee4cc8f0113dad0558f798161004 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_f );
        tmp_isinstance_inst_1 = par_f;
        tmp_isinstance_cls_1 = const_tuple_type_bytes_type_str_tuple;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dc1bee4cc8f0113dad0558f798161004 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dc1bee4cc8f0113dad0558f798161004 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dc1bee4cc8f0113dad0558f798161004 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dc1bee4cc8f0113dad0558f798161004, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dc1bee4cc8f0113dad0558f798161004->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dc1bee4cc8f0113dad0558f798161004, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dc1bee4cc8f0113dad0558f798161004,
        type_description_1,
        par_f
    );


    // Release cached frame.
    if ( frame_dc1bee4cc8f0113dad0558f798161004 == cache_frame_dc1bee4cc8f0113dad0558f798161004 )
    {
        Py_DECREF( frame_dc1bee4cc8f0113dad0558f798161004 );
    }
    cache_frame_dc1bee4cc8f0113dad0558f798161004 = NULL;

    assertFrameObject( frame_dc1bee4cc8f0113dad0558f798161004 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_util$$$function_3_isPath );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

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

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_util$$$function_3_isPath );
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


static PyObject *impl_PIL$_util$$$function_4_isStringType( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_f7b5bc8793630e0419eba760883b4976;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f7b5bc8793630e0419eba760883b4976 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f7b5bc8793630e0419eba760883b4976, codeobj_f7b5bc8793630e0419eba760883b4976, module_PIL$_util, sizeof(void *) );
    frame_f7b5bc8793630e0419eba760883b4976 = cache_frame_f7b5bc8793630e0419eba760883b4976;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f7b5bc8793630e0419eba760883b4976 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f7b5bc8793630e0419eba760883b4976 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_t );
        tmp_isinstance_inst_1 = par_t;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_basestring );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "basestring" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7b5bc8793630e0419eba760883b4976 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7b5bc8793630e0419eba760883b4976 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7b5bc8793630e0419eba760883b4976 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f7b5bc8793630e0419eba760883b4976, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f7b5bc8793630e0419eba760883b4976->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f7b5bc8793630e0419eba760883b4976, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f7b5bc8793630e0419eba760883b4976,
        type_description_1,
        par_t
    );


    // Release cached frame.
    if ( frame_f7b5bc8793630e0419eba760883b4976 == cache_frame_f7b5bc8793630e0419eba760883b4976 )
    {
        Py_DECREF( frame_f7b5bc8793630e0419eba760883b4976 );
    }
    cache_frame_f7b5bc8793630e0419eba760883b4976 = NULL;

    assertFrameObject( frame_f7b5bc8793630e0419eba760883b4976 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_util$$$function_4_isStringType );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_util$$$function_4_isStringType );
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


static PyObject *impl_PIL$_util$$$function_5_isPath( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_68a0f2693effcbb66800eed04e01c3c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_68a0f2693effcbb66800eed04e01c3c4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_68a0f2693effcbb66800eed04e01c3c4, codeobj_68a0f2693effcbb66800eed04e01c3c4, module_PIL$_util, sizeof(void *) );
    frame_68a0f2693effcbb66800eed04e01c3c4 = cache_frame_68a0f2693effcbb66800eed04e01c3c4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_68a0f2693effcbb66800eed04e01c3c4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_68a0f2693effcbb66800eed04e01c3c4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_f );
        tmp_isinstance_inst_1 = par_f;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_basestring );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "basestring" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 30;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_68a0f2693effcbb66800eed04e01c3c4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_68a0f2693effcbb66800eed04e01c3c4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_68a0f2693effcbb66800eed04e01c3c4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_68a0f2693effcbb66800eed04e01c3c4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_68a0f2693effcbb66800eed04e01c3c4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_68a0f2693effcbb66800eed04e01c3c4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_68a0f2693effcbb66800eed04e01c3c4,
        type_description_1,
        par_f
    );


    // Release cached frame.
    if ( frame_68a0f2693effcbb66800eed04e01c3c4 == cache_frame_68a0f2693effcbb66800eed04e01c3c4 )
    {
        Py_DECREF( frame_68a0f2693effcbb66800eed04e01c3c4 );
    }
    cache_frame_68a0f2693effcbb66800eed04e01c3c4 = NULL;

    assertFrameObject( frame_68a0f2693effcbb66800eed04e01c3c4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_util$$$function_5_isPath );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

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

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_util$$$function_5_isPath );
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


static PyObject *impl_PIL$_util$$$function_6_isDirectory( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_bc41783b6ff7327dfe09a4ffbd8df969;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bc41783b6ff7327dfe09a4ffbd8df969 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bc41783b6ff7327dfe09a4ffbd8df969, codeobj_bc41783b6ff7327dfe09a4ffbd8df969, module_PIL$_util, sizeof(void *) );
    frame_bc41783b6ff7327dfe09a4ffbd8df969 = cache_frame_bc41783b6ff7327dfe09a4ffbd8df969;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bc41783b6ff7327dfe09a4ffbd8df969 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bc41783b6ff7327dfe09a4ffbd8df969 ) == 2 ); // Frame stack

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_isPath );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isPath );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isPath" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_f );
        tmp_args_element_name_1 = par_f;
        frame_bc41783b6ff7327dfe09a4ffbd8df969->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_and_left_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_and_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_1 );

            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF( tmp_and_left_value_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_path );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_f );
        tmp_args_element_name_2 = par_f;
        frame_bc41783b6ff7327dfe09a4ffbd8df969->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_and_right_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isdir, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_and_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc41783b6ff7327dfe09a4ffbd8df969 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc41783b6ff7327dfe09a4ffbd8df969 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc41783b6ff7327dfe09a4ffbd8df969 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bc41783b6ff7327dfe09a4ffbd8df969, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bc41783b6ff7327dfe09a4ffbd8df969->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bc41783b6ff7327dfe09a4ffbd8df969, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bc41783b6ff7327dfe09a4ffbd8df969,
        type_description_1,
        par_f
    );


    // Release cached frame.
    if ( frame_bc41783b6ff7327dfe09a4ffbd8df969 == cache_frame_bc41783b6ff7327dfe09a4ffbd8df969 )
    {
        Py_DECREF( frame_bc41783b6ff7327dfe09a4ffbd8df969 );
    }
    cache_frame_bc41783b6ff7327dfe09a4ffbd8df969 = NULL;

    assertFrameObject( frame_bc41783b6ff7327dfe09a4ffbd8df969 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_util$$$function_6_isDirectory );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

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

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_util$$$function_6_isDirectory );
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


static PyObject *impl_PIL$_util$$$function_7___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_ex = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_04ffefe8a94a982da17ff38d986cce5e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_04ffefe8a94a982da17ff38d986cce5e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_04ffefe8a94a982da17ff38d986cce5e, codeobj_04ffefe8a94a982da17ff38d986cce5e, module_PIL$_util, sizeof(void *)+sizeof(void *) );
    frame_04ffefe8a94a982da17ff38d986cce5e = cache_frame_04ffefe8a94a982da17ff38d986cce5e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_04ffefe8a94a982da17ff38d986cce5e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_04ffefe8a94a982da17ff38d986cce5e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_ex );
        tmp_assattr_name_1 = par_ex;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ex, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_04ffefe8a94a982da17ff38d986cce5e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_04ffefe8a94a982da17ff38d986cce5e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_04ffefe8a94a982da17ff38d986cce5e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_04ffefe8a94a982da17ff38d986cce5e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_04ffefe8a94a982da17ff38d986cce5e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_04ffefe8a94a982da17ff38d986cce5e,
        type_description_1,
        par_self,
        par_ex
    );


    // Release cached frame.
    if ( frame_04ffefe8a94a982da17ff38d986cce5e == cache_frame_04ffefe8a94a982da17ff38d986cce5e )
    {
        Py_DECREF( frame_04ffefe8a94a982da17ff38d986cce5e );
    }
    cache_frame_04ffefe8a94a982da17ff38d986cce5e = NULL;

    assertFrameObject( frame_04ffefe8a94a982da17ff38d986cce5e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_util$$$function_7___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ex );
    Py_DECREF( par_ex );
    par_ex = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ex );
    Py_DECREF( par_ex );
    par_ex = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_util$$$function_7___init__ );
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


static PyObject *impl_PIL$_util$$$function_8___getattr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_elt = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_fc09793113c23de987a0942f180029a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fc09793113c23de987a0942f180029a6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fc09793113c23de987a0942f180029a6, codeobj_fc09793113c23de987a0942f180029a6, module_PIL$_util, sizeof(void *)+sizeof(void *) );
    frame_fc09793113c23de987a0942f180029a6 = cache_frame_fc09793113c23de987a0942f180029a6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fc09793113c23de987a0942f180029a6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fc09793113c23de987a0942f180029a6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_raise_type_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ex );
        if ( tmp_raise_type_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 43;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc09793113c23de987a0942f180029a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc09793113c23de987a0942f180029a6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fc09793113c23de987a0942f180029a6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fc09793113c23de987a0942f180029a6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fc09793113c23de987a0942f180029a6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fc09793113c23de987a0942f180029a6,
        type_description_1,
        par_self,
        par_elt
    );


    // Release cached frame.
    if ( frame_fc09793113c23de987a0942f180029a6 == cache_frame_fc09793113c23de987a0942f180029a6 )
    {
        Py_DECREF( frame_fc09793113c23de987a0942f180029a6 );
    }
    cache_frame_fc09793113c23de987a0942f180029a6 = NULL;

    assertFrameObject( frame_fc09793113c23de987a0942f180029a6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_util$$$function_8___getattr__ );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_elt );
    Py_DECREF( par_elt );
    par_elt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_util$$$function_8___getattr__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}



static PyObject *MAKE_FUNCTION_PIL$_util$$$function_1_isStringType(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_util$$$function_1_isStringType,
        const_str_plain_isStringType,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9cab14a5f1149138803c8371882c5ea1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_util,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_util$$$function_2_isPath(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_util$$$function_2_isPath,
        const_str_plain_isPath,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7d15fadbed2e41280e1a8753c9d3f825,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_util,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_util$$$function_3_isPath(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_util$$$function_3_isPath,
        const_str_plain_isPath,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dc1bee4cc8f0113dad0558f798161004,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_util,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_util$$$function_4_isStringType(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_util$$$function_4_isStringType,
        const_str_plain_isStringType,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f7b5bc8793630e0419eba760883b4976,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_util,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_util$$$function_5_isPath(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_util$$$function_5_isPath,
        const_str_plain_isPath,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_68a0f2693effcbb66800eed04e01c3c4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_util,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_util$$$function_6_isDirectory(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_util$$$function_6_isDirectory,
        const_str_plain_isDirectory,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bc41783b6ff7327dfe09a4ffbd8df969,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_util,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_util$$$function_7___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_util$$$function_7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_aedbe268779e286926fd10f127e5eb95,
#endif
        codeobj_04ffefe8a94a982da17ff38d986cce5e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_util,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_util$$$function_8___getattr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_util$$$function_8___getattr__,
        const_str_plain___getattr__,
#if PYTHON_VERSION >= 300
        const_str_digest_380c62224281712f109d537e21557b1d,
#endif
        codeobj_fc09793113c23de987a0942f180029a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_util,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_PIL$_util =
{
    PyModuleDef_HEAD_INIT,
    "PIL._util",
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

MOD_INIT_DECL( PIL$_util )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_PIL$_util );
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
    puts("PIL._util: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("PIL._util: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("PIL._util: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initPIL$_util" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_PIL$_util = Py_InitModule4(
        "PIL._util",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_PIL$_util = PyModule_Create( &mdef_PIL$_util );
#endif

    moduledict_PIL$_util = MODULE_DICT( module_PIL$_util );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_PIL$_util,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_PIL$_util,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_PIL$_util,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_PIL$_util,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_PIL$_util );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_55f32188f83a55c7a6893b4ae7d8955e, module_PIL$_util );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_cd998d9da3b74eecbcf2cfc1faaf83d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_PIL$_util_38 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_fcfc3c4b04b837266a268534a8f31fd5_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_fcfc3c4b04b837266a268534a8f31fd5_2 = NULL;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_cd998d9da3b74eecbcf2cfc1faaf83d3 = MAKE_MODULE_FRAME( codeobj_cd998d9da3b74eecbcf2cfc1faaf83d3, module_PIL$_util );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_cd998d9da3b74eecbcf2cfc1faaf83d3 );
    assert( Py_REFCNT( frame_cd998d9da3b74eecbcf2cfc1faaf83d3 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_os;
        tmp_globals_name_1 = (PyObject *)moduledict_PIL$_util;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_cd998d9da3b74eecbcf2cfc1faaf83d3->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_sys;
        tmp_globals_name_2 = (PyObject *)moduledict_PIL$_util;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_cd998d9da3b74eecbcf2cfc1faaf83d3->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version_info );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_major );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_3;
        tmp_assign_source_6 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_py3, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 5;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_version_info );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_slice_int_0_int_pos_2_none;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_tuple_int_pos_3_int_pos_6_tuple;
        tmp_assign_source_7 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_py36, tmp_assign_source_7 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_5;
        int tmp_truth_name_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_py3 );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_py3 );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "py3" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 7;

            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_mvar_value_5 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

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
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_FUNCTION_PIL$_util$$$function_1_isStringType(  );



            UPDATE_STRING_DICT1( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_isStringType, tmp_assign_source_8 );
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_mvar_value_6;
            int tmp_truth_name_2;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_py36 );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_py36 );
            }

            CHECK_OBJECT( tmp_mvar_value_6 );
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_mvar_value_6 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;

                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_9;
                PyObject *tmp_import_name_from_1;
                PyObject *tmp_name_name_3;
                PyObject *tmp_globals_name_3;
                PyObject *tmp_locals_name_3;
                PyObject *tmp_fromlist_name_3;
                PyObject *tmp_level_name_3;
                tmp_name_name_3 = const_str_plain_pathlib;
                tmp_globals_name_3 = (PyObject *)moduledict_PIL$_util;
                tmp_locals_name_3 = Py_None;
                tmp_fromlist_name_3 = const_tuple_str_plain_Path_tuple;
                tmp_level_name_3 = const_int_0;
                frame_cd998d9da3b74eecbcf2cfc1faaf83d3->m_frame.f_lineno = 13;
                tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
                if ( tmp_import_name_from_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 13;

                    goto frame_exception_exit_1;
                }
                tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Path );
                Py_DECREF( tmp_import_name_from_1 );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 13;

                    goto frame_exception_exit_1;
                }
                UPDATE_STRING_DICT1( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_Path, tmp_assign_source_9 );
            }
            {
                PyObject *tmp_assign_source_10;
                tmp_assign_source_10 = MAKE_FUNCTION_PIL$_util$$$function_2_isPath(  );



                UPDATE_STRING_DICT1( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_isPath, tmp_assign_source_10 );
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_11;
                tmp_assign_source_11 = MAKE_FUNCTION_PIL$_util$$$function_3_isPath(  );



                UPDATE_STRING_DICT1( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_isPath, tmp_assign_source_11 );
            }
            branch_end_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = MAKE_FUNCTION_PIL$_util$$$function_4_isStringType(  );



            UPDATE_STRING_DICT1( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_isStringType, tmp_assign_source_12 );
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = MAKE_FUNCTION_PIL$_util$$$function_5_isPath(  );



            UPDATE_STRING_DICT1( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_isPath, tmp_assign_source_13 );
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_PIL$_util$$$function_6_isDirectory(  );



        UPDATE_STRING_DICT1( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_isDirectory, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_3;
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


            exception_lineno = 38;

            goto try_except_handler_1;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 38;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
        assert( tmp_metaclass_name_1 != NULL );
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_type_object_tuple;
        tmp_assign_source_16 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_4;
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


            exception_lineno = 38;

            goto try_except_handler_1;
        }
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_4 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_4, const_str_plain___prepare__ );
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_name_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_5 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 38;

                goto try_except_handler_1;
            }
            tmp_args_name_1 = const_tuple_str_plain_deferred_error_tuple_type_object_tuple_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_cd998d9da3b74eecbcf2cfc1faaf83d3->m_frame.f_lineno = 38;
            tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 38;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_17;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_6 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_6, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 38;

                goto try_except_handler_1;
            }
            tmp_condition_result_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_5;
            }
            else
            {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_raise_value_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_7;
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


                    exception_lineno = 38;

                    goto try_except_handler_1;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_1 = tmp_class_creation_1__prepared;
                tmp_source_name_7 = BUILTIN_TYPE1( tmp_type_arg_1 );
                assert( !(tmp_source_name_7 == NULL) );
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_7 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 38;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 38;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 38;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_5:;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_18;
        }
        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_19;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_PIL$_util_38 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_55f32188f83a55c7a6893b4ae7d8955e;
        tmp_res = PyObject_SetItem( locals_PIL$_util_38, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_deferred_error;
        tmp_res = PyObject_SetItem( locals_PIL$_util_38, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_fcfc3c4b04b837266a268534a8f31fd5_2, codeobj_fcfc3c4b04b837266a268534a8f31fd5, module_PIL$_util, sizeof(void *) );
        frame_fcfc3c4b04b837266a268534a8f31fd5_2 = cache_frame_fcfc3c4b04b837266a268534a8f31fd5_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_fcfc3c4b04b837266a268534a8f31fd5_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_fcfc3c4b04b837266a268534a8f31fd5_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_PIL$_util$$$function_7___init__(  );



        tmp_res = PyObject_SetItem( locals_PIL$_util_38, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_PIL$_util$$$function_8___getattr__(  );



        tmp_res = PyObject_SetItem( locals_PIL$_util_38, const_str_plain___getattr__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_fcfc3c4b04b837266a268534a8f31fd5_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_fcfc3c4b04b837266a268534a8f31fd5_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_fcfc3c4b04b837266a268534a8f31fd5_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_fcfc3c4b04b837266a268534a8f31fd5_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_fcfc3c4b04b837266a268534a8f31fd5_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_fcfc3c4b04b837266a268534a8f31fd5_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_fcfc3c4b04b837266a268534a8f31fd5_2 == cache_frame_fcfc3c4b04b837266a268534a8f31fd5_2 )
        {
            Py_DECREF( frame_fcfc3c4b04b837266a268534a8f31fd5_2 );
        }
        cache_frame_fcfc3c4b04b837266a268534a8f31fd5_2 = NULL;

        assertFrameObject( frame_fcfc3c4b04b837266a268534a8f31fd5_2 );

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
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain_deferred_error;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_type_object_tuple;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_PIL$_util_38;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_cd998d9da3b74eecbcf2cfc1faaf83d3->m_frame.f_lineno = 38;
            tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 38;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_20;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_19 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_19 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( PIL$_util );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_PIL$_util_38 );
        locals_PIL$_util_38 = NULL;
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

        Py_DECREF( locals_PIL$_util_38 );
        locals_PIL$_util_38 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( PIL$_util );
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
        NUITKA_CANNOT_GET_HERE( PIL$_util );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 38;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain_deferred_error, tmp_assign_source_19 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd998d9da3b74eecbcf2cfc1faaf83d3 );
#endif
    popFrameStack();

    assertFrameObject( frame_cd998d9da3b74eecbcf2cfc1faaf83d3 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd998d9da3b74eecbcf2cfc1faaf83d3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cd998d9da3b74eecbcf2cfc1faaf83d3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cd998d9da3b74eecbcf2cfc1faaf83d3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cd998d9da3b74eecbcf2cfc1faaf83d3, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
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
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_PIL$_util );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
