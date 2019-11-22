/* Generated code for Python module 'idna.intranges'
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

/* The "_module_idna$intranges" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_idna$intranges;
PyDictObject *moduledict_idna$intranges;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_d00e570c2f61f11a50e5c1bf7bfe76dd;
static PyObject *const_str_digest_c9dc70c6b9e66d22aadd52d11a6a86c5;
static PyObject *const_str_plain_intranges_from_list;
static PyObject *const_tuple_c36c1d025aafd8cfdde3f0594d12ac73_tuple;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_b690301f82b0648f2901a2cbfed0db43;
extern PyObject *const_str_plain_intranges_contain;
extern PyObject *const_int_pos_4294967295;
extern PyObject *const_str_plain_False;
extern PyObject *const_tuple_str_plain_start_str_plain_end_tuple;
extern PyObject *const_str_plain_bisect;
extern PyObject *const_str_plain_sorted;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_93ef0e925227eca4d5eb98b0bf57b52b_tuple;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_19f9d3889064ac8b753bfa866bb29def;
extern PyObject *const_str_plain_ranges;
extern PyObject *const_int_0;
static PyObject *const_str_plain_sorted_list;
extern PyObject *const_str_plain_bisect_left;
static PyObject *const_str_plain_tuple_;
extern PyObject *const_str_plain_left;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_02270850687c31fbcc45670f2710e37f;
static PyObject *const_str_plain__encode_range;
extern PyObject *const_str_plain_origin;
extern PyObject *const_tuple_str_plain_r_tuple;
extern PyObject *const_str_plain_end;
static PyObject *const_str_digest_861c3b4979a1dc4c6897277fa70ef54c;
extern PyObject *const_str_plain_right;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain_list_;
static PyObject *const_str_plain_last_write;
extern PyObject *const_str_plain_int_;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_start;
extern PyObject *const_str_plain_pos;
static PyObject *const_str_plain_current_range;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain__decode_range;
extern PyObject *const_int_pos_32;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_d00e570c2f61f11a50e5c1bf7bfe76dd = UNSTREAM_STRING_ASCII( &constant_bin[ 596276 ], 14, 0 );
    const_str_digest_c9dc70c6b9e66d22aadd52d11a6a86c5 = UNSTREAM_STRING_ASCII( &constant_bin[ 596290 ], 265, 0 );
    const_str_plain_intranges_from_list = UNSTREAM_STRING_ASCII( &constant_bin[ 596555 ], 19, 1 );
    const_tuple_c36c1d025aafd8cfdde3f0594d12ac73_tuple = PyTuple_New( 6 );
    const_str_plain_list_ = UNSTREAM_STRING_ASCII( &constant_bin[ 471448 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_c36c1d025aafd8cfdde3f0594d12ac73_tuple, 0, const_str_plain_list_ ); Py_INCREF( const_str_plain_list_ );
    const_str_plain_sorted_list = UNSTREAM_STRING_ASCII( &constant_bin[ 596574 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_c36c1d025aafd8cfdde3f0594d12ac73_tuple, 1, const_str_plain_sorted_list ); Py_INCREF( const_str_plain_sorted_list );
    PyTuple_SET_ITEM( const_tuple_c36c1d025aafd8cfdde3f0594d12ac73_tuple, 2, const_str_plain_ranges ); Py_INCREF( const_str_plain_ranges );
    const_str_plain_last_write = UNSTREAM_STRING_ASCII( &constant_bin[ 596585 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_c36c1d025aafd8cfdde3f0594d12ac73_tuple, 3, const_str_plain_last_write ); Py_INCREF( const_str_plain_last_write );
    PyTuple_SET_ITEM( const_tuple_c36c1d025aafd8cfdde3f0594d12ac73_tuple, 4, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_plain_current_range = UNSTREAM_STRING_ASCII( &constant_bin[ 596595 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_c36c1d025aafd8cfdde3f0594d12ac73_tuple, 5, const_str_plain_current_range ); Py_INCREF( const_str_plain_current_range );
    const_str_digest_b690301f82b0648f2901a2cbfed0db43 = UNSTREAM_STRING_ASCII( &constant_bin[ 596608 ], 61, 0 );
    const_tuple_93ef0e925227eca4d5eb98b0bf57b52b_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_93ef0e925227eca4d5eb98b0bf57b52b_tuple, 0, const_str_plain_int_ ); Py_INCREF( const_str_plain_int_ );
    PyTuple_SET_ITEM( const_tuple_93ef0e925227eca4d5eb98b0bf57b52b_tuple, 1, const_str_plain_ranges ); Py_INCREF( const_str_plain_ranges );
    const_str_plain_tuple_ = UNSTREAM_STRING_ASCII( &constant_bin[ 596669 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_93ef0e925227eca4d5eb98b0bf57b52b_tuple, 2, const_str_plain_tuple_ ); Py_INCREF( const_str_plain_tuple_ );
    PyTuple_SET_ITEM( const_tuple_93ef0e925227eca4d5eb98b0bf57b52b_tuple, 3, const_str_plain_pos ); Py_INCREF( const_str_plain_pos );
    PyTuple_SET_ITEM( const_tuple_93ef0e925227eca4d5eb98b0bf57b52b_tuple, 4, const_str_plain_left ); Py_INCREF( const_str_plain_left );
    PyTuple_SET_ITEM( const_tuple_93ef0e925227eca4d5eb98b0bf57b52b_tuple, 5, const_str_plain_right ); Py_INCREF( const_str_plain_right );
    PyTuple_SET_ITEM( const_tuple_93ef0e925227eca4d5eb98b0bf57b52b_tuple, 6, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    const_str_digest_19f9d3889064ac8b753bfa866bb29def = UNSTREAM_STRING_ASCII( &constant_bin[ 596675 ], 23, 0 );
    const_str_digest_02270850687c31fbcc45670f2710e37f = UNSTREAM_STRING_ASCII( &constant_bin[ 596698 ], 283, 0 );
    const_str_plain__encode_range = UNSTREAM_STRING_ASCII( &constant_bin[ 596981 ], 13, 1 );
    const_str_digest_861c3b4979a1dc4c6897277fa70ef54c = UNSTREAM_STRING_ASCII( &constant_bin[ 596994 ], 17, 0 );
    const_str_plain__decode_range = UNSTREAM_STRING_ASCII( &constant_bin[ 597011 ], 13, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_idna$intranges( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_32b8a67aa336ba095d2fc89c2d840936;
static PyCodeObject *codeobj_5a408677086016c8b8433bb8db892232;
static PyCodeObject *codeobj_3db1962415f84e34112b9dfe974b2ec0;
static PyCodeObject *codeobj_f019c1e0b3355e84b3ce7ab02dd60c66;
static PyCodeObject *codeobj_1c3904a26583d0392ac0841e8f289e30;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_861c3b4979a1dc4c6897277fa70ef54c );
    codeobj_32b8a67aa336ba095d2fc89c2d840936 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_19f9d3889064ac8b753bfa866bb29def, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_5a408677086016c8b8433bb8db892232 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__decode_range, 34, const_tuple_str_plain_r_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3db1962415f84e34112b9dfe974b2ec0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__encode_range, 31, const_tuple_str_plain_start_str_plain_end_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f019c1e0b3355e84b3ce7ab02dd60c66 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_intranges_contain, 38, const_tuple_93ef0e925227eca4d5eb98b0bf57b52b_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1c3904a26583d0392ac0841e8f289e30 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_intranges_from_list, 10, const_tuple_c36c1d025aafd8cfdde3f0594d12ac73_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_idna$intranges$$$function_1_intranges_from_list(  );


static PyObject *MAKE_FUNCTION_idna$intranges$$$function_2__encode_range(  );


static PyObject *MAKE_FUNCTION_idna$intranges$$$function_3__decode_range(  );


static PyObject *MAKE_FUNCTION_idna$intranges$$$function_4_intranges_contain(  );


// The module function definitions.
static PyObject *impl_idna$intranges$$$function_1_intranges_from_list( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_list_ = python_pars[ 0 ];
    PyObject *var_sorted_list = NULL;
    PyObject *var_ranges = NULL;
    PyObject *var_last_write = NULL;
    PyObject *var_i = NULL;
    PyObject *var_current_range = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_1c3904a26583d0392ac0841e8f289e30;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1c3904a26583d0392ac0841e8f289e30 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1c3904a26583d0392ac0841e8f289e30, codeobj_1c3904a26583d0392ac0841e8f289e30, module_idna$intranges, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1c3904a26583d0392ac0841e8f289e30 = cache_frame_1c3904a26583d0392ac0841e8f289e30;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1c3904a26583d0392ac0841e8f289e30 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1c3904a26583d0392ac0841e8f289e30 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_sorted );
        assert( tmp_called_name_1 != NULL );
        CHECK_OBJECT( par_list_ );
        tmp_args_element_name_1 = par_list_;
        frame_1c3904a26583d0392ac0841e8f289e30->m_frame.f_lineno = 18;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sorted_list == NULL );
        var_sorted_list = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New( 0 );
        assert( var_ranges == NULL );
        var_ranges = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_int_neg_1;
        assert( var_last_write == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_last_write = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_sorted_list );
        tmp_len_arg_1 = var_sorted_list;
        tmp_xrange_low_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_xrange_low_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        Py_DECREF( tmp_xrange_low_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                exception_lineno = 21;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( var_i );
        tmp_left_name_1 = var_i;
        tmp_right_name_1 = const_int_pos_1;
        tmp_compexpr_left_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_sorted_list );
        tmp_len_arg_2 = var_sorted_list;
        tmp_compexpr_right_1 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 22;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "oooooo";
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_2;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( var_sorted_list );
            tmp_subscribed_name_1 = var_sorted_list;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_1 = var_i;
            tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_sorted_list );
            tmp_subscribed_name_2 = var_sorted_list;
            CHECK_OBJECT( var_i );
            tmp_left_name_3 = var_i;
            tmp_right_name_2 = const_int_pos_1;
            tmp_subscript_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_2 );
            if ( tmp_subscript_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_2 );

                exception_lineno = 23;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_2 );

                exception_lineno = 23;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_right_name_3 = const_int_pos_1;
            tmp_compexpr_right_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_2, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_2 );

                exception_lineno = 23;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
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
            goto loop_start_1;
            branch_no_2:;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_start_name_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( var_sorted_list );
        tmp_subscribed_name_3 = var_sorted_list;
        CHECK_OBJECT( var_last_write );
        tmp_left_name_4 = var_last_write;
        tmp_right_name_4 = const_int_pos_1;
        tmp_start_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_start_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_i );
        tmp_left_name_5 = var_i;
        tmp_right_name_5 = const_int_pos_1;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_start_name_1 );

            exception_lineno = 25;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_start_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_3 == NULL) );
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_current_range;
            var_current_range = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( var_ranges );
        tmp_source_name_1 = var_ranges;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain__encode_range );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__encode_range );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_encode_range" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 26;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_3 = tmp_mvar_value_1;
        CHECK_OBJECT( var_current_range );
        tmp_subscribed_name_4 = var_current_range;
        tmp_subscript_name_4 = const_int_0;
        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 26;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_current_range );
        tmp_subscribed_name_5 = var_current_range;
        tmp_subscript_name_5 = const_int_neg_1;
        tmp_left_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, -1 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 26;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_6 = const_int_pos_1;
        tmp_args_element_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 26;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_1c3904a26583d0392ac0841e8f289e30->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 26;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_1c3904a26583d0392ac0841e8f289e30->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( var_i );
        tmp_assign_source_8 = var_i;
        {
            PyObject *old = var_last_write;
            assert( old != NULL );
            var_last_write = tmp_assign_source_8;
            Py_INCREF( var_last_write );
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "oooooo";
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
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT( var_ranges );
        tmp_tuple_arg_1 = var_ranges;
        tmp_return_value = PySequence_Tuple( tmp_tuple_arg_1 );
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c3904a26583d0392ac0841e8f289e30 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c3904a26583d0392ac0841e8f289e30 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c3904a26583d0392ac0841e8f289e30 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1c3904a26583d0392ac0841e8f289e30, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1c3904a26583d0392ac0841e8f289e30->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1c3904a26583d0392ac0841e8f289e30, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1c3904a26583d0392ac0841e8f289e30,
        type_description_1,
        par_list_,
        var_sorted_list,
        var_ranges,
        var_last_write,
        var_i,
        var_current_range
    );


    // Release cached frame.
    if ( frame_1c3904a26583d0392ac0841e8f289e30 == cache_frame_1c3904a26583d0392ac0841e8f289e30 )
    {
        Py_DECREF( frame_1c3904a26583d0392ac0841e8f289e30 );
    }
    cache_frame_1c3904a26583d0392ac0841e8f289e30 = NULL;

    assertFrameObject( frame_1c3904a26583d0392ac0841e8f289e30 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( idna$intranges$$$function_1_intranges_from_list );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_list_ );
    Py_DECREF( par_list_ );
    par_list_ = NULL;

    CHECK_OBJECT( (PyObject *)var_sorted_list );
    Py_DECREF( var_sorted_list );
    var_sorted_list = NULL;

    CHECK_OBJECT( (PyObject *)var_ranges );
    Py_DECREF( var_ranges );
    var_ranges = NULL;

    CHECK_OBJECT( (PyObject *)var_last_write );
    Py_DECREF( var_last_write );
    var_last_write = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_current_range );
    var_current_range = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_list_ );
    Py_DECREF( par_list_ );
    par_list_ = NULL;

    Py_XDECREF( var_sorted_list );
    var_sorted_list = NULL;

    Py_XDECREF( var_ranges );
    var_ranges = NULL;

    Py_XDECREF( var_last_write );
    var_last_write = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_current_range );
    var_current_range = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( idna$intranges$$$function_1_intranges_from_list );
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


static PyObject *impl_idna$intranges$$$function_2__encode_range( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_start = python_pars[ 0 ];
    PyObject *par_end = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_3db1962415f84e34112b9dfe974b2ec0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3db1962415f84e34112b9dfe974b2ec0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3db1962415f84e34112b9dfe974b2ec0, codeobj_3db1962415f84e34112b9dfe974b2ec0, module_idna$intranges, sizeof(void *)+sizeof(void *) );
    frame_3db1962415f84e34112b9dfe974b2ec0 = cache_frame_3db1962415f84e34112b9dfe974b2ec0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3db1962415f84e34112b9dfe974b2ec0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3db1962415f84e34112b9dfe974b2ec0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_start );
        tmp_left_name_2 = par_start;
        tmp_right_name_1 = const_int_pos_32;
        tmp_left_name_1 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_end );
        tmp_right_name_2 = par_end;
        tmp_return_value = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3db1962415f84e34112b9dfe974b2ec0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3db1962415f84e34112b9dfe974b2ec0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3db1962415f84e34112b9dfe974b2ec0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3db1962415f84e34112b9dfe974b2ec0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3db1962415f84e34112b9dfe974b2ec0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3db1962415f84e34112b9dfe974b2ec0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3db1962415f84e34112b9dfe974b2ec0,
        type_description_1,
        par_start,
        par_end
    );


    // Release cached frame.
    if ( frame_3db1962415f84e34112b9dfe974b2ec0 == cache_frame_3db1962415f84e34112b9dfe974b2ec0 )
    {
        Py_DECREF( frame_3db1962415f84e34112b9dfe974b2ec0 );
    }
    cache_frame_3db1962415f84e34112b9dfe974b2ec0 = NULL;

    assertFrameObject( frame_3db1962415f84e34112b9dfe974b2ec0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( idna$intranges$$$function_2__encode_range );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_end );
    Py_DECREF( par_end );
    par_end = NULL;

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

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_end );
    Py_DECREF( par_end );
    par_end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( idna$intranges$$$function_2__encode_range );
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


static PyObject *impl_idna$intranges$$$function_3__decode_range( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_r = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_5a408677086016c8b8433bb8db892232;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5a408677086016c8b8433bb8db892232 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5a408677086016c8b8433bb8db892232, codeobj_5a408677086016c8b8433bb8db892232, module_idna$intranges, sizeof(void *) );
    frame_5a408677086016c8b8433bb8db892232 = cache_frame_5a408677086016c8b8433bb8db892232;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5a408677086016c8b8433bb8db892232 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5a408677086016c8b8433bb8db892232 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_r );
        tmp_left_name_1 = par_r;
        tmp_right_name_1 = const_int_pos_32;
        tmp_tuple_element_1 = BINARY_OPERATION( PyNumber_Rshift, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_r );
        tmp_left_name_2 = par_r;
        tmp_right_name_2 = const_int_pos_4294967295;
        tmp_tuple_element_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a408677086016c8b8433bb8db892232 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a408677086016c8b8433bb8db892232 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a408677086016c8b8433bb8db892232 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5a408677086016c8b8433bb8db892232, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5a408677086016c8b8433bb8db892232->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5a408677086016c8b8433bb8db892232, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5a408677086016c8b8433bb8db892232,
        type_description_1,
        par_r
    );


    // Release cached frame.
    if ( frame_5a408677086016c8b8433bb8db892232 == cache_frame_5a408677086016c8b8433bb8db892232 )
    {
        Py_DECREF( frame_5a408677086016c8b8433bb8db892232 );
    }
    cache_frame_5a408677086016c8b8433bb8db892232 = NULL;

    assertFrameObject( frame_5a408677086016c8b8433bb8db892232 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( idna$intranges$$$function_3__decode_range );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

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

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( idna$intranges$$$function_3__decode_range );
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


static PyObject *impl_idna$intranges$$$function_4_intranges_contain( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_int_ = python_pars[ 0 ];
    PyObject *par_ranges = python_pars[ 1 ];
    PyObject *var_tuple_ = NULL;
    PyObject *var_pos = NULL;
    PyObject *var_left = NULL;
    PyObject *var_right = NULL;
    PyObject *var__ = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f019c1e0b3355e84b3ce7ab02dd60c66;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
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
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_f019c1e0b3355e84b3ce7ab02dd60c66 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f019c1e0b3355e84b3ce7ab02dd60c66, codeobj_f019c1e0b3355e84b3ce7ab02dd60c66, module_idna$intranges, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f019c1e0b3355e84b3ce7ab02dd60c66 = cache_frame_f019c1e0b3355e84b3ce7ab02dd60c66;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f019c1e0b3355e84b3ce7ab02dd60c66 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f019c1e0b3355e84b3ce7ab02dd60c66 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain__encode_range );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__encode_range );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_encode_range" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_int_ );
        tmp_args_element_name_1 = par_int_;
        tmp_args_element_name_2 = const_int_0;
        frame_f019c1e0b3355e84b3ce7ab02dd60c66->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_tuple_ == NULL );
        var_tuple_ = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain_bisect );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bisect );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bisect" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 41;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_ranges );
        tmp_args_element_name_3 = par_ranges;
        CHECK_OBJECT( var_tuple_ );
        tmp_args_element_name_4 = var_tuple_;
        frame_f019c1e0b3355e84b3ce7ab02dd60c66->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_bisect_left, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_pos == NULL );
        var_pos = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_pos );
        tmp_compexpr_left_1 = var_pos;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "ooooooo";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain__decode_range );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__decode_range );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_decode_range" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 45;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( par_ranges );
            tmp_subscribed_name_1 = par_ranges;
            CHECK_OBJECT( var_pos );
            tmp_left_name_1 = var_pos;
            tmp_right_name_1 = const_int_pos_1;
            tmp_subscript_name_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_subscript_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 45;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_args_element_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 45;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            frame_f019c1e0b3355e84b3ce7ab02dd60c66->m_frame.f_lineno = 45;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 45;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 45;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
            if ( tmp_assign_source_4 == NULL )
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


                type_description_1 = "ooooooo";
                exception_lineno = 45;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
            if ( tmp_assign_source_5 == NULL )
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


                type_description_1 = "ooooooo";
                exception_lineno = 45;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

                        type_description_1 = "ooooooo";
                        exception_lineno = 45;
                        goto try_except_handler_3;
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

                type_description_1 = "ooooooo";
                exception_lineno = 45;
                goto try_except_handler_3;
            }
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        try_end_1:;
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

        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
            assert( var_left == NULL );
            Py_INCREF( tmp_assign_source_6 );
            var_left = tmp_assign_source_6;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
            assert( var_right == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_right = tmp_assign_source_7;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_outline_return_value_1;
            int tmp_truth_name_1;
            {
                PyObject *tmp_assign_source_8;
                CHECK_OBJECT( par_int_ );
                tmp_assign_source_8 = par_int_;
                assert( tmp_comparison_chain_1__operand_2 == NULL );
                Py_INCREF( tmp_assign_source_8 );
                tmp_comparison_chain_1__operand_2 = tmp_assign_source_8;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                CHECK_OBJECT( var_left );
                tmp_compexpr_left_2 = var_left;
                CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
                tmp_compexpr_right_2 = tmp_comparison_chain_1__operand_2;
                tmp_assign_source_9 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 46;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                assert( tmp_comparison_chain_1__comparison_result == NULL );
                tmp_comparison_chain_1__comparison_result = tmp_assign_source_9;
            }
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_operand_name_1;
                CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
                tmp_operand_name_1 = tmp_comparison_chain_1__comparison_result;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 46;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                tmp_condition_result_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_3;
                }
                else
                {
                    goto branch_no_3;
                }
                branch_yes_3:;
                CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
                tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
                Py_INCREF( tmp_outline_return_value_1 );
                goto try_return_handler_4;
                branch_no_3:;
            }
            {
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
                tmp_compexpr_left_3 = tmp_comparison_chain_1__operand_2;
                CHECK_OBJECT( var_right );
                tmp_compexpr_right_3 = var_right;
                tmp_outline_return_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_outline_return_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 46;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                goto try_return_handler_4;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( idna$intranges$$$function_4_intranges_contain );
            return NULL;
            // Return handler code:
            try_return_handler_4:;
            CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
            Py_DECREF( tmp_comparison_chain_1__operand_2 );
            tmp_comparison_chain_1__operand_2 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__comparison_result );
            Py_DECREF( tmp_comparison_chain_1__comparison_result );
            tmp_comparison_chain_1__comparison_result = NULL;

            goto outline_result_1;
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

            CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
            Py_DECREF( tmp_comparison_chain_1__operand_2 );
            tmp_comparison_chain_1__operand_2 = NULL;

            Py_XDECREF( tmp_comparison_chain_1__comparison_result );
            tmp_comparison_chain_1__comparison_result = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto frame_exception_exit_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( idna$intranges$$$function_4_intranges_contain );
            return NULL;
            outline_result_1:;
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_outline_return_value_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_outline_return_value_1 );

                exception_lineno = 46;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_outline_return_value_1 );
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            tmp_return_value = Py_True;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_no_2:;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_pos );
        tmp_compexpr_left_4 = var_pos;
        CHECK_OBJECT( par_ranges );
        tmp_len_arg_1 = par_ranges;
        tmp_compexpr_right_4 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooooooo";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain__decode_range );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__decode_range );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_decode_range" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 50;
                type_description_1 = "ooooooo";
                goto try_except_handler_5;
            }

            tmp_called_name_3 = tmp_mvar_value_4;
            CHECK_OBJECT( par_ranges );
            tmp_subscribed_name_2 = par_ranges;
            CHECK_OBJECT( var_pos );
            tmp_subscript_name_2 = var_pos;
            tmp_args_element_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_1 = "ooooooo";
                goto try_except_handler_5;
            }
            frame_f019c1e0b3355e84b3ce7ab02dd60c66->m_frame.f_lineno = 50;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_1 = "ooooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_1 = "ooooooo";
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


                type_description_1 = "ooooooo";
                exception_lineno = 50;
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


                type_description_1 = "ooooooo";
                exception_lineno = 50;
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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

                        type_description_1 = "ooooooo";
                        exception_lineno = 50;
                        goto try_except_handler_6;
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

                type_description_1 = "ooooooo";
                exception_lineno = 50;
                goto try_except_handler_6;
            }
        }
        goto try_end_3;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        try_end_3:;
        goto try_end_4;
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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_left;
                var_left = tmp_assign_source_13;
                Py_INCREF( var_left );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
            assert( var__ == NULL );
            Py_INCREF( tmp_assign_source_14 );
            var__ = tmp_assign_source_14;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( var_left );
            tmp_compexpr_left_5 = var_left;
            CHECK_OBJECT( par_int_ );
            tmp_compexpr_right_5 = par_int_;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_5;
            }
            else
            {
                goto branch_no_5;
            }
            branch_yes_5:;
            tmp_return_value = Py_True;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_no_5:;
        }
        branch_no_4:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f019c1e0b3355e84b3ce7ab02dd60c66 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f019c1e0b3355e84b3ce7ab02dd60c66 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f019c1e0b3355e84b3ce7ab02dd60c66 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f019c1e0b3355e84b3ce7ab02dd60c66, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f019c1e0b3355e84b3ce7ab02dd60c66->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f019c1e0b3355e84b3ce7ab02dd60c66, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f019c1e0b3355e84b3ce7ab02dd60c66,
        type_description_1,
        par_int_,
        par_ranges,
        var_tuple_,
        var_pos,
        var_left,
        var_right,
        var__
    );


    // Release cached frame.
    if ( frame_f019c1e0b3355e84b3ce7ab02dd60c66 == cache_frame_f019c1e0b3355e84b3ce7ab02dd60c66 )
    {
        Py_DECREF( frame_f019c1e0b3355e84b3ce7ab02dd60c66 );
    }
    cache_frame_f019c1e0b3355e84b3ce7ab02dd60c66 = NULL;

    assertFrameObject( frame_f019c1e0b3355e84b3ce7ab02dd60c66 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( idna$intranges$$$function_4_intranges_contain );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_int_ );
    Py_DECREF( par_int_ );
    par_int_ = NULL;

    CHECK_OBJECT( (PyObject *)par_ranges );
    Py_DECREF( par_ranges );
    par_ranges = NULL;

    CHECK_OBJECT( (PyObject *)var_tuple_ );
    Py_DECREF( var_tuple_ );
    var_tuple_ = NULL;

    CHECK_OBJECT( (PyObject *)var_pos );
    Py_DECREF( var_pos );
    var_pos = NULL;

    Py_XDECREF( var_left );
    var_left = NULL;

    Py_XDECREF( var_right );
    var_right = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

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

    CHECK_OBJECT( (PyObject *)par_int_ );
    Py_DECREF( par_int_ );
    par_int_ = NULL;

    CHECK_OBJECT( (PyObject *)par_ranges );
    Py_DECREF( par_ranges );
    par_ranges = NULL;

    Py_XDECREF( var_tuple_ );
    var_tuple_ = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    Py_XDECREF( var_left );
    var_left = NULL;

    Py_XDECREF( var_right );
    var_right = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( idna$intranges$$$function_4_intranges_contain );
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



static PyObject *MAKE_FUNCTION_idna$intranges$$$function_1_intranges_from_list(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$intranges$$$function_1_intranges_from_list,
        const_str_plain_intranges_from_list,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1c3904a26583d0392ac0841e8f289e30,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_idna$intranges,
        const_str_digest_02270850687c31fbcc45670f2710e37f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$intranges$$$function_2__encode_range(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$intranges$$$function_2__encode_range,
        const_str_plain__encode_range,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3db1962415f84e34112b9dfe974b2ec0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_idna$intranges,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$intranges$$$function_3__decode_range(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$intranges$$$function_3__decode_range,
        const_str_plain__decode_range,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5a408677086016c8b8433bb8db892232,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_idna$intranges,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$intranges$$$function_4_intranges_contain(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$intranges$$$function_4_intranges_contain,
        const_str_plain_intranges_contain,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f019c1e0b3355e84b3ce7ab02dd60c66,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_idna$intranges,
        const_str_digest_b690301f82b0648f2901a2cbfed0db43,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_idna$intranges =
{
    PyModuleDef_HEAD_INIT,
    "idna.intranges",
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

MOD_INIT_DECL( idna$intranges )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_idna$intranges );
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
    puts("idna.intranges: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("idna.intranges: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("idna.intranges: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initidna$intranges" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_idna$intranges = Py_InitModule4(
        "idna.intranges",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_idna$intranges = PyModule_Create( &mdef_idna$intranges );
#endif

    moduledict_idna$intranges = MODULE_DICT( module_idna$intranges );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_idna$intranges,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_idna$intranges,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_idna$intranges,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_idna$intranges,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_idna$intranges );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_d00e570c2f61f11a50e5c1bf7bfe76dd, module_idna$intranges );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_32b8a67aa336ba095d2fc89c2d840936;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_c9dc70c6b9e66d22aadd52d11a6a86c5;
        UPDATE_STRING_DICT0( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_32b8a67aa336ba095d2fc89c2d840936 = MAKE_MODULE_FRAME( codeobj_32b8a67aa336ba095d2fc89c2d840936, module_idna$intranges );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_32b8a67aa336ba095d2fc89c2d840936 );
    assert( Py_REFCNT( frame_32b8a67aa336ba095d2fc89c2d840936 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_bisect;
        tmp_globals_name_1 = (PyObject *)moduledict_idna$intranges;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_32b8a67aa336ba095d2fc89c2d840936->m_frame.f_lineno = 8;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain_bisect, tmp_assign_source_4 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_32b8a67aa336ba095d2fc89c2d840936 );
#endif
    popFrameStack();

    assertFrameObject( frame_32b8a67aa336ba095d2fc89c2d840936 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_32b8a67aa336ba095d2fc89c2d840936 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_32b8a67aa336ba095d2fc89c2d840936, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_32b8a67aa336ba095d2fc89c2d840936->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_32b8a67aa336ba095d2fc89c2d840936, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_FUNCTION_idna$intranges$$$function_1_intranges_from_list(  );



        UPDATE_STRING_DICT1( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain_intranges_from_list, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_FUNCTION_idna$intranges$$$function_2__encode_range(  );



        UPDATE_STRING_DICT1( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain__encode_range, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_idna$intranges$$$function_3__decode_range(  );



        UPDATE_STRING_DICT1( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain__decode_range, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_idna$intranges$$$function_4_intranges_contain(  );



        UPDATE_STRING_DICT1( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain_intranges_contain, tmp_assign_source_8 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_idna$intranges, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_idna$intranges );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}