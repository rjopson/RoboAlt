/* Generated code for Python module 'scipy.linalg._sketches'
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

/* The "_module_scipy$linalg$_sketches" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$linalg$_sketches;
PyDictObject *moduledict_scipy$linalg$_sketches;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_none_tuple;
static PyObject *const_tuple_4682292e5defd34a9285dd9519c65394_tuple;
extern PyObject *const_str_plain_csc_matrix;
extern PyObject *const_str_plain_dot;
static PyObject *const_list_str_plain_clarkson_woodruff_transform_list;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_cwt_matrix;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_S;
extern PyObject *const_str_plain_rows;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_plain_input_matrix;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_dbc049f94600503bfbd8944e5239d7ae;
extern PyObject *const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
static PyObject *const_str_digest_21aaa70da0e392cfeebf140c048a95ce;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_6062fa1238622cf81e6d76187ab314f1;
static PyObject *const_str_digest_a164fe6e1f2320a3e544ebfa6c48cde8;
static PyObject *const_tuple_43475279e4d0f1f4de2083af677eda7d_tuple;
static PyObject *const_str_plain_sketch_size;
extern PyObject *const_str_plain_seed;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_cols;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_n_rows;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_rng;
extern PyObject *const_str_plain_check_random_state;
extern PyObject *const_str_plain_arange;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_n_columns;
static PyObject *const_str_plain_signs;
extern PyObject *const_str_plain_shape;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_da8c66b471ad3d4216afb2ee9ae2d9fa;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_np;
static PyObject *const_str_plain_clarkson_woodruff_transform;
extern PyObject *const_tuple_str_plain_csc_matrix_tuple;
static PyObject *const_str_digest_9aee3748f1851ce9a639f11a067c855a;
extern PyObject *const_tuple_str_plain_check_random_state_tuple;
static PyObject *const_str_digest_ce6dfd29f408b028e057ea57301995c7;
extern PyObject *const_str_plain_randint;
extern PyObject *const_list_int_pos_1_int_neg_1_list;
extern PyObject *const_str_plain_choice;
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
    const_tuple_4682292e5defd34a9285dd9519c65394_tuple = PyTuple_New( 4 );
    const_str_plain_input_matrix = UNSTREAM_STRING_ASCII( &constant_bin[ 4511126 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_4682292e5defd34a9285dd9519c65394_tuple, 0, const_str_plain_input_matrix ); Py_INCREF( const_str_plain_input_matrix );
    const_str_plain_sketch_size = UNSTREAM_STRING_ASCII( &constant_bin[ 4511138 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_4682292e5defd34a9285dd9519c65394_tuple, 1, const_str_plain_sketch_size ); Py_INCREF( const_str_plain_sketch_size );
    PyTuple_SET_ITEM( const_tuple_4682292e5defd34a9285dd9519c65394_tuple, 2, const_str_plain_seed ); Py_INCREF( const_str_plain_seed );
    PyTuple_SET_ITEM( const_tuple_4682292e5defd34a9285dd9519c65394_tuple, 3, const_str_plain_S ); Py_INCREF( const_str_plain_S );
    const_list_str_plain_clarkson_woodruff_transform_list = PyList_New( 1 );
    const_str_plain_clarkson_woodruff_transform = UNSTREAM_STRING_ASCII( &constant_bin[ 4466384 ], 27, 1 );
    PyList_SET_ITEM( const_list_str_plain_clarkson_woodruff_transform_list, 0, const_str_plain_clarkson_woodruff_transform ); Py_INCREF( const_str_plain_clarkson_woodruff_transform );
    const_str_plain_cwt_matrix = UNSTREAM_STRING_ASCII( &constant_bin[ 4511149 ], 10, 1 );
    const_str_digest_21aaa70da0e392cfeebf140c048a95ce = UNSTREAM_STRING_ASCII( &constant_bin[ 4511159 ], 25, 0 );
    const_str_digest_6062fa1238622cf81e6d76187ab314f1 = UNSTREAM_STRING_ASCII( &constant_bin[ 4511184 ], 22, 0 );
    const_str_digest_a164fe6e1f2320a3e544ebfa6c48cde8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4511206 ], 1108, 0 );
    const_tuple_43475279e4d0f1f4de2083af677eda7d_tuple = PyTuple_New( 8 );
    const_str_plain_n_rows = UNSTREAM_STRING_ASCII( &constant_bin[ 1606616 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_43475279e4d0f1f4de2083af677eda7d_tuple, 0, const_str_plain_n_rows ); Py_INCREF( const_str_plain_n_rows );
    const_str_plain_n_columns = UNSTREAM_STRING_ASCII( &constant_bin[ 4511370 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_43475279e4d0f1f4de2083af677eda7d_tuple, 1, const_str_plain_n_columns ); Py_INCREF( const_str_plain_n_columns );
    PyTuple_SET_ITEM( const_tuple_43475279e4d0f1f4de2083af677eda7d_tuple, 2, const_str_plain_seed ); Py_INCREF( const_str_plain_seed );
    PyTuple_SET_ITEM( const_tuple_43475279e4d0f1f4de2083af677eda7d_tuple, 3, const_str_plain_rng ); Py_INCREF( const_str_plain_rng );
    PyTuple_SET_ITEM( const_tuple_43475279e4d0f1f4de2083af677eda7d_tuple, 4, const_str_plain_rows ); Py_INCREF( const_str_plain_rows );
    PyTuple_SET_ITEM( const_tuple_43475279e4d0f1f4de2083af677eda7d_tuple, 5, const_str_plain_cols ); Py_INCREF( const_str_plain_cols );
    const_str_plain_signs = UNSTREAM_STRING_ASCII( &constant_bin[ 974766 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_43475279e4d0f1f4de2083af677eda7d_tuple, 6, const_str_plain_signs ); Py_INCREF( const_str_plain_signs );
    PyTuple_SET_ITEM( const_tuple_43475279e4d0f1f4de2083af677eda7d_tuple, 7, const_str_plain_S ); Py_INCREF( const_str_plain_S );
    const_str_digest_da8c66b471ad3d4216afb2ee9ae2d9fa = UNSTREAM_STRING_ASCII( &constant_bin[ 4512314 ], 4019, 0 );
    const_str_digest_9aee3748f1851ce9a639f11a067c855a = UNSTREAM_STRING_ASCII( &constant_bin[ 4516333 ], 31, 0 );
    const_str_digest_ce6dfd29f408b028e057ea57301995c7 = UNSTREAM_STRING_ASCII( &constant_bin[ 4516364 ], 37, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$linalg$_sketches( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_98a7e3e9735ac6d707a60b9378bfc0ad;
static PyCodeObject *codeobj_6a51df3eb41867b08d06d77094822fd4;
static PyCodeObject *codeobj_9e5ff79c174a994ebd5e82ca1dbaf92f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_21aaa70da0e392cfeebf140c048a95ce );
    codeobj_98a7e3e9735ac6d707a60b9378bfc0ad = MAKE_CODEOBJ( module_filename_obj, const_str_digest_9aee3748f1851ce9a639f11a067c855a, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_6a51df3eb41867b08d06d77094822fd4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_clarkson_woodruff_transform, 57, const_tuple_4682292e5defd34a9285dd9519c65394_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9e5ff79c174a994ebd5e82ca1dbaf92f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cwt_matrix, 16, const_tuple_43475279e4d0f1f4de2083af677eda7d_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$linalg$_sketches$$$function_1_cwt_matrix( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$linalg$_sketches$$$function_2_clarkson_woodruff_transform( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$linalg$_sketches$$$function_1_cwt_matrix( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n_rows = python_pars[ 0 ];
    PyObject *par_n_columns = python_pars[ 1 ];
    PyObject *par_seed = python_pars[ 2 ];
    PyObject *var_rng = NULL;
    PyObject *var_rows = NULL;
    PyObject *var_cols = NULL;
    PyObject *var_signs = NULL;
    PyObject *var_S = NULL;
    struct Nuitka_FrameObject *frame_9e5ff79c174a994ebd5e82ca1dbaf92f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9e5ff79c174a994ebd5e82ca1dbaf92f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9e5ff79c174a994ebd5e82ca1dbaf92f, codeobj_9e5ff79c174a994ebd5e82ca1dbaf92f, module_scipy$linalg$_sketches, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9e5ff79c174a994ebd5e82ca1dbaf92f = cache_frame_9e5ff79c174a994ebd5e82ca1dbaf92f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9e5ff79c174a994ebd5e82ca1dbaf92f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9e5ff79c174a994ebd5e82ca1dbaf92f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain_check_random_state );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_check_random_state );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "check_random_state" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 49;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_seed );
        tmp_args_element_name_1 = par_seed;
        frame_9e5ff79c174a994ebd5e82ca1dbaf92f->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rng == NULL );
        var_rng = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( var_rng );
        tmp_called_instance_1 = var_rng;
        tmp_args_element_name_2 = const_int_0;
        CHECK_OBJECT( par_n_rows );
        tmp_args_element_name_3 = par_n_rows;
        CHECK_OBJECT( par_n_columns );
        tmp_args_element_name_4 = par_n_columns;
        frame_9e5ff79c174a994ebd5e82ca1dbaf92f->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_randint, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rows == NULL );
        var_rows = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 51;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_arange );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n_columns );
        tmp_left_name_1 = par_n_columns;
        tmp_right_name_1 = const_int_pos_1;
        tmp_args_element_name_5 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 51;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_9e5ff79c174a994ebd5e82ca1dbaf92f->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cols == NULL );
        var_cols = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( var_rng );
        tmp_called_instance_2 = var_rng;
        tmp_args_element_name_6 = LIST_COPY( const_list_int_pos_1_int_neg_1_list );
        CHECK_OBJECT( par_n_columns );
        tmp_args_element_name_7 = par_n_columns;
        frame_9e5ff79c174a994ebd5e82ca1dbaf92f->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_choice, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_signs == NULL );
        var_signs = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain_csc_matrix );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csc_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 53;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_signs );
        tmp_tuple_element_2 = var_signs;
        tmp_tuple_element_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_rows );
        tmp_tuple_element_2 = var_rows;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( var_cols );
        tmp_tuple_element_2 = var_cols;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 2, tmp_tuple_element_2 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_shape;
        CHECK_OBJECT( par_n_rows );
        tmp_tuple_element_3 = par_n_rows;
        tmp_dict_value_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dict_value_1, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_n_columns );
        tmp_tuple_element_3 = par_n_columns;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dict_value_1, 1, tmp_tuple_element_3 );
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_9e5ff79c174a994ebd5e82ca1dbaf92f->m_frame.f_lineno = 53;
        tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_S == NULL );
        var_S = tmp_assign_source_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e5ff79c174a994ebd5e82ca1dbaf92f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e5ff79c174a994ebd5e82ca1dbaf92f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9e5ff79c174a994ebd5e82ca1dbaf92f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9e5ff79c174a994ebd5e82ca1dbaf92f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9e5ff79c174a994ebd5e82ca1dbaf92f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9e5ff79c174a994ebd5e82ca1dbaf92f,
        type_description_1,
        par_n_rows,
        par_n_columns,
        par_seed,
        var_rng,
        var_rows,
        var_cols,
        var_signs,
        var_S
    );


    // Release cached frame.
    if ( frame_9e5ff79c174a994ebd5e82ca1dbaf92f == cache_frame_9e5ff79c174a994ebd5e82ca1dbaf92f )
    {
        Py_DECREF( frame_9e5ff79c174a994ebd5e82ca1dbaf92f );
    }
    cache_frame_9e5ff79c174a994ebd5e82ca1dbaf92f = NULL;

    assertFrameObject( frame_9e5ff79c174a994ebd5e82ca1dbaf92f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_S );
    tmp_return_value = var_S;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_sketches$$$function_1_cwt_matrix );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n_rows );
    Py_DECREF( par_n_rows );
    par_n_rows = NULL;

    CHECK_OBJECT( (PyObject *)par_n_columns );
    Py_DECREF( par_n_columns );
    par_n_columns = NULL;

    CHECK_OBJECT( (PyObject *)par_seed );
    Py_DECREF( par_seed );
    par_seed = NULL;

    CHECK_OBJECT( (PyObject *)var_rng );
    Py_DECREF( var_rng );
    var_rng = NULL;

    CHECK_OBJECT( (PyObject *)var_rows );
    Py_DECREF( var_rows );
    var_rows = NULL;

    CHECK_OBJECT( (PyObject *)var_cols );
    Py_DECREF( var_cols );
    var_cols = NULL;

    CHECK_OBJECT( (PyObject *)var_signs );
    Py_DECREF( var_signs );
    var_signs = NULL;

    CHECK_OBJECT( (PyObject *)var_S );
    Py_DECREF( var_S );
    var_S = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n_rows );
    Py_DECREF( par_n_rows );
    par_n_rows = NULL;

    CHECK_OBJECT( (PyObject *)par_n_columns );
    Py_DECREF( par_n_columns );
    par_n_columns = NULL;

    CHECK_OBJECT( (PyObject *)par_seed );
    Py_DECREF( par_seed );
    par_seed = NULL;

    Py_XDECREF( var_rng );
    var_rng = NULL;

    Py_XDECREF( var_rows );
    var_rows = NULL;

    Py_XDECREF( var_cols );
    var_cols = NULL;

    Py_XDECREF( var_signs );
    var_signs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_sketches$$$function_1_cwt_matrix );
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


static PyObject *impl_scipy$linalg$_sketches$$$function_2_clarkson_woodruff_transform( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input_matrix = python_pars[ 0 ];
    PyObject *par_sketch_size = python_pars[ 1 ];
    PyObject *par_seed = python_pars[ 2 ];
    PyObject *var_S = NULL;
    struct Nuitka_FrameObject *frame_6a51df3eb41867b08d06d77094822fd4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6a51df3eb41867b08d06d77094822fd4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6a51df3eb41867b08d06d77094822fd4, codeobj_6a51df3eb41867b08d06d77094822fd4, module_scipy$linalg$_sketches, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6a51df3eb41867b08d06d77094822fd4 = cache_frame_6a51df3eb41867b08d06d77094822fd4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6a51df3eb41867b08d06d77094822fd4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6a51df3eb41867b08d06d77094822fd4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain_cwt_matrix );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cwt_matrix );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cwt_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_sketch_size );
        tmp_args_element_name_1 = par_sketch_size;
        CHECK_OBJECT( par_input_matrix );
        tmp_source_name_1 = par_input_matrix;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_seed );
        tmp_args_element_name_3 = par_seed;
        frame_6a51df3eb41867b08d06d77094822fd4->m_frame.f_lineno = 167;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_S == NULL );
        var_S = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( var_S );
        tmp_called_instance_1 = var_S;
        CHECK_OBJECT( par_input_matrix );
        tmp_args_element_name_4 = par_input_matrix;
        frame_6a51df3eb41867b08d06d77094822fd4->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a51df3eb41867b08d06d77094822fd4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a51df3eb41867b08d06d77094822fd4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a51df3eb41867b08d06d77094822fd4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6a51df3eb41867b08d06d77094822fd4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6a51df3eb41867b08d06d77094822fd4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6a51df3eb41867b08d06d77094822fd4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6a51df3eb41867b08d06d77094822fd4,
        type_description_1,
        par_input_matrix,
        par_sketch_size,
        par_seed,
        var_S
    );


    // Release cached frame.
    if ( frame_6a51df3eb41867b08d06d77094822fd4 == cache_frame_6a51df3eb41867b08d06d77094822fd4 )
    {
        Py_DECREF( frame_6a51df3eb41867b08d06d77094822fd4 );
    }
    cache_frame_6a51df3eb41867b08d06d77094822fd4 = NULL;

    assertFrameObject( frame_6a51df3eb41867b08d06d77094822fd4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_sketches$$$function_2_clarkson_woodruff_transform );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_input_matrix );
    Py_DECREF( par_input_matrix );
    par_input_matrix = NULL;

    CHECK_OBJECT( (PyObject *)par_sketch_size );
    Py_DECREF( par_sketch_size );
    par_sketch_size = NULL;

    CHECK_OBJECT( (PyObject *)par_seed );
    Py_DECREF( par_seed );
    par_seed = NULL;

    CHECK_OBJECT( (PyObject *)var_S );
    Py_DECREF( var_S );
    var_S = NULL;

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

    CHECK_OBJECT( (PyObject *)par_input_matrix );
    Py_DECREF( par_input_matrix );
    par_input_matrix = NULL;

    CHECK_OBJECT( (PyObject *)par_sketch_size );
    Py_DECREF( par_sketch_size );
    par_sketch_size = NULL;

    CHECK_OBJECT( (PyObject *)par_seed );
    Py_DECREF( par_seed );
    par_seed = NULL;

    Py_XDECREF( var_S );
    var_S = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_sketches$$$function_2_clarkson_woodruff_transform );
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



static PyObject *MAKE_FUNCTION_scipy$linalg$_sketches$$$function_1_cwt_matrix( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_sketches$$$function_1_cwt_matrix,
        const_str_plain_cwt_matrix,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9e5ff79c174a994ebd5e82ca1dbaf92f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_sketches,
        const_str_digest_a164fe6e1f2320a3e544ebfa6c48cde8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_sketches$$$function_2_clarkson_woodruff_transform( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_sketches$$$function_2_clarkson_woodruff_transform,
        const_str_plain_clarkson_woodruff_transform,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6a51df3eb41867b08d06d77094822fd4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_sketches,
        const_str_digest_da8c66b471ad3d4216afb2ee9ae2d9fa,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$linalg$_sketches =
{
    PyModuleDef_HEAD_INIT,
    "scipy.linalg._sketches",
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

MOD_INIT_DECL( scipy$linalg$_sketches )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$linalg$_sketches );
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
    puts("scipy.linalg._sketches: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.linalg._sketches: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.linalg._sketches: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$linalg$_sketches" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$linalg$_sketches = Py_InitModule4(
        "scipy.linalg._sketches",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$linalg$_sketches = PyModule_Create( &mdef_scipy$linalg$_sketches );
#endif

    moduledict_scipy$linalg$_sketches = MODULE_DICT( module_scipy$linalg$_sketches );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$linalg$_sketches,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$linalg$_sketches,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg$_sketches,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg$_sketches,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$linalg$_sketches );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_6062fa1238622cf81e6d76187ab314f1, module_scipy$linalg$_sketches );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_98a7e3e9735ac6d707a60b9378bfc0ad;
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
        tmp_assign_source_1 = const_str_digest_ce6dfd29f408b028e057ea57301995c7;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_98a7e3e9735ac6d707a60b9378bfc0ad = MAKE_MODULE_FRAME( codeobj_98a7e3e9735ac6d707a60b9378bfc0ad, module_scipy$linalg$_sketches );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_98a7e3e9735ac6d707a60b9378bfc0ad );
    assert( Py_REFCNT( frame_98a7e3e9735ac6d707a60b9378bfc0ad ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_98a7e3e9735ac6d707a60b9378bfc0ad->m_frame.f_lineno = 6;
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


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$linalg$_sketches;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_98a7e3e9735ac6d707a60b9378bfc0ad->m_frame.f_lineno = 8;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_dbc049f94600503bfbd8944e5239d7ae;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$linalg$_sketches;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_check_random_state_tuple;
        tmp_level_name_2 = const_int_0;
        frame_98a7e3e9735ac6d707a60b9378bfc0ad->m_frame.f_lineno = 10;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_check_random_state );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain_check_random_state, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$linalg$_sketches;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_csc_matrix_tuple;
        tmp_level_name_3 = const_int_0;
        frame_98a7e3e9735ac6d707a60b9378bfc0ad->m_frame.f_lineno = 11;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_csc_matrix );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain_csc_matrix, tmp_assign_source_10 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_98a7e3e9735ac6d707a60b9378bfc0ad );
#endif
    popFrameStack();

    assertFrameObject( frame_98a7e3e9735ac6d707a60b9378bfc0ad );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_98a7e3e9735ac6d707a60b9378bfc0ad );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_98a7e3e9735ac6d707a60b9378bfc0ad, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_98a7e3e9735ac6d707a60b9378bfc0ad->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_98a7e3e9735ac6d707a60b9378bfc0ad, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = LIST_COPY( const_list_str_plain_clarkson_woodruff_transform_list );
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_12 = MAKE_FUNCTION_scipy$linalg$_sketches$$$function_1_cwt_matrix( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain_cwt_matrix, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_13 = MAKE_FUNCTION_scipy$linalg$_sketches$$$function_2_clarkson_woodruff_transform( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain_clarkson_woodruff_transform, tmp_assign_source_13 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_sketches, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$linalg$_sketches );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
