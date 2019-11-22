/* Generated code for Python module 'h5py._hl.compat'
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

/* The "_module_h5py$_hl$compat" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_h5py$_hl$compat;
PyDictObject *moduledict_h5py$_hl$compat;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_fspath;
extern PyObject *const_str_plain_codecs;
static PyObject *const_str_plain_mbcs;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_c64c3bcffeb01e8816a3ce872780174f;
extern PyObject *const_str_plain_sys;
static PyObject *const_tuple_f3cf4d97b58d952cf999c7d0293eca5b_tuple;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_filename_decode;
extern PyObject *const_tuple_str_plain_filename_tuple;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_text_type;
extern PyObject *const_str_plain_filename;
static PyObject *const_str_plain__fsencode;
extern PyObject *const_str_plain_strict;
static PyObject *const_str_plain__fsdecode;
static PyObject *const_str_plain_lookup_error;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_a59b6c659764626467c2fba822f0d727;
extern PyObject *const_str_plain_encoding;
static PyObject *const_str_digest_9d2ca6cae85c09d0905b22dc7f5e24fd;
static PyObject *const_tuple_str_plain_lookup_error_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_dbafaa008d72c8b6378ef67a6375590b;
extern PyObject *const_str_plain_binary_type;
static PyObject *const_str_digest_64dcb07d6ab10eebe4c3dca8d8ff37c9;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_plain_WINDOWS_ENCODING;
extern PyObject *const_str_plain_six;
static PyObject *const_str_digest_202323f5e0a694e273a584a5ba575751;
extern PyObject *const_str_plain_path;
static PyObject *const_str_plain_surrogateescape;
extern PyObject *const_str_plain_path_type;
static PyObject *const_tuple_str_plain_path_str_plain_path_type_str_plain_pathlib_tuple;
static PyObject *const_str_digest_0b2c1df07137be4c5aa2e2b583a76e69;
static PyObject *const_str_digest_5c12b25e747b024c36ad02665e409b35;
static PyObject *const_str_digest_eccb3a7cd9ba7dd1a93e6d48ec7ea552;
static PyObject *const_tuple_str_plain_filename_str_plain_encoding_str_plain_errors_tuple;
extern PyObject *const_str_plain_fsdecode;
extern PyObject *const_str_plain_pathlib;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_b7ad1f5dded1d5d79321c5e98cacce6a;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_filename_encode;
static PyObject *const_str_plain_getfilesystemencoding;
extern PyObject *const_str_plain___fspath__;
static PyObject *const_tuple_str_plain_surrogateescape_tuple;
static PyObject *const_tuple_str_plain_fspath_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain__fscodec;
static PyObject *const_tuple_str_plain_fsdecode_tuple;
extern PyObject *const_str_plain_PurePath;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_e1f6282c57bc80496c016b9075f8cb17;
static PyObject *const_str_plain_fsencode;
static PyObject *const_str_digest_9dbfb02e7ec44d1fd78d2534fcd09e1a;
static PyObject *const_tuple_str_plain_fsencode_tuple;
extern PyObject *const_str_plain_errors;
extern PyObject *const_str_plain_platform;
static PyObject *const_str_digest_5aea718a788492461242130f92959b10;
extern PyObject *const_str_plain_win32;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_mbcs = UNSTREAM_STRING_ASCII( &constant_bin[ 410063 ], 4, 1 );
    const_str_digest_c64c3bcffeb01e8816a3ce872780174f = UNSTREAM_STRING_ASCII( &constant_bin[ 527498 ], 15, 0 );
    const_tuple_f3cf4d97b58d952cf999c7d0293eca5b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_f3cf4d97b58d952cf999c7d0293eca5b_tuple, 0, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_f3cf4d97b58d952cf999c7d0293eca5b_tuple, 1, const_str_plain_errors ); Py_INCREF( const_str_plain_errors );
    const_str_plain_lookup_error = UNSTREAM_STRING_ASCII( &constant_bin[ 527513 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_f3cf4d97b58d952cf999c7d0293eca5b_tuple, 2, const_str_plain_lookup_error ); Py_INCREF( const_str_plain_lookup_error );
    const_str_plain_fsencode = UNSTREAM_STRING_ASCII( &constant_bin[ 527525 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_f3cf4d97b58d952cf999c7d0293eca5b_tuple, 3, const_str_plain_fsencode ); Py_INCREF( const_str_plain_fsencode );
    PyTuple_SET_ITEM( const_tuple_f3cf4d97b58d952cf999c7d0293eca5b_tuple, 4, const_str_plain_fsdecode ); Py_INCREF( const_str_plain_fsdecode );
    const_str_plain__fsencode = UNSTREAM_STRING_ASCII( &constant_bin[ 527533 ], 9, 1 );
    const_str_plain__fsdecode = UNSTREAM_STRING_ASCII( &constant_bin[ 527542 ], 9, 1 );
    const_str_digest_a59b6c659764626467c2fba822f0d727 = UNSTREAM_STRING_ASCII( &constant_bin[ 527551 ], 265, 0 );
    const_str_digest_9d2ca6cae85c09d0905b22dc7f5e24fd = UNSTREAM_STRING_ASCII( &constant_bin[ 527816 ], 27, 0 );
    const_tuple_str_plain_lookup_error_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_lookup_error_tuple, 0, const_str_plain_lookup_error ); Py_INCREF( const_str_plain_lookup_error );
    const_str_digest_64dcb07d6ab10eebe4c3dca8d8ff37c9 = UNSTREAM_STRING_ASCII( &constant_bin[ 527843 ], 26, 0 );
    const_str_plain_WINDOWS_ENCODING = UNSTREAM_STRING_ASCII( &constant_bin[ 527869 ], 16, 1 );
    const_str_digest_202323f5e0a694e273a584a5ba575751 = UNSTREAM_STRING_ASCII( &constant_bin[ 527885 ], 18, 0 );
    const_str_plain_surrogateescape = UNSTREAM_STRING_ASCII( &constant_bin[ 527903 ], 15, 1 );
    const_tuple_str_plain_path_str_plain_path_type_str_plain_pathlib_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_path_str_plain_path_type_str_plain_pathlib_tuple, 0, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_str_plain_path_str_plain_path_type_str_plain_pathlib_tuple, 1, const_str_plain_path_type ); Py_INCREF( const_str_plain_path_type );
    PyTuple_SET_ITEM( const_tuple_str_plain_path_str_plain_path_type_str_plain_pathlib_tuple, 2, const_str_plain_pathlib ); Py_INCREF( const_str_plain_pathlib );
    const_str_digest_0b2c1df07137be4c5aa2e2b583a76e69 = UNSTREAM_STRING_ASCII( &constant_bin[ 527918 ], 24, 0 );
    const_str_digest_5c12b25e747b024c36ad02665e409b35 = UNSTREAM_STRING_ASCII( &constant_bin[ 527942 ], 26, 0 );
    const_str_digest_eccb3a7cd9ba7dd1a93e6d48ec7ea552 = UNSTREAM_STRING_ASCII( &constant_bin[ 527968 ], 42, 0 );
    const_tuple_str_plain_filename_str_plain_encoding_str_plain_errors_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_filename_str_plain_encoding_str_plain_errors_tuple, 0, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_str_plain_filename_str_plain_encoding_str_plain_errors_tuple, 1, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_str_plain_filename_str_plain_encoding_str_plain_errors_tuple, 2, const_str_plain_errors ); Py_INCREF( const_str_plain_errors );
    const_str_digest_b7ad1f5dded1d5d79321c5e98cacce6a = UNSTREAM_STRING_ASCII( &constant_bin[ 528010 ], 248, 0 );
    const_str_plain_getfilesystemencoding = UNSTREAM_STRING_ASCII( &constant_bin[ 528258 ], 21, 1 );
    const_tuple_str_plain_surrogateescape_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_surrogateescape_tuple, 0, const_str_plain_surrogateescape ); Py_INCREF( const_str_plain_surrogateescape );
    const_tuple_str_plain_fspath_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fspath_tuple, 0, const_str_plain_fspath ); Py_INCREF( const_str_plain_fspath );
    const_str_plain__fscodec = UNSTREAM_STRING_ASCII( &constant_bin[ 527843 ], 8, 1 );
    const_tuple_str_plain_fsdecode_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fsdecode_tuple, 0, const_str_plain_fsdecode ); Py_INCREF( const_str_plain_fsdecode );
    const_str_digest_e1f6282c57bc80496c016b9075f8cb17 = UNSTREAM_STRING_ASCII( &constant_bin[ 528279 ], 250, 0 );
    const_str_digest_9dbfb02e7ec44d1fd78d2534fcd09e1a = UNSTREAM_STRING_ASCII( &constant_bin[ 528529 ], 255, 0 );
    const_tuple_str_plain_fsencode_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fsencode_tuple, 0, const_str_plain_fsencode ); Py_INCREF( const_str_plain_fsencode );
    const_str_digest_5aea718a788492461242130f92959b10 = UNSTREAM_STRING_ASCII( &constant_bin[ 528784 ], 248, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_h5py$_hl$compat( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b411f86374423b383f99bf9d3edf4a80;
static PyCodeObject *codeobj_b813eb3f58ffcdf6e0353bc4d9378f10;
static PyCodeObject *codeobj_65c400dbbbc85fef959a7d856aee75be;
static PyCodeObject *codeobj_a839ce61c790b9a2d80c66ca4b940ea2;
static PyCodeObject *codeobj_da06b8757fb5578db7285f92f20647a0;
static PyCodeObject *codeobj_0eae3025a81e65cdc7ca52c8c17dcf5a;
static PyCodeObject *codeobj_b9c6e26a5d2f9b6d11ca1d3bb63789f6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_202323f5e0a694e273a584a5ba575751 );
    codeobj_b411f86374423b383f99bf9d3edf4a80 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0b2c1df07137be4c5aa2e2b583a76e69, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_b813eb3f58ffcdf6e0353bc4d9378f10 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fscodec, 48, const_tuple_f3cf4d97b58d952cf999c7d0293eca5b_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_65c400dbbbc85fef959a7d856aee75be = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filename_decode, 119, const_tuple_str_plain_filename_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a839ce61c790b9a2d80c66ca4b940ea2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filename_encode, 103, const_tuple_str_plain_filename_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_da06b8757fb5578db7285f92f20647a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fsdecode, 74, const_tuple_str_plain_filename_str_plain_encoding_str_plain_errors_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_0eae3025a81e65cdc7ca52c8c17dcf5a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fsencode, 61, const_tuple_str_plain_filename_str_plain_encoding_str_plain_errors_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_b9c6e26a5d2f9b6d11ca1d3bb63789f6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fspath, 13, const_tuple_str_plain_path_str_plain_path_type_str_plain_pathlib_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_h5py$_hl$compat$$$function_1_fspath(  );


static PyObject *MAKE_FUNCTION_h5py$_hl$compat$$$function_2__fscodec(  );


static PyObject *MAKE_FUNCTION_h5py$_hl$compat$$$function_2__fscodec$$$function_1_fsencode(  );


static PyObject *MAKE_FUNCTION_h5py$_hl$compat$$$function_2__fscodec$$$function_2_fsdecode(  );


static PyObject *MAKE_FUNCTION_h5py$_hl$compat$$$function_3_filename_encode(  );


static PyObject *MAKE_FUNCTION_h5py$_hl$compat$$$function_4_filename_decode(  );


// The module function definitions.
static PyObject *impl_h5py$_hl$compat$$$function_1_fspath( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[ 0 ];
    PyObject *var_path_type = NULL;
    PyObject *var_pathlib = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6, codeobj_b9c6e26a5d2f9b6d11ca1d3bb63789f6, module_h5py$_hl$compat, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6 = cache_frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_path );
        tmp_isinstance_inst_1 = par_path;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_six );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_text_type );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_six );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_isinstance_cls_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_binary_type );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_isinstance_cls_1 );

            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooo";
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
        CHECK_OBJECT( par_path );
        tmp_return_value = par_path;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT( par_path );
        tmp_type_arg_1 = par_path;
        tmp_assign_source_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_assign_source_1 == NULL) );
        assert( var_path_type == NULL );
        var_path_type = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_path_type );
        tmp_called_instance_1 = var_path_type;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_1 = par_path;
        frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___fspath__, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( h5py$_hl$compat$$$function_1_fspath );
    return NULL;
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
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
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
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_attribute_name_1;
            CHECK_OBJECT( var_path_type );
            tmp_source_name_3 = var_path_type;
            tmp_attribute_name_1 = const_str_plain___fspath__;
            tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_3, tmp_attribute_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 31;
                type_description_1 = "ooo";
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 32;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6->m_frame) frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooo";
            goto try_except_handler_3;
            branch_no_3:;
        }
        {
            nuitka_bool tmp_assign_source_2;
            tmp_assign_source_2 = NUITKA_BOOL_TRUE;
            tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_name_name_1;
            PyObject *tmp_globals_name_1;
            PyObject *tmp_locals_name_1;
            PyObject *tmp_fromlist_name_1;
            PyObject *tmp_level_name_1;
            tmp_name_name_1 = const_str_plain_pathlib;
            tmp_globals_name_1 = (PyObject *)moduledict_h5py$_hl$compat;
            tmp_locals_name_1 = Py_None;
            tmp_fromlist_name_1 = Py_None;
            tmp_level_name_1 = const_int_0;
            frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6->m_frame.f_lineno = 34;
            tmp_assign_source_3 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 34;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
            assert( var_pathlib == NULL );
            var_pathlib = tmp_assign_source_3;
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

        {
            nuitka_bool tmp_assign_source_4;
            tmp_assign_source_4 = NUITKA_BOOL_FALSE;
            tmp_try_except_1__unhandled_indicator = tmp_assign_source_4;
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
            exception_keeper_tb_2 = MAKE_TRACEBACK( frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6, exception_keeper_lineno_2 );
        }
        else if ( exception_keeper_lineno_2 != 0 )
        {
            exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6, exception_keeper_lineno_2 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
        PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
        PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_2 = PyExc_ImportError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                type_description_1 = "ooo";
                goto try_except_handler_6;
            }
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                type_description_1 = "ooo";
                goto try_except_handler_6;
            }
            tmp_condition_result_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 33;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6->m_frame) frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooo";
            goto try_except_handler_6;
            branch_no_4:;
        }
        goto try_end_2;
        // Exception handler code:
        try_except_handler_6:;
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

        goto try_except_handler_4;
        // End of try:
        try_end_2:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        goto try_end_1;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( h5py$_hl$compat$$$function_1_fspath );
        return NULL;
        // End of try:
        try_end_1:;
        {
            nuitka_bool tmp_condition_result_5;
            nuitka_bool tmp_compexpr_left_3;
            nuitka_bool tmp_compexpr_right_3;
            assert( tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
            tmp_compexpr_left_3 = tmp_try_except_1__unhandled_indicator;
            tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
            tmp_condition_result_5 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_5;
            }
            else
            {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_isinstance_inst_2;
                PyObject *tmp_isinstance_cls_2;
                PyObject *tmp_source_name_4;
                CHECK_OBJECT( par_path );
                tmp_isinstance_inst_2 = par_path;
                if ( var_pathlib == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pathlib" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 38;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_4 = var_pathlib;
                tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_PurePath );
                if ( tmp_isinstance_cls_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 38;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
                Py_DECREF( tmp_isinstance_cls_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 38;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_mvar_value_3;
                    PyObject *tmp_args_element_name_2;
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_six );

                    if (unlikely( tmp_mvar_value_3 == NULL ))
                    {
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
                    }

                    if ( tmp_mvar_value_3 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 39;
                        type_description_1 = "ooo";
                        goto try_except_handler_4;
                    }

                    tmp_called_instance_2 = tmp_mvar_value_3;
                    CHECK_OBJECT( par_path );
                    tmp_args_element_name_2 = par_path;
                    frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6->m_frame.f_lineno = 39;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_2 };
                        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_text_type, call_args );
                    }

                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 39;
                        type_description_1 = "ooo";
                        goto try_except_handler_4;
                    }
                    goto try_return_handler_4;
                }
                branch_no_6:;
            }
            branch_no_5:;
        }
        goto try_end_3;
        // Return handler code:
        try_return_handler_4:;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
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

        goto try_except_handler_3;
        // End of try:
        try_end_3:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_source_name_5;
            tmp_left_name_1 = const_str_digest_dbafaa008d72c8b6378ef67a6375590b;
            CHECK_OBJECT( var_path_type );
            tmp_source_name_5 = var_path_type;
            tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___name__ );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_make_exception_arg_1 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 41;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6->m_frame.f_lineno = 41;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 41;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 28;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6->m_frame) frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooo";
        goto try_except_handler_3;
        branch_end_2:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( h5py$_hl$compat$$$function_1_fspath );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6,
        type_description_1,
        par_path,
        var_path_type,
        var_pathlib
    );


    // Release cached frame.
    if ( frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6 == cache_frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6 )
    {
        Py_DECREF( frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6 );
    }
    cache_frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6 = NULL;

    assertFrameObject( frame_b9c6e26a5d2f9b6d11ca1d3bb63789f6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( h5py$_hl$compat$$$function_1_fspath );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    Py_XDECREF( var_path_type );
    var_path_type = NULL;

    Py_XDECREF( var_pathlib );
    var_pathlib = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    Py_XDECREF( var_path_type );
    var_path_type = NULL;

    Py_XDECREF( var_pathlib );
    var_pathlib = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( h5py$_hl$compat$$$function_1_fspath );
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


static PyObject *impl_h5py$_hl$compat$$$function_2__fscodec( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *var_encoding = PyCell_EMPTY();
    struct Nuitka_CellObject *var_errors = PyCell_EMPTY();
    PyObject *var_lookup_error = NULL;
    PyObject *var_fsencode = NULL;
    PyObject *var_fsdecode = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_b813eb3f58ffcdf6e0353bc4d9378f10;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_b813eb3f58ffcdf6e0353bc4d9378f10 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b813eb3f58ffcdf6e0353bc4d9378f10, codeobj_b813eb3f58ffcdf6e0353bc4d9378f10, module_h5py$_hl$compat, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b813eb3f58ffcdf6e0353bc4d9378f10 = cache_frame_b813eb3f58ffcdf6e0353bc4d9378f10;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b813eb3f58ffcdf6e0353bc4d9378f10 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b813eb3f58ffcdf6e0353bc4d9378f10 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 49;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_b813eb3f58ffcdf6e0353bc4d9378f10->m_frame.f_lineno = 49;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getfilesystemencoding );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_encoding ) == NULL );
        PyCell_SET( var_encoding, tmp_assign_source_1 );

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( PyCell_GET( var_encoding ) );
        tmp_compexpr_left_1 = PyCell_GET( var_encoding );
        tmp_compexpr_right_1 = const_str_plain_mbcs;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "ccooo";
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
            tmp_assign_source_2 = const_str_plain_strict;
            assert( PyCell_GET( var_errors ) == NULL );
            Py_INCREF( tmp_assign_source_2 );
            PyCell_SET( var_errors, tmp_assign_source_2 );

        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_assign_source_3;
            tmp_assign_source_3 = NUITKA_BOOL_TRUE;
            tmp_try_except_1__unhandled_indicator = tmp_assign_source_3;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_import_name_from_1;
            PyObject *tmp_name_name_1;
            PyObject *tmp_globals_name_1;
            PyObject *tmp_locals_name_1;
            PyObject *tmp_fromlist_name_1;
            PyObject *tmp_level_name_1;
            tmp_name_name_1 = const_str_plain_codecs;
            tmp_globals_name_1 = (PyObject *)moduledict_h5py$_hl$compat;
            tmp_locals_name_1 = Py_None;
            tmp_fromlist_name_1 = const_tuple_str_plain_lookup_error_tuple;
            tmp_level_name_1 = const_int_0;
            frame_b813eb3f58ffcdf6e0353bc4d9378f10->m_frame.f_lineno = 54;
            tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
            if ( tmp_import_name_from_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_1 = "ccooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_lookup_error );
            Py_DECREF( tmp_import_name_from_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_1 = "ccooo";
                goto try_except_handler_3;
            }
            assert( var_lookup_error == NULL );
            var_lookup_error = tmp_assign_source_4;
        }
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( var_lookup_error );
            tmp_called_name_1 = var_lookup_error;
            frame_b813eb3f58ffcdf6e0353bc4d9378f10->m_frame.f_lineno = 55;
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_plain_surrogateescape_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "ccooo";
                goto try_except_handler_3;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto try_end_1;
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

        {
            nuitka_bool tmp_assign_source_5;
            tmp_assign_source_5 = NUITKA_BOOL_FALSE;
            tmp_try_except_1__unhandled_indicator = tmp_assign_source_5;
        }
        // Preserve existing published exception.
        exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_1 );
        exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_1 );
        exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_1 );

        if ( exception_keeper_tb_1 == NULL )
        {
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_b813eb3f58ffcdf6e0353bc4d9378f10, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_b813eb3f58ffcdf6e0353bc4d9378f10, exception_keeper_lineno_1 );
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
            tmp_compexpr_right_2 = PyExc_LookupError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "ccooo";
                goto try_except_handler_4;
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
                PyObject *tmp_assign_source_6;
                tmp_assign_source_6 = const_str_plain_strict;
                assert( PyCell_GET( var_errors ) == NULL );
                Py_INCREF( tmp_assign_source_6 );
                PyCell_SET( var_errors, tmp_assign_source_6 );

            }
            goto branch_end_2;
            branch_no_2:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 53;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_b813eb3f58ffcdf6e0353bc4d9378f10->m_frame) frame_b813eb3f58ffcdf6e0353bc4d9378f10->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ccooo";
            goto try_except_handler_4;
            branch_end_2:;
        }
        goto try_end_2;
        // Exception handler code:
        try_except_handler_4:;
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

        goto try_except_handler_2;
        // End of try:
        try_end_2:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        goto try_end_1;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( h5py$_hl$compat$$$function_2__fscodec );
        return NULL;
        // End of try:
        try_end_1:;
        goto try_end_3;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        try_end_3:;
        {
            nuitka_bool tmp_condition_result_3;
            nuitka_bool tmp_compexpr_left_3;
            nuitka_bool tmp_compexpr_right_3;
            assert( tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
            tmp_compexpr_left_3 = tmp_try_except_1__unhandled_indicator;
            tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
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
                PyObject *tmp_assign_source_7;
                tmp_assign_source_7 = const_str_plain_surrogateescape;
                {
                    PyObject *old = PyCell_GET( var_errors );
                    PyCell_SET( var_errors, tmp_assign_source_7 );
                    Py_INCREF( tmp_assign_source_7 );
                    Py_XDECREF( old );
                }

            }
            branch_no_3:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b813eb3f58ffcdf6e0353bc4d9378f10 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b813eb3f58ffcdf6e0353bc4d9378f10 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b813eb3f58ffcdf6e0353bc4d9378f10, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b813eb3f58ffcdf6e0353bc4d9378f10->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b813eb3f58ffcdf6e0353bc4d9378f10, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b813eb3f58ffcdf6e0353bc4d9378f10,
        type_description_1,
        var_encoding,
        var_errors,
        var_lookup_error,
        var_fsencode,
        var_fsdecode
    );


    // Release cached frame.
    if ( frame_b813eb3f58ffcdf6e0353bc4d9378f10 == cache_frame_b813eb3f58ffcdf6e0353bc4d9378f10 )
    {
        Py_DECREF( frame_b813eb3f58ffcdf6e0353bc4d9378f10 );
    }
    cache_frame_b813eb3f58ffcdf6e0353bc4d9378f10 = NULL;

    assertFrameObject( frame_b813eb3f58ffcdf6e0353bc4d9378f10 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_h5py$_hl$compat$$$function_2__fscodec$$$function_1_fsencode(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[0] = var_encoding;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[1] = var_errors;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[1] );


        assert( var_fsencode == NULL );
        var_fsencode = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_h5py$_hl$compat$$$function_2__fscodec$$$function_2_fsdecode(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[0] = var_encoding;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[1] = var_errors;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[1] );


        assert( var_fsdecode == NULL );
        var_fsdecode = tmp_assign_source_9;
    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_fsencode );
        tmp_tuple_element_1 = var_fsencode;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_fsdecode );
        tmp_tuple_element_1 = var_fsdecode;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( h5py$_hl$compat$$$function_2__fscodec );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_encoding );
    Py_DECREF( var_encoding );
    var_encoding = NULL;

    CHECK_OBJECT( (PyObject *)var_errors );
    Py_DECREF( var_errors );
    var_errors = NULL;

    Py_XDECREF( var_lookup_error );
    var_lookup_error = NULL;

    CHECK_OBJECT( (PyObject *)var_fsencode );
    Py_DECREF( var_fsencode );
    var_fsencode = NULL;

    CHECK_OBJECT( (PyObject *)var_fsdecode );
    Py_DECREF( var_fsdecode );
    var_fsdecode = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)var_encoding );
    Py_DECREF( var_encoding );
    var_encoding = NULL;

    CHECK_OBJECT( (PyObject *)var_errors );
    Py_DECREF( var_errors );
    var_errors = NULL;

    Py_XDECREF( var_lookup_error );
    var_lookup_error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( h5py$_hl$compat$$$function_2__fscodec );
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


static PyObject *impl_h5py$_hl$compat$$$function_2__fscodec$$$function_1_fsencode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_0eae3025a81e65cdc7ca52c8c17dcf5a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0eae3025a81e65cdc7ca52c8c17dcf5a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0eae3025a81e65cdc7ca52c8c17dcf5a, codeobj_0eae3025a81e65cdc7ca52c8c17dcf5a, module_h5py$_hl$compat, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0eae3025a81e65cdc7ca52c8c17dcf5a = cache_frame_0eae3025a81e65cdc7ca52c8c17dcf5a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0eae3025a81e65cdc7ca52c8c17dcf5a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0eae3025a81e65cdc7ca52c8c17dcf5a ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_filename );
        tmp_isinstance_inst_1 = par_filename;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_six );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 67;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_binary_type );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "occ";
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
        CHECK_OBJECT( par_filename );
        tmp_return_value = par_filename;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT( par_filename );
            tmp_isinstance_inst_2 = par_filename;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_six );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 69;
                type_description_1 = "occ";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_text_type );
            if ( tmp_isinstance_cls_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "occ";
                goto frame_exception_exit_1;
            }
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
            Py_DECREF( tmp_isinstance_cls_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "occ";
                goto frame_exception_exit_1;
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_3;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_args_element_name_2;
                CHECK_OBJECT( par_filename );
                tmp_source_name_3 = par_filename;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_encode );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 70;
                    type_description_1 = "occ";
                    goto frame_exception_exit_1;
                }
                if ( PyCell_GET( self->m_closure[0] ) == NULL )
                {
                    Py_DECREF( tmp_called_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "encoding" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 70;
                    type_description_1 = "occ";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_1 = PyCell_GET( self->m_closure[0] );
                if ( PyCell_GET( self->m_closure[1] ) == NULL )
                {
                    Py_DECREF( tmp_called_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "errors" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 70;
                    type_description_1 = "occ";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_2 = PyCell_GET( self->m_closure[1] );
                frame_0eae3025a81e65cdc7ca52c8c17dcf5a->m_frame.f_lineno = 70;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_called_name_1 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 70;
                    type_description_1 = "occ";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_type_arg_1;
                tmp_left_name_1 = const_str_digest_9d2ca6cae85c09d0905b22dc7f5e24fd;
                CHECK_OBJECT( par_filename );
                tmp_type_arg_1 = par_filename;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_1 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_right_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;
                    type_description_1 = "occ";
                    goto frame_exception_exit_1;
                }
                tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_make_exception_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;
                    type_description_1 = "occ";
                    goto frame_exception_exit_1;
                }
                frame_0eae3025a81e65cdc7ca52c8c17dcf5a->m_frame.f_lineno = 72;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_1 );
                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 72;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "occ";
                goto frame_exception_exit_1;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0eae3025a81e65cdc7ca52c8c17dcf5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0eae3025a81e65cdc7ca52c8c17dcf5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0eae3025a81e65cdc7ca52c8c17dcf5a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0eae3025a81e65cdc7ca52c8c17dcf5a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0eae3025a81e65cdc7ca52c8c17dcf5a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0eae3025a81e65cdc7ca52c8c17dcf5a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0eae3025a81e65cdc7ca52c8c17dcf5a,
        type_description_1,
        par_filename,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_0eae3025a81e65cdc7ca52c8c17dcf5a == cache_frame_0eae3025a81e65cdc7ca52c8c17dcf5a )
    {
        Py_DECREF( frame_0eae3025a81e65cdc7ca52c8c17dcf5a );
    }
    cache_frame_0eae3025a81e65cdc7ca52c8c17dcf5a = NULL;

    assertFrameObject( frame_0eae3025a81e65cdc7ca52c8c17dcf5a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( h5py$_hl$compat$$$function_2__fscodec$$$function_1_fsencode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

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

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( h5py$_hl$compat$$$function_2__fscodec$$$function_1_fsencode );
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


static PyObject *impl_h5py$_hl$compat$$$function_2__fscodec$$$function_2_fsdecode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_da06b8757fb5578db7285f92f20647a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_da06b8757fb5578db7285f92f20647a0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_da06b8757fb5578db7285f92f20647a0, codeobj_da06b8757fb5578db7285f92f20647a0, module_h5py$_hl$compat, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_da06b8757fb5578db7285f92f20647a0 = cache_frame_da06b8757fb5578db7285f92f20647a0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_da06b8757fb5578db7285f92f20647a0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_da06b8757fb5578db7285f92f20647a0 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_filename );
        tmp_isinstance_inst_1 = par_filename;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_six );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 80;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_text_type );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "occ";
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
        CHECK_OBJECT( par_filename );
        tmp_return_value = par_filename;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT( par_filename );
            tmp_isinstance_inst_2 = par_filename;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_six );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 82;
                type_description_1 = "occ";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_binary_type );
            if ( tmp_isinstance_cls_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 82;
                type_description_1 = "occ";
                goto frame_exception_exit_1;
            }
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
            Py_DECREF( tmp_isinstance_cls_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 82;
                type_description_1 = "occ";
                goto frame_exception_exit_1;
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_3;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_args_element_name_2;
                CHECK_OBJECT( par_filename );
                tmp_source_name_3 = par_filename;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_decode );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 83;
                    type_description_1 = "occ";
                    goto frame_exception_exit_1;
                }
                if ( PyCell_GET( self->m_closure[0] ) == NULL )
                {
                    Py_DECREF( tmp_called_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "encoding" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 83;
                    type_description_1 = "occ";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_1 = PyCell_GET( self->m_closure[0] );
                if ( PyCell_GET( self->m_closure[1] ) == NULL )
                {
                    Py_DECREF( tmp_called_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "errors" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 83;
                    type_description_1 = "occ";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_2 = PyCell_GET( self->m_closure[1] );
                frame_da06b8757fb5578db7285f92f20647a0->m_frame.f_lineno = 83;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_called_name_1 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 83;
                    type_description_1 = "occ";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_type_arg_1;
                tmp_left_name_1 = const_str_digest_9d2ca6cae85c09d0905b22dc7f5e24fd;
                CHECK_OBJECT( par_filename );
                tmp_type_arg_1 = par_filename;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_1 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_right_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 85;
                    type_description_1 = "occ";
                    goto frame_exception_exit_1;
                }
                tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_make_exception_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 85;
                    type_description_1 = "occ";
                    goto frame_exception_exit_1;
                }
                frame_da06b8757fb5578db7285f92f20647a0->m_frame.f_lineno = 85;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_1 );
                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 85;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "occ";
                goto frame_exception_exit_1;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_da06b8757fb5578db7285f92f20647a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_da06b8757fb5578db7285f92f20647a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_da06b8757fb5578db7285f92f20647a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_da06b8757fb5578db7285f92f20647a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_da06b8757fb5578db7285f92f20647a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_da06b8757fb5578db7285f92f20647a0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_da06b8757fb5578db7285f92f20647a0,
        type_description_1,
        par_filename,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_da06b8757fb5578db7285f92f20647a0 == cache_frame_da06b8757fb5578db7285f92f20647a0 )
    {
        Py_DECREF( frame_da06b8757fb5578db7285f92f20647a0 );
    }
    cache_frame_da06b8757fb5578db7285f92f20647a0 = NULL;

    assertFrameObject( frame_da06b8757fb5578db7285f92f20647a0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( h5py$_hl$compat$$$function_2__fscodec$$$function_2_fsdecode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

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

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( h5py$_hl$compat$$$function_2__fscodec$$$function_2_fsdecode );
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


static PyObject *impl_h5py$_hl$compat$$$function_3_filename_encode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_a839ce61c790b9a2d80c66ca4b940ea2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a839ce61c790b9a2d80c66ca4b940ea2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a839ce61c790b9a2d80c66ca4b940ea2, codeobj_a839ce61c790b9a2d80c66ca4b940ea2, module_h5py$_hl$compat, sizeof(void *) );
    frame_a839ce61c790b9a2d80c66ca4b940ea2 = cache_frame_a839ce61c790b9a2d80c66ca4b940ea2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a839ce61c790b9a2d80c66ca4b940ea2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a839ce61c790b9a2d80c66ca4b940ea2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_fspath );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fspath );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fspath" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_filename );
        tmp_args_element_name_1 = par_filename;
        frame_a839ce61c790b9a2d80c66ca4b940ea2->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_filename;
            assert( old != NULL );
            par_filename = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_platform );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_win32;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "o";
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT( par_filename );
            tmp_isinstance_inst_1 = par_filename;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_six );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 113;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_text_type );
            if ( tmp_isinstance_cls_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 113;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
            Py_DECREF( tmp_isinstance_cls_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 113;
                type_description_1 = "o";
                goto frame_exception_exit_1;
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
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_3;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_3;
                CHECK_OBJECT( par_filename );
                tmp_source_name_3 = par_filename;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_encode );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 114;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_WINDOWS_ENCODING );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WINDOWS_ENCODING );
                }

                if ( tmp_mvar_value_4 == NULL )
                {
                    Py_DECREF( tmp_called_name_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WINDOWS_ENCODING" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 114;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_2 = tmp_mvar_value_4;
                tmp_args_element_name_3 = const_str_plain_strict;
                frame_a839ce61c790b9a2d80c66ca4b940ea2->m_frame.f_lineno = 114;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 114;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_2:;
        }
        CHECK_OBJECT( par_filename );
        tmp_return_value = par_filename;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_fsencode );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fsencode );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fsencode" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_5;
        CHECK_OBJECT( par_filename );
        tmp_args_element_name_4 = par_filename;
        frame_a839ce61c790b9a2d80c66ca4b940ea2->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a839ce61c790b9a2d80c66ca4b940ea2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a839ce61c790b9a2d80c66ca4b940ea2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a839ce61c790b9a2d80c66ca4b940ea2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a839ce61c790b9a2d80c66ca4b940ea2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a839ce61c790b9a2d80c66ca4b940ea2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a839ce61c790b9a2d80c66ca4b940ea2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a839ce61c790b9a2d80c66ca4b940ea2,
        type_description_1,
        par_filename
    );


    // Release cached frame.
    if ( frame_a839ce61c790b9a2d80c66ca4b940ea2 == cache_frame_a839ce61c790b9a2d80c66ca4b940ea2 )
    {
        Py_DECREF( frame_a839ce61c790b9a2d80c66ca4b940ea2 );
    }
    cache_frame_a839ce61c790b9a2d80c66ca4b940ea2 = NULL;

    assertFrameObject( frame_a839ce61c790b9a2d80c66ca4b940ea2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( h5py$_hl$compat$$$function_3_filename_encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

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

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( h5py$_hl$compat$$$function_3_filename_encode );
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


static PyObject *impl_h5py$_hl$compat$$$function_4_filename_decode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_65c400dbbbc85fef959a7d856aee75be;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_65c400dbbbc85fef959a7d856aee75be = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_65c400dbbbc85fef959a7d856aee75be, codeobj_65c400dbbbc85fef959a7d856aee75be, module_h5py$_hl$compat, sizeof(void *) );
    frame_65c400dbbbc85fef959a7d856aee75be = cache_frame_65c400dbbbc85fef959a7d856aee75be;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_65c400dbbbc85fef959a7d856aee75be );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_65c400dbbbc85fef959a7d856aee75be ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 127;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_platform );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_win32;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "o";
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT( par_filename );
            tmp_isinstance_inst_1 = par_filename;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_six );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 128;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_binary_type );
            if ( tmp_isinstance_cls_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
            Py_DECREF( tmp_isinstance_cls_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;
                type_description_1 = "o";
                goto frame_exception_exit_1;
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_3;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_2;
                CHECK_OBJECT( par_filename );
                tmp_source_name_3 = par_filename;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_decode );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 129;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_WINDOWS_ENCODING );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WINDOWS_ENCODING );
                }

                if ( tmp_mvar_value_3 == NULL )
                {
                    Py_DECREF( tmp_called_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WINDOWS_ENCODING" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 129;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_1 = tmp_mvar_value_3;
                tmp_args_element_name_2 = const_str_plain_strict;
                frame_65c400dbbbc85fef959a7d856aee75be->m_frame.f_lineno = 129;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_called_name_1 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 129;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_isinstance_inst_2;
                PyObject *tmp_isinstance_cls_2;
                PyObject *tmp_source_name_4;
                PyObject *tmp_mvar_value_4;
                CHECK_OBJECT( par_filename );
                tmp_isinstance_inst_2 = par_filename;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_six );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 130;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_4 = tmp_mvar_value_4;
                tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_text_type );
                if ( tmp_isinstance_cls_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 130;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
                Py_DECREF( tmp_isinstance_cls_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 130;
                    type_description_1 = "o";
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
                CHECK_OBJECT( par_filename );
                tmp_return_value = par_filename;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
                goto branch_end_3;
                branch_no_3:;
                {
                    PyObject *tmp_raise_type_1;
                    PyObject *tmp_make_exception_arg_1;
                    PyObject *tmp_left_name_1;
                    PyObject *tmp_right_name_1;
                    PyObject *tmp_source_name_5;
                    PyObject *tmp_type_arg_1;
                    tmp_left_name_1 = const_str_digest_9d2ca6cae85c09d0905b22dc7f5e24fd;
                    CHECK_OBJECT( par_filename );
                    tmp_type_arg_1 = par_filename;
                    tmp_source_name_5 = BUILTIN_TYPE1( tmp_type_arg_1 );
                    assert( !(tmp_source_name_5 == NULL) );
                    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___name__ );
                    Py_DECREF( tmp_source_name_5 );
                    if ( tmp_right_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 133;
                        type_description_1 = "o";
                        goto frame_exception_exit_1;
                    }
                    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                    Py_DECREF( tmp_right_name_1 );
                    if ( tmp_make_exception_arg_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 133;
                        type_description_1 = "o";
                        goto frame_exception_exit_1;
                    }
                    frame_65c400dbbbc85fef959a7d856aee75be->m_frame.f_lineno = 133;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_1 };
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                    }

                    Py_DECREF( tmp_make_exception_arg_1 );
                    assert( !(tmp_raise_type_1 == NULL) );
                    exception_type = tmp_raise_type_1;
                    exception_lineno = 133;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                branch_end_3:;
            }
            branch_end_2:;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_fsdecode );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fsdecode );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fsdecode" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 134;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_5;
        CHECK_OBJECT( par_filename );
        tmp_args_element_name_3 = par_filename;
        frame_65c400dbbbc85fef959a7d856aee75be->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_65c400dbbbc85fef959a7d856aee75be );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_65c400dbbbc85fef959a7d856aee75be );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_65c400dbbbc85fef959a7d856aee75be );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_65c400dbbbc85fef959a7d856aee75be, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_65c400dbbbc85fef959a7d856aee75be->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_65c400dbbbc85fef959a7d856aee75be, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_65c400dbbbc85fef959a7d856aee75be,
        type_description_1,
        par_filename
    );


    // Release cached frame.
    if ( frame_65c400dbbbc85fef959a7d856aee75be == cache_frame_65c400dbbbc85fef959a7d856aee75be )
    {
        Py_DECREF( frame_65c400dbbbc85fef959a7d856aee75be );
    }
    cache_frame_65c400dbbbc85fef959a7d856aee75be = NULL;

    assertFrameObject( frame_65c400dbbbc85fef959a7d856aee75be );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( h5py$_hl$compat$$$function_4_filename_decode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

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

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( h5py$_hl$compat$$$function_4_filename_decode );
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



static PyObject *MAKE_FUNCTION_h5py$_hl$compat$$$function_1_fspath(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h5py$_hl$compat$$$function_1_fspath,
        const_str_plain_fspath,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b9c6e26a5d2f9b6d11ca1d3bb63789f6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_h5py$_hl$compat,
        const_str_digest_a59b6c659764626467c2fba822f0d727,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h5py$_hl$compat$$$function_2__fscodec(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h5py$_hl$compat$$$function_2__fscodec,
        const_str_plain__fscodec,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b813eb3f58ffcdf6e0353bc4d9378f10,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_h5py$_hl$compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h5py$_hl$compat$$$function_2__fscodec$$$function_1_fsencode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h5py$_hl$compat$$$function_2__fscodec$$$function_1_fsencode,
        const_str_plain_fsencode,
#if PYTHON_VERSION >= 300
        const_str_digest_64dcb07d6ab10eebe4c3dca8d8ff37c9,
#endif
        codeobj_0eae3025a81e65cdc7ca52c8c17dcf5a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_h5py$_hl$compat,
        const_str_digest_b7ad1f5dded1d5d79321c5e98cacce6a,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h5py$_hl$compat$$$function_2__fscodec$$$function_2_fsdecode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h5py$_hl$compat$$$function_2__fscodec$$$function_2_fsdecode,
        const_str_plain_fsdecode,
#if PYTHON_VERSION >= 300
        const_str_digest_5c12b25e747b024c36ad02665e409b35,
#endif
        codeobj_da06b8757fb5578db7285f92f20647a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_h5py$_hl$compat,
        const_str_digest_5aea718a788492461242130f92959b10,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h5py$_hl$compat$$$function_3_filename_encode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h5py$_hl$compat$$$function_3_filename_encode,
        const_str_plain_filename_encode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a839ce61c790b9a2d80c66ca4b940ea2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_h5py$_hl$compat,
        const_str_digest_9dbfb02e7ec44d1fd78d2534fcd09e1a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h5py$_hl$compat$$$function_4_filename_decode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h5py$_hl$compat$$$function_4_filename_decode,
        const_str_plain_filename_decode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_65c400dbbbc85fef959a7d856aee75be,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_h5py$_hl$compat,
        const_str_digest_e1f6282c57bc80496c016b9075f8cb17,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_h5py$_hl$compat =
{
    PyModuleDef_HEAD_INIT,
    "h5py._hl.compat",
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

MOD_INIT_DECL( h5py$_hl$compat )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_h5py$_hl$compat );
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
    puts("h5py._hl.compat: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("h5py._hl.compat: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("h5py._hl.compat: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inith5py$_hl$compat" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_h5py$_hl$compat = Py_InitModule4(
        "h5py._hl.compat",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_h5py$_hl$compat = PyModule_Create( &mdef_h5py$_hl$compat );
#endif

    moduledict_h5py$_hl$compat = MODULE_DICT( module_h5py$_hl$compat );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_h5py$_hl$compat,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_h5py$_hl$compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_h5py$_hl$compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_h5py$_hl$compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_h5py$_hl$compat );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_c64c3bcffeb01e8816a3ce872780174f, module_h5py$_hl$compat );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b411f86374423b383f99bf9d3edf4a80;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_eccb3a7cd9ba7dd1a93e6d48ec7ea552;
        UPDATE_STRING_DICT0( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_b411f86374423b383f99bf9d3edf4a80 = MAKE_MODULE_FRAME( codeobj_b411f86374423b383f99bf9d3edf4a80, module_h5py$_hl$compat );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_b411f86374423b383f99bf9d3edf4a80 );
    assert( Py_REFCNT( frame_b411f86374423b383f99bf9d3edf4a80 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_h5py$_hl$compat;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_b411f86374423b383f99bf9d3edf4a80->m_frame.f_lineno = 4;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_six;
        tmp_globals_name_2 = (PyObject *)moduledict_h5py$_hl$compat;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_b411f86374423b383f99bf9d3edf4a80->m_frame.f_lineno = 5;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_str_plain_mbcs;
        UPDATE_STRING_DICT0( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_WINDOWS_ENCODING, tmp_assign_source_6 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_os;
        tmp_globals_name_3 = (PyObject *)moduledict_h5py$_hl$compat;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_fspath_tuple;
        tmp_level_name_3 = const_int_0;
        frame_b411f86374423b383f99bf9d3edf4a80->m_frame.f_lineno = 11;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_fspath );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_fspath, tmp_assign_source_7 );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_b411f86374423b383f99bf9d3edf4a80, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_b411f86374423b383f99bf9d3edf4a80, exception_keeper_lineno_1 );
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
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_FUNCTION_h5py$_hl$compat$$$function_1_fspath(  );



            UPDATE_STRING_DICT1( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_fspath, tmp_assign_source_8 );
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 10;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_b411f86374423b383f99bf9d3edf4a80->m_frame) frame_b411f86374423b383f99bf9d3edf4a80->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_2;
        branch_end_1:;
    }
    goto try_end_2;
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
    NUITKA_CANNOT_GET_HERE( h5py$_hl$compat );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_h5py$_hl$compat$$$function_2__fscodec(  );



        UPDATE_STRING_DICT1( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain__fscodec, tmp_assign_source_9 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain__fscodec );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fscodec );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_called_name_1 = tmp_mvar_value_3;
        frame_b411f86374423b383f99bf9d3edf4a80->m_frame.f_lineno = 89;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;

            goto try_except_handler_3;
        }
        tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;

            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_11 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }



            exception_lineno = 89;
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_12 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }



            exception_lineno = 89;
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 89;
                    goto try_except_handler_4;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            goto try_except_handler_4;
        }
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
        UPDATE_STRING_DICT0( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain__fsencode, tmp_assign_source_13 );
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
        UPDATE_STRING_DICT0( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain__fsdecode, tmp_assign_source_14 );
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_h5py$_hl$compat, const_str_plain__fscodec );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fscodec" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;

        goto frame_exception_exit_1;
    }

    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_os;
        tmp_globals_name_4 = (PyObject *)moduledict_h5py$_hl$compat;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_fsencode_tuple;
        tmp_level_name_4 = const_int_0;
        frame_b411f86374423b383f99bf9d3edf4a80->m_frame.f_lineno = 93;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;

            goto try_except_handler_5;
        }
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_fsencode );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_fsencode, tmp_assign_source_15 );
    }
    goto try_end_5;
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

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_b411f86374423b383f99bf9d3edf4a80, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_b411f86374423b383f99bf9d3edf4a80, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;

            goto try_except_handler_6;
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
            PyObject *tmp_assign_source_16;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain__fsencode );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fsencode );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fsencode" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 95;

                goto try_except_handler_6;
            }

            tmp_assign_source_16 = tmp_mvar_value_4;
            UPDATE_STRING_DICT0( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_fsencode, tmp_assign_source_16 );
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 92;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_b411f86374423b383f99bf9d3edf4a80->m_frame) frame_b411f86374423b383f99bf9d3edf4a80->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_6;
        branch_end_2:;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( h5py$_hl$compat );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_5:;
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_os;
        tmp_globals_name_5 = (PyObject *)moduledict_h5py$_hl$compat;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_fsdecode_tuple;
        tmp_level_name_5 = const_int_0;
        frame_b411f86374423b383f99bf9d3edf4a80->m_frame.f_lineno = 98;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;

            goto try_except_handler_7;
        }
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_fsdecode );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_fsdecode, tmp_assign_source_17 );
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_3 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_3 );
    exception_preserved_value_3 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_3 );
    exception_preserved_tb_3 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_3 );

    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_b411f86374423b383f99bf9d3edf4a80, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_b411f86374423b383f99bf9d3edf4a80, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PyException_SetTraceback( exception_keeper_value_7, (PyObject *)exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_3 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;

            goto try_except_handler_8;
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
            PyObject *tmp_assign_source_18;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain__fsdecode );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fsdecode );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fsdecode" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 100;

                goto try_except_handler_8;
            }

            tmp_assign_source_18 = tmp_mvar_value_5;
            UPDATE_STRING_DICT0( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_fsdecode, tmp_assign_source_18 );
        }
        goto branch_end_3;
        branch_no_3:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 97;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_b411f86374423b383f99bf9d3edf4a80->m_frame) frame_b411f86374423b383f99bf9d3edf4a80->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_8;
        branch_end_3:;
    }
    goto try_end_8;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    goto try_end_7;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( h5py$_hl$compat );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_7:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b411f86374423b383f99bf9d3edf4a80 );
#endif
    popFrameStack();

    assertFrameObject( frame_b411f86374423b383f99bf9d3edf4a80 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b411f86374423b383f99bf9d3edf4a80 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b411f86374423b383f99bf9d3edf4a80, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b411f86374423b383f99bf9d3edf4a80->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b411f86374423b383f99bf9d3edf4a80, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_h5py$_hl$compat$$$function_3_filename_encode(  );



        UPDATE_STRING_DICT1( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_filename_encode, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_h5py$_hl$compat$$$function_4_filename_decode(  );



        UPDATE_STRING_DICT1( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain_filename_decode, tmp_assign_source_20 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_h5py$_hl$compat, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_h5py$_hl$compat );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
