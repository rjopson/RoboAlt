/* Generated code for Python module 'scipy.interpolate._pade'
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

/* The "_module_scipy$interpolate$_pade" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$interpolate$_pade;
PyDictObject *moduledict_scipy$interpolate$_pade;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_518fd5273ae78bdb980d70333151b077;
extern PyObject *const_str_plain_an;
static PyObject *const_str_digest_6521fb10000696d4357dfb6b262edb8b;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_zeros;
static PyObject *const_list_str_plain_pade_list;
static PyObject *const_str_plain_pade;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_scipy;
extern PyObject *const_str_plain_solve;
static PyObject *const_str_plain_pq;
extern PyObject *const_float_1_0;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_eye;
extern PyObject *const_str_plain_poly1d;
extern PyObject *const_str_plain_row;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_1b4f14a66c1b44b253940bccd42c7b22;
static PyObject *const_tuple_98bb1cd0f4df722aaf48273ef903bf23_tuple;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_N;
extern PyObject *const_tuple_str_plain_linalg_tuple;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_m;
static PyObject *const_str_digest_f9c2928ad389c77b8f34ae00cdd3cad3;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_a9f3991ed766f65c13a8bf3c2192b3e8;
static PyObject *const_str_plain_Akj;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_C;
static PyObject *const_str_plain_Bkj;
extern PyObject *const_str_plain_q;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_1322be713a28f645928fa21d7fcb1b9a_tuple;
static PyObject *const_str_digest_d2c4df11ba8866aaed74708e93f215b1;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_r_;
extern PyObject *const_slice_none_none_int_neg_1;
static PyObject *const_str_digest_e9211647ba935bf87fb21bf32b7ee275;
extern PyObject *const_str_plain_hstack;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain___debug__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_518fd5273ae78bdb980d70333151b077 = UNSTREAM_STRING_ASCII( &constant_bin[ 4322083 ], 23, 0 );
    const_str_digest_6521fb10000696d4357dfb6b262edb8b = UNSTREAM_STRING_ASCII( &constant_bin[ 4322106 ], 913, 0 );
    const_list_str_plain_pade_list = PyList_New( 1 );
    const_str_plain_pade = UNSTREAM_STRING_ASCII( &constant_bin[ 885868 ], 4, 1 );
    PyList_SET_ITEM( const_list_str_plain_pade_list, 0, const_str_plain_pade ); Py_INCREF( const_str_plain_pade );
    const_str_plain_pq = UNSTREAM_STRING_ASCII( &constant_bin[ 74854 ], 2, 1 );
    const_str_digest_1b4f14a66c1b44b253940bccd42c7b22 = UNSTREAM_STRING_ASCII( &constant_bin[ 4323019 ], 38, 0 );
    const_tuple_98bb1cd0f4df722aaf48273ef903bf23_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_98bb1cd0f4df722aaf48273ef903bf23_tuple, 0, const_str_plain_an ); Py_INCREF( const_str_plain_an );
    PyTuple_SET_ITEM( const_tuple_98bb1cd0f4df722aaf48273ef903bf23_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_98bb1cd0f4df722aaf48273ef903bf23_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_98bb1cd0f4df722aaf48273ef903bf23_tuple, 3, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    const_str_plain_Akj = UNSTREAM_STRING_ASCII( &constant_bin[ 4323057 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_98bb1cd0f4df722aaf48273ef903bf23_tuple, 4, const_str_plain_Akj ); Py_INCREF( const_str_plain_Akj );
    const_str_plain_Bkj = UNSTREAM_STRING_ASCII( &constant_bin[ 4323060 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_98bb1cd0f4df722aaf48273ef903bf23_tuple, 5, const_str_plain_Bkj ); Py_INCREF( const_str_plain_Bkj );
    PyTuple_SET_ITEM( const_tuple_98bb1cd0f4df722aaf48273ef903bf23_tuple, 6, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    PyTuple_SET_ITEM( const_tuple_98bb1cd0f4df722aaf48273ef903bf23_tuple, 7, const_str_plain_C ); Py_INCREF( const_str_plain_C );
    PyTuple_SET_ITEM( const_tuple_98bb1cd0f4df722aaf48273ef903bf23_tuple, 8, const_str_plain_pq ); Py_INCREF( const_str_plain_pq );
    PyTuple_SET_ITEM( const_tuple_98bb1cd0f4df722aaf48273ef903bf23_tuple, 9, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_98bb1cd0f4df722aaf48273ef903bf23_tuple, 10, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    const_str_digest_f9c2928ad389c77b8f34ae00cdd3cad3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4323063 ], 32, 0 );
    const_str_digest_a9f3991ed766f65c13a8bf3c2192b3e8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4323095 ], 46, 0 );
    const_tuple_1322be713a28f645928fa21d7fcb1b9a_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_1322be713a28f645928fa21d7fcb1b9a_tuple, 0, const_str_plain_zeros ); Py_INCREF( const_str_plain_zeros );
    PyTuple_SET_ITEM( const_tuple_1322be713a28f645928fa21d7fcb1b9a_tuple, 1, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_1322be713a28f645928fa21d7fcb1b9a_tuple, 2, const_str_plain_eye ); Py_INCREF( const_str_plain_eye );
    PyTuple_SET_ITEM( const_tuple_1322be713a28f645928fa21d7fcb1b9a_tuple, 3, const_str_plain_poly1d ); Py_INCREF( const_str_plain_poly1d );
    PyTuple_SET_ITEM( const_tuple_1322be713a28f645928fa21d7fcb1b9a_tuple, 4, const_str_plain_hstack ); Py_INCREF( const_str_plain_hstack );
    PyTuple_SET_ITEM( const_tuple_1322be713a28f645928fa21d7fcb1b9a_tuple, 5, const_str_plain_r_ ); Py_INCREF( const_str_plain_r_ );
    const_str_digest_d2c4df11ba8866aaed74708e93f215b1 = UNSTREAM_STRING_ASCII( &constant_bin[ 4323141 ], 26, 0 );
    const_str_digest_e9211647ba935bf87fb21bf32b7ee275 = UNSTREAM_STRING_ASCII( &constant_bin[ 4323167 ], 48, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$interpolate$_pade( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4eaa62f7b8d85fe61a0ad583ca88add6;
static PyCodeObject *codeobj_dfb4e8bb55b68d1e14a9cdaf62ec87ed;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_d2c4df11ba8866aaed74708e93f215b1 );
    codeobj_4eaa62f7b8d85fe61a0ad583ca88add6 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_f9c2928ad389c77b8f34ae00cdd3cad3, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_dfb4e8bb55b68d1e14a9cdaf62ec87ed = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pade, 8, const_tuple_98bb1cd0f4df722aaf48273ef903bf23_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$interpolate$_pade$$$function_1_pade( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$interpolate$_pade$$$function_1_pade( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_an = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *par_n = python_pars[ 2 ];
    PyObject *var_N = NULL;
    PyObject *var_Akj = NULL;
    PyObject *var_Bkj = NULL;
    PyObject *var_row = NULL;
    PyObject *var_C = NULL;
    PyObject *var_pq = NULL;
    PyObject *var_p = NULL;
    PyObject *var_q = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed, codeobj_dfb4e8bb55b68d1e14a9cdaf62ec87ed, module_scipy$interpolate$_pade, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed = cache_frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 46;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_an );
        tmp_args_element_name_1 = par_an;
        frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_an;
            assert( old != NULL );
            par_an = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_1 = par_n;
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( par_an );
            tmp_len_arg_1 = par_an;
            tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 48;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_1;
            tmp_left_name_1 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_2 );
            assert( !(tmp_left_name_1 == NULL) );
            CHECK_OBJECT( par_m );
            tmp_right_name_2 = par_m;
            tmp_assign_source_2 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 48;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_n );
            tmp_compexpr_left_2 = par_n;
            tmp_compexpr_right_2 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "ooooooooooo";
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_a9f3991ed766f65c13a8bf3c2192b3e8;
                frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed->m_frame.f_lineno = 50;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 50;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_3 = par_n;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "ooooooooooo";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_1b4f14a66c1b44b253940bccd42c7b22;
            frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed->m_frame.f_lineno = 52;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 52;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( par_m );
        tmp_left_name_3 = par_m;
        CHECK_OBJECT( par_n );
        tmp_right_name_3 = par_n;
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_N == NULL );
        var_N = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_left_name_4;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( var_N );
        tmp_compexpr_left_4 = var_N;
        CHECK_OBJECT( par_an );
        tmp_len_arg_2 = par_an;
        tmp_left_name_4 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_int_pos_1;
        tmp_compexpr_right_4 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        assert( !(tmp_compexpr_right_4 == NULL) );
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            tmp_make_exception_arg_3 = const_str_digest_e9211647ba935bf87fb21bf32b7ee275;
            frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed->m_frame.f_lineno = 55;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 55;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( par_an );
        tmp_subscribed_name_1 = par_an;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( var_N );
        tmp_left_name_5 = var_N;
        tmp_right_name_5 = const_int_pos_1;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_an;
            assert( old != NULL );
            par_an = tmp_assign_source_4;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain_eye );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eye );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eye" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 57;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_N );
        tmp_left_name_6 = var_N;
        tmp_right_name_6 = const_int_pos_1;
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n );
        tmp_left_name_7 = par_n;
        tmp_right_name_7 = const_int_pos_1;
        tmp_args_element_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 57;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Akj == NULL );
        var_Akj = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain_zeros );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 58;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_N );
        tmp_left_name_8 = var_N;
        tmp_right_name_8 = const_int_pos_1;
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_element_name_4, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_m );
        tmp_tuple_element_1 = par_m;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_4, 1, tmp_tuple_element_1 );
        tmp_args_element_name_5 = const_str_plain_d;
        frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Bkj == NULL );
        var_Bkj = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        tmp_xrange_low_1 = const_int_pos_1;
        CHECK_OBJECT( par_m );
        tmp_left_name_9 = par_m;
        tmp_right_name_9 = const_int_pos_1;
        tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_xrange_high_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE2( tmp_xrange_low_1, tmp_xrange_high_1 );
        Py_DECREF( tmp_xrange_high_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooo";
                exception_lineno = 59;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_9 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_row;
            var_row = tmp_assign_source_9;
            Py_INCREF( var_row );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_start_name_3;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_step_name_3;
        CHECK_OBJECT( par_an );
        tmp_subscribed_name_3 = par_an;
        tmp_start_name_2 = Py_None;
        CHECK_OBJECT( var_row );
        tmp_stop_name_2 = var_row;
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        assert( !(tmp_subscript_name_2 == NULL) );
        tmp_subscribed_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_3 = const_slice_none_none_int_neg_1;
        tmp_operand_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_ass_subvalue_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_Bkj );
        tmp_ass_subscribed_1 = var_Bkj;
        CHECK_OBJECT( var_row );
        tmp_tuple_element_2 = var_row;
        tmp_ass_subscript_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_2 );
        tmp_start_name_3 = Py_None;
        CHECK_OBJECT( var_row );
        tmp_stop_name_3 = var_row;
        tmp_step_name_3 = Py_None;
        tmp_tuple_element_2 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        assert( !(tmp_tuple_element_2 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_2 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_xrange_high_2;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        CHECK_OBJECT( par_m );
        tmp_left_name_10 = par_m;
        tmp_right_name_10 = const_int_pos_1;
        tmp_xrange_low_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_xrange_low_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_N );
        tmp_left_name_11 = var_N;
        tmp_right_name_11 = const_int_pos_1;
        tmp_xrange_high_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_11, tmp_right_name_11 );
        if ( tmp_xrange_high_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_xrange_low_2 );

            exception_lineno = 61;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_2 = BUILTIN_XRANGE2( tmp_xrange_low_2, tmp_xrange_high_2 );
        Py_DECREF( tmp_xrange_low_2 );
        Py_DECREF( tmp_xrange_high_2 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_2__for_iterator == NULL );
        tmp_for_loop_2__for_iterator = tmp_assign_source_10;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_11 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooo";
                exception_lineno = 61;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_12 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_row;
            var_row = tmp_assign_source_12;
            Py_INCREF( var_row );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_start_name_4;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_stop_name_4;
        PyObject *tmp_step_name_4;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( par_an );
        tmp_subscribed_name_5 = par_an;
        CHECK_OBJECT( var_row );
        tmp_left_name_12 = var_row;
        CHECK_OBJECT( par_m );
        tmp_right_name_12 = par_m;
        tmp_start_name_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_start_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_row );
        tmp_stop_name_4 = var_row;
        tmp_step_name_4 = Py_None;
        tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
        Py_DECREF( tmp_start_name_4 );
        assert( !(tmp_subscript_name_4 == NULL) );
        tmp_subscribed_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscript_name_4 );
        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_name_5 = const_slice_none_none_int_neg_1;
        tmp_operand_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscribed_name_4 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_ass_subvalue_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_Bkj );
        tmp_ass_subscribed_2 = var_Bkj;
        CHECK_OBJECT( var_row );
        tmp_tuple_element_3 = var_row;
        tmp_ass_subscript_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_ass_subscript_2, 0, tmp_tuple_element_3 );
        tmp_tuple_element_3 = const_slice_none_none_none;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_ass_subscript_2, 1, tmp_tuple_element_3 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subscript_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_tuple_element_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain_hstack );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hstack );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hstack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 63;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( var_Akj );
        tmp_tuple_element_4 = var_Akj;
        tmp_args_element_name_6 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_Bkj );
        tmp_tuple_element_4 = var_Bkj;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 1, tmp_tuple_element_4 );
        frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_C == NULL );
        var_C = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain_linalg );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linalg );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "linalg" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 64;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_5;
        CHECK_OBJECT( var_C );
        tmp_args_element_name_7 = var_C;
        CHECK_OBJECT( par_an );
        tmp_args_element_name_8 = par_an;
        frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_assign_source_14 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_solve, call_args );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_pq == NULL );
        var_pq = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_start_name_5;
        PyObject *tmp_stop_name_5;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_step_name_5;
        CHECK_OBJECT( var_pq );
        tmp_subscribed_name_6 = var_pq;
        tmp_start_name_5 = Py_None;
        CHECK_OBJECT( par_n );
        tmp_left_name_13 = par_n;
        tmp_right_name_13 = const_int_pos_1;
        tmp_stop_name_5 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_13, tmp_right_name_13 );
        if ( tmp_stop_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_5 = Py_None;
        tmp_subscript_name_6 = MAKE_SLICEOBJ3( tmp_start_name_5, tmp_stop_name_5, tmp_step_name_5 );
        Py_DECREF( tmp_stop_name_5 );
        assert( !(tmp_subscript_name_6 == NULL) );
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        Py_DECREF( tmp_subscript_name_6 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_p == NULL );
        var_p = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_start_name_6;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        PyObject *tmp_stop_name_6;
        PyObject *tmp_step_name_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain_r_ );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_r_ );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "r_" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 66;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_7 = tmp_mvar_value_6;
        tmp_tuple_element_5 = const_float_1_0;
        tmp_subscript_name_7 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_subscript_name_7, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_pq );
        tmp_subscribed_name_8 = var_pq;
        CHECK_OBJECT( par_n );
        tmp_left_name_14 = par_n;
        tmp_right_name_14 = const_int_pos_1;
        tmp_start_name_6 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_14, tmp_right_name_14 );
        if ( tmp_start_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscript_name_7 );

            exception_lineno = 66;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_6 = Py_None;
        tmp_step_name_6 = Py_None;
        tmp_subscript_name_8 = MAKE_SLICEOBJ3( tmp_start_name_6, tmp_stop_name_6, tmp_step_name_6 );
        Py_DECREF( tmp_start_name_6 );
        assert( !(tmp_subscript_name_8 == NULL) );
        tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        Py_DECREF( tmp_subscript_name_8 );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscript_name_7 );

            exception_lineno = 66;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_subscript_name_7, 1, tmp_tuple_element_5 );
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        Py_DECREF( tmp_subscript_name_7 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_q == NULL );
        var_q = tmp_assign_source_16;
    }
    {
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain_poly1d );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "poly1d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 67;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_7;
        CHECK_OBJECT( var_p );
        tmp_subscribed_name_9 = var_p;
        tmp_subscript_name_9 = const_slice_none_none_int_neg_1;
        tmp_args_element_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_tuple_element_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_tuple_element_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_6 );
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain_poly1d );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "poly1d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 67;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_8;
        CHECK_OBJECT( var_q );
        tmp_subscribed_name_10 = var_q;
        tmp_subscript_name_10 = const_slice_none_none_int_neg_1;
        tmp_args_element_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 67;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_tuple_element_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_tuple_element_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 67;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_6 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed,
        type_description_1,
        par_an,
        par_m,
        par_n,
        var_N,
        var_Akj,
        var_Bkj,
        var_row,
        var_C,
        var_pq,
        var_p,
        var_q
    );


    // Release cached frame.
    if ( frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed == cache_frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed )
    {
        Py_DECREF( frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed );
    }
    cache_frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed = NULL;

    assertFrameObject( frame_dfb4e8bb55b68d1e14a9cdaf62ec87ed );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$interpolate$_pade$$$function_1_pade );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_an );
    Py_DECREF( par_an );
    par_an = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)var_Akj );
    Py_DECREF( var_Akj );
    var_Akj = NULL;

    CHECK_OBJECT( (PyObject *)var_Bkj );
    Py_DECREF( var_Bkj );
    var_Bkj = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    CHECK_OBJECT( (PyObject *)var_C );
    Py_DECREF( var_C );
    var_C = NULL;

    CHECK_OBJECT( (PyObject *)var_pq );
    Py_DECREF( var_pq );
    var_pq = NULL;

    CHECK_OBJECT( (PyObject *)var_p );
    Py_DECREF( var_p );
    var_p = NULL;

    CHECK_OBJECT( (PyObject *)var_q );
    Py_DECREF( var_q );
    var_q = NULL;

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

    CHECK_OBJECT( (PyObject *)par_an );
    Py_DECREF( par_an );
    par_an = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_Akj );
    var_Akj = NULL;

    Py_XDECREF( var_Bkj );
    var_Bkj = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    Py_XDECREF( var_C );
    var_C = NULL;

    Py_XDECREF( var_pq );
    var_pq = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$interpolate$_pade$$$function_1_pade );
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



static PyObject *MAKE_FUNCTION_scipy$interpolate$_pade$$$function_1_pade( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$interpolate$_pade$$$function_1_pade,
        const_str_plain_pade,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dfb4e8bb55b68d1e14a9cdaf62ec87ed,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$interpolate$_pade,
        const_str_digest_6521fb10000696d4357dfb6b262edb8b,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$interpolate$_pade =
{
    PyModuleDef_HEAD_INIT,
    "scipy.interpolate._pade",
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

MOD_INIT_DECL( scipy$interpolate$_pade )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$interpolate$_pade );
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
    puts("scipy.interpolate._pade: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.interpolate._pade: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.interpolate._pade: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$interpolate$_pade" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$interpolate$_pade = Py_InitModule4(
        "scipy.interpolate._pade",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$interpolate$_pade = PyModule_Create( &mdef_scipy$interpolate$_pade );
#endif

    moduledict_scipy$interpolate$_pade = MODULE_DICT( module_scipy$interpolate$_pade );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$interpolate$_pade,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$interpolate$_pade,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$interpolate$_pade,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$interpolate$_pade,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$interpolate$_pade );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_518fd5273ae78bdb980d70333151b077, module_scipy$interpolate$_pade );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_4eaa62f7b8d85fe61a0ad583ca88add6;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_4eaa62f7b8d85fe61a0ad583ca88add6 = MAKE_MODULE_FRAME( codeobj_4eaa62f7b8d85fe61a0ad583ca88add6, module_scipy$interpolate$_pade );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_4eaa62f7b8d85fe61a0ad583ca88add6 );
    assert( Py_REFCNT( frame_4eaa62f7b8d85fe61a0ad583ca88add6 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_4eaa62f7b8d85fe61a0ad583ca88add6->m_frame.f_lineno = 1;
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


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_numpy;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$interpolate$_pade;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_1322be713a28f645928fa21d7fcb1b9a_tuple;
        tmp_level_name_1 = const_int_0;
        frame_4eaa62f7b8d85fe61a0ad583ca88add6->m_frame.f_lineno = 3;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_zeros );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain_zeros, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_asarray );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_eye );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain_eye, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_poly1d );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain_poly1d, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_hstack );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain_hstack, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_r_ );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain_r_, tmp_assign_source_14 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_scipy;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$interpolate$_pade;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_linalg_tuple;
        tmp_level_name_2 = const_int_0;
        frame_4eaa62f7b8d85fe61a0ad583ca88add6->m_frame.f_lineno = 4;
        tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_linalg );
        Py_DECREF( tmp_import_name_from_10 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain_linalg, tmp_assign_source_15 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4eaa62f7b8d85fe61a0ad583ca88add6 );
#endif
    popFrameStack();

    assertFrameObject( frame_4eaa62f7b8d85fe61a0ad583ca88add6 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4eaa62f7b8d85fe61a0ad583ca88add6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4eaa62f7b8d85fe61a0ad583ca88add6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4eaa62f7b8d85fe61a0ad583ca88add6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4eaa62f7b8d85fe61a0ad583ca88add6, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = LIST_COPY( const_list_str_plain_pade_list );
        UPDATE_STRING_DICT1( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_17 = MAKE_FUNCTION_scipy$interpolate$_pade$$$function_1_pade( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain_pade, tmp_assign_source_17 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$interpolate$_pade, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$interpolate$_pade );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
