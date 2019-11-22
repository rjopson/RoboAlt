/* Generated code for Python module 'h5py.tests'
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

/* The "_module_h5py$tests" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_h5py$tests;
PyDictObject *moduledict_h5py$tests;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_cli;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_h5py;
extern PyObject *const_str_plain_main;
static PyObject *const_tuple_str_plain_main_tuple;
static PyObject *const_tuple_str_plain_call_tuple;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_32f1b35fd5eb5455510c060d2363d3d6_tuple;
extern PyObject *const_tuple_str_empty_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_NUITKA_PACKAGE_h5py;
extern PyObject *const_str_plain_args;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_digest_588c2deae067b783a9d35e20d7b6e04c;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_call;
static PyObject *const_str_digest_85295ca8bb48dff4c10fdaae0bf85bde;
extern PyObject *const_str_plain_shlex;
static PyObject *const_str_digest_33a9ebb18a56e968c305c003c444e614;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_5407f94bb298e0951babfae923bb3034;
extern PyObject *const_str_digest_d577b8f49b7cb9dcdb74f76e27464b19;
extern PyObject *const_str_plain_tests;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain_subprocess;
extern PyObject *const_tuple_f134cb9d18ce063d12636de355d5394d_tuple;
extern PyObject *const_str_plain___path__;
static PyObject *const_tuple_c4c95dd2caf271e48d639e5bccc618f3_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_pytest;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_str_plain_executable_tuple;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_run_tests;
static PyObject *const_tuple_str_digest_33a9ebb18a56e968c305c003c444e614_tuple;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_5a9236cf23ee033820f4f09a2d0dc6a6;
extern PyObject *const_str_plain_executable;
extern PyObject *const_str_plain_dirname;
static PyObject *const_str_plain_NUITKA_PACKAGE_h5py_tests;
static PyObject *const_tuple_str_plain_split_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_extend;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_main_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_main_tuple, 0, const_str_plain_main ); Py_INCREF( const_str_plain_main );
    const_tuple_str_plain_call_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_call_tuple, 0, const_str_plain_call ); Py_INCREF( const_str_plain_call );
    const_tuple_32f1b35fd5eb5455510c060d2363d3d6_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_32f1b35fd5eb5455510c060d2363d3d6_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_32f1b35fd5eb5455510c060d2363d3d6_tuple, 1, const_str_plain_main ); Py_INCREF( const_str_plain_main );
    PyTuple_SET_ITEM( const_tuple_32f1b35fd5eb5455510c060d2363d3d6_tuple, 2, const_str_plain_split ); Py_INCREF( const_str_plain_split );
    PyTuple_SET_ITEM( const_tuple_32f1b35fd5eb5455510c060d2363d3d6_tuple, 3, const_str_plain_call ); Py_INCREF( const_str_plain_call );
    PyTuple_SET_ITEM( const_tuple_32f1b35fd5eb5455510c060d2363d3d6_tuple, 4, const_str_plain_executable ); Py_INCREF( const_str_plain_executable );
    PyTuple_SET_ITEM( const_tuple_32f1b35fd5eb5455510c060d2363d3d6_tuple, 5, const_str_plain_cli ); Py_INCREF( const_str_plain_cli );
    const_str_digest_85295ca8bb48dff4c10fdaae0bf85bde = UNSTREAM_STRING_ASCII( &constant_bin[ 572107 ], 10, 0 );
    const_str_digest_33a9ebb18a56e968c305c003c444e614 = UNSTREAM_STRING_ASCII( &constant_bin[ 572117 ], 42, 0 );
    const_str_digest_5407f94bb298e0951babfae923bb3034 = UNSTREAM_STRING_ASCII( &constant_bin[ 572159 ], 22, 0 );
    const_tuple_c4c95dd2caf271e48d639e5bccc618f3_tuple = PyTuple_New( 2 );
    const_str_plain_NUITKA_PACKAGE_h5py_tests = UNSTREAM_STRING_ASCII( &constant_bin[ 572181 ], 25, 1 );
    PyTuple_SET_ITEM( const_tuple_c4c95dd2caf271e48d639e5bccc618f3_tuple, 0, const_str_plain_NUITKA_PACKAGE_h5py_tests ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_h5py_tests );
    PyTuple_SET_ITEM( const_tuple_c4c95dd2caf271e48d639e5bccc618f3_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_tuple_str_plain_executable_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_executable_tuple, 0, const_str_plain_executable ); Py_INCREF( const_str_plain_executable );
    const_tuple_str_digest_33a9ebb18a56e968c305c003c444e614_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_33a9ebb18a56e968c305c003c444e614_tuple, 0, const_str_digest_33a9ebb18a56e968c305c003c444e614 ); Py_INCREF( const_str_digest_33a9ebb18a56e968c305c003c444e614 );
    const_str_digest_5a9236cf23ee033820f4f09a2d0dc6a6 = UNSTREAM_STRING_ASCII( &constant_bin[ 572206 ], 19, 0 );
    const_tuple_str_plain_split_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_split_tuple, 0, const_str_plain_split ); Py_INCREF( const_str_plain_split );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_h5py$tests( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_31727e20459339a78ce3a6470b320527;
static PyCodeObject *codeobj_6897afd3981b26c4c3b4160ab83797cb;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_5407f94bb298e0951babfae923bb3034 );
    codeobj_31727e20459339a78ce3a6470b320527 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_5a9236cf23ee033820f4f09a2d0dc6a6, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_6897afd3981b26c4c3b4160ab83797cb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_run_tests, 13, const_tuple_32f1b35fd5eb5455510c060d2363d3d6_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_h5py$tests$$$function_1_run_tests( PyObject *defaults );


// The module function definitions.
static PyObject *impl_h5py$tests$$$function_1_run_tests( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *var_main = NULL;
    PyObject *var_split = NULL;
    PyObject *var_call = NULL;
    PyObject *var_executable = NULL;
    PyObject *var_cli = NULL;
    struct Nuitka_FrameObject *frame_6897afd3981b26c4c3b4160ab83797cb;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_6897afd3981b26c4c3b4160ab83797cb = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6897afd3981b26c4c3b4160ab83797cb, codeobj_6897afd3981b26c4c3b4160ab83797cb, module_h5py$tests, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6897afd3981b26c4c3b4160ab83797cb = cache_frame_6897afd3981b26c4c3b4160ab83797cb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6897afd3981b26c4c3b4160ab83797cb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6897afd3981b26c4c3b4160ab83797cb ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_pytest;
        tmp_globals_name_1 = (PyObject *)moduledict_h5py$tests;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_main_tuple;
        tmp_level_name_1 = const_int_0;
        frame_6897afd3981b26c4c3b4160ab83797cb->m_frame.f_lineno = 15;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_main );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert( var_main == NULL );
        var_main = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_6897afd3981b26c4c3b4160ab83797cb, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_6897afd3981b26c4c3b4160ab83797cb, exception_keeper_lineno_1 );
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


            exception_lineno = 16;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_call_result_1;
            tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_1 != NULL );
            frame_6897afd3981b26c4c3b4160ab83797cb->m_frame.f_lineno = 17;
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_33a9ebb18a56e968c305c003c444e614_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 17;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        tmp_return_value = const_int_pos_1;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_3;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 14;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_6897afd3981b26c4c3b4160ab83797cb->m_frame) frame_6897afd3981b26c4c3b4160ab83797cb->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( h5py$tests$$$function_1_run_tests );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_shlex;
        tmp_globals_name_2 = (PyObject *)moduledict_h5py$tests;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_split_tuple;
        tmp_level_name_2 = const_int_0;
        frame_6897afd3981b26c4c3b4160ab83797cb->m_frame.f_lineno = 20;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_split );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_split == NULL );
        var_split = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_subprocess;
        tmp_globals_name_3 = (PyObject *)moduledict_h5py$tests;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_call_tuple;
        tmp_level_name_3 = const_int_0;
        frame_6897afd3981b26c4c3b4160ab83797cb->m_frame.f_lineno = 21;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_call );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_call == NULL );
        var_call = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_sys;
        tmp_globals_name_4 = (PyObject *)moduledict_h5py$tests;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_executable_tuple;
        tmp_level_name_4 = const_int_0;
        frame_6897afd3981b26c4c3b4160ab83797cb->m_frame.f_lineno = 22;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        assert( !(tmp_import_name_from_4 == NULL) );
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_executable );
        Py_DECREF( tmp_import_name_from_4 );
        assert( !(tmp_assign_source_4 == NULL) );
        assert( var_executable == NULL );
        var_executable = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT( var_executable );
        tmp_list_element_1 = var_executable;
        tmp_assign_source_5 = PyList_New( 5 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_assign_source_5, 0, tmp_list_element_1 );
        tmp_list_element_1 = const_str_digest_d577b8f49b7cb9dcdb74f76e27464b19;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_assign_source_5, 1, tmp_list_element_1 );
        tmp_list_element_1 = const_str_plain_pytest;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_assign_source_5, 2, tmp_list_element_1 );
        tmp_list_element_1 = const_str_digest_588c2deae067b783a9d35e20d7b6e04c;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_assign_source_5, 3, tmp_list_element_1 );
        tmp_list_element_1 = const_str_plain_h5py;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_assign_source_5, 4, tmp_list_element_1 );
        assert( var_cli == NULL );
        var_cli = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( var_cli );
        tmp_source_name_1 = var_cli;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_extend );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_split );
        tmp_called_name_3 = var_split;
        CHECK_OBJECT( par_args );
        tmp_args_element_name_2 = par_args;
        frame_6897afd3981b26c4c3b4160ab83797cb->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 24;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_6897afd3981b26c4c3b4160ab83797cb->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( var_call );
        tmp_called_name_4 = var_call;
        CHECK_OBJECT( var_cli );
        tmp_args_element_name_3 = var_cli;
        frame_6897afd3981b26c4c3b4160ab83797cb->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6897afd3981b26c4c3b4160ab83797cb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6897afd3981b26c4c3b4160ab83797cb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6897afd3981b26c4c3b4160ab83797cb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6897afd3981b26c4c3b4160ab83797cb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6897afd3981b26c4c3b4160ab83797cb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6897afd3981b26c4c3b4160ab83797cb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6897afd3981b26c4c3b4160ab83797cb,
        type_description_1,
        par_args,
        var_main,
        var_split,
        var_call,
        var_executable,
        var_cli
    );


    // Release cached frame.
    if ( frame_6897afd3981b26c4c3b4160ab83797cb == cache_frame_6897afd3981b26c4c3b4160ab83797cb )
    {
        Py_DECREF( frame_6897afd3981b26c4c3b4160ab83797cb );
    }
    cache_frame_6897afd3981b26c4c3b4160ab83797cb = NULL;

    assertFrameObject( frame_6897afd3981b26c4c3b4160ab83797cb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( h5py$tests$$$function_1_run_tests );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_main );
    var_main = NULL;

    Py_XDECREF( var_split );
    var_split = NULL;

    Py_XDECREF( var_call );
    var_call = NULL;

    Py_XDECREF( var_executable );
    var_executable = NULL;

    Py_XDECREF( var_cli );
    var_cli = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_main );
    var_main = NULL;

    Py_XDECREF( var_split );
    var_split = NULL;

    Py_XDECREF( var_call );
    var_call = NULL;

    Py_XDECREF( var_executable );
    var_executable = NULL;

    Py_XDECREF( var_cli );
    var_cli = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( h5py$tests$$$function_1_run_tests );
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



static PyObject *MAKE_FUNCTION_h5py$tests$$$function_1_run_tests( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h5py$tests$$$function_1_run_tests,
        const_str_plain_run_tests,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6897afd3981b26c4c3b4160ab83797cb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_h5py$tests,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_h5py$tests =
{
    PyModuleDef_HEAD_INIT,
    "h5py.tests",
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

MOD_INIT_DECL( h5py$tests )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_h5py$tests );
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
    puts("h5py.tests: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("h5py.tests: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("h5py.tests: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inith5py$tests" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_h5py$tests = Py_InitModule4(
        "h5py.tests",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_h5py$tests = PyModule_Create( &mdef_h5py$tests );
#endif

    moduledict_h5py$tests = MODULE_DICT( module_h5py$tests );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_h5py$tests,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_h5py$tests, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_h5py$tests,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_h5py$tests, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_h5py$tests,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_h5py$tests, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_h5py$tests,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_h5py$tests );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_85295ca8bb48dff4c10fdaae0bf85bde, module_h5py$tests );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_h5py$tests, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_h5py$tests, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_h5py$tests, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_h5py$tests, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_h5py$tests, (Nuitka_StringObject *)const_str_plain___name__ ),
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
#if 1
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_h5py$tests, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_31727e20459339a78ce3a6470b320527;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_h5py$tests, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_h5py$tests, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_31727e20459339a78ce3a6470b320527 = MAKE_MODULE_FRAME( codeobj_31727e20459339a78ce3a6470b320527, module_h5py$tests );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_31727e20459339a78ce3a6470b320527 );
    assert( Py_REFCNT( frame_31727e20459339a78ce3a6470b320527 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_instance_2;
        frame_31727e20459339a78ce3a6470b320527->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely( module != NULL ))
            {
                tmp_source_name_1 = PyObject_GetAttr( module, const_str_plain_path );
            }
            else
            {
                tmp_source_name_1 = NULL;
            }
        }

        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dirname );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = module_filename_obj;
        frame_31727e20459339a78ce3a6470b320527->m_frame.f_lineno = 1;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyList_New( 3 );
        PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
        frame_31727e20459339a78ce3a6470b320527->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely( module != NULL ))
            {
                tmp_source_name_2 = PyObject_GetAttr( module, const_str_plain_path );
            }
            else
            {
                tmp_source_name_2 = NULL;
            }
        }

        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_31727e20459339a78ce3a6470b320527->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely( module != NULL ))
            {
                tmp_called_instance_1 = PyObject_GetAttr( module, const_str_plain_environ );
            }
            else
            {
                tmp_called_instance_1 = NULL;
            }
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_31727e20459339a78ce3a6470b320527->m_frame.f_lineno = 1;
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_f134cb9d18ce063d12636de355d5394d_tuple, 0 ) );

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = const_str_plain_tests;
        frame_31727e20459339a78ce3a6470b320527->m_frame.f_lineno = 1;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
        frame_31727e20459339a78ce3a6470b320527->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely( module != NULL ))
            {
                tmp_called_instance_2 = PyObject_GetAttr( module, const_str_plain_environ );
            }
            else
            {
                tmp_called_instance_2 = NULL;
            }
        }

        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_31727e20459339a78ce3a6470b320527->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_c4c95dd2caf271e48d639e5bccc618f3_tuple, 0 ) );

        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_assign_source_3, 2, tmp_list_element_1 );
        UPDATE_STRING_DICT1( moduledict_h5py$tests, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_h5py$tests, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_h5py$tests, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0( moduledict_h5py$tests, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        frame_31727e20459339a78ce3a6470b320527->m_frame.f_lineno = 10;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert( !(tmp_import_name_from_1 == NULL) );
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_h5py$tests, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_31727e20459339a78ce3a6470b320527 );
#endif
    popFrameStack();

    assertFrameObject( frame_31727e20459339a78ce3a6470b320527 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_31727e20459339a78ce3a6470b320527 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_31727e20459339a78ce3a6470b320527, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_31727e20459339a78ce3a6470b320527->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_31727e20459339a78ce3a6470b320527, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_str_empty_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_6 = MAKE_FUNCTION_h5py$tests$$$function_1_run_tests( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_h5py$tests, (Nuitka_StringObject *)const_str_plain_run_tests, tmp_assign_source_6 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 1 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_h5py$tests, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_h5py$tests );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
