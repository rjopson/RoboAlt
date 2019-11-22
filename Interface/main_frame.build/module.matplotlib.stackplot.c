/* Generated code for Python module 'matplotlib.stackplot'
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

/* The "_module_matplotlib$stackplot" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_matplotlib$stackplot;
PyDictObject *moduledict_matplotlib$stackplot;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_cumsum;
extern PyObject *const_str_plain_diff;
extern PyObject *const_str_plain_get_next_color;
extern PyObject *const_tuple_int_0_tuple;
static PyObject *const_str_digest_7adf6a6788ca2df83dd9f427461af693;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_slice_int_0_int_pos_1_none;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_colors;
extern PyObject *const_str_plain_label;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_plain_weighted_wiggle;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_y;
static PyObject *const_str_digest_8ce30373d01a447beeafa5925d34dd52;
extern PyObject *const_str_plain___file__;
extern PyObject *const_list_int_0_list;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain__get_lines;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_sum;
static PyObject *const_str_digest_2fd47c14106100d981349cf755f978e5;
extern PyObject *const_str_plain_zeros_like;
extern PyObject *const_int_0;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_baseline;
extern PyObject *const_str_plain_promote_types;
extern PyObject *const_str_plain_facecolor;
extern PyObject *const_tuple_slice_none_none_none_int_0_tuple;
extern PyObject *const_tuple_slice_none_none_none_none_tuple;
static PyObject *const_dict_9a0f9757de683399f6a3ff0895217c4c;
extern PyObject *const_str_plain_sym;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_float32;
extern PyObject *const_slice_none_none_none;
static PyObject *const_str_digest_1ccc7198630cc5863a5477dc00cdc4f5;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_arange;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_set_prop_cycle;
extern PyObject *const_tuple_int_0_slice_none_none_none_tuple;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_digest_95662311a84e5100059b3a74568da256;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_float_0_5;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_f4103c3db5423e016158ff5f15895fe1;
static PyObject *const_tuple_08047c983f61f57d7da8e2154f7d12d9_tuple;
extern PyObject *const_str_plain_labels;
extern PyObject *const_str_plain_stackplot;
static PyObject *const_list_str_plain_stackplot_list;
static PyObject *const_str_plain_wiggle;
extern PyObject *const_tuple_slice_none_none_none_slice_int_0_int_pos_1_none_tuple;
extern PyObject *const_str_plain_row_stack;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_hstack;
static PyObject *const_str_digest_0a2ecacac078f3b2bacfe46efac4a045;
extern PyObject *const_str_plain_color;
extern PyObject *const_tuple_none_slice_none_none_none_tuple;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_zero;
extern PyObject *const_str_plain_sticky_edges;
extern PyObject *const_str_plain_fill_between;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_7adf6a6788ca2df83dd9f427461af693 = UNSTREAM_STRING_ASCII( &constant_bin[ 1949853 ], 35, 0 );
    const_str_plain_weighted_wiggle = UNSTREAM_STRING_ASCII( &constant_bin[ 1949888 ], 15, 1 );
    const_str_digest_8ce30373d01a447beeafa5925d34dd52 = UNSTREAM_STRING_ASCII( &constant_bin[ 1949903 ], 53, 0 );
    const_str_digest_2fd47c14106100d981349cf755f978e5 = UNSTREAM_STRING_ASCII( &constant_bin[ 1949956 ], 29, 0 );
    const_dict_9a0f9757de683399f6a3ff0895217c4c = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_9a0f9757de683399f6a3ff0895217c4c, const_str_plain_labels, const_tuple_empty );
    PyDict_SetItem( const_dict_9a0f9757de683399f6a3ff0895217c4c, const_str_plain_colors, Py_None );
    PyDict_SetItem( const_dict_9a0f9757de683399f6a3ff0895217c4c, const_str_plain_baseline, const_str_plain_zero );
    assert( PyDict_Size( const_dict_9a0f9757de683399f6a3ff0895217c4c ) == 3 );
    const_str_digest_1ccc7198630cc5863a5477dc00cdc4f5 = UNSTREAM_STRING_ASCII( &constant_bin[ 1949985 ], 1461, 0 );
    const_str_digest_f4103c3db5423e016158ff5f15895fe1 = UNSTREAM_STRING_ASCII( &constant_bin[ 1951446 ], 226, 0 );
    const_tuple_08047c983f61f57d7da8e2154f7d12d9_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1951672 ], 166 );
    const_list_str_plain_stackplot_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_stackplot_list, 0, const_str_plain_stackplot ); Py_INCREF( const_str_plain_stackplot );
    const_str_plain_wiggle = UNSTREAM_STRING_ASCII( &constant_bin[ 932858 ], 6, 1 );
    const_str_digest_0a2ecacac078f3b2bacfe46efac4a045 = UNSTREAM_STRING_ASCII( &constant_bin[ 1951838 ], 23, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_matplotlib$stackplot( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4961837ab6a079cb6ee35df304f60f46;
static PyCodeObject *codeobj_e2e208771ff21618f9a455e790245f6b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_0a2ecacac078f3b2bacfe46efac4a045 );
    codeobj_4961837ab6a079cb6ee35df304f60f46 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2fd47c14106100d981349cf755f978e5, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_e2e208771ff21618f9a455e790245f6b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_stackplot, 14, const_tuple_08047c983f61f57d7da8e2154f7d12d9_tuple, 2, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_matplotlib$stackplot$$$function_1_stackplot( PyObject *kw_defaults );


// The module function definitions.
static PyObject *impl_matplotlib$stackplot$$$function_1_stackplot( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_axes = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *par_labels = python_pars[ 2 ];
    PyObject *par_colors = python_pars[ 3 ];
    PyObject *par_baseline = python_pars[ 4 ];
    PyObject *par_args = python_pars[ 5 ];
    PyObject *par_kwargs = python_pars[ 6 ];
    PyObject *var_y = NULL;
    PyObject *var_stack = NULL;
    PyObject *var_first_line = NULL;
    PyObject *var_m = NULL;
    PyObject *var_total = NULL;
    PyObject *var_inv_total = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_increase = NULL;
    PyObject *var_below_size = NULL;
    PyObject *var_move_up = NULL;
    PyObject *var_center = NULL;
    PyObject *var_errstr = NULL;
    PyObject *var_color = NULL;
    PyObject *var_coll = NULL;
    PyObject *var_r = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_e2e208771ff21618f9a455e790245f6b;
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
    static struct Nuitka_FrameObject *cache_frame_e2e208771ff21618f9a455e790245f6b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e2e208771ff21618f9a455e790245f6b, codeobj_e2e208771ff21618f9a455e790245f6b, module_matplotlib$stackplot, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e2e208771ff21618f9a455e790245f6b = cache_frame_e2e208771ff21618f9a455e790245f6b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e2e208771ff21618f9a455e790245f6b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e2e208771ff21618f9a455e790245f6b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_args );
        tmp_args_element_name_1 = par_args;
        frame_e2e208771ff21618f9a455e790245f6b->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_row_stack, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_y == NULL );
        var_y = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_labels );
        tmp_iter_arg_1 = par_labels;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_labels;
            assert( old != NULL );
            par_labels = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_colors );
        tmp_compexpr_left_1 = par_colors;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_source_name_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            CHECK_OBJECT( par_axes );
            tmp_source_name_1 = par_axes;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_set_prop_cycle );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;
                type_description_1 = "ooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_1 = const_str_plain_color;
            CHECK_OBJECT( par_colors );
            tmp_dict_value_1 = par_colors;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_e2e208771ff21618f9a455e790245f6b->m_frame.f_lineno = 65;
            tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;
                type_description_1 = "ooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_cumsum );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_y );
        tmp_tuple_element_1 = var_y;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_2 = const_str_plain_axis;
        tmp_dict_value_2 = const_int_0;
        tmp_kw_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_dtype;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_promote_types );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_y );
        tmp_source_name_4 = var_y;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_4;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_float32 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e2e208771ff21618f9a455e790245f6b->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_dict_value_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_e2e208771ff21618f9a455e790245f6b->m_frame.f_lineno = 69;
        tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_stack == NULL );
        var_stack = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_baseline );
        tmp_compexpr_left_2 = par_baseline;
        tmp_compexpr_right_2 = const_str_plain_zero;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = const_float_0_0;
            assert( var_first_line == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_first_line = tmp_assign_source_4;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_baseline );
            tmp_compexpr_left_3 = par_baseline;
            tmp_compexpr_right_3 = const_str_plain_sym;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;
                type_description_1 = "ooooooooooooooooooooooo";
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
                PyObject *tmp_assign_source_5;
                PyObject *tmp_left_name_1;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_right_name_1;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 75;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_2 = tmp_mvar_value_5;
                CHECK_OBJECT( var_y );
                tmp_args_element_name_4 = var_y;
                tmp_args_element_name_5 = const_int_0;
                frame_e2e208771ff21618f9a455e790245f6b->m_frame.f_lineno = 75;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                    tmp_operand_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_sum, call_args );
                }

                if ( tmp_operand_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 75;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
                Py_DECREF( tmp_operand_name_1 );
                if ( tmp_left_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 75;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_1 = const_float_0_5;
                tmp_assign_source_5 = BINARY_OPERATION_MUL_OBJECT_FLOAT( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_left_name_1 );
                if ( tmp_assign_source_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 75;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_first_line == NULL );
                var_first_line = tmp_assign_source_5;
            }
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                CHECK_OBJECT( var_stack );
                tmp_left_name_2 = var_stack;
                CHECK_OBJECT( var_first_line );
                tmp_subscribed_name_1 = var_first_line;
                tmp_subscript_name_1 = const_tuple_none_slice_none_none_none_tuple;
                tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 76;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 76;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_6 = tmp_left_name_2;
                var_stack = tmp_assign_source_6;

            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                CHECK_OBJECT( par_baseline );
                tmp_compexpr_left_4 = par_baseline;
                tmp_compexpr_right_4 = const_str_plain_wiggle;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 78;
                    type_description_1 = "ooooooooooooooooooooooo";
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
                    PyObject *tmp_assign_source_7;
                    PyObject *tmp_subscribed_name_2;
                    PyObject *tmp_source_name_6;
                    PyObject *tmp_subscript_name_2;
                    CHECK_OBJECT( var_y );
                    tmp_source_name_6 = var_y;
                    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
                    if ( tmp_subscribed_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 79;
                        type_description_1 = "ooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_subscript_name_2 = const_int_0;
                    tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
                    Py_DECREF( tmp_subscribed_name_2 );
                    if ( tmp_assign_source_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 79;
                        type_description_1 = "ooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_m == NULL );
                    var_m = tmp_assign_source_7;
                }
                {
                    PyObject *tmp_assign_source_8;
                    PyObject *tmp_called_instance_3;
                    PyObject *tmp_left_name_3;
                    PyObject *tmp_right_name_3;
                    PyObject *tmp_left_name_4;
                    PyObject *tmp_left_name_5;
                    PyObject *tmp_right_name_4;
                    PyObject *tmp_right_name_5;
                    PyObject *tmp_subscribed_name_3;
                    PyObject *tmp_called_instance_4;
                    PyObject *tmp_mvar_value_6;
                    PyObject *tmp_args_element_name_6;
                    PyObject *tmp_subscript_name_3;
                    CHECK_OBJECT( var_y );
                    tmp_left_name_3 = var_y;
                    CHECK_OBJECT( var_m );
                    tmp_left_name_5 = var_m;
                    tmp_right_name_4 = const_float_0_5;
                    tmp_left_name_4 = BINARY_OPERATION_SUB_OBJECT_FLOAT( tmp_left_name_5, tmp_right_name_4 );
                    if ( tmp_left_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 80;
                        type_description_1 = "ooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain_np );

                    if (unlikely( tmp_mvar_value_6 == NULL ))
                    {
                        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                    }

                    if ( tmp_mvar_value_6 == NULL )
                    {
                        Py_DECREF( tmp_left_name_4 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 80;
                        type_description_1 = "ooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_instance_4 = tmp_mvar_value_6;
                    CHECK_OBJECT( var_m );
                    tmp_args_element_name_6 = var_m;
                    frame_e2e208771ff21618f9a455e790245f6b->m_frame.f_lineno = 80;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_6 };
                        tmp_subscribed_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_arange, call_args );
                    }

                    if ( tmp_subscribed_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_4 );

                        exception_lineno = 80;
                        type_description_1 = "ooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_subscript_name_3 = const_tuple_slice_none_none_none_none_tuple;
                    tmp_right_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                    Py_DECREF( tmp_subscribed_name_3 );
                    if ( tmp_right_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_4 );

                        exception_lineno = 80;
                        type_description_1 = "ooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_right_name_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_5 );
                    Py_DECREF( tmp_left_name_4 );
                    Py_DECREF( tmp_right_name_5 );
                    if ( tmp_right_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 80;
                        type_description_1 = "ooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_called_instance_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
                    Py_DECREF( tmp_right_name_3 );
                    if ( tmp_called_instance_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 80;
                        type_description_1 = "ooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_e2e208771ff21618f9a455e790245f6b->m_frame.f_lineno = 80;
                    tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_sum, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

                    Py_DECREF( tmp_called_instance_3 );
                    if ( tmp_assign_source_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 80;
                        type_description_1 = "ooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_first_line == NULL );
                    var_first_line = tmp_assign_source_8;
                }
                {
                    PyObject *tmp_assign_source_9;
                    PyObject *tmp_left_name_6;
                    PyObject *tmp_right_name_6;
                    PyObject *tmp_operand_name_2;
                    CHECK_OBJECT( var_first_line );
                    tmp_left_name_6 = var_first_line;
                    CHECK_OBJECT( var_m );
                    tmp_operand_name_2 = var_m;
                    tmp_right_name_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
                    if ( tmp_right_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 81;
                        type_description_1 = "ooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceTrueDivide, &tmp_left_name_6, tmp_right_name_6 );
                    Py_DECREF( tmp_right_name_6 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 81;
                        type_description_1 = "ooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_9 = tmp_left_name_6;
                    var_first_line = tmp_assign_source_9;

                }
                {
                    PyObject *tmp_assign_source_10;
                    PyObject *tmp_left_name_7;
                    PyObject *tmp_right_name_7;
                    CHECK_OBJECT( var_stack );
                    tmp_left_name_7 = var_stack;
                    CHECK_OBJECT( var_first_line );
                    tmp_right_name_7 = var_first_line;
                    tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 82;
                        type_description_1 = "ooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_10 = tmp_left_name_7;
                    var_stack = tmp_assign_source_10;

                }
                goto branch_end_4;
                branch_no_4:;
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    CHECK_OBJECT( par_baseline );
                    tmp_compexpr_left_5 = par_baseline;
                    tmp_compexpr_right_5 = const_str_plain_weighted_wiggle;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 84;
                        type_description_1 = "ooooooooooooooooooooooo";
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
                    {
                        PyObject *tmp_assign_source_11;
                        PyObject *tmp_called_instance_5;
                        PyObject *tmp_mvar_value_7;
                        PyObject *tmp_args_element_name_7;
                        PyObject *tmp_args_element_name_8;
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain_np );

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

                            exception_lineno = 85;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_instance_5 = tmp_mvar_value_7;
                        CHECK_OBJECT( var_y );
                        tmp_args_element_name_7 = var_y;
                        tmp_args_element_name_8 = const_int_0;
                        frame_e2e208771ff21618f9a455e790245f6b->m_frame.f_lineno = 85;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                            tmp_assign_source_11 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_sum, call_args );
                        }

                        if ( tmp_assign_source_11 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 85;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_total == NULL );
                        var_total = tmp_assign_source_11;
                    }
                    {
                        PyObject *tmp_assign_source_12;
                        PyObject *tmp_called_instance_6;
                        PyObject *tmp_mvar_value_8;
                        PyObject *tmp_args_element_name_9;
                        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain_np );

                        if (unlikely( tmp_mvar_value_8 == NULL ))
                        {
                            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                        }

                        if ( tmp_mvar_value_8 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 87;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_instance_6 = tmp_mvar_value_8;
                        CHECK_OBJECT( var_total );
                        tmp_args_element_name_9 = var_total;
                        frame_e2e208771ff21618f9a455e790245f6b->m_frame.f_lineno = 87;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_9 };
                            tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_zeros_like, call_args );
                        }

                        if ( tmp_assign_source_12 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 87;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_inv_total == NULL );
                        var_inv_total = tmp_assign_source_12;
                    }
                    {
                        PyObject *tmp_assign_source_13;
                        PyObject *tmp_compexpr_left_6;
                        PyObject *tmp_compexpr_right_6;
                        CHECK_OBJECT( var_total );
                        tmp_compexpr_left_6 = var_total;
                        tmp_compexpr_right_6 = const_int_0;
                        tmp_assign_source_13 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                        if ( tmp_assign_source_13 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 88;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_mask == NULL );
                        var_mask = tmp_assign_source_13;
                    }
                    {
                        PyObject *tmp_ass_subvalue_1;
                        PyObject *tmp_left_name_8;
                        PyObject *tmp_right_name_8;
                        PyObject *tmp_subscribed_name_4;
                        PyObject *tmp_subscript_name_4;
                        PyObject *tmp_ass_subscribed_1;
                        PyObject *tmp_ass_subscript_1;
                        tmp_left_name_8 = const_float_1_0;
                        CHECK_OBJECT( var_total );
                        tmp_subscribed_name_4 = var_total;
                        CHECK_OBJECT( var_mask );
                        tmp_subscript_name_4 = var_mask;
                        tmp_right_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                        if ( tmp_right_name_8 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 89;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_ass_subvalue_1 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
                        Py_DECREF( tmp_right_name_8 );
                        if ( tmp_ass_subvalue_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 89;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( var_inv_total );
                        tmp_ass_subscribed_1 = var_inv_total;
                        CHECK_OBJECT( var_mask );
                        tmp_ass_subscript_1 = var_mask;
                        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                        Py_DECREF( tmp_ass_subvalue_1 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 89;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                    }
                    {
                        PyObject *tmp_assign_source_14;
                        PyObject *tmp_called_name_4;
                        PyObject *tmp_source_name_7;
                        PyObject *tmp_mvar_value_9;
                        PyObject *tmp_args_element_name_10;
                        PyObject *tmp_tuple_element_2;
                        PyObject *tmp_subscribed_name_5;
                        PyObject *tmp_subscript_name_5;
                        PyObject *tmp_called_instance_7;
                        PyObject *tmp_mvar_value_10;
                        PyObject *tmp_args_element_name_11;
                        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain_np );

                        if (unlikely( tmp_mvar_value_9 == NULL ))
                        {
                            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                        }

                        if ( tmp_mvar_value_9 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 90;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_7 = tmp_mvar_value_9;
                        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_hstack );
                        if ( tmp_called_name_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 90;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( var_y );
                        tmp_subscribed_name_5 = var_y;
                        tmp_subscript_name_5 = const_tuple_slice_none_none_none_slice_int_0_int_pos_1_none_tuple;
                        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                        if ( tmp_tuple_element_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_4 );

                            exception_lineno = 90;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_args_element_name_10 = PyTuple_New( 2 );
                        PyTuple_SET_ITEM( tmp_args_element_name_10, 0, tmp_tuple_element_2 );
                        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain_np );

                        if (unlikely( tmp_mvar_value_10 == NULL ))
                        {
                            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                        }

                        if ( tmp_mvar_value_10 == NULL )
                        {
                            Py_DECREF( tmp_called_name_4 );
                            Py_DECREF( tmp_args_element_name_10 );
                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 90;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_instance_7 = tmp_mvar_value_10;
                        CHECK_OBJECT( var_y );
                        tmp_args_element_name_11 = var_y;
                        frame_e2e208771ff21618f9a455e790245f6b->m_frame.f_lineno = 90;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_11 };
                            tmp_tuple_element_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_diff, call_args );
                        }

                        if ( tmp_tuple_element_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_4 );
                            Py_DECREF( tmp_args_element_name_10 );

                            exception_lineno = 90;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        PyTuple_SET_ITEM( tmp_args_element_name_10, 1, tmp_tuple_element_2 );
                        frame_e2e208771ff21618f9a455e790245f6b->m_frame.f_lineno = 90;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_10 };
                            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                        }

                        Py_DECREF( tmp_called_name_4 );
                        Py_DECREF( tmp_args_element_name_10 );
                        if ( tmp_assign_source_14 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 90;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_increase == NULL );
                        var_increase = tmp_assign_source_14;
                    }
                    {
                        PyObject *tmp_assign_source_15;
                        PyObject *tmp_left_name_9;
                        PyObject *tmp_right_name_9;
                        CHECK_OBJECT( var_total );
                        tmp_left_name_9 = var_total;
                        CHECK_OBJECT( var_stack );
                        tmp_right_name_9 = var_stack;
                        tmp_assign_source_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
                        if ( tmp_assign_source_15 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 91;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_below_size == NULL );
                        var_below_size = tmp_assign_source_15;
                    }
                    {
                        PyObject *tmp_assign_source_16;
                        PyObject *tmp_left_name_10;
                        PyObject *tmp_right_name_10;
                        PyObject *tmp_left_name_11;
                        PyObject *tmp_right_name_11;
                        CHECK_OBJECT( var_below_size );
                        tmp_left_name_10 = var_below_size;
                        tmp_left_name_11 = const_float_0_5;
                        CHECK_OBJECT( var_y );
                        tmp_right_name_11 = var_y;
                        tmp_right_name_10 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
                        if ( tmp_right_name_10 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 92;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_10, tmp_right_name_10 );
                        Py_DECREF( tmp_right_name_10 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 92;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_assign_source_16 = tmp_left_name_10;
                        var_below_size = tmp_assign_source_16;

                    }
                    {
                        PyObject *tmp_assign_source_17;
                        PyObject *tmp_left_name_12;
                        PyObject *tmp_right_name_12;
                        CHECK_OBJECT( var_below_size );
                        tmp_left_name_12 = var_below_size;
                        CHECK_OBJECT( var_inv_total );
                        tmp_right_name_12 = var_inv_total;
                        tmp_assign_source_17 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
                        if ( tmp_assign_source_17 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 93;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_move_up == NULL );
                        var_move_up = tmp_assign_source_17;
                    }
                    {
                        PyObject *tmp_ass_subvalue_2;
                        PyObject *tmp_ass_subscribed_2;
                        PyObject *tmp_ass_subscript_2;
                        tmp_ass_subvalue_2 = const_float_0_5;
                        CHECK_OBJECT( var_move_up );
                        tmp_ass_subscribed_2 = var_move_up;
                        tmp_ass_subscript_2 = const_tuple_slice_none_none_none_int_0_tuple;
                        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 94;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                    }
                    {
                        PyObject *tmp_assign_source_18;
                        PyObject *tmp_left_name_13;
                        PyObject *tmp_left_name_14;
                        PyObject *tmp_right_name_13;
                        PyObject *tmp_right_name_14;
                        CHECK_OBJECT( var_move_up );
                        tmp_left_name_14 = var_move_up;
                        tmp_right_name_13 = const_float_0_5;
                        tmp_left_name_13 = BINARY_OPERATION_SUB_OBJECT_FLOAT( tmp_left_name_14, tmp_right_name_13 );
                        if ( tmp_left_name_13 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 95;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( var_increase );
                        tmp_right_name_14 = var_increase;
                        tmp_assign_source_18 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_14 );
                        Py_DECREF( tmp_left_name_13 );
                        if ( tmp_assign_source_18 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 95;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_center == NULL );
                        var_center = tmp_assign_source_18;
                    }
                    {
                        PyObject *tmp_assign_source_19;
                        PyObject *tmp_called_name_5;
                        PyObject *tmp_source_name_8;
                        PyObject *tmp_mvar_value_11;
                        PyObject *tmp_args_element_name_12;
                        PyObject *tmp_called_instance_8;
                        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain_np );

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

                            exception_lineno = 96;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_8 = tmp_mvar_value_11;
                        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_cumsum );
                        if ( tmp_called_name_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 96;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( var_center );
                        tmp_called_instance_8 = var_center;
                        frame_e2e208771ff21618f9a455e790245f6b->m_frame.f_lineno = 96;
                        tmp_args_element_name_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_sum, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

                        if ( tmp_args_element_name_12 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_5 );

                            exception_lineno = 96;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_e2e208771ff21618f9a455e790245f6b->m_frame.f_lineno = 96;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_12 };
                            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
                        }

                        Py_DECREF( tmp_called_name_5 );
                        Py_DECREF( tmp_args_element_name_12 );
                        if ( tmp_assign_source_19 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 96;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = var_center;
                            assert( old != NULL );
                            var_center = tmp_assign_source_19;
                            Py_DECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_assign_source_20;
                        PyObject *tmp_left_name_15;
                        PyObject *tmp_right_name_15;
                        PyObject *tmp_left_name_16;
                        PyObject *tmp_right_name_16;
                        CHECK_OBJECT( var_center );
                        tmp_left_name_15 = var_center;
                        tmp_left_name_16 = const_float_0_5;
                        CHECK_OBJECT( var_total );
                        tmp_right_name_16 = var_total;
                        tmp_right_name_15 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_16, tmp_right_name_16 );
                        if ( tmp_right_name_15 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 97;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_assign_source_20 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
                        Py_DECREF( tmp_right_name_15 );
                        if ( tmp_assign_source_20 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 97;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_first_line == NULL );
                        var_first_line = tmp_assign_source_20;
                    }
                    {
                        PyObject *tmp_assign_source_21;
                        PyObject *tmp_left_name_17;
                        PyObject *tmp_right_name_17;
                        CHECK_OBJECT( var_stack );
                        tmp_left_name_17 = var_stack;
                        CHECK_OBJECT( var_first_line );
                        tmp_right_name_17 = var_first_line;
                        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_17, tmp_right_name_17 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 98;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_assign_source_21 = tmp_left_name_17;
                        var_stack = tmp_assign_source_21;

                    }
                    goto branch_end_5;
                    branch_no_5:;
                    {
                        PyObject *tmp_assign_source_22;
                        PyObject *tmp_left_name_18;
                        PyObject *tmp_right_name_18;
                        tmp_left_name_18 = const_str_digest_7adf6a6788ca2df83dd9f427461af693;
                        CHECK_OBJECT( par_baseline );
                        tmp_right_name_18 = par_baseline;
                        tmp_assign_source_22 = BINARY_OPERATION_REMAINDER( tmp_left_name_18, tmp_right_name_18 );
                        if ( tmp_assign_source_22 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 101;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_errstr == NULL );
                        var_errstr = tmp_assign_source_22;
                    }
                    {
                        PyObject *tmp_assign_source_23;
                        PyObject *tmp_left_name_19;
                        PyObject *tmp_right_name_19;
                        CHECK_OBJECT( var_errstr );
                        tmp_left_name_19 = var_errstr;
                        tmp_right_name_19 = const_str_digest_8ce30373d01a447beeafa5925d34dd52;
                        tmp_result = BINARY_OPERATION_ADD_OBJECT_UNICODE_INPLACE( &tmp_left_name_19, tmp_right_name_19 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 102;
                            type_description_1 = "ooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_assign_source_23 = tmp_left_name_19;
                        var_errstr = tmp_assign_source_23;

                    }
                    {
                        PyObject *tmp_raise_type_1;
                        PyObject *tmp_make_exception_arg_1;
                        CHECK_OBJECT( var_errstr );
                        tmp_make_exception_arg_1 = var_errstr;
                        frame_e2e208771ff21618f9a455e790245f6b->m_frame.f_lineno = 103;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_1 };
                            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                        }

                        assert( !(tmp_raise_type_1 == NULL) );
                        exception_type = tmp_raise_type_1;
                        exception_lineno = 103;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_end_5:;
                }
                branch_end_4:;
            }
            branch_end_3:;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( par_axes );
        tmp_source_name_9 = par_axes;
        tmp_called_instance_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__get_lines );
        if ( tmp_called_instance_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e2e208771ff21618f9a455e790245f6b->m_frame.f_lineno = 106;
        tmp_assign_source_24 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_get_next_color );
        Py_DECREF( tmp_called_instance_9 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_color == NULL );
        var_color = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_10;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_next_arg_1;
        PyObject *tmp_next_default_1;
        PyObject *tmp_dircall_arg4_1;
        CHECK_OBJECT( par_axes );
        tmp_source_name_10 = par_axes;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_fill_between );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_tuple_element_3 = par_x;
        tmp_dircall_arg2_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_3 );
        if ( var_first_line == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_line" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = var_first_line;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_3 );
        if ( var_stack == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_6 = var_stack;
        tmp_subscript_name_6 = const_tuple_int_0_slice_none_none_none_tuple;
        tmp_tuple_element_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );

            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_3 );
        tmp_dict_key_4 = const_str_plain_facecolor;
        CHECK_OBJECT( var_color );
        tmp_dict_value_4 = var_color;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_label;
        CHECK_OBJECT( par_labels );
        tmp_next_arg_1 = par_labels;
        tmp_next_default_1 = Py_None;
        tmp_dict_value_5 = BUILTIN_NEXT2( tmp_next_arg_1, tmp_next_default_1 );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            Py_DECREF( tmp_dircall_arg3_1 );

            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_25 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_coll == NULL );
        var_coll = tmp_assign_source_25;
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        PyObject *tmp_ass_subscript_3;
        tmp_ass_subvalue_3 = LIST_COPY( const_list_int_0_list );
        CHECK_OBJECT( var_coll );
        tmp_source_name_12 = var_coll;
        tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_sticky_edges );
        if ( tmp_source_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_3 );

            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_y );
        Py_DECREF( tmp_source_name_11 );
        if ( tmp_ass_subscribed_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_3 );

            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = const_slice_none_none_none;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subscribed_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT( var_coll );
        tmp_list_element_1 = var_coll;
        tmp_assign_source_26 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_assign_source_26, 0, tmp_list_element_1 );
        assert( var_r == NULL );
        var_r = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_left_name_20;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_20;
        CHECK_OBJECT( var_y );
        tmp_len_arg_1 = var_y;
        tmp_left_name_20 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_left_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_20 = const_int_pos_1;
        tmp_xrange_low_1 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_20, tmp_right_name_20 );
        Py_DECREF( tmp_left_name_20 );
        assert( !(tmp_xrange_low_1 == NULL) );
        tmp_iter_arg_2 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        Py_DECREF( tmp_xrange_low_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_27;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_28 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_28 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooo";
                exception_lineno = 114;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_28;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_29 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_29;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_source_name_13;
        CHECK_OBJECT( par_axes );
        tmp_source_name_13 = par_axes;
        tmp_called_instance_10 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__get_lines );
        if ( tmp_called_instance_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_e2e208771ff21618f9a455e790245f6b->m_frame.f_lineno = 115;
        tmp_assign_source_30 = CALL_METHOD_NO_ARGS( tmp_called_instance_10, const_str_plain_get_next_color );
        Py_DECREF( tmp_called_instance_10 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_color;
            assert( old != NULL );
            var_color = tmp_assign_source_30;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_14;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_source_name_15;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_left_name_21;
        PyObject *tmp_right_name_21;
        PyObject *tmp_dircall_arg3_2;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_next_arg_2;
        PyObject *tmp_next_default_2;
        PyObject *tmp_dircall_arg4_2;
        CHECK_OBJECT( var_r );
        tmp_source_name_14 = var_r;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_append );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_axes );
        tmp_source_name_15 = par_axes;
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_fill_between );
        if ( tmp_dircall_arg1_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_x );
        tmp_tuple_element_4 = par_x;
        tmp_dircall_arg2_2 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_4 );
        if ( var_stack == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_dircall_arg1_2 );
            Py_DECREF( tmp_dircall_arg2_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_subscribed_name_7 = var_stack;
        CHECK_OBJECT( var_i );
        tmp_tuple_element_5 = var_i;
        tmp_subscript_name_7 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_subscript_name_7, 0, tmp_tuple_element_5 );
        tmp_tuple_element_5 = const_slice_none_none_none;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_subscript_name_7, 1, tmp_tuple_element_5 );
        tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        Py_DECREF( tmp_subscript_name_7 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_dircall_arg1_2 );
            Py_DECREF( tmp_dircall_arg2_2 );

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_4 );
        if ( var_stack == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_dircall_arg1_2 );
            Py_DECREF( tmp_dircall_arg2_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_subscribed_name_8 = var_stack;
        CHECK_OBJECT( var_i );
        tmp_left_name_21 = var_i;
        tmp_right_name_21 = const_int_pos_1;
        tmp_tuple_element_6 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_21, tmp_right_name_21 );
        if ( tmp_tuple_element_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_dircall_arg1_2 );
            Py_DECREF( tmp_dircall_arg2_2 );

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_8 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_8, 0, tmp_tuple_element_6 );
        tmp_tuple_element_6 = const_slice_none_none_none;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_subscript_name_8, 1, tmp_tuple_element_6 );
        tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        Py_DECREF( tmp_subscript_name_8 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_dircall_arg1_2 );
            Py_DECREF( tmp_dircall_arg2_2 );

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_dircall_arg2_2, 2, tmp_tuple_element_4 );
        tmp_dict_key_6 = const_str_plain_facecolor;
        CHECK_OBJECT( var_color );
        tmp_dict_value_6 = var_color;
        tmp_dircall_arg3_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_label;
        CHECK_OBJECT( par_labels );
        tmp_next_arg_2 = par_labels;
        tmp_next_default_2 = Py_None;
        tmp_dict_value_7 = BUILTIN_NEXT2( tmp_next_arg_2, tmp_next_default_2 );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_dircall_arg1_2 );
            Py_DECREF( tmp_dircall_arg2_2 );
            Py_DECREF( tmp_dircall_arg3_2 );

            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg4_2 = par_kwargs;
        Py_INCREF( tmp_dircall_arg4_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
            tmp_args_element_name_13 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
        }
        if ( tmp_args_element_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_e2e208771ff21618f9a455e790245f6b->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_13 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "ooooooooooooooooooooooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2e208771ff21618f9a455e790245f6b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2e208771ff21618f9a455e790245f6b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e2e208771ff21618f9a455e790245f6b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e2e208771ff21618f9a455e790245f6b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e2e208771ff21618f9a455e790245f6b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e2e208771ff21618f9a455e790245f6b,
        type_description_1,
        par_axes,
        par_x,
        par_labels,
        par_colors,
        par_baseline,
        par_args,
        par_kwargs,
        var_y,
        var_stack,
        var_first_line,
        var_m,
        var_total,
        var_inv_total,
        var_mask,
        var_increase,
        var_below_size,
        var_move_up,
        var_center,
        var_errstr,
        var_color,
        var_coll,
        var_r,
        var_i
    );


    // Release cached frame.
    if ( frame_e2e208771ff21618f9a455e790245f6b == cache_frame_e2e208771ff21618f9a455e790245f6b )
    {
        Py_DECREF( frame_e2e208771ff21618f9a455e790245f6b );
    }
    cache_frame_e2e208771ff21618f9a455e790245f6b = NULL;

    assertFrameObject( frame_e2e208771ff21618f9a455e790245f6b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    CHECK_OBJECT( var_r );
    tmp_return_value = var_r;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( matplotlib$stackplot$$$function_1_stackplot );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_labels );
    Py_DECREF( par_labels );
    par_labels = NULL;

    CHECK_OBJECT( (PyObject *)par_colors );
    Py_DECREF( par_colors );
    par_colors = NULL;

    CHECK_OBJECT( (PyObject *)par_baseline );
    Py_DECREF( par_baseline );
    par_baseline = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_stack );
    var_stack = NULL;

    Py_XDECREF( var_first_line );
    var_first_line = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_total );
    var_total = NULL;

    Py_XDECREF( var_inv_total );
    var_inv_total = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_increase );
    var_increase = NULL;

    Py_XDECREF( var_below_size );
    var_below_size = NULL;

    Py_XDECREF( var_move_up );
    var_move_up = NULL;

    Py_XDECREF( var_center );
    var_center = NULL;

    CHECK_OBJECT( (PyObject *)var_color );
    Py_DECREF( var_color );
    var_color = NULL;

    CHECK_OBJECT( (PyObject *)var_coll );
    Py_DECREF( var_coll );
    var_coll = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_labels );
    Py_DECREF( par_labels );
    par_labels = NULL;

    CHECK_OBJECT( (PyObject *)par_colors );
    Py_DECREF( par_colors );
    par_colors = NULL;

    CHECK_OBJECT( (PyObject *)par_baseline );
    Py_DECREF( par_baseline );
    par_baseline = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_stack );
    var_stack = NULL;

    Py_XDECREF( var_first_line );
    var_first_line = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_total );
    var_total = NULL;

    Py_XDECREF( var_inv_total );
    var_inv_total = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_increase );
    var_increase = NULL;

    Py_XDECREF( var_below_size );
    var_below_size = NULL;

    Py_XDECREF( var_move_up );
    var_move_up = NULL;

    Py_XDECREF( var_center );
    var_center = NULL;

    Py_XDECREF( var_errstr );
    var_errstr = NULL;

    Py_XDECREF( var_color );
    var_color = NULL;

    Py_XDECREF( var_coll );
    var_coll = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( matplotlib$stackplot$$$function_1_stackplot );
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



static PyObject *MAKE_FUNCTION_matplotlib$stackplot$$$function_1_stackplot( PyObject *kw_defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$stackplot$$$function_1_stackplot,
        const_str_plain_stackplot,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e2e208771ff21618f9a455e790245f6b,
        NULL,
#if PYTHON_VERSION >= 300
        kw_defaults,
        NULL,
#endif
        module_matplotlib$stackplot,
        const_str_digest_1ccc7198630cc5863a5477dc00cdc4f5,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_matplotlib$stackplot =
{
    PyModuleDef_HEAD_INIT,
    "matplotlib.stackplot",
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

MOD_INIT_DECL( matplotlib$stackplot )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_matplotlib$stackplot );
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
    puts("matplotlib.stackplot: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("matplotlib.stackplot: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("matplotlib.stackplot: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initmatplotlib$stackplot" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_matplotlib$stackplot = Py_InitModule4(
        "matplotlib.stackplot",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_matplotlib$stackplot = PyModule_Create( &mdef_matplotlib$stackplot );
#endif

    moduledict_matplotlib$stackplot = MODULE_DICT( module_matplotlib$stackplot );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_matplotlib$stackplot,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_matplotlib$stackplot,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_matplotlib$stackplot,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_matplotlib$stackplot,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_matplotlib$stackplot );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_95662311a84e5100059b3a74568da256, module_matplotlib$stackplot );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_4961837ab6a079cb6ee35df304f60f46;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_f4103c3db5423e016158ff5f15895fe1;
        UPDATE_STRING_DICT0( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_4961837ab6a079cb6ee35df304f60f46 = MAKE_MODULE_FRAME( codeobj_4961837ab6a079cb6ee35df304f60f46, module_matplotlib$stackplot );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_4961837ab6a079cb6ee35df304f60f46 );
    assert( Py_REFCNT( frame_4961837ab6a079cb6ee35df304f60f46 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_numpy;
        tmp_globals_name_1 = (PyObject *)moduledict_matplotlib$stackplot;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_4961837ab6a079cb6ee35df304f60f46->m_frame.f_lineno = 9;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_4 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4961837ab6a079cb6ee35df304f60f46 );
#endif
    popFrameStack();

    assertFrameObject( frame_4961837ab6a079cb6ee35df304f60f46 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4961837ab6a079cb6ee35df304f60f46 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4961837ab6a079cb6ee35df304f60f46, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4961837ab6a079cb6ee35df304f60f46->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4961837ab6a079cb6ee35df304f60f46, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = LIST_COPY( const_list_str_plain_stackplot_list );
        UPDATE_STRING_DICT1( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_kw_defaults_1;
        tmp_kw_defaults_1 = PyDict_Copy( const_dict_9a0f9757de683399f6a3ff0895217c4c );
        tmp_assign_source_6 = MAKE_FUNCTION_matplotlib$stackplot$$$function_1_stackplot( tmp_kw_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain_stackplot, tmp_assign_source_6 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_matplotlib$stackplot, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_matplotlib$stackplot );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
