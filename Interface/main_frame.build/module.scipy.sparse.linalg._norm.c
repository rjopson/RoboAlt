/* Generated code for Python module 'scipy.sparse.linalg._norm'
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

/* The "_module_scipy$sparse$linalg$_norm" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$sparse$linalg$_norm;
PyDictObject *moduledict_scipy$sparse$linalg$_norm;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_0bac5fb6f35a68d345bbba96c87835bc;
static PyObject *const_str_digest_f6022e7e13cc3e1bedffe67c0d23e0e2;
extern PyObject *const_str_digest_eeb6a6583fdebe1202d0954fb0766c30;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_issparse;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_fro;
extern PyObject *const_str_digest_587a514b13573399177b42819fa4b37c;
extern PyObject *const_str_plain_row_axis;
extern PyObject *const_str_digest_84736f963014490d0da3ef2c4df92388;
extern PyObject *const_str_plain_complexfloating;
static PyObject *const_tuple_none_str_plain_fro_str_plain_f_tuple;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_13bcd7bc33dfbf1456001dbd6bbaafd3;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
static PyObject *const_str_plain_int_axis;
extern PyObject *const_str_plain___file__;
extern PyObject *const_int_neg_2;
static PyObject *const_tuple_036aac65cf5fca4fed4aa7fdb9f6c9a8_tuple;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_M;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_min;
static PyObject *const_list_str_plain_norm_list;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_max;
extern PyObject *const_int_0;
static PyObject *const_str_digest_bd23294a9c49225c3753c06f892b0fee;
static PyObject *const_str_digest_5dbf4d404f25174bbdc5845bf2a63413;
extern PyObject *const_str_plain_a;
extern PyObject *const_tuple_int_0_int_pos_1_tuple;
static PyObject *const_tuple_str_plain_x_str_plain_sqnorm_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ord;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_int_neg_1;
extern PyObject *const_tuple_int_pos_2_tuple;
static PyObject *const_tuple_none_str_plain_f_str_plain_fro_tuple;
extern PyObject *const_tuple_str_plain_issparse_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_ravel;
static PyObject *const_str_digest_fcd5c2a089efdc6e78834bcf56d053cf;
static PyObject *const_str_digest_a146eabcaa404792eec6f04a08ed2869;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain__sparse_frobenius_norm;
extern PyObject *const_str_plain_nd;
extern PyObject *const_str_plain_issubdtype;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_tocsr;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_A;
extern PyObject *const_str_plain_norm;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_sqnorm;
extern PyObject *const_str_plain_Inf;
extern PyObject *const_tuple_int_0_int_0_tuple;
extern PyObject *const_str_plain_col_axis;
extern PyObject *const_tuple_int_pos_2_none_tuple;
extern PyObject *const_str_plain_power;
extern PyObject *const_str_digest_c513a02188c459608b8a1dd32daddf94;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_digest_ca2ef5505424b1a807beaf8cdc9df517;
static PyObject *const_tuple_str_plain_Inf_str_plain_sqrt_str_plain_abs_tuple;
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
    const_str_digest_0bac5fb6f35a68d345bbba96c87835bc = UNSTREAM_STRING_ASCII( &constant_bin[ 5404035 ], 42, 0 );
    const_str_digest_f6022e7e13cc3e1bedffe67c0d23e0e2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5404077 ], 42, 0 );
    const_tuple_none_str_plain_fro_str_plain_f_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_fro_str_plain_f_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_fro_str_plain_f_tuple, 1, const_str_plain_fro ); Py_INCREF( const_str_plain_fro );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_fro_str_plain_f_tuple, 2, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_str_digest_13bcd7bc33dfbf1456001dbd6bbaafd3 = UNSTREAM_STRING_ASCII( &constant_bin[ 5404119 ], 34, 0 );
    const_str_plain_int_axis = UNSTREAM_STRING_ASCII( &constant_bin[ 5404153 ], 8, 1 );
    const_tuple_036aac65cf5fca4fed4aa7fdb9f6c9a8_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_036aac65cf5fca4fed4aa7fdb9f6c9a8_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_036aac65cf5fca4fed4aa7fdb9f6c9a8_tuple, 1, const_str_plain_ord ); Py_INCREF( const_str_plain_ord );
    PyTuple_SET_ITEM( const_tuple_036aac65cf5fca4fed4aa7fdb9f6c9a8_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_036aac65cf5fca4fed4aa7fdb9f6c9a8_tuple, 3, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_036aac65cf5fca4fed4aa7fdb9f6c9a8_tuple, 4, const_str_plain_int_axis ); Py_INCREF( const_str_plain_int_axis );
    PyTuple_SET_ITEM( const_tuple_036aac65cf5fca4fed4aa7fdb9f6c9a8_tuple, 5, const_str_plain_nd ); Py_INCREF( const_str_plain_nd );
    PyTuple_SET_ITEM( const_tuple_036aac65cf5fca4fed4aa7fdb9f6c9a8_tuple, 6, const_str_plain_row_axis ); Py_INCREF( const_str_plain_row_axis );
    PyTuple_SET_ITEM( const_tuple_036aac65cf5fca4fed4aa7fdb9f6c9a8_tuple, 7, const_str_plain_col_axis ); Py_INCREF( const_str_plain_col_axis );
    PyTuple_SET_ITEM( const_tuple_036aac65cf5fca4fed4aa7fdb9f6c9a8_tuple, 8, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_036aac65cf5fca4fed4aa7fdb9f6c9a8_tuple, 9, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    const_list_str_plain_norm_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_norm_list, 0, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    const_str_digest_bd23294a9c49225c3753c06f892b0fee = UNSTREAM_STRING_ASCII( &constant_bin[ 5404127 ], 25, 0 );
    const_str_digest_5dbf4d404f25174bbdc5845bf2a63413 = UNSTREAM_STRING_ASCII( &constant_bin[ 5404161 ], 28, 0 );
    const_tuple_str_plain_x_str_plain_sqnorm_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_sqnorm_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_sqnorm_tuple, 1, const_str_plain_sqnorm ); Py_INCREF( const_str_plain_sqnorm );
    const_tuple_none_str_plain_f_str_plain_fro_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_f_str_plain_fro_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_f_str_plain_fro_tuple, 1, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_f_str_plain_fro_tuple, 2, const_str_plain_fro ); Py_INCREF( const_str_plain_fro );
    const_str_digest_fcd5c2a089efdc6e78834bcf56d053cf = UNSTREAM_STRING_ASCII( &constant_bin[ 5404189 ], 2630, 0 );
    const_str_digest_a146eabcaa404792eec6f04a08ed2869 = UNSTREAM_STRING_ASCII( &constant_bin[ 5406819 ], 22, 0 );
    const_str_plain__sparse_frobenius_norm = UNSTREAM_STRING_ASCII( &constant_bin[ 5406841 ], 22, 1 );
    const_tuple_str_plain_Inf_str_plain_sqrt_str_plain_abs_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Inf_str_plain_sqrt_str_plain_abs_tuple, 0, const_str_plain_Inf ); Py_INCREF( const_str_plain_Inf );
    PyTuple_SET_ITEM( const_tuple_str_plain_Inf_str_plain_sqrt_str_plain_abs_tuple, 1, const_str_plain_sqrt ); Py_INCREF( const_str_plain_sqrt );
    PyTuple_SET_ITEM( const_tuple_str_plain_Inf_str_plain_sqrt_str_plain_abs_tuple, 2, const_str_plain_abs ); Py_INCREF( const_str_plain_abs );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$sparse$linalg$_norm( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_79307a99830b491d1b6895583a431e98;
static PyCodeObject *codeobj_19ebb4d920c07ebf50b7fd4ae5e86292;
static PyCodeObject *codeobj_2e16ca200379924af5bf3d42358ec420;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_5dbf4d404f25174bbdc5845bf2a63413 );
    codeobj_79307a99830b491d1b6895583a431e98 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_13bcd7bc33dfbf1456001dbd6bbaafd3, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_19ebb4d920c07ebf50b7fd4ae5e86292 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__sparse_frobenius_norm, 14, const_tuple_str_plain_x_str_plain_sqnorm_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2e16ca200379924af5bf3d42358ec420 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_norm, 22, const_tuple_036aac65cf5fca4fed4aa7fdb9f6c9a8_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_norm$$$function_1__sparse_frobenius_norm(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_norm$$$function_2_norm( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$sparse$linalg$_norm$$$function_1__sparse_frobenius_norm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_sqnorm = NULL;
    struct Nuitka_FrameObject *frame_19ebb4d920c07ebf50b7fd4ae5e86292;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_19ebb4d920c07ebf50b7fd4ae5e86292 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_19ebb4d920c07ebf50b7fd4ae5e86292, codeobj_19ebb4d920c07ebf50b7fd4ae5e86292, module_scipy$sparse$linalg$_norm, sizeof(void *)+sizeof(void *) );
    frame_19ebb4d920c07ebf50b7fd4ae5e86292 = cache_frame_19ebb4d920c07ebf50b7fd4ae5e86292;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_19ebb4d920c07ebf50b7fd4ae5e86292 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_19ebb4d920c07ebf50b7fd4ae5e86292 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 15;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_issubdtype );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_source_name_2 = par_x;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 15;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 15;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_complexfloating );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 15;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_19ebb4d920c07ebf50b7fd4ae5e86292->m_frame.f_lineno = 15;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 15;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_abs );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abs );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abs" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 16;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_3 = par_x;
            frame_19ebb4d920c07ebf50b7fd4ae5e86292->m_frame.f_lineno = 16;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_called_instance_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 16;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_19ebb4d920c07ebf50b7fd4ae5e86292->m_frame.f_lineno = 16;
            tmp_called_instance_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_power, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 16;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_19ebb4d920c07ebf50b7fd4ae5e86292->m_frame.f_lineno = 16;
            tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_sum );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 16;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert( var_sqnorm == NULL );
            var_sqnorm = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT( par_x );
            tmp_called_instance_4 = par_x;
            frame_19ebb4d920c07ebf50b7fd4ae5e86292->m_frame.f_lineno = 18;
            tmp_called_instance_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_power, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_19ebb4d920c07ebf50b7fd4ae5e86292->m_frame.f_lineno = 18;
            tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_sum );
            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert( var_sqnorm == NULL );
            var_sqnorm = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_sqrt );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sqrt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( var_sqnorm );
        tmp_args_element_name_4 = var_sqnorm;
        frame_19ebb4d920c07ebf50b7fd4ae5e86292->m_frame.f_lineno = 19;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19ebb4d920c07ebf50b7fd4ae5e86292 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_19ebb4d920c07ebf50b7fd4ae5e86292 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19ebb4d920c07ebf50b7fd4ae5e86292 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_19ebb4d920c07ebf50b7fd4ae5e86292, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_19ebb4d920c07ebf50b7fd4ae5e86292->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_19ebb4d920c07ebf50b7fd4ae5e86292, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_19ebb4d920c07ebf50b7fd4ae5e86292,
        type_description_1,
        par_x,
        var_sqnorm
    );


    // Release cached frame.
    if ( frame_19ebb4d920c07ebf50b7fd4ae5e86292 == cache_frame_19ebb4d920c07ebf50b7fd4ae5e86292 )
    {
        Py_DECREF( frame_19ebb4d920c07ebf50b7fd4ae5e86292 );
    }
    cache_frame_19ebb4d920c07ebf50b7fd4ae5e86292 = NULL;

    assertFrameObject( frame_19ebb4d920c07ebf50b7fd4ae5e86292 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_norm$$$function_1__sparse_frobenius_norm );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)var_sqnorm );
    Py_DECREF( var_sqnorm );
    var_sqnorm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_sqnorm );
    var_sqnorm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_norm$$$function_1__sparse_frobenius_norm );
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


static PyObject *impl_scipy$sparse$linalg$_norm$$$function_2_norm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_ord = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *var_int_axis = NULL;
    PyObject *var_row_axis = NULL;
    PyObject *var_col_axis = NULL;
    PyObject *var_a = NULL;
    PyObject *var_M = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_2__comparison_result = NULL;
    PyObject *tmp_comparison_chain_2__operand_2 = NULL;
    PyObject *tmp_comparison_chain_3__comparison_result = NULL;
    PyObject *tmp_comparison_chain_3__operand_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2e16ca200379924af5bf3d42358ec420;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
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
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    static struct Nuitka_FrameObject *cache_frame_2e16ca200379924af5bf3d42358ec420 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2e16ca200379924af5bf3d42358ec420, codeobj_2e16ca200379924af5bf3d42358ec420, module_scipy$sparse$linalg$_norm, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2e16ca200379924af5bf3d42358ec420 = cache_frame_2e16ca200379924af5bf3d42358ec420;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2e16ca200379924af5bf3d42358ec420 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2e16ca200379924af5bf3d42358ec420 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_issparse );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issparse );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "issparse" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 110;
            type_description_1 = "oooNoNoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 110;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "oooNoNoooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "oooNoNoooo";
            goto frame_exception_exit_1;
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
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_f6022e7e13cc3e1bedffe67c0d23e0e2;
            frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 111;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 111;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooNoNoooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_axis );
        tmp_compexpr_left_1 = par_axis;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_ord );
        tmp_compexpr_left_2 = par_ord;
        tmp_compexpr_right_2 = const_tuple_none_str_plain_fro_str_plain_f_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "oooNoNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain__sparse_frobenius_norm );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sparse_frobenius_norm );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_sparse_frobenius_norm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 115;
                type_description_1 = "oooNoNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_2 = par_x;
            frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 115;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 115;
                type_description_1 = "oooNoNoooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_x );
        tmp_called_instance_1 = par_x;
        frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 118;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_tocsr );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "oooNoNoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_axis );
        tmp_compexpr_left_3 = par_axis;
        tmp_compexpr_right_3 = Py_None;
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
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = const_tuple_int_0_int_pos_1_tuple;
            {
                PyObject *old = par_axis;
                assert( old != NULL );
                par_axis = tmp_assign_source_2;
                Py_INCREF( par_axis );
                Py_DECREF( old );
            }

        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            CHECK_OBJECT( par_axis );
            tmp_isinstance_inst_1 = par_axis;
            tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 122;
                type_description_1 = "oooNoNoooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 122;
                type_description_1 = "oooNoNoooo";
                goto frame_exception_exit_1;
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
            // Tried code:
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_int_arg_1;
                CHECK_OBJECT( par_axis );
                tmp_int_arg_1 = par_axis;
                tmp_assign_source_3 = PyNumber_Int( tmp_int_arg_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 125;
                    type_description_1 = "oooNoNoooo";
                    goto try_except_handler_2;
                }
                assert( var_int_axis == NULL );
                var_int_axis = tmp_assign_source_3;
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
                exception_keeper_tb_1 = MAKE_TRACEBACK( frame_2e16ca200379924af5bf3d42358ec420, exception_keeper_lineno_1 );
            }
            else if ( exception_keeper_lineno_1 != 0 )
            {
                exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_2e16ca200379924af5bf3d42358ec420, exception_keeper_lineno_1 );
            }

            NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
            PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
            PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
            // Tried code:
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_4 = PyExc_TypeError;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 126;
                    type_description_1 = "oooNoNoooo";
                    goto try_except_handler_3;
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
                {
                    PyObject *tmp_raise_type_2;
                    PyObject *tmp_make_exception_arg_2;
                    tmp_make_exception_arg_2 = const_str_digest_ca2ef5505424b1a807beaf8cdc9df517;
                    frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 127;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_2 };
                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                    }

                    assert( !(tmp_raise_type_2 == NULL) );
                    exception_type = tmp_raise_type_2;
                    exception_lineno = 127;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooNoNoooo";
                    goto try_except_handler_3;
                }
                goto branch_end_5;
                branch_no_5:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 124;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_2e16ca200379924af5bf3d42358ec420->m_frame) frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooNoNoooo";
                goto try_except_handler_3;
                branch_end_5:;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_norm$$$function_2_norm );
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
            {
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                CHECK_OBJECT( par_axis );
                tmp_compexpr_left_5 = par_axis;
                CHECK_OBJECT( var_int_axis );
                tmp_compexpr_right_5 = var_int_axis;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 128;
                    type_description_1 = "oooNoNoooo";
                    goto frame_exception_exit_1;
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
                    PyObject *tmp_raise_type_3;
                    PyObject *tmp_make_exception_arg_3;
                    tmp_make_exception_arg_3 = const_str_digest_ca2ef5505424b1a807beaf8cdc9df517;
                    frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 129;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_3 };
                        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                    }

                    assert( !(tmp_raise_type_3 == NULL) );
                    exception_type = tmp_raise_type_3;
                    exception_lineno = 129;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooNoNoooo";
                    goto frame_exception_exit_1;
                }
                branch_no_6:;
            }
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_tuple_element_1;
                CHECK_OBJECT( var_int_axis );
                tmp_tuple_element_1 = var_int_axis;
                tmp_assign_source_4 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_assign_source_4, 0, tmp_tuple_element_1 );
                {
                    PyObject *old = par_axis;
                    assert( old != NULL );
                    par_axis = tmp_assign_source_4;
                    Py_DECREF( old );
                }

            }
            branch_no_4:;
        }
        branch_end_3:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_len_arg_1;
        if ( par_axis == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "axis" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 133;
            type_description_1 = "oooNoNoooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = par_axis;
        tmp_compexpr_left_6 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "oooNoNoooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_6 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        assert( !(tmp_res == -1) );
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            if ( par_axis == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "axis" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 134;
                type_description_1 = "oooNoNoooo";
                goto try_except_handler_4;
            }

            tmp_iter_arg_1 = par_axis;
            tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 134;
                type_description_1 = "oooNoNoooo";
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
            if ( tmp_assign_source_6 == NULL )
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


                type_description_1 = "oooNoNoooo";
                exception_lineno = 134;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
            if ( tmp_assign_source_7 == NULL )
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


                type_description_1 = "oooNoNoooo";
                exception_lineno = 134;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                        type_description_1 = "oooNoNoooo";
                        exception_lineno = 134;
                        goto try_except_handler_5;
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

                type_description_1 = "oooNoNoooo";
                exception_lineno = 134;
                goto try_except_handler_5;
            }
        }
        goto try_end_2;
        // Exception handler code:
        try_except_handler_5:;
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

        goto try_except_handler_4;
        // End of try:
        try_end_2:;
        goto try_end_3;
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
        try_end_3:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
            assert( var_row_axis == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_row_axis = tmp_assign_source_8;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
            assert( var_col_axis == NULL );
            Py_INCREF( tmp_assign_source_9 );
            var_col_axis = tmp_assign_source_9;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_operand_name_3;
            int tmp_and_left_truth_2;
            PyObject *tmp_and_left_value_2;
            PyObject *tmp_and_right_value_2;
            {
                PyObject *tmp_assign_source_10;
                CHECK_OBJECT( var_row_axis );
                tmp_assign_source_10 = var_row_axis;
                assert( tmp_comparison_chain_1__operand_2 == NULL );
                Py_INCREF( tmp_assign_source_10 );
                tmp_comparison_chain_1__operand_2 = tmp_assign_source_10;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_11;
                PyObject *tmp_compexpr_left_7;
                PyObject *tmp_compexpr_right_7;
                tmp_compexpr_left_7 = const_int_neg_2;
                CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
                tmp_compexpr_right_7 = tmp_comparison_chain_1__operand_2;
                tmp_assign_source_11 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
                if ( tmp_assign_source_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 135;
                    type_description_1 = "oooNoNoooo";
                    goto try_except_handler_6;
                }
                assert( tmp_comparison_chain_1__comparison_result == NULL );
                tmp_comparison_chain_1__comparison_result = tmp_assign_source_11;
            }
            {
                nuitka_bool tmp_condition_result_9;
                PyObject *tmp_operand_name_4;
                CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
                tmp_operand_name_4 = tmp_comparison_chain_1__comparison_result;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 135;
                    type_description_1 = "oooNoNoooo";
                    goto try_except_handler_6;
                }
                tmp_condition_result_9 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_9;
                }
                else
                {
                    goto branch_no_9;
                }
                branch_yes_9:;
                CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
                tmp_and_left_value_2 = tmp_comparison_chain_1__comparison_result;
                Py_INCREF( tmp_and_left_value_2 );
                goto try_return_handler_6;
                branch_no_9:;
            }
            {
                PyObject *tmp_compexpr_left_8;
                PyObject *tmp_compexpr_right_8;
                CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
                tmp_compexpr_left_8 = tmp_comparison_chain_1__operand_2;
                tmp_compexpr_right_8 = const_int_pos_2;
                tmp_and_left_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
                if ( tmp_and_left_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 135;
                    type_description_1 = "oooNoNoooo";
                    goto try_except_handler_6;
                }
                goto try_return_handler_6;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_norm$$$function_2_norm );
            return NULL;
            // Return handler code:
            try_return_handler_6:;
            CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
            Py_DECREF( tmp_comparison_chain_1__operand_2 );
            tmp_comparison_chain_1__operand_2 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__comparison_result );
            Py_DECREF( tmp_comparison_chain_1__comparison_result );
            tmp_comparison_chain_1__comparison_result = NULL;

            goto outline_result_1;
            // Exception handler code:
            try_except_handler_6:;
            exception_keeper_type_5 = exception_type;
            exception_keeper_value_5 = exception_value;
            exception_keeper_tb_5 = exception_tb;
            exception_keeper_lineno_5 = exception_lineno;
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
            exception_type = exception_keeper_type_5;
            exception_value = exception_keeper_value_5;
            exception_tb = exception_keeper_tb_5;
            exception_lineno = exception_keeper_lineno_5;

            goto frame_exception_exit_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_norm$$$function_2_norm );
            return NULL;
            outline_result_1:;
            tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
            if ( tmp_and_left_truth_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_and_left_value_2 );

                exception_lineno = 135;
                type_description_1 = "oooNoNoooo";
                goto frame_exception_exit_1;
            }
            if ( tmp_and_left_truth_2 == 1 )
            {
                goto and_right_2;
            }
            else
            {
                goto and_left_2;
            }
            and_right_2:;
            Py_DECREF( tmp_and_left_value_2 );
            {
                PyObject *tmp_assign_source_12;
                CHECK_OBJECT( var_col_axis );
                tmp_assign_source_12 = var_col_axis;
                assert( tmp_comparison_chain_2__operand_2 == NULL );
                Py_INCREF( tmp_assign_source_12 );
                tmp_comparison_chain_2__operand_2 = tmp_assign_source_12;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_compexpr_left_9;
                PyObject *tmp_compexpr_right_9;
                tmp_compexpr_left_9 = const_int_neg_2;
                CHECK_OBJECT( tmp_comparison_chain_2__operand_2 );
                tmp_compexpr_right_9 = tmp_comparison_chain_2__operand_2;
                tmp_assign_source_13 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 135;
                    type_description_1 = "oooNoNoooo";
                    goto try_except_handler_7;
                }
                assert( tmp_comparison_chain_2__comparison_result == NULL );
                tmp_comparison_chain_2__comparison_result = tmp_assign_source_13;
            }
            {
                nuitka_bool tmp_condition_result_10;
                PyObject *tmp_operand_name_5;
                CHECK_OBJECT( tmp_comparison_chain_2__comparison_result );
                tmp_operand_name_5 = tmp_comparison_chain_2__comparison_result;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 135;
                    type_description_1 = "oooNoNoooo";
                    goto try_except_handler_7;
                }
                tmp_condition_result_10 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_10;
                }
                else
                {
                    goto branch_no_10;
                }
                branch_yes_10:;
                CHECK_OBJECT( tmp_comparison_chain_2__comparison_result );
                tmp_and_right_value_2 = tmp_comparison_chain_2__comparison_result;
                Py_INCREF( tmp_and_right_value_2 );
                goto try_return_handler_7;
                branch_no_10:;
            }
            {
                PyObject *tmp_compexpr_left_10;
                PyObject *tmp_compexpr_right_10;
                CHECK_OBJECT( tmp_comparison_chain_2__operand_2 );
                tmp_compexpr_left_10 = tmp_comparison_chain_2__operand_2;
                tmp_compexpr_right_10 = const_int_pos_2;
                tmp_and_right_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
                if ( tmp_and_right_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 135;
                    type_description_1 = "oooNoNoooo";
                    goto try_except_handler_7;
                }
                goto try_return_handler_7;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_norm$$$function_2_norm );
            return NULL;
            // Return handler code:
            try_return_handler_7:;
            CHECK_OBJECT( (PyObject *)tmp_comparison_chain_2__operand_2 );
            Py_DECREF( tmp_comparison_chain_2__operand_2 );
            tmp_comparison_chain_2__operand_2 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_comparison_chain_2__comparison_result );
            Py_DECREF( tmp_comparison_chain_2__comparison_result );
            tmp_comparison_chain_2__comparison_result = NULL;

            goto outline_result_2;
            // Exception handler code:
            try_except_handler_7:;
            exception_keeper_type_6 = exception_type;
            exception_keeper_value_6 = exception_value;
            exception_keeper_tb_6 = exception_tb;
            exception_keeper_lineno_6 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_comparison_chain_2__operand_2 );
            Py_DECREF( tmp_comparison_chain_2__operand_2 );
            tmp_comparison_chain_2__operand_2 = NULL;

            Py_XDECREF( tmp_comparison_chain_2__comparison_result );
            tmp_comparison_chain_2__comparison_result = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_6;
            exception_value = exception_keeper_value_6;
            exception_tb = exception_keeper_tb_6;
            exception_lineno = exception_keeper_lineno_6;

            goto frame_exception_exit_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_norm$$$function_2_norm );
            return NULL;
            outline_result_2:;
            tmp_operand_name_3 = tmp_and_right_value_2;
            goto and_end_2;
            and_left_2:;
            tmp_operand_name_3 = tmp_and_left_value_2;
            and_end_2:;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            Py_DECREF( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "oooNoNoooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_8 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_8;
            }
            else
            {
                goto branch_no_8;
            }
            branch_yes_8:;
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_make_exception_arg_4;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_source_name_1;
                tmp_left_name_1 = const_str_digest_0bac5fb6f35a68d345bbba96c87835bc;
                if ( par_axis == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "axis" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 137;
                    type_description_1 = "oooNoNoooo";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_2 = par_axis;
                tmp_right_name_1 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( par_x );
                tmp_source_name_1 = par_x;
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 137;
                    type_description_1 = "oooNoNoooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
                tmp_make_exception_arg_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_make_exception_arg_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 136;
                    type_description_1 = "oooNoNoooo";
                    goto frame_exception_exit_1;
                }
                frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 136;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_4 };
                    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_4 );
                assert( !(tmp_raise_type_4 == NULL) );
                exception_type = tmp_raise_type_4;
                exception_lineno = 136;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooNoNoooo";
                goto frame_exception_exit_1;
            }
            branch_no_8:;
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_compexpr_left_11;
            PyObject *tmp_compexpr_right_11;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( var_row_axis );
            tmp_left_name_2 = var_row_axis;
            tmp_right_name_2 = const_int_pos_2;
            tmp_compexpr_left_11 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_compexpr_left_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "oooNoNoooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_col_axis );
            tmp_left_name_3 = var_col_axis;
            tmp_right_name_3 = const_int_pos_2;
            tmp_compexpr_right_11 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_compexpr_right_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_11 );

                exception_lineno = 138;
                type_description_1 = "oooNoNoooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
            Py_DECREF( tmp_compexpr_left_11 );
            Py_DECREF( tmp_compexpr_right_11 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "oooNoNoooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_11;
            }
            else
            {
                goto branch_no_11;
            }
            branch_yes_11:;
            {
                PyObject *tmp_raise_type_5;
                PyObject *tmp_make_exception_arg_5;
                tmp_make_exception_arg_5 = const_str_digest_84736f963014490d0da3ef2c4df92388;
                frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 139;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_5 };
                    tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_5 == NULL) );
                exception_type = tmp_raise_type_5;
                exception_lineno = 139;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooNoNoooo";
                goto frame_exception_exit_1;
            }
            branch_no_11:;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_12;
            PyObject *tmp_compexpr_right_12;
            CHECK_OBJECT( par_ord );
            tmp_compexpr_left_12 = par_ord;
            tmp_compexpr_right_12 = const_int_pos_2;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 140;
                type_description_1 = "oooNoNoooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_12;
            }
            else
            {
                goto branch_no_12;
            }
            branch_yes_12:;
            {
                PyObject *tmp_raise_type_6;
                tmp_raise_type_6 = PyExc_NotImplementedError;
                exception_type = tmp_raise_type_6;
                Py_INCREF( tmp_raise_type_6 );
                exception_lineno = 141;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooNoNoooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_12;
            branch_no_12:;
            {
                nuitka_bool tmp_condition_result_13;
                PyObject *tmp_compexpr_left_13;
                PyObject *tmp_compexpr_right_13;
                CHECK_OBJECT( par_ord );
                tmp_compexpr_left_13 = par_ord;
                tmp_compexpr_right_13 = const_int_neg_2;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 143;
                    type_description_1 = "oooNoNoooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_13;
                }
                else
                {
                    goto branch_no_13;
                }
                branch_yes_13:;
                {
                    PyObject *tmp_raise_type_7;
                    tmp_raise_type_7 = PyExc_NotImplementedError;
                    exception_type = tmp_raise_type_7;
                    Py_INCREF( tmp_raise_type_7 );
                    exception_lineno = 144;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooNoNoooo";
                    goto frame_exception_exit_1;
                }
                goto branch_end_13;
                branch_no_13:;
                {
                    nuitka_bool tmp_condition_result_14;
                    PyObject *tmp_compexpr_left_14;
                    PyObject *tmp_compexpr_right_14;
                    CHECK_OBJECT( par_ord );
                    tmp_compexpr_left_14 = par_ord;
                    tmp_compexpr_right_14 = const_int_pos_1;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 146;
                        type_description_1 = "oooNoNoooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_14;
                    }
                    else
                    {
                        goto branch_no_14;
                    }
                    branch_yes_14:;
                    {
                        PyObject *tmp_subscribed_name_1;
                        PyObject *tmp_called_name_3;
                        PyObject *tmp_source_name_2;
                        PyObject *tmp_called_name_4;
                        PyObject *tmp_source_name_3;
                        PyObject *tmp_called_name_5;
                        PyObject *tmp_mvar_value_3;
                        PyObject *tmp_args_element_name_3;
                        PyObject *tmp_kw_name_1;
                        PyObject *tmp_dict_key_1;
                        PyObject *tmp_dict_value_1;
                        PyObject *tmp_kw_name_2;
                        PyObject *tmp_dict_key_2;
                        PyObject *tmp_dict_value_2;
                        PyObject *tmp_subscript_name_1;
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_abs );

                        if (unlikely( tmp_mvar_value_3 == NULL ))
                        {
                            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abs );
                        }

                        if ( tmp_mvar_value_3 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abs" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 147;
                            type_description_1 = "oooNoNoooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_5 = tmp_mvar_value_3;
                        CHECK_OBJECT( par_x );
                        tmp_args_element_name_3 = par_x;
                        frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 147;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_3 };
                            tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
                        }

                        if ( tmp_source_name_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 147;
                            type_description_1 = "oooNoNoooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sum );
                        Py_DECREF( tmp_source_name_3 );
                        if ( tmp_called_name_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 147;
                            type_description_1 = "oooNoNoooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_dict_key_1 = const_str_plain_axis;
                        CHECK_OBJECT( var_row_axis );
                        tmp_dict_value_1 = var_row_axis;
                        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
                        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                        assert( !(tmp_res != 0) );
                        frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 147;
                        tmp_source_name_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_1 );
                        Py_DECREF( tmp_called_name_4 );
                        Py_DECREF( tmp_kw_name_1 );
                        if ( tmp_source_name_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 147;
                            type_description_1 = "oooNoNoooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_max );
                        Py_DECREF( tmp_source_name_2 );
                        if ( tmp_called_name_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 147;
                            type_description_1 = "oooNoNoooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_dict_key_2 = const_str_plain_axis;
                        CHECK_OBJECT( var_col_axis );
                        tmp_dict_value_2 = var_col_axis;
                        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
                        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
                        assert( !(tmp_res != 0) );
                        frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 147;
                        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
                        Py_DECREF( tmp_called_name_3 );
                        Py_DECREF( tmp_kw_name_2 );
                        if ( tmp_subscribed_name_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 147;
                            type_description_1 = "oooNoNoooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_subscript_name_1 = const_tuple_int_0_int_0_tuple;
                        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                        Py_DECREF( tmp_subscribed_name_1 );
                        if ( tmp_return_value == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 147;
                            type_description_1 = "oooNoNoooo";
                            goto frame_exception_exit_1;
                        }
                        goto frame_return_exit_1;
                    }
                    goto branch_end_14;
                    branch_no_14:;
                    {
                        nuitka_bool tmp_condition_result_15;
                        PyObject *tmp_compexpr_left_15;
                        PyObject *tmp_compexpr_right_15;
                        PyObject *tmp_mvar_value_4;
                        CHECK_OBJECT( par_ord );
                        tmp_compexpr_left_15 = par_ord;
                        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_Inf );

                        if (unlikely( tmp_mvar_value_4 == NULL ))
                        {
                            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
                        }

                        if ( tmp_mvar_value_4 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Inf" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 148;
                            type_description_1 = "oooNoNoooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_compexpr_right_15 = tmp_mvar_value_4;
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 148;
                            type_description_1 = "oooNoNoooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
                        {
                            goto branch_yes_15;
                        }
                        else
                        {
                            goto branch_no_15;
                        }
                        branch_yes_15:;
                        {
                            PyObject *tmp_subscribed_name_2;
                            PyObject *tmp_called_name_6;
                            PyObject *tmp_source_name_4;
                            PyObject *tmp_called_name_7;
                            PyObject *tmp_source_name_5;
                            PyObject *tmp_called_name_8;
                            PyObject *tmp_mvar_value_5;
                            PyObject *tmp_args_element_name_4;
                            PyObject *tmp_kw_name_3;
                            PyObject *tmp_dict_key_3;
                            PyObject *tmp_dict_value_3;
                            PyObject *tmp_kw_name_4;
                            PyObject *tmp_dict_key_4;
                            PyObject *tmp_dict_value_4;
                            PyObject *tmp_subscript_name_2;
                            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_abs );

                            if (unlikely( tmp_mvar_value_5 == NULL ))
                            {
                                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abs );
                            }

                            if ( tmp_mvar_value_5 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abs" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 149;
                                type_description_1 = "oooNoNoooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_called_name_8 = tmp_mvar_value_5;
                            CHECK_OBJECT( par_x );
                            tmp_args_element_name_4 = par_x;
                            frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 149;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_4 };
                                tmp_source_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                            }

                            if ( tmp_source_name_5 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 149;
                                type_description_1 = "oooNoNoooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_sum );
                            Py_DECREF( tmp_source_name_5 );
                            if ( tmp_called_name_7 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 149;
                                type_description_1 = "oooNoNoooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_dict_key_3 = const_str_plain_axis;
                            CHECK_OBJECT( var_col_axis );
                            tmp_dict_value_3 = var_col_axis;
                            tmp_kw_name_3 = _PyDict_NewPresized( 1 );
                            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
                            assert( !(tmp_res != 0) );
                            frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 149;
                            tmp_source_name_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_7, tmp_kw_name_3 );
                            Py_DECREF( tmp_called_name_7 );
                            Py_DECREF( tmp_kw_name_3 );
                            if ( tmp_source_name_4 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 149;
                                type_description_1 = "oooNoNoooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_max );
                            Py_DECREF( tmp_source_name_4 );
                            if ( tmp_called_name_6 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 149;
                                type_description_1 = "oooNoNoooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_dict_key_4 = const_str_plain_axis;
                            CHECK_OBJECT( var_row_axis );
                            tmp_dict_value_4 = var_row_axis;
                            tmp_kw_name_4 = _PyDict_NewPresized( 1 );
                            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_4, tmp_dict_value_4 );
                            assert( !(tmp_res != 0) );
                            frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 149;
                            tmp_subscribed_name_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_6, tmp_kw_name_4 );
                            Py_DECREF( tmp_called_name_6 );
                            Py_DECREF( tmp_kw_name_4 );
                            if ( tmp_subscribed_name_2 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 149;
                                type_description_1 = "oooNoNoooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_subscript_name_2 = const_tuple_int_0_int_0_tuple;
                            tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                            Py_DECREF( tmp_subscribed_name_2 );
                            if ( tmp_return_value == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 149;
                                type_description_1 = "oooNoNoooo";
                                goto frame_exception_exit_1;
                            }
                            goto frame_return_exit_1;
                        }
                        goto branch_end_15;
                        branch_no_15:;
                        {
                            nuitka_bool tmp_condition_result_16;
                            PyObject *tmp_compexpr_left_16;
                            PyObject *tmp_compexpr_right_16;
                            CHECK_OBJECT( par_ord );
                            tmp_compexpr_left_16 = par_ord;
                            tmp_compexpr_right_16 = const_int_neg_1;
                            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_16, tmp_compexpr_right_16 );
                            if ( tmp_res == -1 )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 150;
                                type_description_1 = "oooNoNoooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_condition_result_16 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                            if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
                            {
                                goto branch_yes_16;
                            }
                            else
                            {
                                goto branch_no_16;
                            }
                            branch_yes_16:;
                            {
                                PyObject *tmp_subscribed_name_3;
                                PyObject *tmp_called_name_9;
                                PyObject *tmp_source_name_6;
                                PyObject *tmp_called_name_10;
                                PyObject *tmp_source_name_7;
                                PyObject *tmp_called_name_11;
                                PyObject *tmp_mvar_value_6;
                                PyObject *tmp_args_element_name_5;
                                PyObject *tmp_kw_name_5;
                                PyObject *tmp_dict_key_5;
                                PyObject *tmp_dict_value_5;
                                PyObject *tmp_kw_name_6;
                                PyObject *tmp_dict_key_6;
                                PyObject *tmp_dict_value_6;
                                PyObject *tmp_subscript_name_3;
                                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_abs );

                                if (unlikely( tmp_mvar_value_6 == NULL ))
                                {
                                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abs );
                                }

                                if ( tmp_mvar_value_6 == NULL )
                                {

                                    exception_type = PyExc_NameError;
                                    Py_INCREF( exception_type );
                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abs" );
                                    exception_tb = NULL;
                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                    CHAIN_EXCEPTION( exception_value );

                                    exception_lineno = 151;
                                    type_description_1 = "oooNoNoooo";
                                    goto frame_exception_exit_1;
                                }

                                tmp_called_name_11 = tmp_mvar_value_6;
                                CHECK_OBJECT( par_x );
                                tmp_args_element_name_5 = par_x;
                                frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 151;
                                {
                                    PyObject *call_args[] = { tmp_args_element_name_5 };
                                    tmp_source_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
                                }

                                if ( tmp_source_name_7 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 151;
                                    type_description_1 = "oooNoNoooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_sum );
                                Py_DECREF( tmp_source_name_7 );
                                if ( tmp_called_name_10 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 151;
                                    type_description_1 = "oooNoNoooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_dict_key_5 = const_str_plain_axis;
                                CHECK_OBJECT( var_row_axis );
                                tmp_dict_value_5 = var_row_axis;
                                tmp_kw_name_5 = _PyDict_NewPresized( 1 );
                                tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_5, tmp_dict_value_5 );
                                assert( !(tmp_res != 0) );
                                frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 151;
                                tmp_source_name_6 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_10, tmp_kw_name_5 );
                                Py_DECREF( tmp_called_name_10 );
                                Py_DECREF( tmp_kw_name_5 );
                                if ( tmp_source_name_6 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 151;
                                    type_description_1 = "oooNoNoooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_min );
                                Py_DECREF( tmp_source_name_6 );
                                if ( tmp_called_name_9 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 151;
                                    type_description_1 = "oooNoNoooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_dict_key_6 = const_str_plain_axis;
                                CHECK_OBJECT( var_col_axis );
                                tmp_dict_value_6 = var_col_axis;
                                tmp_kw_name_6 = _PyDict_NewPresized( 1 );
                                tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_6, tmp_dict_value_6 );
                                assert( !(tmp_res != 0) );
                                frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 151;
                                tmp_subscribed_name_3 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_9, tmp_kw_name_6 );
                                Py_DECREF( tmp_called_name_9 );
                                Py_DECREF( tmp_kw_name_6 );
                                if ( tmp_subscribed_name_3 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 151;
                                    type_description_1 = "oooNoNoooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_subscript_name_3 = const_tuple_int_0_int_0_tuple;
                                tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                                Py_DECREF( tmp_subscribed_name_3 );
                                if ( tmp_return_value == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 151;
                                    type_description_1 = "oooNoNoooo";
                                    goto frame_exception_exit_1;
                                }
                                goto frame_return_exit_1;
                            }
                            goto branch_end_16;
                            branch_no_16:;
                            {
                                nuitka_bool tmp_condition_result_17;
                                PyObject *tmp_compexpr_left_17;
                                PyObject *tmp_compexpr_right_17;
                                PyObject *tmp_operand_name_6;
                                PyObject *tmp_mvar_value_7;
                                CHECK_OBJECT( par_ord );
                                tmp_compexpr_left_17 = par_ord;
                                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_Inf );

                                if (unlikely( tmp_mvar_value_7 == NULL ))
                                {
                                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
                                }

                                if ( tmp_mvar_value_7 == NULL )
                                {

                                    exception_type = PyExc_NameError;
                                    Py_INCREF( exception_type );
                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Inf" );
                                    exception_tb = NULL;
                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                    CHAIN_EXCEPTION( exception_value );

                                    exception_lineno = 152;
                                    type_description_1 = "oooNoNoooo";
                                    goto frame_exception_exit_1;
                                }

                                tmp_operand_name_6 = tmp_mvar_value_7;
                                tmp_compexpr_right_17 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_6 );
                                if ( tmp_compexpr_right_17 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 152;
                                    type_description_1 = "oooNoNoooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_17, tmp_compexpr_right_17 );
                                Py_DECREF( tmp_compexpr_right_17 );
                                if ( tmp_res == -1 )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 152;
                                    type_description_1 = "oooNoNoooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_condition_result_17 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
                                {
                                    goto branch_yes_17;
                                }
                                else
                                {
                                    goto branch_no_17;
                                }
                                branch_yes_17:;
                                {
                                    PyObject *tmp_subscribed_name_4;
                                    PyObject *tmp_called_name_12;
                                    PyObject *tmp_source_name_8;
                                    PyObject *tmp_called_name_13;
                                    PyObject *tmp_source_name_9;
                                    PyObject *tmp_called_name_14;
                                    PyObject *tmp_mvar_value_8;
                                    PyObject *tmp_args_element_name_6;
                                    PyObject *tmp_kw_name_7;
                                    PyObject *tmp_dict_key_7;
                                    PyObject *tmp_dict_value_7;
                                    PyObject *tmp_kw_name_8;
                                    PyObject *tmp_dict_key_8;
                                    PyObject *tmp_dict_value_8;
                                    PyObject *tmp_subscript_name_4;
                                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_abs );

                                    if (unlikely( tmp_mvar_value_8 == NULL ))
                                    {
                                        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abs );
                                    }

                                    if ( tmp_mvar_value_8 == NULL )
                                    {

                                        exception_type = PyExc_NameError;
                                        Py_INCREF( exception_type );
                                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abs" );
                                        exception_tb = NULL;
                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                        CHAIN_EXCEPTION( exception_value );

                                        exception_lineno = 153;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }

                                    tmp_called_name_14 = tmp_mvar_value_8;
                                    CHECK_OBJECT( par_x );
                                    tmp_args_element_name_6 = par_x;
                                    frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 153;
                                    {
                                        PyObject *call_args[] = { tmp_args_element_name_6 };
                                        tmp_source_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
                                    }

                                    if ( tmp_source_name_9 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 153;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_sum );
                                    Py_DECREF( tmp_source_name_9 );
                                    if ( tmp_called_name_13 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 153;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_dict_key_7 = const_str_plain_axis;
                                    CHECK_OBJECT( var_col_axis );
                                    tmp_dict_value_7 = var_col_axis;
                                    tmp_kw_name_7 = _PyDict_NewPresized( 1 );
                                    tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_7, tmp_dict_value_7 );
                                    assert( !(tmp_res != 0) );
                                    frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 153;
                                    tmp_source_name_8 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_13, tmp_kw_name_7 );
                                    Py_DECREF( tmp_called_name_13 );
                                    Py_DECREF( tmp_kw_name_7 );
                                    if ( tmp_source_name_8 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 153;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_min );
                                    Py_DECREF( tmp_source_name_8 );
                                    if ( tmp_called_name_12 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 153;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_dict_key_8 = const_str_plain_axis;
                                    CHECK_OBJECT( var_row_axis );
                                    tmp_dict_value_8 = var_row_axis;
                                    tmp_kw_name_8 = _PyDict_NewPresized( 1 );
                                    tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_8, tmp_dict_value_8 );
                                    assert( !(tmp_res != 0) );
                                    frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 153;
                                    tmp_subscribed_name_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_12, tmp_kw_name_8 );
                                    Py_DECREF( tmp_called_name_12 );
                                    Py_DECREF( tmp_kw_name_8 );
                                    if ( tmp_subscribed_name_4 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 153;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_subscript_name_4 = const_tuple_int_0_int_0_tuple;
                                    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                                    Py_DECREF( tmp_subscribed_name_4 );
                                    if ( tmp_return_value == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 153;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    goto frame_return_exit_1;
                                }
                                goto branch_end_17;
                                branch_no_17:;
                                {
                                    nuitka_bool tmp_condition_result_18;
                                    PyObject *tmp_compexpr_left_18;
                                    PyObject *tmp_compexpr_right_18;
                                    CHECK_OBJECT( par_ord );
                                    tmp_compexpr_left_18 = par_ord;
                                    tmp_compexpr_right_18 = const_tuple_none_str_plain_f_str_plain_fro_tuple;
                                    tmp_res = PySequence_Contains( tmp_compexpr_right_18, tmp_compexpr_left_18 );
                                    if ( tmp_res == -1 )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 154;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_condition_result_18 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                    if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
                                    {
                                        goto branch_yes_18;
                                    }
                                    else
                                    {
                                        goto branch_no_18;
                                    }
                                    branch_yes_18:;
                                    {
                                        PyObject *tmp_called_name_15;
                                        PyObject *tmp_mvar_value_9;
                                        PyObject *tmp_args_element_name_7;
                                        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain__sparse_frobenius_norm );

                                        if (unlikely( tmp_mvar_value_9 == NULL ))
                                        {
                                            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sparse_frobenius_norm );
                                        }

                                        if ( tmp_mvar_value_9 == NULL )
                                        {

                                            exception_type = PyExc_NameError;
                                            Py_INCREF( exception_type );
                                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_sparse_frobenius_norm" );
                                            exception_tb = NULL;
                                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                            CHAIN_EXCEPTION( exception_value );

                                            exception_lineno = 156;
                                            type_description_1 = "oooNoNoooo";
                                            goto frame_exception_exit_1;
                                        }

                                        tmp_called_name_15 = tmp_mvar_value_9;
                                        CHECK_OBJECT( par_x );
                                        tmp_args_element_name_7 = par_x;
                                        frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 156;
                                        {
                                            PyObject *call_args[] = { tmp_args_element_name_7 };
                                            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
                                        }

                                        if ( tmp_return_value == NULL )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 156;
                                            type_description_1 = "oooNoNoooo";
                                            goto frame_exception_exit_1;
                                        }
                                        goto frame_return_exit_1;
                                    }
                                    goto branch_end_18;
                                    branch_no_18:;
                                    {
                                        PyObject *tmp_raise_type_8;
                                        PyObject *tmp_make_exception_arg_6;
                                        tmp_make_exception_arg_6 = const_str_digest_587a514b13573399177b42819fa4b37c;
                                        frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 158;
                                        {
                                            PyObject *call_args[] = { tmp_make_exception_arg_6 };
                                            tmp_raise_type_8 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                                        }

                                        assert( !(tmp_raise_type_8 == NULL) );
                                        exception_type = tmp_raise_type_8;
                                        exception_lineno = 158;
                                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    branch_end_18:;
                                }
                                branch_end_17:;
                            }
                            branch_end_16:;
                        }
                        branch_end_15:;
                    }
                    branch_end_14:;
                }
                branch_end_13:;
            }
            branch_end_12:;
        }
        goto branch_end_7;
        branch_no_7:;
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_compexpr_left_19;
            PyObject *tmp_compexpr_right_19;
            PyObject *tmp_len_arg_2;
            if ( par_axis == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "axis" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 159;
                type_description_1 = "oooNoNoooo";
                goto frame_exception_exit_1;
            }

            tmp_len_arg_2 = par_axis;
            tmp_compexpr_left_19 = BUILTIN_LEN( tmp_len_arg_2 );
            if ( tmp_compexpr_left_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 159;
                type_description_1 = "oooNoNoooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_19 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_19, tmp_compexpr_right_19 );
            Py_DECREF( tmp_compexpr_left_19 );
            assert( !(tmp_res == -1) );
            tmp_condition_result_19 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_19;
            }
            else
            {
                goto branch_no_19;
            }
            branch_yes_19:;
            // Tried code:
            {
                PyObject *tmp_assign_source_14;
                PyObject *tmp_iter_arg_2;
                if ( par_axis == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "axis" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 160;
                    type_description_1 = "oooNoNoooo";
                    goto try_except_handler_8;
                }

                tmp_iter_arg_2 = par_axis;
                tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
                if ( tmp_assign_source_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 160;
                    type_description_1 = "oooNoNoooo";
                    goto try_except_handler_8;
                }
                assert( tmp_tuple_unpack_2__source_iter == NULL );
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_14;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_unpack_3;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
                tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_3, 0, 1 );
                if ( tmp_assign_source_15 == NULL )
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


                    type_description_1 = "oooNoNoooo";
                    exception_lineno = 160;
                    goto try_except_handler_9;
                }
                assert( tmp_tuple_unpack_2__element_1 == NULL );
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_15;
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

                            type_description_1 = "oooNoNoooo";
                            exception_lineno = 160;
                            goto try_except_handler_9;
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
                    PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "oooNoNoooo";
                    exception_lineno = 160;
                    goto try_except_handler_9;
                }
            }
            goto try_end_4;
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

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
            Py_DECREF( tmp_tuple_unpack_2__source_iter );
            tmp_tuple_unpack_2__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_7;
            exception_value = exception_keeper_value_7;
            exception_tb = exception_keeper_tb_7;
            exception_lineno = exception_keeper_lineno_7;

            goto try_except_handler_8;
            // End of try:
            try_end_4:;
            goto try_end_5;
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

            Py_XDECREF( tmp_tuple_unpack_2__element_1 );
            tmp_tuple_unpack_2__element_1 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_8;
            exception_value = exception_keeper_value_8;
            exception_tb = exception_keeper_tb_8;
            exception_lineno = exception_keeper_lineno_8;

            goto frame_exception_exit_1;
            // End of try:
            try_end_5:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
            Py_DECREF( tmp_tuple_unpack_2__source_iter );
            tmp_tuple_unpack_2__source_iter = NULL;

            {
                PyObject *tmp_assign_source_16;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
                tmp_assign_source_16 = tmp_tuple_unpack_2__element_1;
                assert( var_a == NULL );
                Py_INCREF( tmp_assign_source_16 );
                var_a = tmp_assign_source_16;
            }
            Py_XDECREF( tmp_tuple_unpack_2__element_1 );
            tmp_tuple_unpack_2__element_1 = NULL;

            {
                nuitka_bool tmp_condition_result_20;
                PyObject *tmp_operand_name_7;
                {
                    PyObject *tmp_assign_source_17;
                    CHECK_OBJECT( var_a );
                    tmp_assign_source_17 = var_a;
                    assert( tmp_comparison_chain_3__operand_2 == NULL );
                    Py_INCREF( tmp_assign_source_17 );
                    tmp_comparison_chain_3__operand_2 = tmp_assign_source_17;
                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_18;
                    PyObject *tmp_compexpr_left_20;
                    PyObject *tmp_compexpr_right_20;
                    tmp_compexpr_left_20 = const_int_neg_2;
                    CHECK_OBJECT( tmp_comparison_chain_3__operand_2 );
                    tmp_compexpr_right_20 = tmp_comparison_chain_3__operand_2;
                    tmp_assign_source_18 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_20, tmp_compexpr_right_20 );
                    if ( tmp_assign_source_18 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 161;
                        type_description_1 = "oooNoNoooo";
                        goto try_except_handler_10;
                    }
                    assert( tmp_comparison_chain_3__comparison_result == NULL );
                    tmp_comparison_chain_3__comparison_result = tmp_assign_source_18;
                }
                {
                    nuitka_bool tmp_condition_result_21;
                    PyObject *tmp_operand_name_8;
                    CHECK_OBJECT( tmp_comparison_chain_3__comparison_result );
                    tmp_operand_name_8 = tmp_comparison_chain_3__comparison_result;
                    tmp_res = CHECK_IF_TRUE( tmp_operand_name_8 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 161;
                        type_description_1 = "oooNoNoooo";
                        goto try_except_handler_10;
                    }
                    tmp_condition_result_21 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_21;
                    }
                    else
                    {
                        goto branch_no_21;
                    }
                    branch_yes_21:;
                    CHECK_OBJECT( tmp_comparison_chain_3__comparison_result );
                    tmp_operand_name_7 = tmp_comparison_chain_3__comparison_result;
                    Py_INCREF( tmp_operand_name_7 );
                    goto try_return_handler_10;
                    branch_no_21:;
                }
                {
                    PyObject *tmp_compexpr_left_21;
                    PyObject *tmp_compexpr_right_21;
                    CHECK_OBJECT( tmp_comparison_chain_3__operand_2 );
                    tmp_compexpr_left_21 = tmp_comparison_chain_3__operand_2;
                    tmp_compexpr_right_21 = const_int_pos_2;
                    tmp_operand_name_7 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_21, tmp_compexpr_right_21 );
                    if ( tmp_operand_name_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 161;
                        type_description_1 = "oooNoNoooo";
                        goto try_except_handler_10;
                    }
                    goto try_return_handler_10;
                }
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_norm$$$function_2_norm );
                return NULL;
                // Return handler code:
                try_return_handler_10:;
                CHECK_OBJECT( (PyObject *)tmp_comparison_chain_3__operand_2 );
                Py_DECREF( tmp_comparison_chain_3__operand_2 );
                tmp_comparison_chain_3__operand_2 = NULL;

                CHECK_OBJECT( (PyObject *)tmp_comparison_chain_3__comparison_result );
                Py_DECREF( tmp_comparison_chain_3__comparison_result );
                tmp_comparison_chain_3__comparison_result = NULL;

                goto outline_result_3;
                // Exception handler code:
                try_except_handler_10:;
                exception_keeper_type_9 = exception_type;
                exception_keeper_value_9 = exception_value;
                exception_keeper_tb_9 = exception_tb;
                exception_keeper_lineno_9 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_comparison_chain_3__operand_2 );
                Py_DECREF( tmp_comparison_chain_3__operand_2 );
                tmp_comparison_chain_3__operand_2 = NULL;

                Py_XDECREF( tmp_comparison_chain_3__comparison_result );
                tmp_comparison_chain_3__comparison_result = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_9;
                exception_value = exception_keeper_value_9;
                exception_tb = exception_keeper_tb_9;
                exception_lineno = exception_keeper_lineno_9;

                goto frame_exception_exit_1;
                // End of try:
                // Return statement must have exited already.
                NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_norm$$$function_2_norm );
                return NULL;
                outline_result_3:;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_7 );
                Py_DECREF( tmp_operand_name_7 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 161;
                    type_description_1 = "oooNoNoooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_20 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_20;
                }
                else
                {
                    goto branch_no_20;
                }
                branch_yes_20:;
                {
                    PyObject *tmp_raise_type_9;
                    PyObject *tmp_make_exception_arg_7;
                    PyObject *tmp_left_name_4;
                    PyObject *tmp_right_name_4;
                    PyObject *tmp_tuple_element_3;
                    PyObject *tmp_source_name_10;
                    tmp_left_name_4 = const_str_digest_0bac5fb6f35a68d345bbba96c87835bc;
                    if ( par_axis == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "axis" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 163;
                        type_description_1 = "oooNoNoooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_tuple_element_3 = par_axis;
                    tmp_right_name_4 = PyTuple_New( 2 );
                    Py_INCREF( tmp_tuple_element_3 );
                    PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_3 );
                    CHECK_OBJECT( par_x );
                    tmp_source_name_10 = par_x;
                    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_shape );
                    if ( tmp_tuple_element_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_right_name_4 );

                        exception_lineno = 163;
                        type_description_1 = "oooNoNoooo";
                        goto frame_exception_exit_1;
                    }
                    PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_3 );
                    tmp_make_exception_arg_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                    Py_DECREF( tmp_right_name_4 );
                    if ( tmp_make_exception_arg_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 162;
                        type_description_1 = "oooNoNoooo";
                        goto frame_exception_exit_1;
                    }
                    frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 162;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_7 };
                        tmp_raise_type_9 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    Py_DECREF( tmp_make_exception_arg_7 );
                    assert( !(tmp_raise_type_9 == NULL) );
                    exception_type = tmp_raise_type_9;
                    exception_lineno = 162;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooNoNoooo";
                    goto frame_exception_exit_1;
                }
                branch_no_20:;
            }
            {
                nuitka_bool tmp_condition_result_22;
                PyObject *tmp_compexpr_left_22;
                PyObject *tmp_compexpr_right_22;
                PyObject *tmp_mvar_value_10;
                CHECK_OBJECT( par_ord );
                tmp_compexpr_left_22 = par_ord;
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_Inf );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
                }

                if ( tmp_mvar_value_10 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Inf" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 164;
                    type_description_1 = "oooNoNoooo";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_right_22 = tmp_mvar_value_10;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_22, tmp_compexpr_right_22 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 164;
                    type_description_1 = "oooNoNoooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_22 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_22;
                }
                else
                {
                    goto branch_no_22;
                }
                branch_yes_22:;
                {
                    PyObject *tmp_assign_source_19;
                    PyObject *tmp_called_name_16;
                    PyObject *tmp_source_name_11;
                    PyObject *tmp_called_name_17;
                    PyObject *tmp_mvar_value_11;
                    PyObject *tmp_args_element_name_8;
                    PyObject *tmp_kw_name_9;
                    PyObject *tmp_dict_key_9;
                    PyObject *tmp_dict_value_9;
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_abs );

                    if (unlikely( tmp_mvar_value_11 == NULL ))
                    {
                        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abs );
                    }

                    if ( tmp_mvar_value_11 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abs" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 165;
                        type_description_1 = "oooNoNoooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_17 = tmp_mvar_value_11;
                    CHECK_OBJECT( par_x );
                    tmp_args_element_name_8 = par_x;
                    frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 165;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_8 };
                        tmp_source_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
                    }

                    if ( tmp_source_name_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 165;
                        type_description_1 = "oooNoNoooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_max );
                    Py_DECREF( tmp_source_name_11 );
                    if ( tmp_called_name_16 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 165;
                        type_description_1 = "oooNoNoooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_dict_key_9 = const_str_plain_axis;
                    CHECK_OBJECT( var_a );
                    tmp_dict_value_9 = var_a;
                    tmp_kw_name_9 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_9, tmp_dict_key_9, tmp_dict_value_9 );
                    assert( !(tmp_res != 0) );
                    frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 165;
                    tmp_assign_source_19 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_16, tmp_kw_name_9 );
                    Py_DECREF( tmp_called_name_16 );
                    Py_DECREF( tmp_kw_name_9 );
                    if ( tmp_assign_source_19 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 165;
                        type_description_1 = "oooNoNoooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_M == NULL );
                    var_M = tmp_assign_source_19;
                }
                goto branch_end_22;
                branch_no_22:;
                {
                    nuitka_bool tmp_condition_result_23;
                    PyObject *tmp_compexpr_left_23;
                    PyObject *tmp_compexpr_right_23;
                    PyObject *tmp_operand_name_9;
                    PyObject *tmp_mvar_value_12;
                    CHECK_OBJECT( par_ord );
                    tmp_compexpr_left_23 = par_ord;
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_Inf );

                    if (unlikely( tmp_mvar_value_12 == NULL ))
                    {
                        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
                    }

                    if ( tmp_mvar_value_12 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Inf" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 166;
                        type_description_1 = "oooNoNoooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_operand_name_9 = tmp_mvar_value_12;
                    tmp_compexpr_right_23 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_9 );
                    if ( tmp_compexpr_right_23 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 166;
                        type_description_1 = "oooNoNoooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_23, tmp_compexpr_right_23 );
                    Py_DECREF( tmp_compexpr_right_23 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 166;
                        type_description_1 = "oooNoNoooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_23 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_23 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_23;
                    }
                    else
                    {
                        goto branch_no_23;
                    }
                    branch_yes_23:;
                    {
                        PyObject *tmp_assign_source_20;
                        PyObject *tmp_called_name_18;
                        PyObject *tmp_source_name_12;
                        PyObject *tmp_called_name_19;
                        PyObject *tmp_mvar_value_13;
                        PyObject *tmp_args_element_name_9;
                        PyObject *tmp_kw_name_10;
                        PyObject *tmp_dict_key_10;
                        PyObject *tmp_dict_value_10;
                        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_abs );

                        if (unlikely( tmp_mvar_value_13 == NULL ))
                        {
                            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abs );
                        }

                        if ( tmp_mvar_value_13 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abs" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 167;
                            type_description_1 = "oooNoNoooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_19 = tmp_mvar_value_13;
                        CHECK_OBJECT( par_x );
                        tmp_args_element_name_9 = par_x;
                        frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 167;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_9 };
                            tmp_source_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
                        }

                        if ( tmp_source_name_12 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 167;
                            type_description_1 = "oooNoNoooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_min );
                        Py_DECREF( tmp_source_name_12 );
                        if ( tmp_called_name_18 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 167;
                            type_description_1 = "oooNoNoooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_dict_key_10 = const_str_plain_axis;
                        CHECK_OBJECT( var_a );
                        tmp_dict_value_10 = var_a;
                        tmp_kw_name_10 = _PyDict_NewPresized( 1 );
                        tmp_res = PyDict_SetItem( tmp_kw_name_10, tmp_dict_key_10, tmp_dict_value_10 );
                        assert( !(tmp_res != 0) );
                        frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 167;
                        tmp_assign_source_20 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_18, tmp_kw_name_10 );
                        Py_DECREF( tmp_called_name_18 );
                        Py_DECREF( tmp_kw_name_10 );
                        if ( tmp_assign_source_20 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 167;
                            type_description_1 = "oooNoNoooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_M == NULL );
                        var_M = tmp_assign_source_20;
                    }
                    goto branch_end_23;
                    branch_no_23:;
                    {
                        nuitka_bool tmp_condition_result_24;
                        PyObject *tmp_compexpr_left_24;
                        PyObject *tmp_compexpr_right_24;
                        CHECK_OBJECT( par_ord );
                        tmp_compexpr_left_24 = par_ord;
                        tmp_compexpr_right_24 = const_int_0;
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_24, tmp_compexpr_right_24 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 168;
                            type_description_1 = "oooNoNoooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_24 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if ( tmp_condition_result_24 == NUITKA_BOOL_TRUE )
                        {
                            goto branch_yes_24;
                        }
                        else
                        {
                            goto branch_no_24;
                        }
                        branch_yes_24:;
                        {
                            PyObject *tmp_assign_source_21;
                            PyObject *tmp_called_name_20;
                            PyObject *tmp_source_name_13;
                            PyObject *tmp_compexpr_left_25;
                            PyObject *tmp_compexpr_right_25;
                            PyObject *tmp_kw_name_11;
                            PyObject *tmp_dict_key_11;
                            PyObject *tmp_dict_value_11;
                            CHECK_OBJECT( par_x );
                            tmp_compexpr_left_25 = par_x;
                            tmp_compexpr_right_25 = const_int_0;
                            tmp_source_name_13 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_25, tmp_compexpr_right_25 );
                            if ( tmp_source_name_13 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 170;
                                type_description_1 = "oooNoNoooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_sum );
                            Py_DECREF( tmp_source_name_13 );
                            if ( tmp_called_name_20 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 170;
                                type_description_1 = "oooNoNoooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_dict_key_11 = const_str_plain_axis;
                            CHECK_OBJECT( var_a );
                            tmp_dict_value_11 = var_a;
                            tmp_kw_name_11 = _PyDict_NewPresized( 1 );
                            tmp_res = PyDict_SetItem( tmp_kw_name_11, tmp_dict_key_11, tmp_dict_value_11 );
                            assert( !(tmp_res != 0) );
                            frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 170;
                            tmp_assign_source_21 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_20, tmp_kw_name_11 );
                            Py_DECREF( tmp_called_name_20 );
                            Py_DECREF( tmp_kw_name_11 );
                            if ( tmp_assign_source_21 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 170;
                                type_description_1 = "oooNoNoooo";
                                goto frame_exception_exit_1;
                            }
                            assert( var_M == NULL );
                            var_M = tmp_assign_source_21;
                        }
                        goto branch_end_24;
                        branch_no_24:;
                        {
                            nuitka_bool tmp_condition_result_25;
                            PyObject *tmp_compexpr_left_26;
                            PyObject *tmp_compexpr_right_26;
                            CHECK_OBJECT( par_ord );
                            tmp_compexpr_left_26 = par_ord;
                            tmp_compexpr_right_26 = const_int_pos_1;
                            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_26, tmp_compexpr_right_26 );
                            if ( tmp_res == -1 )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 171;
                                type_description_1 = "oooNoNoooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_condition_result_25 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                            if ( tmp_condition_result_25 == NUITKA_BOOL_TRUE )
                            {
                                goto branch_yes_25;
                            }
                            else
                            {
                                goto branch_no_25;
                            }
                            branch_yes_25:;
                            {
                                PyObject *tmp_assign_source_22;
                                PyObject *tmp_called_name_21;
                                PyObject *tmp_source_name_14;
                                PyObject *tmp_called_name_22;
                                PyObject *tmp_mvar_value_14;
                                PyObject *tmp_args_element_name_10;
                                PyObject *tmp_kw_name_12;
                                PyObject *tmp_dict_key_12;
                                PyObject *tmp_dict_value_12;
                                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_abs );

                                if (unlikely( tmp_mvar_value_14 == NULL ))
                                {
                                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abs );
                                }

                                if ( tmp_mvar_value_14 == NULL )
                                {

                                    exception_type = PyExc_NameError;
                                    Py_INCREF( exception_type );
                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abs" );
                                    exception_tb = NULL;
                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                    CHAIN_EXCEPTION( exception_value );

                                    exception_lineno = 173;
                                    type_description_1 = "oooNoNoooo";
                                    goto frame_exception_exit_1;
                                }

                                tmp_called_name_22 = tmp_mvar_value_14;
                                CHECK_OBJECT( par_x );
                                tmp_args_element_name_10 = par_x;
                                frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 173;
                                {
                                    PyObject *call_args[] = { tmp_args_element_name_10 };
                                    tmp_source_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
                                }

                                if ( tmp_source_name_14 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 173;
                                    type_description_1 = "oooNoNoooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_sum );
                                Py_DECREF( tmp_source_name_14 );
                                if ( tmp_called_name_21 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 173;
                                    type_description_1 = "oooNoNoooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_dict_key_12 = const_str_plain_axis;
                                CHECK_OBJECT( var_a );
                                tmp_dict_value_12 = var_a;
                                tmp_kw_name_12 = _PyDict_NewPresized( 1 );
                                tmp_res = PyDict_SetItem( tmp_kw_name_12, tmp_dict_key_12, tmp_dict_value_12 );
                                assert( !(tmp_res != 0) );
                                frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 173;
                                tmp_assign_source_22 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_21, tmp_kw_name_12 );
                                Py_DECREF( tmp_called_name_21 );
                                Py_DECREF( tmp_kw_name_12 );
                                if ( tmp_assign_source_22 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 173;
                                    type_description_1 = "oooNoNoooo";
                                    goto frame_exception_exit_1;
                                }
                                assert( var_M == NULL );
                                var_M = tmp_assign_source_22;
                            }
                            goto branch_end_25;
                            branch_no_25:;
                            {
                                nuitka_bool tmp_condition_result_26;
                                PyObject *tmp_compexpr_left_27;
                                PyObject *tmp_compexpr_right_27;
                                CHECK_OBJECT( par_ord );
                                tmp_compexpr_left_27 = par_ord;
                                tmp_compexpr_right_27 = const_tuple_int_pos_2_none_tuple;
                                tmp_res = PySequence_Contains( tmp_compexpr_right_27, tmp_compexpr_left_27 );
                                if ( tmp_res == -1 )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 174;
                                    type_description_1 = "oooNoNoooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_condition_result_26 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                if ( tmp_condition_result_26 == NUITKA_BOOL_TRUE )
                                {
                                    goto branch_yes_26;
                                }
                                else
                                {
                                    goto branch_no_26;
                                }
                                branch_yes_26:;
                                {
                                    PyObject *tmp_assign_source_23;
                                    PyObject *tmp_called_name_23;
                                    PyObject *tmp_mvar_value_15;
                                    PyObject *tmp_args_element_name_11;
                                    PyObject *tmp_called_name_24;
                                    PyObject *tmp_source_name_15;
                                    PyObject *tmp_called_instance_2;
                                    PyObject *tmp_called_name_25;
                                    PyObject *tmp_mvar_value_16;
                                    PyObject *tmp_args_element_name_12;
                                    PyObject *tmp_kw_name_13;
                                    PyObject *tmp_dict_key_13;
                                    PyObject *tmp_dict_value_13;
                                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_sqrt );

                                    if (unlikely( tmp_mvar_value_15 == NULL ))
                                    {
                                        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
                                    }

                                    if ( tmp_mvar_value_15 == NULL )
                                    {

                                        exception_type = PyExc_NameError;
                                        Py_INCREF( exception_type );
                                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sqrt" );
                                        exception_tb = NULL;
                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                        CHAIN_EXCEPTION( exception_value );

                                        exception_lineno = 175;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }

                                    tmp_called_name_23 = tmp_mvar_value_15;
                                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_abs );

                                    if (unlikely( tmp_mvar_value_16 == NULL ))
                                    {
                                        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abs );
                                    }

                                    if ( tmp_mvar_value_16 == NULL )
                                    {

                                        exception_type = PyExc_NameError;
                                        Py_INCREF( exception_type );
                                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abs" );
                                        exception_tb = NULL;
                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                        CHAIN_EXCEPTION( exception_value );

                                        exception_lineno = 175;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }

                                    tmp_called_name_25 = tmp_mvar_value_16;
                                    CHECK_OBJECT( par_x );
                                    tmp_args_element_name_12 = par_x;
                                    frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 175;
                                    {
                                        PyObject *call_args[] = { tmp_args_element_name_12 };
                                        tmp_called_instance_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
                                    }

                                    if ( tmp_called_instance_2 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 175;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 175;
                                    tmp_source_name_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_power, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

                                    Py_DECREF( tmp_called_instance_2 );
                                    if ( tmp_source_name_15 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 175;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_sum );
                                    Py_DECREF( tmp_source_name_15 );
                                    if ( tmp_called_name_24 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 175;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_dict_key_13 = const_str_plain_axis;
                                    CHECK_OBJECT( var_a );
                                    tmp_dict_value_13 = var_a;
                                    tmp_kw_name_13 = _PyDict_NewPresized( 1 );
                                    tmp_res = PyDict_SetItem( tmp_kw_name_13, tmp_dict_key_13, tmp_dict_value_13 );
                                    assert( !(tmp_res != 0) );
                                    frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 175;
                                    tmp_args_element_name_11 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_24, tmp_kw_name_13 );
                                    Py_DECREF( tmp_called_name_24 );
                                    Py_DECREF( tmp_kw_name_13 );
                                    if ( tmp_args_element_name_11 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 175;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 175;
                                    {
                                        PyObject *call_args[] = { tmp_args_element_name_11 };
                                        tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
                                    }

                                    Py_DECREF( tmp_args_element_name_11 );
                                    if ( tmp_assign_source_23 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 175;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    assert( var_M == NULL );
                                    var_M = tmp_assign_source_23;
                                }
                                goto branch_end_26;
                                branch_no_26:;
                                // Tried code:
                                {
                                    PyObject *tmp_left_name_5;
                                    PyObject *tmp_right_name_5;
                                    PyObject *tmp_op_add_res_1;
                                    CHECK_OBJECT( par_ord );
                                    tmp_left_name_5 = par_ord;
                                    tmp_right_name_5 = const_int_pos_1;
                                    tmp_op_add_res_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
                                    if ( tmp_op_add_res_1 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 178;
                                        type_description_1 = "oooNoNoooo";
                                        goto try_except_handler_11;
                                    }
                                    Py_DECREF( tmp_op_add_res_1 );
                                }
                                goto try_end_6;
                                // Exception handler code:
                                try_except_handler_11:;
                                exception_keeper_type_10 = exception_type;
                                exception_keeper_value_10 = exception_value;
                                exception_keeper_tb_10 = exception_tb;
                                exception_keeper_lineno_10 = exception_lineno;
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

                                if ( exception_keeper_tb_10 == NULL )
                                {
                                    exception_keeper_tb_10 = MAKE_TRACEBACK( frame_2e16ca200379924af5bf3d42358ec420, exception_keeper_lineno_10 );
                                }
                                else if ( exception_keeper_lineno_10 != 0 )
                                {
                                    exception_keeper_tb_10 = ADD_TRACEBACK( exception_keeper_tb_10, frame_2e16ca200379924af5bf3d42358ec420, exception_keeper_lineno_10 );
                                }

                                NORMALIZE_EXCEPTION( &exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10 );
                                PyException_SetTraceback( exception_keeper_value_10, (PyObject *)exception_keeper_tb_10 );
                                PUBLISH_EXCEPTION( &exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10 );
                                // Tried code:
                                {
                                    nuitka_bool tmp_condition_result_27;
                                    PyObject *tmp_compexpr_left_28;
                                    PyObject *tmp_compexpr_right_28;
                                    tmp_compexpr_left_28 = EXC_TYPE(PyThreadState_GET());
                                    tmp_compexpr_right_28 = PyExc_TypeError;
                                    tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_28, tmp_compexpr_right_28 );
                                    if ( tmp_res == -1 )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 179;
                                        type_description_1 = "oooNoNoooo";
                                        goto try_except_handler_12;
                                    }
                                    tmp_condition_result_27 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                    if ( tmp_condition_result_27 == NUITKA_BOOL_TRUE )
                                    {
                                        goto branch_yes_27;
                                    }
                                    else
                                    {
                                        goto branch_no_27;
                                    }
                                    branch_yes_27:;
                                    {
                                        PyObject *tmp_raise_type_10;
                                        PyObject *tmp_make_exception_arg_8;
                                        tmp_make_exception_arg_8 = const_str_digest_c513a02188c459608b8a1dd32daddf94;
                                        frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 180;
                                        {
                                            PyObject *call_args[] = { tmp_make_exception_arg_8 };
                                            tmp_raise_type_10 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                                        }

                                        assert( !(tmp_raise_type_10 == NULL) );
                                        exception_type = tmp_raise_type_10;
                                        exception_lineno = 180;
                                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                                        type_description_1 = "oooNoNoooo";
                                        goto try_except_handler_12;
                                    }
                                    goto branch_end_27;
                                    branch_no_27:;
                                    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                    if (unlikely( tmp_result == false ))
                                    {
                                        exception_lineno = 177;
                                    }

                                    if (exception_tb && exception_tb->tb_frame == &frame_2e16ca200379924af5bf3d42358ec420->m_frame) frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = exception_tb->tb_lineno;
                                    type_description_1 = "oooNoNoooo";
                                    goto try_except_handler_12;
                                    branch_end_27:;
                                }
                                // tried codes exits in all cases
                                NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_norm$$$function_2_norm );
                                return NULL;
                                // Exception handler code:
                                try_except_handler_12:;
                                exception_keeper_type_11 = exception_type;
                                exception_keeper_value_11 = exception_value;
                                exception_keeper_tb_11 = exception_tb;
                                exception_keeper_lineno_11 = exception_lineno;
                                exception_type = NULL;
                                exception_value = NULL;
                                exception_tb = NULL;
                                exception_lineno = 0;

                                // Restore previous exception.
                                SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
                                // Re-raise.
                                exception_type = exception_keeper_type_11;
                                exception_value = exception_keeper_value_11;
                                exception_tb = exception_keeper_tb_11;
                                exception_lineno = exception_keeper_lineno_11;

                                goto frame_exception_exit_1;
                                // End of try:
                                // End of try:
                                try_end_6:;
                                {
                                    PyObject *tmp_assign_source_24;
                                    PyObject *tmp_called_name_26;
                                    PyObject *tmp_source_name_16;
                                    PyObject *tmp_mvar_value_17;
                                    PyObject *tmp_args_element_name_13;
                                    PyObject *tmp_called_name_27;
                                    PyObject *tmp_source_name_17;
                                    PyObject *tmp_called_instance_3;
                                    PyObject *tmp_called_name_28;
                                    PyObject *tmp_mvar_value_18;
                                    PyObject *tmp_args_element_name_14;
                                    PyObject *tmp_args_element_name_15;
                                    PyObject *tmp_kw_name_14;
                                    PyObject *tmp_dict_key_14;
                                    PyObject *tmp_dict_value_14;
                                    PyObject *tmp_args_element_name_16;
                                    PyObject *tmp_left_name_6;
                                    PyObject *tmp_right_name_6;
                                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_np );

                                    if (unlikely( tmp_mvar_value_17 == NULL ))
                                    {
                                        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                                    }

                                    if ( tmp_mvar_value_17 == NULL )
                                    {

                                        exception_type = PyExc_NameError;
                                        Py_INCREF( exception_type );
                                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                                        exception_tb = NULL;
                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                        CHAIN_EXCEPTION( exception_value );

                                        exception_lineno = 181;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }

                                    tmp_source_name_16 = tmp_mvar_value_17;
                                    tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_power );
                                    if ( tmp_called_name_26 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 181;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_abs );

                                    if (unlikely( tmp_mvar_value_18 == NULL ))
                                    {
                                        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abs );
                                    }

                                    if ( tmp_mvar_value_18 == NULL )
                                    {
                                        Py_DECREF( tmp_called_name_26 );
                                        exception_type = PyExc_NameError;
                                        Py_INCREF( exception_type );
                                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abs" );
                                        exception_tb = NULL;
                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                        CHAIN_EXCEPTION( exception_value );

                                        exception_lineno = 181;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }

                                    tmp_called_name_28 = tmp_mvar_value_18;
                                    CHECK_OBJECT( par_x );
                                    tmp_args_element_name_14 = par_x;
                                    frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 181;
                                    {
                                        PyObject *call_args[] = { tmp_args_element_name_14 };
                                        tmp_called_instance_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
                                    }

                                    if ( tmp_called_instance_3 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                        Py_DECREF( tmp_called_name_26 );

                                        exception_lineno = 181;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    CHECK_OBJECT( par_ord );
                                    tmp_args_element_name_15 = par_ord;
                                    frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 181;
                                    {
                                        PyObject *call_args[] = { tmp_args_element_name_15 };
                                        tmp_source_name_17 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_power, call_args );
                                    }

                                    Py_DECREF( tmp_called_instance_3 );
                                    if ( tmp_source_name_17 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                        Py_DECREF( tmp_called_name_26 );

                                        exception_lineno = 181;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_sum );
                                    Py_DECREF( tmp_source_name_17 );
                                    if ( tmp_called_name_27 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                        Py_DECREF( tmp_called_name_26 );

                                        exception_lineno = 181;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_dict_key_14 = const_str_plain_axis;
                                    CHECK_OBJECT( var_a );
                                    tmp_dict_value_14 = var_a;
                                    tmp_kw_name_14 = _PyDict_NewPresized( 1 );
                                    tmp_res = PyDict_SetItem( tmp_kw_name_14, tmp_dict_key_14, tmp_dict_value_14 );
                                    assert( !(tmp_res != 0) );
                                    frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 181;
                                    tmp_args_element_name_13 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_27, tmp_kw_name_14 );
                                    Py_DECREF( tmp_called_name_27 );
                                    Py_DECREF( tmp_kw_name_14 );
                                    if ( tmp_args_element_name_13 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                        Py_DECREF( tmp_called_name_26 );

                                        exception_lineno = 181;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_left_name_6 = const_int_pos_1;
                                    CHECK_OBJECT( par_ord );
                                    tmp_right_name_6 = par_ord;
                                    tmp_args_element_name_16 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_6, tmp_right_name_6 );
                                    if ( tmp_args_element_name_16 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                        Py_DECREF( tmp_called_name_26 );
                                        Py_DECREF( tmp_args_element_name_13 );

                                        exception_lineno = 181;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 181;
                                    {
                                        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_16 };
                                        tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_26, call_args );
                                    }

                                    Py_DECREF( tmp_called_name_26 );
                                    Py_DECREF( tmp_args_element_name_13 );
                                    Py_DECREF( tmp_args_element_name_16 );
                                    if ( tmp_assign_source_24 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 181;
                                        type_description_1 = "oooNoNoooo";
                                        goto frame_exception_exit_1;
                                    }
                                    assert( var_M == NULL );
                                    var_M = tmp_assign_source_24;
                                }
                                branch_end_26:;
                            }
                            branch_end_25:;
                        }
                        branch_end_24:;
                    }
                    branch_end_23:;
                }
                branch_end_22:;
            }
            {
                PyObject *tmp_called_instance_4;
                PyObject *tmp_source_name_18;
                if ( var_M == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "M" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 182;
                    type_description_1 = "oooNoNoooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_18 = var_M;
                tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_A );
                if ( tmp_called_instance_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 182;
                    type_description_1 = "oooNoNoooo";
                    goto frame_exception_exit_1;
                }
                frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 182;
                tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_ravel );
                Py_DECREF( tmp_called_instance_4 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 182;
                    type_description_1 = "oooNoNoooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_19;
            branch_no_19:;
            {
                PyObject *tmp_raise_type_11;
                PyObject *tmp_make_exception_arg_9;
                tmp_make_exception_arg_9 = const_str_digest_eeb6a6583fdebe1202d0954fb0766c30;
                frame_2e16ca200379924af5bf3d42358ec420->m_frame.f_lineno = 184;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_9 };
                    tmp_raise_type_11 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_11 == NULL) );
                exception_type = tmp_raise_type_11;
                exception_lineno = 184;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooNoNoooo";
                goto frame_exception_exit_1;
            }
            branch_end_19:;
        }
        branch_end_7:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e16ca200379924af5bf3d42358ec420 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e16ca200379924af5bf3d42358ec420 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e16ca200379924af5bf3d42358ec420 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2e16ca200379924af5bf3d42358ec420, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2e16ca200379924af5bf3d42358ec420->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2e16ca200379924af5bf3d42358ec420, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2e16ca200379924af5bf3d42358ec420,
        type_description_1,
        par_x,
        par_ord,
        par_axis,
        NULL,
        var_int_axis,
        NULL,
        var_row_axis,
        var_col_axis,
        var_a,
        var_M
    );


    // Release cached frame.
    if ( frame_2e16ca200379924af5bf3d42358ec420 == cache_frame_2e16ca200379924af5bf3d42358ec420 )
    {
        Py_DECREF( frame_2e16ca200379924af5bf3d42358ec420 );
    }
    cache_frame_2e16ca200379924af5bf3d42358ec420 = NULL;

    assertFrameObject( frame_2e16ca200379924af5bf3d42358ec420 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_norm$$$function_2_norm );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_ord );
    Py_DECREF( par_ord );
    par_ord = NULL;

    Py_XDECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_int_axis );
    var_int_axis = NULL;

    Py_XDECREF( var_row_axis );
    var_row_axis = NULL;

    Py_XDECREF( var_col_axis );
    var_col_axis = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_ord );
    Py_DECREF( par_ord );
    par_ord = NULL;

    Py_XDECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_int_axis );
    var_int_axis = NULL;

    Py_XDECREF( var_row_axis );
    var_row_axis = NULL;

    Py_XDECREF( var_col_axis );
    var_col_axis = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_norm$$$function_2_norm );
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



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_norm$$$function_1__sparse_frobenius_norm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_norm$$$function_1__sparse_frobenius_norm,
        const_str_plain__sparse_frobenius_norm,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_19ebb4d920c07ebf50b7fd4ae5e86292,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_norm,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_norm$$$function_2_norm( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_norm$$$function_2_norm,
        const_str_plain_norm,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2e16ca200379924af5bf3d42358ec420,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_norm,
        const_str_digest_fcd5c2a089efdc6e78834bcf56d053cf,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$linalg$_norm =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.linalg._norm",
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

MOD_INIT_DECL( scipy$sparse$linalg$_norm )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$linalg$_norm );
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
    puts("scipy.sparse.linalg._norm: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.linalg._norm: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.linalg._norm: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$sparse$linalg$_norm" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$linalg$_norm = Py_InitModule4(
        "scipy.sparse.linalg._norm",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$sparse$linalg$_norm = PyModule_Create( &mdef_scipy$sparse$linalg$_norm );
#endif

    moduledict_scipy$sparse$linalg$_norm = MODULE_DICT( module_scipy$sparse$linalg$_norm );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$sparse$linalg$_norm,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$sparse$linalg$_norm,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$linalg$_norm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$linalg$_norm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$sparse$linalg$_norm );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_bd23294a9c49225c3753c06f892b0fee, module_scipy$sparse$linalg$_norm );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_79307a99830b491d1b6895583a431e98;
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
        tmp_assign_source_1 = const_str_digest_a146eabcaa404792eec6f04a08ed2869;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_79307a99830b491d1b6895583a431e98 = MAKE_MODULE_FRAME( codeobj_79307a99830b491d1b6895583a431e98, module_scipy$sparse$linalg$_norm );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_79307a99830b491d1b6895583a431e98 );
    assert( Py_REFCNT( frame_79307a99830b491d1b6895583a431e98 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_79307a99830b491d1b6895583a431e98->m_frame.f_lineno = 4;
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$sparse$linalg$_norm;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_79307a99830b491d1b6895583a431e98->m_frame.f_lineno = 6;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$sparse$linalg$_norm;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_issparse_tuple;
        tmp_level_name_2 = const_int_0;
        frame_79307a99830b491d1b6895583a431e98->m_frame.f_lineno = 7;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_issparse );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_issparse, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$sparse$linalg$_norm;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_Inf_str_plain_sqrt_str_plain_abs_tuple;
        tmp_level_name_3 = const_int_0;
        frame_79307a99830b491d1b6895583a431e98->m_frame.f_lineno = 9;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Inf );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_Inf, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_sqrt );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_sqrt, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_abs );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_abs, tmp_assign_source_13 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_79307a99830b491d1b6895583a431e98 );
#endif
    popFrameStack();

    assertFrameObject( frame_79307a99830b491d1b6895583a431e98 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_79307a99830b491d1b6895583a431e98 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_79307a99830b491d1b6895583a431e98, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_79307a99830b491d1b6895583a431e98->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_79307a99830b491d1b6895583a431e98, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = LIST_COPY( const_list_str_plain_norm_list );
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_scipy$sparse$linalg$_norm$$$function_1__sparse_frobenius_norm(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain__sparse_frobenius_norm, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_16 = MAKE_FUNCTION_scipy$sparse$linalg$_norm$$$function_2_norm( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_16 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_norm, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$linalg$_norm );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
