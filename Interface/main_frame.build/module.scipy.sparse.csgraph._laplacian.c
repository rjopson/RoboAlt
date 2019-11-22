/* Generated code for Python module 'scipy.sparse.csgraph._laplacian'
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

/* The "_module_scipy$sparse$csgraph$_laplacian" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$sparse$csgraph$_laplacian;
PyDictObject *moduledict_scipy$sparse$csgraph$_laplacian;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_array;
static PyObject *const_str_plain__setdiag_dense;
extern PyObject *const_tuple_false_false_false_tuple;
extern PyObject *const_str_plain_setdiag;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain__laplacian_dense;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_tocoo;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_where;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_lil;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_diagonal;
static PyObject *const_str_plain_needs_copy;
extern PyObject *const_str_plain_dia;
extern PyObject *const_str_plain_astype;
extern PyObject *const_str_plain_csgraph;
static PyObject *const_str_plain_isolated_node_mask;
static PyObject *const_tuple_f62c57e3c1221c496d0df55bc2636cea_tuple;
static PyObject *const_str_plain_use_out_degree;
extern PyObject *const_tuple_false_int_0_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_plain_degree_axis;
static PyObject *const_str_plain_lap;
extern PyObject *const_str_plain_signedinteger;
static PyObject *const_str_digest_22af90b76d84a4e6dff1628e205b3888;
extern PyObject *const_str_plain_w;
static PyObject *const_str_plain_return_diag;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_issubdtype;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_normed;
extern PyObject *const_str_plain_laplacian;
extern PyObject *const_tuple_str_plain_isspmatrix_tuple;
static PyObject *const_tuple_str_plain_A_str_plain_d_tuple;
static PyObject *const_tuple_aa92547aa630bc6411cb363ba30e294b_tuple;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_uint;
extern PyObject *const_str_plain_col;
static PyObject *const_str_digest_23acddbe06cf9b9cb8ba1cedeaeb5f14;
extern PyObject *const_tuple_type_float_tuple;
extern PyObject *const_int_0;
static PyObject *const_str_digest_ac41998052698b60c8e7857efbfac160;
extern PyObject *const_str_plain_row;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_graph;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_flat;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_4dd70072e1b58ed043ec9aa868dc06a7;
extern PyObject *const_str_plain_fill_diagonal;
extern PyObject *const_str_plain_isspmatrix;
extern PyObject *const_str_plain_dok;
static PyObject *const_tuple_str_plain_lil_str_plain_dok_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_axis;
static PyObject *const_tuple_abd8f4e0aa44c08ea0d36b4b6984da9b_tuple;
static PyObject *const_str_plain_create_lap;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_sqrt;
static PyObject *const_str_digest_da57c07cb2e7b2387691a044a0eaf8c9;
static PyObject *const_str_digest_e9359de087bc3b2402c6f4c415f9b2ea;
extern PyObject *const_str_plain_newaxis;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_np;
static PyObject *const_str_plain__laplacian_sparse;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_A;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_getA1;
extern PyObject *const_str_plain_format;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain__setdiag_dense = UNSTREAM_STRING_ASCII( &constant_bin[ 5363174 ], 14, 1 );
    const_str_plain__laplacian_dense = UNSTREAM_STRING_ASCII( &constant_bin[ 5363188 ], 16, 1 );
    const_str_plain_needs_copy = UNSTREAM_STRING_ASCII( &constant_bin[ 5363204 ], 10, 1 );
    const_str_plain_isolated_node_mask = UNSTREAM_STRING_ASCII( &constant_bin[ 5363214 ], 18, 1 );
    const_tuple_f62c57e3c1221c496d0df55bc2636cea_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_f62c57e3c1221c496d0df55bc2636cea_tuple, 0, const_str_plain_graph ); Py_INCREF( const_str_plain_graph );
    PyTuple_SET_ITEM( const_tuple_f62c57e3c1221c496d0df55bc2636cea_tuple, 1, const_str_plain_normed ); Py_INCREF( const_str_plain_normed );
    PyTuple_SET_ITEM( const_tuple_f62c57e3c1221c496d0df55bc2636cea_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_f62c57e3c1221c496d0df55bc2636cea_tuple, 3, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_f62c57e3c1221c496d0df55bc2636cea_tuple, 4, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_f62c57e3c1221c496d0df55bc2636cea_tuple, 5, const_str_plain_isolated_node_mask ); Py_INCREF( const_str_plain_isolated_node_mask );
    const_str_plain_use_out_degree = UNSTREAM_STRING_ASCII( &constant_bin[ 5363232 ], 14, 1 );
    const_str_plain_degree_axis = UNSTREAM_STRING_ASCII( &constant_bin[ 5363246 ], 11, 1 );
    const_str_plain_lap = UNSTREAM_STRING_ASCII( &constant_bin[ 111736 ], 3, 1 );
    const_str_digest_22af90b76d84a4e6dff1628e205b3888 = UNSTREAM_STRING_ASCII( &constant_bin[ 5363257 ], 40, 0 );
    const_str_plain_return_diag = UNSTREAM_STRING_ASCII( &constant_bin[ 5363297 ], 11, 1 );
    const_tuple_str_plain_A_str_plain_d_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_d_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_d_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_tuple_aa92547aa630bc6411cb363ba30e294b_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_aa92547aa630bc6411cb363ba30e294b_tuple, 0, const_str_plain_graph ); Py_INCREF( const_str_plain_graph );
    PyTuple_SET_ITEM( const_tuple_aa92547aa630bc6411cb363ba30e294b_tuple, 1, const_str_plain_normed ); Py_INCREF( const_str_plain_normed );
    PyTuple_SET_ITEM( const_tuple_aa92547aa630bc6411cb363ba30e294b_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_aa92547aa630bc6411cb363ba30e294b_tuple, 3, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_aa92547aa630bc6411cb363ba30e294b_tuple, 4, const_str_plain_needs_copy ); Py_INCREF( const_str_plain_needs_copy );
    PyTuple_SET_ITEM( const_tuple_aa92547aa630bc6411cb363ba30e294b_tuple, 5, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_aa92547aa630bc6411cb363ba30e294b_tuple, 6, const_str_plain_isolated_node_mask ); Py_INCREF( const_str_plain_isolated_node_mask );
    const_str_digest_23acddbe06cf9b9cb8ba1cedeaeb5f14 = UNSTREAM_STRING_ASCII( &constant_bin[ 5363308 ], 40, 0 );
    const_str_digest_ac41998052698b60c8e7857efbfac160 = UNSTREAM_STRING_ASCII( &constant_bin[ 5363265 ], 31, 0 );
    const_str_digest_4dd70072e1b58ed043ec9aa868dc06a7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5363348 ], 40, 0 );
    const_tuple_str_plain_lil_str_plain_dok_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_lil_str_plain_dok_tuple, 0, const_str_plain_lil ); Py_INCREF( const_str_plain_lil );
    PyTuple_SET_ITEM( const_tuple_str_plain_lil_str_plain_dok_tuple, 1, const_str_plain_dok ); Py_INCREF( const_str_plain_dok );
    const_tuple_abd8f4e0aa44c08ea0d36b4b6984da9b_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_abd8f4e0aa44c08ea0d36b4b6984da9b_tuple, 0, const_str_plain_csgraph ); Py_INCREF( const_str_plain_csgraph );
    PyTuple_SET_ITEM( const_tuple_abd8f4e0aa44c08ea0d36b4b6984da9b_tuple, 1, const_str_plain_normed ); Py_INCREF( const_str_plain_normed );
    PyTuple_SET_ITEM( const_tuple_abd8f4e0aa44c08ea0d36b4b6984da9b_tuple, 2, const_str_plain_return_diag ); Py_INCREF( const_str_plain_return_diag );
    PyTuple_SET_ITEM( const_tuple_abd8f4e0aa44c08ea0d36b4b6984da9b_tuple, 3, const_str_plain_use_out_degree ); Py_INCREF( const_str_plain_use_out_degree );
    const_str_plain_create_lap = UNSTREAM_STRING_ASCII( &constant_bin[ 5363388 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_abd8f4e0aa44c08ea0d36b4b6984da9b_tuple, 4, const_str_plain_create_lap ); Py_INCREF( const_str_plain_create_lap );
    PyTuple_SET_ITEM( const_tuple_abd8f4e0aa44c08ea0d36b4b6984da9b_tuple, 5, const_str_plain_degree_axis ); Py_INCREF( const_str_plain_degree_axis );
    PyTuple_SET_ITEM( const_tuple_abd8f4e0aa44c08ea0d36b4b6984da9b_tuple, 6, const_str_plain_lap ); Py_INCREF( const_str_plain_lap );
    PyTuple_SET_ITEM( const_tuple_abd8f4e0aa44c08ea0d36b4b6984da9b_tuple, 7, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_str_digest_da57c07cb2e7b2387691a044a0eaf8c9 = UNSTREAM_STRING_ASCII( &constant_bin[ 5363398 ], 34, 0 );
    const_str_digest_e9359de087bc3b2402c6f4c415f9b2ea = UNSTREAM_STRING_ASCII( &constant_bin[ 5363432 ], 1827, 0 );
    const_str_plain__laplacian_sparse = UNSTREAM_STRING_ASCII( &constant_bin[ 5365259 ], 17, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$sparse$csgraph$_laplacian( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_aa8e08a0d4985e3a87560a701a3beb84;
static PyCodeObject *codeobj_a9bfa46c715c1da2b0828021dbcbea87;
static PyCodeObject *codeobj_768d5edcc872691fa5db96f98bca53de;
static PyCodeObject *codeobj_d5bc120eb0d22032e6827c78f0529ab5;
static PyCodeObject *codeobj_2e79e17daa330f14c29e585bfb2a9e8b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_da57c07cb2e7b2387691a044a0eaf8c9 );
    codeobj_aa8e08a0d4985e3a87560a701a3beb84 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_22af90b76d84a4e6dff1628e205b3888, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_a9bfa46c715c1da2b0828021dbcbea87 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__laplacian_dense, 114, const_tuple_f62c57e3c1221c496d0df55bc2636cea_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_768d5edcc872691fa5db96f98bca53de = MAKE_CODEOBJ( module_filename_obj, const_str_plain__laplacian_sparse, 88, const_tuple_aa92547aa630bc6411cb363ba30e294b_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d5bc120eb0d22032e6827c78f0529ab5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__setdiag_dense, 84, const_tuple_str_plain_A_str_plain_d_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2e79e17daa330f14c29e585bfb2a9e8b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_laplacian, 18, const_tuple_abd8f4e0aa44c08ea0d36b4b6984da9b_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$sparse$csgraph$_laplacian$$$function_1_laplacian( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$csgraph$_laplacian$$$function_2__setdiag_dense(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$csgraph$_laplacian$$$function_3__laplacian_sparse( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$csgraph$_laplacian$$$function_4__laplacian_dense( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$sparse$csgraph$_laplacian$$$function_1_laplacian( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_csgraph = python_pars[ 0 ];
    PyObject *par_normed = python_pars[ 1 ];
    PyObject *par_return_diag = python_pars[ 2 ];
    PyObject *par_use_out_degree = python_pars[ 3 ];
    PyObject *var_create_lap = NULL;
    PyObject *var_degree_axis = NULL;
    PyObject *var_lap = NULL;
    PyObject *var_d = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2e79e17daa330f14c29e585bfb2a9e8b;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2e79e17daa330f14c29e585bfb2a9e8b = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2e79e17daa330f14c29e585bfb2a9e8b, codeobj_2e79e17daa330f14c29e585bfb2a9e8b, module_scipy$sparse$csgraph$_laplacian, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2e79e17daa330f14c29e585bfb2a9e8b = cache_frame_2e79e17daa330f14c29e585bfb2a9e8b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2e79e17daa330f14c29e585bfb2a9e8b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2e79e17daa330f14c29e585bfb2a9e8b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_csgraph );
        tmp_source_name_1 = par_csgraph;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_csgraph );
        tmp_source_name_2 = par_csgraph;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_csgraph );
        tmp_source_name_3 = par_csgraph;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 69;
            type_description_1 = "oooooooo";
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

            exception_lineno = 69;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
            tmp_make_exception_arg_1 = const_str_digest_4dd70072e1b58ed043ec9aa868dc06a7;
            frame_2e79e17daa330f14c29e585bfb2a9e8b->m_frame.f_lineno = 70;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 70;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_8;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_4;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_normed );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_normed );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 72;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_issubdtype );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_csgraph );
        tmp_source_name_5 = par_csgraph;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 72;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 72;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_signedinteger );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 72;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_2e79e17daa330f14c29e585bfb2a9e8b->m_frame.f_lineno = 72;
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


            exception_lineno = 72;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 72;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_2 == 1 )
        {
            goto or_left_2;
        }
        else
        {
            goto or_right_2;
        }
        or_right_2:;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 73;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_issubdtype );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_csgraph );
        tmp_source_name_8 = par_csgraph;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_dtype );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 73;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 73;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_4;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_uint );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 73;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_2e79e17daa330f14c29e585bfb2a9e8b->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 73;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
        tmp_and_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_and_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
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
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_csgraph );
            tmp_called_instance_1 = par_csgraph;
            frame_2e79e17daa330f14c29e585bfb2a9e8b->m_frame.f_lineno = 74;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_astype, &PyTuple_GET_ITEM( const_tuple_type_float_tuple, 0 ) );

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;
                type_description_1 = "oooooooo";
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
        PyObject *tmp_assign_source_2;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_5;
        int tmp_truth_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_isspmatrix );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isspmatrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_5;
        CHECK_OBJECT( par_csgraph );
        tmp_args_element_name_5 = par_csgraph;
        frame_2e79e17daa330f14c29e585bfb2a9e8b->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 76;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain__laplacian_sparse );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__laplacian_sparse );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_laplacian_sparse" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_2 = tmp_mvar_value_6;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain__laplacian_dense );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__laplacian_dense );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_laplacian_dense" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_2 = tmp_mvar_value_7;
        condexpr_end_1:;
        assert( var_create_lap == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_create_lap = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_5;
        CHECK_OBJECT( par_use_out_degree );
        tmp_truth_name_5 = CHECK_IF_TRUE( par_use_out_degree );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_assign_source_3 = const_int_pos_1;
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_3 = const_int_0;
        condexpr_end_2:;
        assert( var_degree_axis == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_degree_axis = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT( var_create_lap );
        tmp_called_name_4 = var_create_lap;
        CHECK_OBJECT( par_csgraph );
        tmp_tuple_element_1 = par_csgraph;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_normed;
        CHECK_OBJECT( par_normed );
        tmp_dict_value_1 = par_normed;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_axis;
        CHECK_OBJECT( var_degree_axis );
        tmp_dict_value_2 = var_degree_axis;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_2e79e17daa330f14c29e585bfb2a9e8b->m_frame.f_lineno = 78;
        tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "oooooooo";
            exception_lineno = 78;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "oooooooo";
            exception_lineno = 78;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                    type_description_1 = "oooooooo";
                    exception_lineno = 78;
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

            type_description_1 = "oooooooo";
            exception_lineno = 78;
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
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert( var_lap == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_lap = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert( var_d == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_d = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_6;
        CHECK_OBJECT( par_return_diag );
        tmp_truth_name_6 = CHECK_IF_TRUE( par_return_diag );
        if ( tmp_truth_name_6 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_tuple_element_2;
            CHECK_OBJECT( var_lap );
            tmp_tuple_element_2 = var_lap;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_d );
            tmp_tuple_element_2 = var_d;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
            goto frame_return_exit_1;
        }
        branch_no_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e79e17daa330f14c29e585bfb2a9e8b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e79e17daa330f14c29e585bfb2a9e8b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e79e17daa330f14c29e585bfb2a9e8b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2e79e17daa330f14c29e585bfb2a9e8b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2e79e17daa330f14c29e585bfb2a9e8b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2e79e17daa330f14c29e585bfb2a9e8b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2e79e17daa330f14c29e585bfb2a9e8b,
        type_description_1,
        par_csgraph,
        par_normed,
        par_return_diag,
        par_use_out_degree,
        var_create_lap,
        var_degree_axis,
        var_lap,
        var_d
    );


    // Release cached frame.
    if ( frame_2e79e17daa330f14c29e585bfb2a9e8b == cache_frame_2e79e17daa330f14c29e585bfb2a9e8b )
    {
        Py_DECREF( frame_2e79e17daa330f14c29e585bfb2a9e8b );
    }
    cache_frame_2e79e17daa330f14c29e585bfb2a9e8b = NULL;

    assertFrameObject( frame_2e79e17daa330f14c29e585bfb2a9e8b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_lap );
    tmp_return_value = var_lap;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csgraph$_laplacian$$$function_1_laplacian );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_csgraph );
    Py_DECREF( par_csgraph );
    par_csgraph = NULL;

    CHECK_OBJECT( (PyObject *)par_normed );
    Py_DECREF( par_normed );
    par_normed = NULL;

    CHECK_OBJECT( (PyObject *)par_return_diag );
    Py_DECREF( par_return_diag );
    par_return_diag = NULL;

    CHECK_OBJECT( (PyObject *)par_use_out_degree );
    Py_DECREF( par_use_out_degree );
    par_use_out_degree = NULL;

    CHECK_OBJECT( (PyObject *)var_create_lap );
    Py_DECREF( var_create_lap );
    var_create_lap = NULL;

    CHECK_OBJECT( (PyObject *)var_degree_axis );
    Py_DECREF( var_degree_axis );
    var_degree_axis = NULL;

    CHECK_OBJECT( (PyObject *)var_lap );
    Py_DECREF( var_lap );
    var_lap = NULL;

    CHECK_OBJECT( (PyObject *)var_d );
    Py_DECREF( var_d );
    var_d = NULL;

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

    Py_XDECREF( par_csgraph );
    par_csgraph = NULL;

    CHECK_OBJECT( (PyObject *)par_normed );
    Py_DECREF( par_normed );
    par_normed = NULL;

    CHECK_OBJECT( (PyObject *)par_return_diag );
    Py_DECREF( par_return_diag );
    par_return_diag = NULL;

    CHECK_OBJECT( (PyObject *)par_use_out_degree );
    Py_DECREF( par_use_out_degree );
    par_use_out_degree = NULL;

    Py_XDECREF( var_create_lap );
    var_create_lap = NULL;

    Py_XDECREF( var_degree_axis );
    var_degree_axis = NULL;

    Py_XDECREF( var_lap );
    var_lap = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csgraph$_laplacian$$$function_1_laplacian );
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


static PyObject *impl_scipy$sparse$csgraph$_laplacian$$$function_2__setdiag_dense( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_d = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_d5bc120eb0d22032e6827c78f0529ab5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d5bc120eb0d22032e6827c78f0529ab5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d5bc120eb0d22032e6827c78f0529ab5, codeobj_d5bc120eb0d22032e6827c78f0529ab5, module_scipy$sparse$csgraph$_laplacian, sizeof(void *)+sizeof(void *) );
    frame_d5bc120eb0d22032e6827c78f0529ab5 = cache_frame_d5bc120eb0d22032e6827c78f0529ab5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d5bc120eb0d22032e6827c78f0529ab5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d5bc120eb0d22032e6827c78f0529ab5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_d );
        tmp_ass_subvalue_1 = par_d;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flat );
        if ( tmp_ass_subscribed_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_start_name_1 = Py_None;
        tmp_stop_name_1 = Py_None;
        CHECK_OBJECT( par_d );
        tmp_len_arg_1 = par_d;
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subscribed_1 );

            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_step_name_1 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        assert( !(tmp_step_name_1 == NULL) );
        tmp_ass_subscript_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_step_name_1 );
        assert( !(tmp_ass_subscript_1 == NULL) );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5bc120eb0d22032e6827c78f0529ab5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5bc120eb0d22032e6827c78f0529ab5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d5bc120eb0d22032e6827c78f0529ab5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d5bc120eb0d22032e6827c78f0529ab5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d5bc120eb0d22032e6827c78f0529ab5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d5bc120eb0d22032e6827c78f0529ab5,
        type_description_1,
        par_A,
        par_d
    );


    // Release cached frame.
    if ( frame_d5bc120eb0d22032e6827c78f0529ab5 == cache_frame_d5bc120eb0d22032e6827c78f0529ab5 )
    {
        Py_DECREF( frame_d5bc120eb0d22032e6827c78f0529ab5 );
    }
    cache_frame_d5bc120eb0d22032e6827c78f0529ab5 = NULL;

    assertFrameObject( frame_d5bc120eb0d22032e6827c78f0529ab5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csgraph$_laplacian$$$function_2__setdiag_dense );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csgraph$_laplacian$$$function_2__setdiag_dense );
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


static PyObject *impl_scipy$sparse$csgraph$_laplacian$$$function_3__laplacian_sparse( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_graph = python_pars[ 0 ];
    PyObject *par_normed = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *var_m = NULL;
    nuitka_bool var_needs_copy = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_w = NULL;
    PyObject *var_isolated_node_mask = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    PyObject *tmp_inplace_assign_attr_3__end = NULL;
    PyObject *tmp_inplace_assign_attr_3__start = NULL;
    PyObject *tmp_inplace_assign_attr_4__end = NULL;
    PyObject *tmp_inplace_assign_attr_4__start = NULL;
    struct Nuitka_FrameObject *frame_768d5edcc872691fa5db96f98bca53de;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_768d5edcc872691fa5db96f98bca53de = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_768d5edcc872691fa5db96f98bca53de, codeobj_768d5edcc872691fa5db96f98bca53de, module_scipy$sparse$csgraph$_laplacian, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_768d5edcc872691fa5db96f98bca53de = cache_frame_768d5edcc872691fa5db96f98bca53de;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_768d5edcc872691fa5db96f98bca53de );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_768d5edcc872691fa5db96f98bca53de ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_graph );
        tmp_source_name_1 = par_graph;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "ooooboo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_tuple_str_plain_lil_str_plain_dok_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "ooooboo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( par_graph );
            tmp_called_instance_1 = par_graph;
            frame_768d5edcc872691fa5db96f98bca53de->m_frame.f_lineno = 90;
            tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_tocoo );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 90;
                type_description_1 = "ooooboo";
                goto frame_exception_exit_1;
            }
            assert( var_m == NULL );
            var_m = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_assign_source_2;
            tmp_assign_source_2 = NUITKA_BOOL_FALSE;
            var_needs_copy = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT( par_graph );
            tmp_assign_source_3 = par_graph;
            assert( var_m == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_m = tmp_assign_source_3;
        }
        {
            nuitka_bool tmp_assign_source_4;
            tmp_assign_source_4 = NUITKA_BOOL_TRUE;
            var_needs_copy = tmp_assign_source_4;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT( var_m );
        tmp_source_name_2 = var_m;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sum );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "ooooboo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_1 = par_axis;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_768d5edcc872691fa5db96f98bca53de->m_frame.f_lineno = 95;
        tmp_called_instance_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "ooooboo";
            goto frame_exception_exit_1;
        }
        frame_768d5edcc872691fa5db96f98bca53de->m_frame.f_lineno = 95;
        tmp_left_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getA1 );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "ooooboo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_m );
        tmp_called_instance_3 = var_m;
        frame_768d5edcc872691fa5db96f98bca53de->m_frame.f_lineno = 95;
        tmp_right_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_diagonal );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 95;
            type_description_1 = "ooooboo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "ooooboo";
            goto frame_exception_exit_1;
        }
        assert( var_w == NULL );
        var_w = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_normed );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_normed );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "ooooboo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            CHECK_OBJECT( var_m );
            tmp_source_name_3 = var_m;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_tocoo );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;
                type_description_1 = "ooooboo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_2 = const_str_plain_copy;
            assert( var_needs_copy != NUITKA_BOOL_UNASSIGNED);
            tmp_dict_value_2 = ( var_needs_copy == NUITKA_BOOL_TRUE ) ? Py_True : Py_False;
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_768d5edcc872691fa5db96f98bca53de->m_frame.f_lineno = 97;
            tmp_assign_source_6 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;
                type_description_1 = "ooooboo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_m;
                assert( old != NULL );
                var_m = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_w );
            tmp_compexpr_left_2 = var_w;
            tmp_compexpr_right_2 = const_int_0;
            tmp_assign_source_7 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "ooooboo";
                goto frame_exception_exit_1;
            }
            assert( var_isolated_node_mask == NULL );
            var_isolated_node_mask = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 99;
                type_description_1 = "ooooboo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_1;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_where );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 99;
                type_description_1 = "ooooboo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_isolated_node_mask );
            tmp_args_element_name_1 = var_isolated_node_mask;
            tmp_args_element_name_2 = const_int_pos_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 99;
                type_description_1 = "ooooboo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_4 = tmp_mvar_value_2;
            CHECK_OBJECT( var_w );
            tmp_args_element_name_4 = var_w;
            frame_768d5edcc872691fa5db96f98bca53de->m_frame.f_lineno = 99;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_sqrt, call_args );
            }

            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 99;
                type_description_1 = "ooooboo";
                goto frame_exception_exit_1;
            }
            frame_768d5edcc872691fa5db96f98bca53de->m_frame.f_lineno = 99;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 99;
                type_description_1 = "ooooboo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_w;
                assert( old != NULL );
                var_w = tmp_assign_source_8;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( var_m );
            tmp_source_name_5 = var_m;
            tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_data );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;
                type_description_1 = "ooooboo";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_1__start == NULL );
            tmp_inplace_assign_attr_1__start = tmp_assign_source_9;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_2 = tmp_inplace_assign_attr_1__start;
            CHECK_OBJECT( var_w );
            tmp_subscribed_name_1 = var_w;
            CHECK_OBJECT( var_m );
            tmp_source_name_6 = var_m;
            tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_row );
            if ( tmp_subscript_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;
                type_description_1 = "ooooboo";
                goto try_except_handler_2;
            }
            tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;
                type_description_1 = "ooooboo";
                goto try_except_handler_2;
            }
            tmp_assign_source_10 = BINARY_OPERATION( PyNumber_InPlaceTrueDivide, tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;
                type_description_1 = "ooooboo";
                goto try_except_handler_2;
            }
            assert( tmp_inplace_assign_attr_1__end == NULL );
            tmp_inplace_assign_attr_1__end = tmp_assign_source_10;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
            tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT( var_m );
            tmp_assattr_target_1 = var_m;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_data, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;
                type_description_1 = "ooooboo";
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( var_m );
            tmp_source_name_7 = var_m;
            tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_data );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "ooooboo";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_2__start == NULL );
            tmp_inplace_assign_attr_2__start = tmp_assign_source_11;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( tmp_inplace_assign_attr_2__start );
            tmp_left_name_3 = tmp_inplace_assign_attr_2__start;
            CHECK_OBJECT( var_w );
            tmp_subscribed_name_2 = var_w;
            CHECK_OBJECT( var_m );
            tmp_source_name_8 = var_m;
            tmp_subscript_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_col );
            if ( tmp_subscript_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "ooooboo";
                goto try_except_handler_4;
            }
            tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "ooooboo";
                goto try_except_handler_4;
            }
            tmp_assign_source_12 = BINARY_OPERATION( PyNumber_InPlaceTrueDivide, tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "ooooboo";
                goto try_except_handler_4;
            }
            assert( tmp_inplace_assign_attr_2__end == NULL );
            tmp_inplace_assign_attr_2__end = tmp_assign_source_12;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            CHECK_OBJECT( tmp_inplace_assign_attr_2__end );
            tmp_assattr_name_2 = tmp_inplace_assign_attr_2__end;
            CHECK_OBJECT( var_m );
            tmp_assattr_target_2 = var_m;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_data, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "ooooboo";
                goto try_except_handler_5;
            }
        }
        goto try_end_3;
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
        Py_DECREF( tmp_inplace_assign_attr_2__end );
        tmp_inplace_assign_attr_2__end = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        try_end_3:;
        goto try_end_4;
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
        Py_DECREF( tmp_inplace_assign_attr_2__start );
        tmp_inplace_assign_attr_2__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
        Py_DECREF( tmp_inplace_assign_attr_2__end );
        tmp_inplace_assign_attr_2__end = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
        Py_DECREF( tmp_inplace_assign_attr_2__start );
        tmp_inplace_assign_attr_2__start = NULL;

        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( var_m );
            tmp_source_name_9 = var_m;
            tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_data );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;
                type_description_1 = "ooooboo";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_3__start == NULL );
            tmp_inplace_assign_attr_3__start = tmp_assign_source_13;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( tmp_inplace_assign_attr_3__start );
            tmp_left_name_4 = tmp_inplace_assign_attr_3__start;
            tmp_right_name_4 = const_int_neg_1;
            tmp_assign_source_14 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;
                type_description_1 = "ooooboo";
                goto try_except_handler_6;
            }
            assert( tmp_inplace_assign_attr_3__end == NULL );
            tmp_inplace_assign_attr_3__end = tmp_assign_source_14;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_assattr_target_3;
            CHECK_OBJECT( tmp_inplace_assign_attr_3__end );
            tmp_assattr_name_3 = tmp_inplace_assign_attr_3__end;
            CHECK_OBJECT( var_m );
            tmp_assattr_target_3 = var_m;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_data, tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;
                type_description_1 = "ooooboo";
                goto try_except_handler_7;
            }
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_3__end );
        Py_DECREF( tmp_inplace_assign_attr_3__end );
        tmp_inplace_assign_attr_3__end = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        try_end_5:;
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_3__start );
        Py_DECREF( tmp_inplace_assign_attr_3__start );
        tmp_inplace_assign_attr_3__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_1;
        // End of try:
        try_end_6:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_3__end );
        Py_DECREF( tmp_inplace_assign_attr_3__end );
        tmp_inplace_assign_attr_3__end = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_3__start );
        Py_DECREF( tmp_inplace_assign_attr_3__start );
        tmp_inplace_assign_attr_3__start = NULL;

        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_10;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( var_m );
            tmp_source_name_10 = var_m;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_setdiag );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "ooooboo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_5 = const_int_pos_1;
            CHECK_OBJECT( var_isolated_node_mask );
            tmp_right_name_5 = var_isolated_node_mask;
            tmp_args_element_name_5 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 103;
                type_description_1 = "ooooboo";
                goto frame_exception_exit_1;
            }
            frame_768d5edcc872691fa5db96f98bca53de->m_frame.f_lineno = 103;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "ooooboo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( var_m );
            tmp_source_name_11 = var_m;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_format );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_1 = "ooooboo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_str_plain_dia;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_1 = "ooooboo";
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
                PyObject *tmp_assign_source_15;
                PyObject *tmp_called_instance_5;
                CHECK_OBJECT( var_m );
                tmp_called_instance_5 = var_m;
                frame_768d5edcc872691fa5db96f98bca53de->m_frame.f_lineno = 106;
                tmp_assign_source_15 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_copy );
                if ( tmp_assign_source_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 106;
                    type_description_1 = "ooooboo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_m;
                    assert( old != NULL );
                    var_m = tmp_assign_source_15;
                    Py_DECREF( old );
                }

            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_called_name_5;
                PyObject *tmp_source_name_12;
                PyObject *tmp_kw_name_3;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                CHECK_OBJECT( var_m );
                tmp_source_name_12 = var_m;
                tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_tocoo );
                if ( tmp_called_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 108;
                    type_description_1 = "ooooboo";
                    goto frame_exception_exit_1;
                }
                tmp_dict_key_3 = const_str_plain_copy;
                assert( var_needs_copy != NUITKA_BOOL_UNASSIGNED);
                tmp_dict_value_3 = ( var_needs_copy == NUITKA_BOOL_TRUE ) ? Py_True : Py_False;
                tmp_kw_name_3 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
                assert( !(tmp_res != 0) );
                frame_768d5edcc872691fa5db96f98bca53de->m_frame.f_lineno = 108;
                tmp_assign_source_16 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_3 );
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_kw_name_3 );
                if ( tmp_assign_source_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 108;
                    type_description_1 = "ooooboo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_m;
                    assert( old != NULL );
                    var_m = tmp_assign_source_16;
                    Py_DECREF( old );
                }

            }
            branch_end_3:;
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_source_name_13;
            CHECK_OBJECT( var_m );
            tmp_source_name_13 = var_m;
            tmp_assign_source_17 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_data );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 109;
                type_description_1 = "ooooboo";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_4__start == NULL );
            tmp_inplace_assign_attr_4__start = tmp_assign_source_17;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            CHECK_OBJECT( tmp_inplace_assign_attr_4__start );
            tmp_left_name_6 = tmp_inplace_assign_attr_4__start;
            tmp_right_name_6 = const_int_neg_1;
            tmp_assign_source_18 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_left_name_6, tmp_right_name_6 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 109;
                type_description_1 = "ooooboo";
                goto try_except_handler_8;
            }
            assert( tmp_inplace_assign_attr_4__end == NULL );
            tmp_inplace_assign_attr_4__end = tmp_assign_source_18;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_assattr_target_4;
            CHECK_OBJECT( tmp_inplace_assign_attr_4__end );
            tmp_assattr_name_4 = tmp_inplace_assign_attr_4__end;
            CHECK_OBJECT( var_m );
            tmp_assattr_target_4 = var_m;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_data, tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 109;
                type_description_1 = "ooooboo";
                goto try_except_handler_9;
            }
        }
        goto try_end_7;
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_4__end );
        Py_DECREF( tmp_inplace_assign_attr_4__end );
        tmp_inplace_assign_attr_4__end = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        try_end_7:;
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_4__start );
        Py_DECREF( tmp_inplace_assign_attr_4__start );
        tmp_inplace_assign_attr_4__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_1;
        // End of try:
        try_end_8:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_4__end );
        Py_DECREF( tmp_inplace_assign_attr_4__end );
        tmp_inplace_assign_attr_4__end = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_4__start );
        Py_DECREF( tmp_inplace_assign_attr_4__start );
        tmp_inplace_assign_attr_4__start = NULL;

        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( var_m );
            tmp_called_instance_6 = var_m;
            CHECK_OBJECT( var_w );
            tmp_args_element_name_6 = var_w;
            frame_768d5edcc872691fa5db96f98bca53de->m_frame.f_lineno = 110;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_setdiag, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_1 = "ooooboo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_tuple_element_1;
        if ( var_m == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "m" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 111;
            type_description_1 = "ooooboo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_m;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_w );
        tmp_tuple_element_1 = var_w;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_768d5edcc872691fa5db96f98bca53de );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_768d5edcc872691fa5db96f98bca53de );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_768d5edcc872691fa5db96f98bca53de );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_768d5edcc872691fa5db96f98bca53de, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_768d5edcc872691fa5db96f98bca53de->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_768d5edcc872691fa5db96f98bca53de, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_768d5edcc872691fa5db96f98bca53de,
        type_description_1,
        par_graph,
        par_normed,
        par_axis,
        var_m,
        (int)var_needs_copy,
        var_w,
        var_isolated_node_mask
    );


    // Release cached frame.
    if ( frame_768d5edcc872691fa5db96f98bca53de == cache_frame_768d5edcc872691fa5db96f98bca53de )
    {
        Py_DECREF( frame_768d5edcc872691fa5db96f98bca53de );
    }
    cache_frame_768d5edcc872691fa5db96f98bca53de = NULL;

    assertFrameObject( frame_768d5edcc872691fa5db96f98bca53de );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csgraph$_laplacian$$$function_3__laplacian_sparse );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_graph );
    Py_DECREF( par_graph );
    par_graph = NULL;

    CHECK_OBJECT( (PyObject *)par_normed );
    Py_DECREF( par_normed );
    par_normed = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_w );
    Py_DECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_isolated_node_mask );
    var_isolated_node_mask = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_graph );
    Py_DECREF( par_graph );
    par_graph = NULL;

    CHECK_OBJECT( (PyObject *)par_normed );
    Py_DECREF( par_normed );
    par_normed = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_isolated_node_mask );
    var_isolated_node_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csgraph$_laplacian$$$function_3__laplacian_sparse );
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


static PyObject *impl_scipy$sparse$csgraph$_laplacian$$$function_4__laplacian_dense( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_graph = python_pars[ 0 ];
    PyObject *par_normed = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *var_m = NULL;
    PyObject *var_w = NULL;
    PyObject *var_isolated_node_mask = NULL;
    struct Nuitka_FrameObject *frame_a9bfa46c715c1da2b0828021dbcbea87;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_a9bfa46c715c1da2b0828021dbcbea87 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a9bfa46c715c1da2b0828021dbcbea87, codeobj_a9bfa46c715c1da2b0828021dbcbea87, module_scipy$sparse$csgraph$_laplacian, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a9bfa46c715c1da2b0828021dbcbea87 = cache_frame_a9bfa46c715c1da2b0828021dbcbea87;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a9bfa46c715c1da2b0828021dbcbea87 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a9bfa46c715c1da2b0828021dbcbea87 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 115;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_graph );
        tmp_args_element_name_1 = par_graph;
        frame_a9bfa46c715c1da2b0828021dbcbea87->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_array, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_m == NULL );
        var_m = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_m );
        tmp_args_element_name_2 = var_m;
        tmp_args_element_name_3 = const_int_0;
        frame_a9bfa46c715c1da2b0828021dbcbea87->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_fill_diagonal, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT( var_m );
        tmp_source_name_1 = var_m;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sum );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_1 = par_axis;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_a9bfa46c715c1da2b0828021dbcbea87->m_frame.f_lineno = 117;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_w == NULL );
        var_w = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_normed );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_normed );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "oooooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( var_w );
            tmp_compexpr_left_1 = var_w;
            tmp_compexpr_right_1 = const_int_0;
            tmp_assign_source_3 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_isolated_node_mask == NULL );
            var_isolated_node_mask = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_7;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 120;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_where );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_isolated_node_mask );
            tmp_args_element_name_4 = var_isolated_node_mask;
            tmp_args_element_name_5 = const_int_pos_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 120;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_4;
            CHECK_OBJECT( var_w );
            tmp_args_element_name_7 = var_w;
            frame_a9bfa46c715c1da2b0828021dbcbea87->m_frame.f_lineno = 120;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_sqrt, call_args );
            }

            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 120;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_a9bfa46c715c1da2b0828021dbcbea87->m_frame.f_lineno = 120;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_w;
                assert( old != NULL );
                var_w = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( var_m );
            tmp_left_name_1 = var_m;
            CHECK_OBJECT( var_w );
            tmp_right_name_1 = var_w;
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceTrueDivide, &tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_5 = tmp_left_name_1;
            var_m = tmp_assign_source_5;

        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_5;
            CHECK_OBJECT( var_m );
            tmp_left_name_2 = var_m;
            CHECK_OBJECT( var_w );
            tmp_subscribed_name_1 = var_w;
            tmp_tuple_element_1 = const_slice_none_none_none;
            tmp_subscript_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_subscript_name_1, 0, tmp_tuple_element_1 );
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_subscript_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 122;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_5;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_newaxis );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscript_name_1 );

                exception_lineno = 122;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_subscript_name_1, 1, tmp_tuple_element_1 );
            tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 122;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceTrueDivide, &tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 122;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = tmp_left_name_2;
            var_m = tmp_assign_source_6;

        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( var_m );
            tmp_left_name_3 = var_m;
            tmp_right_name_3 = const_int_neg_1;
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 123;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = tmp_left_name_3;
            var_m = tmp_assign_source_7;

        }
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain__setdiag_dense );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__setdiag_dense );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_setdiag_dense" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 124;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_6;
            CHECK_OBJECT( var_m );
            tmp_args_element_name_8 = var_m;
            tmp_left_name_4 = const_int_pos_1;
            CHECK_OBJECT( var_isolated_node_mask );
            tmp_right_name_4 = var_isolated_node_mask;
            tmp_args_element_name_9 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_a9bfa46c715c1da2b0828021dbcbea87->m_frame.f_lineno = 124;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( var_m );
            tmp_left_name_5 = var_m;
            tmp_right_name_5 = const_int_neg_1;
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 126;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = tmp_left_name_5;
            var_m = tmp_assign_source_8;

        }
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain__setdiag_dense );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__setdiag_dense );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_setdiag_dense" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 127;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_7;
            CHECK_OBJECT( var_m );
            tmp_args_element_name_10 = var_m;
            CHECK_OBJECT( var_w );
            tmp_args_element_name_11 = var_w;
            frame_a9bfa46c715c1da2b0828021dbcbea87->m_frame.f_lineno = 127;
            {
                PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 127;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9bfa46c715c1da2b0828021dbcbea87 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9bfa46c715c1da2b0828021dbcbea87 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a9bfa46c715c1da2b0828021dbcbea87, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a9bfa46c715c1da2b0828021dbcbea87->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a9bfa46c715c1da2b0828021dbcbea87, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a9bfa46c715c1da2b0828021dbcbea87,
        type_description_1,
        par_graph,
        par_normed,
        par_axis,
        var_m,
        var_w,
        var_isolated_node_mask
    );


    // Release cached frame.
    if ( frame_a9bfa46c715c1da2b0828021dbcbea87 == cache_frame_a9bfa46c715c1da2b0828021dbcbea87 )
    {
        Py_DECREF( frame_a9bfa46c715c1da2b0828021dbcbea87 );
    }
    cache_frame_a9bfa46c715c1da2b0828021dbcbea87 = NULL;

    assertFrameObject( frame_a9bfa46c715c1da2b0828021dbcbea87 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( var_m );
        tmp_tuple_element_2 = var_m;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_w );
        tmp_tuple_element_2 = var_w;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csgraph$_laplacian$$$function_4__laplacian_dense );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_graph );
    Py_DECREF( par_graph );
    par_graph = NULL;

    CHECK_OBJECT( (PyObject *)par_normed );
    Py_DECREF( par_normed );
    par_normed = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_w );
    Py_DECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_isolated_node_mask );
    var_isolated_node_mask = NULL;

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

    CHECK_OBJECT( (PyObject *)par_graph );
    Py_DECREF( par_graph );
    par_graph = NULL;

    CHECK_OBJECT( (PyObject *)par_normed );
    Py_DECREF( par_normed );
    par_normed = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_isolated_node_mask );
    var_isolated_node_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$csgraph$_laplacian$$$function_4__laplacian_dense );
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



static PyObject *MAKE_FUNCTION_scipy$sparse$csgraph$_laplacian$$$function_1_laplacian( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csgraph$_laplacian$$$function_1_laplacian,
        const_str_plain_laplacian,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2e79e17daa330f14c29e585bfb2a9e8b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csgraph$_laplacian,
        const_str_digest_e9359de087bc3b2402c6f4c415f9b2ea,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$csgraph$_laplacian$$$function_2__setdiag_dense(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csgraph$_laplacian$$$function_2__setdiag_dense,
        const_str_plain__setdiag_dense,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d5bc120eb0d22032e6827c78f0529ab5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csgraph$_laplacian,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$csgraph$_laplacian$$$function_3__laplacian_sparse( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csgraph$_laplacian$$$function_3__laplacian_sparse,
        const_str_plain__laplacian_sparse,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_768d5edcc872691fa5db96f98bca53de,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csgraph$_laplacian,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$csgraph$_laplacian$$$function_4__laplacian_dense( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$csgraph$_laplacian$$$function_4__laplacian_dense,
        const_str_plain__laplacian_dense,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a9bfa46c715c1da2b0828021dbcbea87,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$csgraph$_laplacian,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$csgraph$_laplacian =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.csgraph._laplacian",
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

MOD_INIT_DECL( scipy$sparse$csgraph$_laplacian )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$csgraph$_laplacian );
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
    puts("scipy.sparse.csgraph._laplacian: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.csgraph._laplacian: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.csgraph._laplacian: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$sparse$csgraph$_laplacian" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$csgraph$_laplacian = Py_InitModule4(
        "scipy.sparse.csgraph._laplacian",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$sparse$csgraph$_laplacian = PyModule_Create( &mdef_scipy$sparse$csgraph$_laplacian );
#endif

    moduledict_scipy$sparse$csgraph$_laplacian = MODULE_DICT( module_scipy$sparse$csgraph$_laplacian );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$sparse$csgraph$_laplacian,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$sparse$csgraph$_laplacian,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$csgraph$_laplacian,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$csgraph$_laplacian,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$sparse$csgraph$_laplacian );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_ac41998052698b60c8e7857efbfac160, module_scipy$sparse$csgraph$_laplacian );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_aa8e08a0d4985e3a87560a701a3beb84;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_23acddbe06cf9b9cb8ba1cedeaeb5f14;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_aa8e08a0d4985e3a87560a701a3beb84 = MAKE_MODULE_FRAME( codeobj_aa8e08a0d4985e3a87560a701a3beb84, module_scipy$sparse$csgraph$_laplacian );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_aa8e08a0d4985e3a87560a701a3beb84 );
    assert( Py_REFCNT( frame_aa8e08a0d4985e3a87560a701a3beb84 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_aa8e08a0d4985e3a87560a701a3beb84->m_frame.f_lineno = 10;
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


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$sparse$csgraph$_laplacian;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_aa8e08a0d4985e3a87560a701a3beb84->m_frame.f_lineno = 12;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
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
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$sparse$csgraph$_laplacian;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_isspmatrix_tuple;
        tmp_level_name_2 = const_int_0;
        frame_aa8e08a0d4985e3a87560a701a3beb84->m_frame.f_lineno = 13;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_isspmatrix );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_isspmatrix, tmp_assign_source_9 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa8e08a0d4985e3a87560a701a3beb84 );
#endif
    popFrameStack();

    assertFrameObject( frame_aa8e08a0d4985e3a87560a701a3beb84 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa8e08a0d4985e3a87560a701a3beb84 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aa8e08a0d4985e3a87560a701a3beb84, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aa8e08a0d4985e3a87560a701a3beb84->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aa8e08a0d4985e3a87560a701a3beb84, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_false_false_false_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_10 = MAKE_FUNCTION_scipy$sparse$csgraph$_laplacian$$$function_1_laplacian( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_laplacian, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_scipy$sparse$csgraph$_laplacian$$$function_2__setdiag_dense(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain__setdiag_dense, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_false_int_0_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_12 = MAKE_FUNCTION_scipy$sparse$csgraph$_laplacian$$$function_3__laplacian_sparse( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain__laplacian_sparse, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_false_int_0_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_13 = MAKE_FUNCTION_scipy$sparse$csgraph$_laplacian$$$function_4__laplacian_dense( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain__laplacian_dense, tmp_assign_source_13 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$csgraph$_laplacian );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
