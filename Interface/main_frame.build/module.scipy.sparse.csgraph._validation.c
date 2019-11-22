/* Generated code for Python module 'scipy.sparse.csgraph._validation'
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

/* The "_module_scipy$sparse$csgraph$_validation" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$sparse$csgraph$_validation;
PyDictObject *moduledict_scipy$sparse$csgraph$_validation;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_isspmatrix_csc;
static PyObject *const_str_digest_74be87185c2275c47c31b7b1b5a4f3e2;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_null_value_out;
static PyObject *const_tuple_a36239ca423fae2e795f9338e2b050a0_tuple;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_isspmatrix;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
extern PyObject *const_str_plain_inf;
static PyObject *const_str_digest_d29eee35b819d934813a2b6637484f9e;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_copy;
static PyObject *const_str_plain_directed;
extern PyObject *const_int_0;
static PyObject *const_str_plain_null_value;
extern PyObject *const_str_plain_csgraph_from_masked;
static PyObject *const_str_plain_validate_graph;
extern PyObject *const_str_plain__tools;
extern PyObject *const_str_plain_isMaskedArray;
static PyObject *const_tuple_d347240ddbf9f034e90be52d39ec188b_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
static PyObject *const_str_plain_nan_null;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_digest_a98439daa1c9b505a0ae102815e36587;
extern PyObject *const_str_plain_float64;
extern PyObject *const_str_plain_csgraph_to_dense;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_c0e8730853d28a4a796576db9bbf1b8e;
extern PyObject *const_str_plain_T;
static PyObject *const_str_plain_copy_if_dense;
extern PyObject *const_str_plain_csr_matrix;
extern PyObject *const_str_plain_mask;
static PyObject *const_str_digest_8ae69726acf23907ae1c4ebd63b2a7ce;
extern PyObject *const_str_plain_shape;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_csgraph;
extern PyObject *const_str_plain_ma;
static PyObject *const_tuple_db85e70f16a1e66ead43de914c360a08_tuple;
extern PyObject *const_str_plain_dense_output;
extern PyObject *const_str_plain_csgraph_masked_from_dense;
static PyObject *const_str_plain_infinity_null;
static PyObject *const_str_plain_copy_if_sparse;
static PyObject *const_str_digest_87a102df276b236763894b2b5faf5954;
static PyObject *const_str_plain_null_value_in;
static PyObject *const_str_plain_csr_output;
extern PyObject *const_str_plain_csgraph_from_dense;
static PyObject *const_str_plain_DTYPE;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_98368a49d09abc7a9eccde7ea1c4292e;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_74be87185c2275c47c31b7b1b5a4f3e2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5365276 ], 32, 0 );
    const_str_plain_null_value_out = UNSTREAM_STRING_ASCII( &constant_bin[ 5365308 ], 14, 1 );
    const_tuple_a36239ca423fae2e795f9338e2b050a0_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_a36239ca423fae2e795f9338e2b050a0_tuple, 0, const_str_plain_csgraph ); Py_INCREF( const_str_plain_csgraph );
    const_str_plain_directed = UNSTREAM_STRING_ASCII( &constant_bin[ 4020305 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_a36239ca423fae2e795f9338e2b050a0_tuple, 1, const_str_plain_directed ); Py_INCREF( const_str_plain_directed );
    PyTuple_SET_ITEM( const_tuple_a36239ca423fae2e795f9338e2b050a0_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    const_str_plain_csr_output = UNSTREAM_STRING_ASCII( &constant_bin[ 5365322 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_a36239ca423fae2e795f9338e2b050a0_tuple, 3, const_str_plain_csr_output ); Py_INCREF( const_str_plain_csr_output );
    PyTuple_SET_ITEM( const_tuple_a36239ca423fae2e795f9338e2b050a0_tuple, 4, const_str_plain_dense_output ); Py_INCREF( const_str_plain_dense_output );
    const_str_plain_copy_if_dense = UNSTREAM_STRING_ASCII( &constant_bin[ 5365332 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_a36239ca423fae2e795f9338e2b050a0_tuple, 5, const_str_plain_copy_if_dense ); Py_INCREF( const_str_plain_copy_if_dense );
    const_str_plain_copy_if_sparse = UNSTREAM_STRING_ASCII( &constant_bin[ 5365345 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_a36239ca423fae2e795f9338e2b050a0_tuple, 6, const_str_plain_copy_if_sparse ); Py_INCREF( const_str_plain_copy_if_sparse );
    const_str_plain_null_value_in = UNSTREAM_STRING_ASCII( &constant_bin[ 5365359 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_a36239ca423fae2e795f9338e2b050a0_tuple, 7, const_str_plain_null_value_in ); Py_INCREF( const_str_plain_null_value_in );
    PyTuple_SET_ITEM( const_tuple_a36239ca423fae2e795f9338e2b050a0_tuple, 8, const_str_plain_null_value_out ); Py_INCREF( const_str_plain_null_value_out );
    const_str_plain_infinity_null = UNSTREAM_STRING_ASCII( &constant_bin[ 5365372 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_a36239ca423fae2e795f9338e2b050a0_tuple, 9, const_str_plain_infinity_null ); Py_INCREF( const_str_plain_infinity_null );
    const_str_plain_nan_null = UNSTREAM_STRING_ASCII( &constant_bin[ 5365385 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_a36239ca423fae2e795f9338e2b050a0_tuple, 10, const_str_plain_nan_null ); Py_INCREF( const_str_plain_nan_null );
    PyTuple_SET_ITEM( const_tuple_a36239ca423fae2e795f9338e2b050a0_tuple, 11, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    const_str_digest_d29eee35b819d934813a2b6637484f9e = UNSTREAM_STRING_ASCII( &constant_bin[ 5365393 ], 35, 0 );
    const_str_plain_null_value = UNSTREAM_STRING_ASCII( &constant_bin[ 5361404 ], 10, 1 );
    const_str_plain_validate_graph = UNSTREAM_STRING_ASCII( &constant_bin[ 5365428 ], 14, 1 );
    const_tuple_d347240ddbf9f034e90be52d39ec188b_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_d347240ddbf9f034e90be52d39ec188b_tuple, 0, const_str_plain_csr_matrix ); Py_INCREF( const_str_plain_csr_matrix );
    PyTuple_SET_ITEM( const_tuple_d347240ddbf9f034e90be52d39ec188b_tuple, 1, const_str_plain_isspmatrix ); Py_INCREF( const_str_plain_isspmatrix );
    PyTuple_SET_ITEM( const_tuple_d347240ddbf9f034e90be52d39ec188b_tuple, 2, const_str_plain_isspmatrix_csc ); Py_INCREF( const_str_plain_isspmatrix_csc );
    const_str_digest_a98439daa1c9b505a0ae102815e36587 = UNSTREAM_STRING_ASCII( &constant_bin[ 5365442 ], 55, 0 );
    const_str_digest_c0e8730853d28a4a796576db9bbf1b8e = UNSTREAM_STRING_ASCII( &constant_bin[ 5365497 ], 42, 0 );
    const_str_digest_8ae69726acf23907ae1c4ebd63b2a7ce = UNSTREAM_STRING_ASCII( &constant_bin[ 5365539 ], 47, 0 );
    const_tuple_db85e70f16a1e66ead43de914c360a08_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_db85e70f16a1e66ead43de914c360a08_tuple, 0, const_str_plain_csgraph_to_dense ); Py_INCREF( const_str_plain_csgraph_to_dense );
    PyTuple_SET_ITEM( const_tuple_db85e70f16a1e66ead43de914c360a08_tuple, 1, const_str_plain_csgraph_from_dense ); Py_INCREF( const_str_plain_csgraph_from_dense );
    PyTuple_SET_ITEM( const_tuple_db85e70f16a1e66ead43de914c360a08_tuple, 2, const_str_plain_csgraph_masked_from_dense ); Py_INCREF( const_str_plain_csgraph_masked_from_dense );
    PyTuple_SET_ITEM( const_tuple_db85e70f16a1e66ead43de914c360a08_tuple, 3, const_str_plain_csgraph_from_masked ); Py_INCREF( const_str_plain_csgraph_from_masked );
    const_str_digest_87a102df276b236763894b2b5faf5954 = UNSTREAM_STRING_ASCII( &constant_bin[ 5365586 ], 41, 0 );
    const_str_plain_DTYPE = UNSTREAM_STRING_ASCII( &constant_bin[ 5365627 ], 5, 1 );
    const_str_digest_98368a49d09abc7a9eccde7ea1c4292e = UNSTREAM_STRING_ASCII( &constant_bin[ 5365632 ], 44, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$sparse$csgraph$_validation( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a8aa2479ea8f03c79018567a2ba8e600;
static PyCodeObject *codeobj_9d87171ee8a6bb66528d647d32fa204c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_d29eee35b819d934813a2b6637484f9e );
    codeobj_a8aa2479ea8f03c79018567a2ba8e600 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_87a102df276b236763894b2b5faf5954, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_9d87171ee8a6bb66528d647d32fa204c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_validate_graph, 11, const_tuple_a36239ca423fae2e795f9338e2b050a0_tuple, 11, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$sparse$csgraph$_validation$$$function_1_validate_graph( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$sparse$csgraph$_validation$$$function_1_validate_graph( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_csgraph = python_pars[ 0 ];
    PyObject *par_directed = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_csr_output = python_pars[ 3 ];
    PyObject *par_dense_output = python_pars[ 4 ];
    PyObject *par_copy_if_dense = python_pars[ 5 ];
    PyObject *par_copy_if_sparse = python_pars[ 6 ];
    PyObject *par_null_value_in = python_pars[ 7 ];
    PyObject *par_null_value_out = python_pars[ 8 ];
    PyObject *par_infinity_null = python_pars[ 9 ];
    PyObject *par_nan_null = python_pars[ 10 ];
    PyObject *var_mask = NULL;
    struct Nuitka_FrameObject *frame_9d87171ee8a6bb66528d647d32fa204c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9d87171ee8a6bb66528d647d32fa204c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9d87171ee8a6bb66528d647d32fa204c, codeobj_9d87171ee8a6bb66528d647d32fa204c, module_scipy$sparse$csgraph$_validation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9d87171ee8a6bb66528d647d32fa204c = cache_frame_9d87171ee8a6bb66528d647d32fa204c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9d87171ee8a6bb66528d647d32fa204c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9d87171ee8a6bb66528d647d32fa204c ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        CHECK_OBJECT( par_csr_output );
        tmp_or_left_value_1 = par_csr_output;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_1 = "oooooooooooo";
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
        CHECK_OBJECT( par_dense_output );
        tmp_or_right_value_1 = par_dense_output;
        tmp_operand_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_operand_name_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_1 = "oooooooooooo";
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
            tmp_make_exception_arg_1 = const_str_digest_c0e8730853d28a4a796576db9bbf1b8e;
            frame_9d87171ee8a6bb66528d647d32fa204c->m_frame.f_lineno = 18;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 18;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_directed );
        tmp_operand_name_2 = par_directed;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isspmatrix_csc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 22;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_csgraph );
        tmp_args_element_name_1 = par_csgraph;
        frame_9d87171ee8a6bb66528d647d32fa204c->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 22;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_csgraph );
            tmp_source_name_1 = par_csgraph;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_T );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_csgraph;
                assert( old != NULL );
                par_csgraph = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_isspmatrix );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isspmatrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_csgraph );
        tmp_args_element_name_2 = par_csgraph;
        frame_9d87171ee8a6bb66528d647d32fa204c->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 25;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
            nuitka_bool tmp_condition_result_4;
            int tmp_truth_name_3;
            CHECK_OBJECT( par_csr_output );
            tmp_truth_name_3 = CHECK_IF_TRUE( par_csr_output );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_2;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_kw_name_1;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_csr_matrix );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csr_matrix );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csr_matrix" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 27;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_3;
                CHECK_OBJECT( par_csgraph );
                tmp_tuple_element_1 = par_csgraph;
                tmp_args_name_1 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
                tmp_dict_key_1 = const_str_plain_dtype;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_DTYPE );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DTYPE );
                }

                if ( tmp_mvar_value_4 == NULL )
                {
                    Py_DECREF( tmp_args_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DTYPE" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 27;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_dict_value_1 = tmp_mvar_value_4;
                tmp_kw_name_1 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_2 = const_str_plain_copy;
                CHECK_OBJECT( par_copy_if_sparse );
                tmp_dict_value_2 = par_copy_if_sparse;
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                frame_9d87171ee8a6bb66528d647d32fa204c->m_frame.f_lineno = 27;
                tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 27;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_csgraph;
                    assert( old != NULL );
                    par_csgraph = tmp_assign_source_2;
                    Py_DECREF( old );
                }

            }
            goto branch_end_4;
            branch_no_4:;
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_csgraph_to_dense );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csgraph_to_dense );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csgraph_to_dense" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 29;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_4 = tmp_mvar_value_5;
                CHECK_OBJECT( par_csgraph );
                tmp_tuple_element_2 = par_csgraph;
                tmp_args_name_2 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
                tmp_dict_key_3 = const_str_plain_null_value;
                CHECK_OBJECT( par_null_value_out );
                tmp_dict_value_3 = par_null_value_out;
                tmp_kw_name_2 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
                assert( !(tmp_res != 0) );
                frame_9d87171ee8a6bb66528d647d32fa204c->m_frame.f_lineno = 29;
                tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 29;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_csgraph;
                    assert( old != NULL );
                    par_csgraph = tmp_assign_source_3;
                    Py_DECREF( old );
                }

            }
            branch_end_4:;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_3;
            int tmp_truth_name_4;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 30;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_6;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ma );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 30;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_csgraph );
            tmp_args_element_name_3 = par_csgraph;
            frame_9d87171ee8a6bb66528d647d32fa204c->m_frame.f_lineno = 30;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isMaskedArray, call_args );
            }

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 30;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_3 );
            if ( tmp_truth_name_4 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_3 );

                exception_lineno = 30;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_3 );
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
                int tmp_truth_name_5;
                CHECK_OBJECT( par_dense_output );
                tmp_truth_name_5 = CHECK_IF_TRUE( par_dense_output );
                if ( tmp_truth_name_5 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 31;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_6 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_4;
                    PyObject *tmp_source_name_3;
                    CHECK_OBJECT( par_csgraph );
                    tmp_source_name_3 = par_csgraph;
                    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_mask );
                    if ( tmp_assign_source_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 32;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_mask == NULL );
                    var_mask = tmp_assign_source_4;
                }
                {
                    PyObject *tmp_assign_source_5;
                    PyObject *tmp_called_name_5;
                    PyObject *tmp_source_name_4;
                    PyObject *tmp_mvar_value_7;
                    PyObject *tmp_args_name_3;
                    PyObject *tmp_tuple_element_3;
                    PyObject *tmp_source_name_5;
                    PyObject *tmp_kw_name_3;
                    PyObject *tmp_dict_key_4;
                    PyObject *tmp_dict_value_4;
                    PyObject *tmp_mvar_value_8;
                    PyObject *tmp_dict_key_5;
                    PyObject *tmp_dict_value_5;
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_np );

                    if (unlikely( tmp_mvar_value_7 == NULL ))
                    {
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                    }

                    if ( tmp_mvar_value_7 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 33;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_4 = tmp_mvar_value_7;
                    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_array );
                    if ( tmp_called_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 33;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_csgraph );
                    tmp_source_name_5 = par_csgraph;
                    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_data );
                    if ( tmp_tuple_element_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_5 );

                        exception_lineno = 33;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_args_name_3 = PyTuple_New( 1 );
                    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
                    tmp_dict_key_4 = const_str_plain_dtype;
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_DTYPE );

                    if (unlikely( tmp_mvar_value_8 == NULL ))
                    {
                        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DTYPE );
                    }

                    if ( tmp_mvar_value_8 == NULL )
                    {
                        Py_DECREF( tmp_called_name_5 );
                        Py_DECREF( tmp_args_name_3 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DTYPE" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 33;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_dict_value_4 = tmp_mvar_value_8;
                    tmp_kw_name_3 = _PyDict_NewPresized( 2 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_5 = const_str_plain_copy;
                    CHECK_OBJECT( par_copy_if_dense );
                    tmp_dict_value_5 = par_copy_if_dense;
                    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_5, tmp_dict_value_5 );
                    assert( !(tmp_res != 0) );
                    frame_9d87171ee8a6bb66528d647d32fa204c->m_frame.f_lineno = 33;
                    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_3, tmp_kw_name_3 );
                    Py_DECREF( tmp_called_name_5 );
                    Py_DECREF( tmp_args_name_3 );
                    Py_DECREF( tmp_kw_name_3 );
                    if ( tmp_assign_source_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 33;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_csgraph;
                        assert( old != NULL );
                        par_csgraph = tmp_assign_source_5;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_ass_subvalue_1;
                    PyObject *tmp_ass_subscribed_1;
                    PyObject *tmp_ass_subscript_1;
                    CHECK_OBJECT( par_null_value_out );
                    tmp_ass_subvalue_1 = par_null_value_out;
                    CHECK_OBJECT( par_csgraph );
                    tmp_ass_subscribed_1 = par_csgraph;
                    CHECK_OBJECT( var_mask );
                    tmp_ass_subscript_1 = var_mask;
                    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 34;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                }
                goto branch_end_6;
                branch_no_6:;
                {
                    PyObject *tmp_assign_source_6;
                    PyObject *tmp_called_name_6;
                    PyObject *tmp_mvar_value_9;
                    PyObject *tmp_args_element_name_4;
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_csgraph_from_masked );

                    if (unlikely( tmp_mvar_value_9 == NULL ))
                    {
                        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csgraph_from_masked );
                    }

                    if ( tmp_mvar_value_9 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csgraph_from_masked" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 36;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_6 = tmp_mvar_value_9;
                    CHECK_OBJECT( par_csgraph );
                    tmp_args_element_name_4 = par_csgraph;
                    frame_9d87171ee8a6bb66528d647d32fa204c->m_frame.f_lineno = 36;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_4 };
                        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
                    }

                    if ( tmp_assign_source_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 36;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_csgraph;
                        assert( old != NULL );
                        par_csgraph = tmp_assign_source_6;
                        Py_DECREF( old );
                    }

                }
                branch_end_6:;
            }
            goto branch_end_5;
            branch_no_5:;
            {
                nuitka_bool tmp_condition_result_7;
                int tmp_truth_name_6;
                CHECK_OBJECT( par_dense_output );
                tmp_truth_name_6 = CHECK_IF_TRUE( par_dense_output );
                if ( tmp_truth_name_6 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 38;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_7 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_7;
                    PyObject *tmp_called_name_7;
                    PyObject *tmp_mvar_value_10;
                    PyObject *tmp_args_name_4;
                    PyObject *tmp_tuple_element_4;
                    PyObject *tmp_kw_name_4;
                    PyObject *tmp_dict_key_6;
                    PyObject *tmp_dict_value_6;
                    PyObject *tmp_dict_key_7;
                    PyObject *tmp_dict_value_7;
                    PyObject *tmp_dict_key_8;
                    PyObject *tmp_dict_value_8;
                    PyObject *tmp_dict_key_9;
                    PyObject *tmp_dict_value_9;
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_csgraph_masked_from_dense );

                    if (unlikely( tmp_mvar_value_10 == NULL ))
                    {
                        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csgraph_masked_from_dense );
                    }

                    if ( tmp_mvar_value_10 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csgraph_masked_from_dense" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 39;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_7 = tmp_mvar_value_10;
                    CHECK_OBJECT( par_csgraph );
                    tmp_tuple_element_4 = par_csgraph;
                    tmp_args_name_4 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_4 );
                    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
                    tmp_dict_key_6 = const_str_plain_copy;
                    CHECK_OBJECT( par_copy_if_dense );
                    tmp_dict_value_6 = par_copy_if_dense;
                    tmp_kw_name_4 = _PyDict_NewPresized( 4 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_6, tmp_dict_value_6 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_7 = const_str_plain_null_value;
                    CHECK_OBJECT( par_null_value_in );
                    tmp_dict_value_7 = par_null_value_in;
                    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_7, tmp_dict_value_7 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_8 = const_str_plain_nan_null;
                    CHECK_OBJECT( par_nan_null );
                    tmp_dict_value_8 = par_nan_null;
                    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_8, tmp_dict_value_8 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_9 = const_str_plain_infinity_null;
                    CHECK_OBJECT( par_infinity_null );
                    tmp_dict_value_9 = par_infinity_null;
                    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_9, tmp_dict_value_9 );
                    assert( !(tmp_res != 0) );
                    frame_9d87171ee8a6bb66528d647d32fa204c->m_frame.f_lineno = 39;
                    tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_4, tmp_kw_name_4 );
                    Py_DECREF( tmp_args_name_4 );
                    Py_DECREF( tmp_kw_name_4 );
                    if ( tmp_assign_source_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 39;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_csgraph;
                        assert( old != NULL );
                        par_csgraph = tmp_assign_source_7;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_8;
                    PyObject *tmp_source_name_6;
                    CHECK_OBJECT( par_csgraph );
                    tmp_source_name_6 = par_csgraph;
                    tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_mask );
                    if ( tmp_assign_source_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 44;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_mask == NULL );
                    var_mask = tmp_assign_source_8;
                }
                {
                    PyObject *tmp_assign_source_9;
                    PyObject *tmp_called_name_8;
                    PyObject *tmp_source_name_7;
                    PyObject *tmp_mvar_value_11;
                    PyObject *tmp_args_name_5;
                    PyObject *tmp_tuple_element_5;
                    PyObject *tmp_source_name_8;
                    PyObject *tmp_kw_name_5;
                    PyObject *tmp_dict_key_10;
                    PyObject *tmp_dict_value_10;
                    PyObject *tmp_mvar_value_12;
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_np );

                    if (unlikely( tmp_mvar_value_11 == NULL ))
                    {
                        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                    }

                    if ( tmp_mvar_value_11 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 45;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_7 = tmp_mvar_value_11;
                    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_asarray );
                    if ( tmp_called_name_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 45;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_csgraph );
                    tmp_source_name_8 = par_csgraph;
                    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_data );
                    if ( tmp_tuple_element_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_8 );

                        exception_lineno = 45;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_args_name_5 = PyTuple_New( 1 );
                    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_5 );
                    tmp_dict_key_10 = const_str_plain_dtype;
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_DTYPE );

                    if (unlikely( tmp_mvar_value_12 == NULL ))
                    {
                        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DTYPE );
                    }

                    if ( tmp_mvar_value_12 == NULL )
                    {
                        Py_DECREF( tmp_called_name_8 );
                        Py_DECREF( tmp_args_name_5 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DTYPE" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 45;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_dict_value_10 = tmp_mvar_value_12;
                    tmp_kw_name_5 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_10, tmp_dict_value_10 );
                    assert( !(tmp_res != 0) );
                    frame_9d87171ee8a6bb66528d647d32fa204c->m_frame.f_lineno = 45;
                    tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_5, tmp_kw_name_5 );
                    Py_DECREF( tmp_called_name_8 );
                    Py_DECREF( tmp_args_name_5 );
                    Py_DECREF( tmp_kw_name_5 );
                    if ( tmp_assign_source_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 45;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_csgraph;
                        assert( old != NULL );
                        par_csgraph = tmp_assign_source_9;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_ass_subvalue_2;
                    PyObject *tmp_ass_subscribed_2;
                    PyObject *tmp_ass_subscript_2;
                    CHECK_OBJECT( par_null_value_out );
                    tmp_ass_subvalue_2 = par_null_value_out;
                    CHECK_OBJECT( par_csgraph );
                    tmp_ass_subscribed_2 = par_csgraph;
                    CHECK_OBJECT( var_mask );
                    tmp_ass_subscript_2 = var_mask;
                    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 46;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                }
                goto branch_end_7;
                branch_no_7:;
                {
                    PyObject *tmp_assign_source_10;
                    PyObject *tmp_called_name_9;
                    PyObject *tmp_mvar_value_13;
                    PyObject *tmp_args_name_6;
                    PyObject *tmp_tuple_element_6;
                    PyObject *tmp_kw_name_6;
                    PyObject *tmp_dict_key_11;
                    PyObject *tmp_dict_value_11;
                    PyObject *tmp_dict_key_12;
                    PyObject *tmp_dict_value_12;
                    PyObject *tmp_dict_key_13;
                    PyObject *tmp_dict_value_13;
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_csgraph_from_dense );

                    if (unlikely( tmp_mvar_value_13 == NULL ))
                    {
                        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csgraph_from_dense );
                    }

                    if ( tmp_mvar_value_13 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csgraph_from_dense" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 48;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_9 = tmp_mvar_value_13;
                    CHECK_OBJECT( par_csgraph );
                    tmp_tuple_element_6 = par_csgraph;
                    tmp_args_name_6 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_6 );
                    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_6 );
                    tmp_dict_key_11 = const_str_plain_null_value;
                    CHECK_OBJECT( par_null_value_in );
                    tmp_dict_value_11 = par_null_value_in;
                    tmp_kw_name_6 = _PyDict_NewPresized( 3 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_11, tmp_dict_value_11 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_12 = const_str_plain_infinity_null;
                    CHECK_OBJECT( par_infinity_null );
                    tmp_dict_value_12 = par_infinity_null;
                    tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_12, tmp_dict_value_12 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_13 = const_str_plain_nan_null;
                    CHECK_OBJECT( par_nan_null );
                    tmp_dict_value_13 = par_nan_null;
                    tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_13, tmp_dict_value_13 );
                    assert( !(tmp_res != 0) );
                    frame_9d87171ee8a6bb66528d647d32fa204c->m_frame.f_lineno = 48;
                    tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_6, tmp_kw_name_6 );
                    Py_DECREF( tmp_args_name_6 );
                    Py_DECREF( tmp_kw_name_6 );
                    if ( tmp_assign_source_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 48;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_csgraph;
                        assert( old != NULL );
                        par_csgraph = tmp_assign_source_10;
                        Py_DECREF( old );
                    }

                }
                branch_end_7:;
            }
            branch_end_5:;
        }
        branch_end_3:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_9;
        if ( par_csgraph == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "csgraph" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = par_csgraph;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_8ae69726acf23907ae1c4ebd63b2a7ce;
            frame_9d87171ee8a6bb66528d647d32fa204c->m_frame.f_lineno = 53;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 53;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_10;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_11;
        PyObject *tmp_subscript_name_2;
        if ( par_csgraph == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "csgraph" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 55;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = par_csgraph;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( par_csgraph == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "csgraph" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 55;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = par_csgraph;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_shape );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 55;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_pos_1;
        tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 55;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
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
            PyObject *tmp_make_exception_arg_3;
            tmp_make_exception_arg_3 = const_str_digest_98368a49d09abc7a9eccde7ea1c4292e;
            frame_9d87171ee8a6bb66528d647d32fa204c->m_frame.f_lineno = 56;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 56;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_9:;
    }
    if ( par_csgraph == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "csgraph" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_csgraph;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d87171ee8a6bb66528d647d32fa204c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d87171ee8a6bb66528d647d32fa204c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d87171ee8a6bb66528d647d32fa204c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9d87171ee8a6bb66528d647d32fa204c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9d87171ee8a6bb66528d647d32fa204c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9d87171ee8a6bb66528d647d32fa204c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9d87171ee8a6bb66528d647d32fa204c,
        type_description_1,
        par_csgraph,
        par_directed,
        par_dtype,
        par_csr_output,
        par_dense_output,
        par_copy_if_dense,
        par_copy_if_sparse,
        par_null_value_in,
        par_null_value_out,
        par_infinity_null,
        par_nan_null,
        var_mask
    );


    // Release cached frame.
    if ( frame_9d87171ee8a6bb66528d647d32fa204c == cache_frame_9d87171ee8a6bb66528d647d32fa204c )
    {
        Py_DECREF( frame_9d87171ee8a6bb66528d647d32fa204c );
    }
    cache_frame_9d87171ee8a6bb66528d647d32fa204c = NULL;

    assertFrameObject( frame_9d87171ee8a6bb66528d647d32fa204c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csgraph$_validation$$$function_1_validate_graph );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_csgraph );
    par_csgraph = NULL;

    CHECK_OBJECT( (PyObject *)par_directed );
    Py_DECREF( par_directed );
    par_directed = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_csr_output );
    Py_DECREF( par_csr_output );
    par_csr_output = NULL;

    CHECK_OBJECT( (PyObject *)par_dense_output );
    Py_DECREF( par_dense_output );
    par_dense_output = NULL;

    CHECK_OBJECT( (PyObject *)par_copy_if_dense );
    Py_DECREF( par_copy_if_dense );
    par_copy_if_dense = NULL;

    CHECK_OBJECT( (PyObject *)par_copy_if_sparse );
    Py_DECREF( par_copy_if_sparse );
    par_copy_if_sparse = NULL;

    CHECK_OBJECT( (PyObject *)par_null_value_in );
    Py_DECREF( par_null_value_in );
    par_null_value_in = NULL;

    CHECK_OBJECT( (PyObject *)par_null_value_out );
    Py_DECREF( par_null_value_out );
    par_null_value_out = NULL;

    CHECK_OBJECT( (PyObject *)par_infinity_null );
    Py_DECREF( par_infinity_null );
    par_infinity_null = NULL;

    CHECK_OBJECT( (PyObject *)par_nan_null );
    Py_DECREF( par_nan_null );
    par_nan_null = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

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

    Py_XDECREF( par_csgraph );
    par_csgraph = NULL;

    CHECK_OBJECT( (PyObject *)par_directed );
    Py_DECREF( par_directed );
    par_directed = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_csr_output );
    Py_DECREF( par_csr_output );
    par_csr_output = NULL;

    CHECK_OBJECT( (PyObject *)par_dense_output );
    Py_DECREF( par_dense_output );
    par_dense_output = NULL;

    CHECK_OBJECT( (PyObject *)par_copy_if_dense );
    Py_DECREF( par_copy_if_dense );
    par_copy_if_dense = NULL;

    CHECK_OBJECT( (PyObject *)par_copy_if_sparse );
    Py_DECREF( par_copy_if_sparse );
    par_copy_if_sparse = NULL;

    CHECK_OBJECT( (PyObject *)par_null_value_in );
    Py_DECREF( par_null_value_in );
    par_null_value_in = NULL;

    CHECK_OBJECT( (PyObject *)par_null_value_out );
    Py_DECREF( par_null_value_out );
    par_null_value_out = NULL;

    CHECK_OBJECT( (PyObject *)par_infinity_null );
    Py_DECREF( par_infinity_null );
    par_infinity_null = NULL;

    CHECK_OBJECT( (PyObject *)par_nan_null );
    Py_DECREF( par_nan_null );
    par_nan_null = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csgraph$_validation$$$function_1_validate_graph );
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



static PyObject *MAKE_FUNCTION_scipy$sparse$csgraph$_validation$$$function_1_validate_graph( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csgraph$_validation$$$function_1_validate_graph,
        const_str_plain_validate_graph,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9d87171ee8a6bb66528d647d32fa204c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csgraph$_validation,
        const_str_digest_a98439daa1c9b505a0ae102815e36587,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$csgraph$_validation =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.csgraph._validation",
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

MOD_INIT_DECL( scipy$sparse$csgraph$_validation )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$csgraph$_validation );
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
    puts("scipy.sparse.csgraph._validation: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.csgraph._validation: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.csgraph._validation: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$sparse$csgraph$_validation" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$csgraph$_validation = Py_InitModule4(
        "scipy.sparse.csgraph._validation",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$sparse$csgraph$_validation = PyModule_Create( &mdef_scipy$sparse$csgraph$_validation );
#endif

    moduledict_scipy$sparse$csgraph$_validation = MODULE_DICT( module_scipy$sparse$csgraph$_validation );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$sparse$csgraph$_validation,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$sparse$csgraph$_validation,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$csgraph$_validation,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$csgraph$_validation,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$sparse$csgraph$_validation );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_74be87185c2275c47c31b7b1b5a4f3e2, module_scipy$sparse$csgraph$_validation );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_a8aa2479ea8f03c79018567a2ba8e600;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_a8aa2479ea8f03c79018567a2ba8e600 = MAKE_MODULE_FRAME( codeobj_a8aa2479ea8f03c79018567a2ba8e600, module_scipy$sparse$csgraph$_validation );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a8aa2479ea8f03c79018567a2ba8e600 );
    assert( Py_REFCNT( frame_a8aa2479ea8f03c79018567a2ba8e600 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_a8aa2479ea8f03c79018567a2ba8e600->m_frame.f_lineno = 1;
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$sparse$csgraph$_validation;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_a8aa2479ea8f03c79018567a2ba8e600->m_frame.f_lineno = 3;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$sparse$csgraph$_validation;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_d347240ddbf9f034e90be52d39ec188b_tuple;
        tmp_level_name_2 = const_int_0;
        frame_a8aa2479ea8f03c79018567a2ba8e600->m_frame.f_lineno = 4;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_csr_matrix );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_csr_matrix, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_isspmatrix );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_isspmatrix, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_isspmatrix_csc );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc, tmp_assign_source_12 );
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain__tools;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$sparse$csgraph$_validation;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_db85e70f16a1e66ead43de914c360a08_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_a8aa2479ea8f03c79018567a2ba8e600->m_frame.f_lineno = 5;
        tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_7 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_scipy$sparse$csgraph$_validation,
                const_str_plain_csgraph_to_dense,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_csgraph_to_dense );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_csgraph_to_dense, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_scipy$sparse$csgraph$_validation,
                const_str_plain_csgraph_from_dense,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_csgraph_from_dense );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_csgraph_from_dense, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_scipy$sparse$csgraph$_validation,
                const_str_plain_csgraph_masked_from_dense,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_csgraph_masked_from_dense );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_csgraph_masked_from_dense, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_scipy$sparse$csgraph$_validation,
                const_str_plain_csgraph_from_masked,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_csgraph_from_masked );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_csgraph_from_masked, tmp_assign_source_17 );
    }
    goto try_end_3;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 8;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_assign_source_18 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_float64 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_DTYPE, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_DTYPE );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DTYPE );
        }

        CHECK_OBJECT( tmp_mvar_value_4 );
        tmp_tuple_element_1 = tmp_mvar_value_4;
        tmp_defaults_1 = PyTuple_New( 9 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_True;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_True;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_False;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_False;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 4, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 5, tmp_tuple_element_1 );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_defaults_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 14;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_5;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inf );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_defaults_1 );

            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_defaults_1, 6, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_True;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 7, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_True;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 8, tmp_tuple_element_1 );
        tmp_assign_source_19 = MAKE_FUNCTION_scipy$sparse$csgraph$_validation$$$function_1_validate_graph( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain_validate_graph, tmp_assign_source_19 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8aa2479ea8f03c79018567a2ba8e600 );
#endif
    popFrameStack();

    assertFrameObject( frame_a8aa2479ea8f03c79018567a2ba8e600 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8aa2479ea8f03c79018567a2ba8e600 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a8aa2479ea8f03c79018567a2ba8e600, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a8aa2479ea8f03c79018567a2ba8e600->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a8aa2479ea8f03c79018567a2ba8e600, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_validation, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$csgraph$_validation );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
