/* Generated code for Python module 'matplotlib.tri.triplot'
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

/* The "_module_matplotlib$tri$triplot" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_matplotlib$tri$triplot;
PyDictObject *moduledict_matplotlib$tri$triplot;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_marker;
extern PyObject *const_str_plain__process_plot_format;
extern PyObject *const_str_plain_nan;
static PyObject *const_str_digest_274d0009ebd1d17bb1bfbacfd01d5670;
extern PyObject *const_str_plain_get_from_args_and_kwargs;
extern PyObject *const_str_digest_ec45ab155f4d274fe3e92889c67b2f1a;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain_Triangulation_tuple;
static PyObject *const_tuple_bcb0a0ec3bb8299aa3c8a752738f8bb8_tuple;
extern PyObject *const_str_plain_plot;
extern PyObject *const_tuple_list_empty_list_empty_tuple;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_digest_8bcd4f3889c3f282dbf65b65e7734dba;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_577834be8bb894f316934bfd2db18e59;
extern PyObject *const_str_plain_zorder;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_copy;
extern PyObject *const_tuple_str_plain_zorder_int_pos_1_tuple;
extern PyObject *const_str_plain_axis;
static PyObject *const_dict_51316f570e504b1d87132a7ab0e5e4b3;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_edges;
extern PyObject *const_str_plain_Triangulation;
extern PyObject *const_dict_c4b01644824ba6bad132707fcdaa03f1;
extern PyObject *const_str_plain_insert;
static PyObject *const_dict_feec19af89fe245082e7361556810fd0;
extern PyObject *const_str_plain__base;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_0771b85ee859c0a4971fcb369a1ddb4d;
static PyObject *const_list_none_str_plain_None_str_empty_str_space_list;
extern PyObject *const_str_plain_ravel;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_axes;
extern PyObject *const_str_plain_x;
extern PyObject *const_list_empty;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_space;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_linestyle;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_triplot;
extern PyObject *const_tuple_str_plain_linestyle_str_plain_marker_str_plain_color_tuple;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_1c02bea97193cef97ac023f82086276f;
extern PyObject *const_str_plain_color;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___debug__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_274d0009ebd1d17bb1bfbacfd01d5670 = UNSTREAM_STRING_ASCII( &constant_bin[ 2143683 ], 22, 0 );
    const_tuple_bcb0a0ec3bb8299aa3c8a752738f8bb8_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2143705 ], 167 );
    const_str_digest_8bcd4f3889c3f282dbf65b65e7734dba = UNSTREAM_STRING_ASCII( &constant_bin[ 2143872 ], 25, 0 );
    const_str_digest_577834be8bb894f316934bfd2db18e59 = UNSTREAM_STRING_ASCII( &constant_bin[ 2143897 ], 902, 0 );
    const_dict_51316f570e504b1d87132a7ab0e5e4b3 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_51316f570e504b1d87132a7ab0e5e4b3, const_str_plain_marker, const_str_plain_None );
    assert( PyDict_Size( const_dict_51316f570e504b1d87132a7ab0e5e4b3 ) == 1 );
    const_dict_feec19af89fe245082e7361556810fd0 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_feec19af89fe245082e7361556810fd0, const_str_plain_linestyle, const_str_plain_None );
    assert( PyDict_Size( const_dict_feec19af89fe245082e7361556810fd0 ) == 1 );
    const_list_none_str_plain_None_str_empty_str_space_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_none_str_plain_None_str_empty_str_space_list, 0, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_none_str_plain_None_str_empty_str_space_list, 1, const_str_plain_None ); Py_INCREF( const_str_plain_None );
    PyList_SET_ITEM( const_list_none_str_plain_None_str_empty_str_space_list, 2, const_str_empty ); Py_INCREF( const_str_empty );
    PyList_SET_ITEM( const_list_none_str_plain_None_str_empty_str_space_list, 3, const_str_space ); Py_INCREF( const_str_space );
    const_str_digest_1c02bea97193cef97ac023f82086276f = UNSTREAM_STRING_ASCII( &constant_bin[ 2144799 ], 31, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_matplotlib$tri$triplot( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_fb48f782a90df709fa45686986e27033;
static PyCodeObject *codeobj_9e307bbfc2184a9274130f027edfceac;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_8bcd4f3889c3f282dbf65b65e7734dba );
    codeobj_fb48f782a90df709fa45686986e27033 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1c02bea97193cef97ac023f82086276f, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_9e307bbfc2184a9274130f027edfceac = MAKE_CODEOBJ( module_filename_obj, const_str_plain_triplot, 5, const_tuple_bcb0a0ec3bb8299aa3c8a752738f8bb8_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_13__unpack_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_matplotlib$tri$triplot$$$function_1_triplot(  );


// The module function definitions.
static PyObject *impl_matplotlib$tri$triplot$$$function_1_triplot( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ax = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_matplotlib = NULL;
    PyObject *var_tri = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_edges = NULL;
    PyObject *var_fmt = NULL;
    PyObject *var_linestyle = NULL;
    PyObject *var_marker = NULL;
    PyObject *var_color = NULL;
    PyObject *var_kw = NULL;
    PyObject *var_key = NULL;
    PyObject *var_val = NULL;
    PyObject *var_kw_lines = NULL;
    PyObject *var_tri_lines_x = NULL;
    PyObject *var_tri_lines_y = NULL;
    PyObject *var_tri_lines = NULL;
    PyObject *var_kw_markers = NULL;
    PyObject *var_tri_markers = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9e307bbfc2184a9274130f027edfceac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    bool tmp_result;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9e307bbfc2184a9274130f027edfceac = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9e307bbfc2184a9274130f027edfceac, codeobj_9e307bbfc2184a9274130f027edfceac, module_matplotlib$tri$triplot, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9e307bbfc2184a9274130f027edfceac = cache_frame_9e307bbfc2184a9274130f027edfceac;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9e307bbfc2184a9274130f027edfceac );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9e307bbfc2184a9274130f027edfceac ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_ec45ab155f4d274fe3e92889c67b2f1a;
        tmp_globals_name_1 = (PyObject *)moduledict_matplotlib$tri$triplot;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_9e307bbfc2184a9274130f027edfceac->m_frame.f_lineno = 38;
        tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_matplotlib == NULL );
        var_matplotlib = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain_Triangulation );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Triangulation );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Triangulation" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_from_args_and_kwargs );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_iter_arg_1 = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
        if ( tmp_assign_source_3 == NULL )
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 40;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 40;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 40;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
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

                    type_description_1 = "ooooooooooooooooooooo";
                    exception_lineno = 40;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 40;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

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
        assert( var_tri == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_tri = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_args;
            assert( old != NULL );
            par_args = tmp_assign_source_7;
            Py_INCREF( par_args );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_kwargs;
            assert( old != NULL );
            par_kwargs = tmp_assign_source_8;
            Py_INCREF( par_kwargs );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( var_tri );
        tmp_source_name_2 = var_tri;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_x );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_iter_arg_2 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_tri );
        tmp_source_name_3 = var_tri;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_y );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_2 );

            exception_lineno = 41;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_tri );
        tmp_source_name_4 = var_tri;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_edges );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_2 );

            exception_lineno = 41;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_2, 2, tmp_tuple_element_1 );
        tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_4, 0, 3 );
        if ( tmp_assign_source_10 == NULL )
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 41;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_5, 1, 3 );
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 41;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_6, 2, 3 );
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 41;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_3 == NULL );
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_12;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

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
        assert( var_x == NULL );
        Py_INCREF( tmp_assign_source_13 );
        var_x = tmp_assign_source_13;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
        assert( var_y == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_y = tmp_assign_source_14;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_3;
        assert( var_edges == NULL );
        Py_INCREF( tmp_assign_source_15 );
        var_edges = tmp_assign_source_15;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_16;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_args );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_args );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( par_args );
        tmp_subscribed_name_1 = par_args;
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_16 = const_str_empty;
        Py_INCREF( tmp_assign_source_16 );
        condexpr_end_1:;
        assert( var_fmt == NULL );
        var_fmt = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_matplotlib );
        tmp_source_name_6 = var_matplotlib;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_axes );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__base );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_fmt );
        tmp_args_element_name_1 = var_fmt;
        frame_9e307bbfc2184a9274130f027edfceac->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__process_plot_format, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_3__source_iter == NULL );
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_7, 0, 3 );
        if ( tmp_assign_source_18 == NULL )
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 45;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_1 == NULL );
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_8, 1, 3 );
        if ( tmp_assign_source_19 == NULL )
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 45;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_2 == NULL );
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_9, 2, 3 );
        if ( tmp_assign_source_20 == NULL )
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 45;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_3 == NULL );
        tmp_tuple_unpack_3__element_3 = tmp_assign_source_20;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_iterator_name_2 = tmp_tuple_unpack_3__source_iter;
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

                    type_description_1 = "ooooooooooooooooooooo";
                    exception_lineno = 45;
                    goto try_except_handler_7;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 45;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

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

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_3 );
    tmp_tuple_unpack_3__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_21 = tmp_tuple_unpack_3__element_1;
        assert( var_linestyle == NULL );
        Py_INCREF( tmp_assign_source_21 );
        var_linestyle = tmp_assign_source_21;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
        tmp_assign_source_22 = tmp_tuple_unpack_3__element_2;
        assert( var_marker == NULL );
        Py_INCREF( tmp_assign_source_22 );
        var_marker = tmp_assign_source_22;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_3 );
        tmp_assign_source_23 = tmp_tuple_unpack_3__element_3;
        assert( var_color == NULL );
        Py_INCREF( tmp_assign_source_23 );
        var_color = tmp_assign_source_23;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_3 );
    tmp_tuple_unpack_3__element_3 = NULL;

    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_2 = par_kwargs;
        frame_9e307bbfc2184a9274130f027edfceac->m_frame.f_lineno = 48;
        tmp_assign_source_24 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_copy );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_kw == NULL );
        var_kw = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_tuple_element_2;
        tmp_called_name_1 = (PyObject *)&PyZip_Type;
        tmp_args_element_name_2 = const_tuple_str_plain_linestyle_str_plain_marker_str_plain_color_tuple;
        CHECK_OBJECT( var_linestyle );
        tmp_tuple_element_2 = var_linestyle;
        tmp_args_element_name_3 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_marker );
        tmp_tuple_element_2 = var_marker;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( var_color );
        tmp_tuple_element_2 = var_color;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_3, 2, tmp_tuple_element_2 );
        frame_9e307bbfc2184a9274130f027edfceac->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_25;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_26 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_26 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 49;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_26;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_5 = tmp_for_loop_1__iter_value;
        tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_5 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_27;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_28 = UNPACK_NEXT( tmp_unpack_10, 0, 2 );
        if ( tmp_assign_source_28 == NULL )
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 49;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_28;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_11 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_29 = UNPACK_NEXT( tmp_unpack_11, 1, 2 );
        if ( tmp_assign_source_29 == NULL )
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 49;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_29;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_iterator_name_3 = tmp_tuple_unpack_4__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_3 ); assert( HAS_ITERNEXT( tmp_iterator_name_3 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_3 )->tp_iternext)( tmp_iterator_name_3 );

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

                    type_description_1 = "ooooooooooooooooooooo";
                    exception_lineno = 49;
                    goto try_except_handler_10;
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

            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 49;
            goto try_except_handler_10;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_9;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_8;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
        tmp_assign_source_30 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_30;
            Py_INCREF( var_key );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
        tmp_assign_source_31 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_val;
            var_val = tmp_assign_source_31;
            Py_INCREF( var_val );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_val );
        tmp_compexpr_left_1 = var_val;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT( par_kwargs );
            tmp_called_instance_3 = par_kwargs;
            CHECK_OBJECT( var_key );
            tmp_args_element_name_4 = var_key;
            CHECK_OBJECT( var_val );
            tmp_args_element_name_5 = var_val;
            frame_9e307bbfc2184a9274130f027edfceac->m_frame.f_lineno = 52;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_ass_subvalue_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_get, call_args );
            }

            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            CHECK_OBJECT( var_kw );
            tmp_ass_subscribed_1 = var_kw;
            CHECK_OBJECT( var_key );
            tmp_ass_subscript_1 = var_key;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_8;
            }
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_kw );
        tmp_subscribed_name_2 = var_kw;
        tmp_subscript_name_2 = const_str_plain_linestyle;
        tmp_assign_source_32 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_linestyle;
            assert( old != NULL );
            var_linestyle = tmp_assign_source_32;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT( var_kw );
        tmp_tuple_element_3 = var_kw;
        tmp_dircall_arg1_2 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dircall_arg1_2, 0, tmp_tuple_element_3 );
        tmp_tuple_element_3 = PyDict_Copy( const_dict_51316f570e504b1d87132a7ab0e5e4b3 );
        PyTuple_SET_ITEM( tmp_dircall_arg1_2, 1, tmp_tuple_element_3 );
        tmp_dict_key_1 = const_str_plain_zorder;
        CHECK_OBJECT( var_kw );
        tmp_called_instance_4 = var_kw;
        frame_9e307bbfc2184a9274130f027edfceac->m_frame.f_lineno = 64;
        tmp_dict_value_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_zorder_int_pos_1_tuple, 0 ) );

        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_2 );

            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_tuple_element_3, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        PyTuple_SET_ITEM( tmp_dircall_arg1_2, 2, tmp_tuple_element_3 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_33 = impl___internal__$$$function_13__unpack_dict( dir_call_args );
        }
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_kw_lines == NULL );
        var_kw_lines = tmp_assign_source_33;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_linestyle );
        tmp_compexpr_left_2 = var_linestyle;
        tmp_compexpr_right_2 = LIST_COPY( const_list_none_str_plain_None_str_empty_str_space_list );
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 67;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_insert );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x );
            tmp_subscribed_name_3 = var_x;
            CHECK_OBJECT( var_edges );
            tmp_subscript_name_3 = var_edges;
            tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 67;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_4 );
            tmp_tuple_element_4 = const_int_pos_2;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_4 );
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 67;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_3;
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_nan );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 67;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_4 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_c4b01644824ba6bad132707fcdaa03f1 );
            frame_9e307bbfc2184a9274130f027edfceac->m_frame.f_lineno = 67;
            tmp_assign_source_34 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_tri_lines_x == NULL );
            var_tri_lines_x = tmp_assign_source_34;
        }
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_source_name_10;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_kw_name_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 68;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_4;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_insert );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_y );
            tmp_subscribed_name_4 = var_y;
            CHECK_OBJECT( var_edges );
            tmp_subscript_name_4 = var_edges;
            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 68;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_2 = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_5 );
            tmp_tuple_element_5 = const_int_pos_2;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_5 );
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 68;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_10 = tmp_mvar_value_5;
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_nan );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_2 );

                exception_lineno = 68;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_5 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_c4b01644824ba6bad132707fcdaa03f1 );
            frame_9e307bbfc2184a9274130f027edfceac->m_frame.f_lineno = 68;
            tmp_assign_source_35 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_tri_lines_y == NULL );
            var_tri_lines_y = tmp_assign_source_35;
        }
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_dircall_arg1_3;
            PyObject *tmp_source_name_11;
            PyObject *tmp_dircall_arg2_2;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_dircall_arg3_2;
            CHECK_OBJECT( par_ax );
            tmp_source_name_11 = par_ax;
            tmp_dircall_arg1_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_plot );
            if ( tmp_dircall_arg1_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_tri_lines_x );
            tmp_called_instance_5 = var_tri_lines_x;
            frame_9e307bbfc2184a9274130f027edfceac->m_frame.f_lineno = 69;
            tmp_tuple_element_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_ravel );
            if ( tmp_tuple_element_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dircall_arg1_3 );

                exception_lineno = 69;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dircall_arg2_2 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( var_tri_lines_y );
            tmp_called_instance_6 = var_tri_lines_y;
            frame_9e307bbfc2184a9274130f027edfceac->m_frame.f_lineno = 69;
            tmp_tuple_element_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_ravel );
            if ( tmp_tuple_element_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dircall_arg1_3 );
                Py_DECREF( tmp_dircall_arg2_2 );

                exception_lineno = 69;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_6 );
            CHECK_OBJECT( var_kw_lines );
            tmp_dircall_arg3_2 = var_kw_lines;
            Py_INCREF( tmp_dircall_arg3_2 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
                tmp_assign_source_36 = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
            }
            if ( tmp_assign_source_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_tri_lines == NULL );
            var_tri_lines = tmp_assign_source_36;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_dircall_arg1_4;
            PyObject *tmp_source_name_12;
            PyObject *tmp_dircall_arg2_3;
            PyObject *tmp_dircall_arg3_3;
            CHECK_OBJECT( par_ax );
            tmp_source_name_12 = par_ax;
            tmp_dircall_arg1_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_plot );
            if ( tmp_dircall_arg1_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dircall_arg2_3 = DEEP_COPY( const_tuple_list_empty_list_empty_tuple );
            CHECK_OBJECT( var_kw_lines );
            tmp_dircall_arg3_3 = var_kw_lines;
            Py_INCREF( tmp_dircall_arg3_3 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_3, tmp_dircall_arg3_3};
                tmp_assign_source_37 = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
            }
            if ( tmp_assign_source_37 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_tri_lines == NULL );
            var_tri_lines = tmp_assign_source_37;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT( var_kw );
        tmp_subscribed_name_5 = var_kw;
        tmp_subscript_name_5 = const_str_plain_marker;
        tmp_assign_source_38 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_marker;
            assert( old != NULL );
            var_marker = tmp_assign_source_38;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_dircall_arg1_5;
        PyObject *tmp_tuple_element_7;
        CHECK_OBJECT( var_kw );
        tmp_tuple_element_7 = var_kw;
        tmp_dircall_arg1_5 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_dircall_arg1_5, 0, tmp_tuple_element_7 );
        tmp_tuple_element_7 = PyDict_Copy( const_dict_feec19af89fe245082e7361556810fd0 );
        PyTuple_SET_ITEM( tmp_dircall_arg1_5, 1, tmp_tuple_element_7 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_39 = impl___internal__$$$function_13__unpack_dict( dir_call_args );
        }
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_kw_markers == NULL );
        var_kw_markers = tmp_assign_source_39;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_marker );
        tmp_compexpr_left_3 = var_marker;
        tmp_compexpr_right_3 = LIST_COPY( const_list_none_str_plain_None_str_empty_str_space_list );
        tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_dircall_arg1_6;
            PyObject *tmp_source_name_13;
            PyObject *tmp_dircall_arg2_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_dircall_arg3_4;
            CHECK_OBJECT( par_ax );
            tmp_source_name_13 = par_ax;
            tmp_dircall_arg1_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_plot );
            if ( tmp_dircall_arg1_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 81;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x );
            tmp_tuple_element_8 = var_x;
            tmp_dircall_arg2_4 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_4, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( var_y );
            tmp_tuple_element_8 = var_y;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_4, 1, tmp_tuple_element_8 );
            CHECK_OBJECT( var_kw_markers );
            tmp_dircall_arg3_4 = var_kw_markers;
            Py_INCREF( tmp_dircall_arg3_4 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_6, tmp_dircall_arg2_4, tmp_dircall_arg3_4};
                tmp_assign_source_40 = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
            }
            if ( tmp_assign_source_40 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 81;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_tri_markers == NULL );
            var_tri_markers = tmp_assign_source_40;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_dircall_arg1_7;
            PyObject *tmp_source_name_14;
            PyObject *tmp_dircall_arg2_5;
            PyObject *tmp_dircall_arg3_5;
            CHECK_OBJECT( par_ax );
            tmp_source_name_14 = par_ax;
            tmp_dircall_arg1_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_plot );
            if ( tmp_dircall_arg1_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 83;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dircall_arg2_5 = DEEP_COPY( const_tuple_list_empty_list_empty_tuple );
            CHECK_OBJECT( var_kw_markers );
            tmp_dircall_arg3_5 = var_kw_markers;
            Py_INCREF( tmp_dircall_arg3_5 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_7, tmp_dircall_arg2_5, tmp_dircall_arg3_5};
                tmp_assign_source_41 = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
            }
            if ( tmp_assign_source_41 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 83;
                type_description_1 = "ooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_tri_markers == NULL );
            var_tri_markers = tmp_assign_source_41;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_tri_lines );
        tmp_left_name_1 = var_tri_lines;
        CHECK_OBJECT( var_tri_markers );
        tmp_right_name_1 = var_tri_markers;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e307bbfc2184a9274130f027edfceac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e307bbfc2184a9274130f027edfceac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e307bbfc2184a9274130f027edfceac );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9e307bbfc2184a9274130f027edfceac, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9e307bbfc2184a9274130f027edfceac->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9e307bbfc2184a9274130f027edfceac, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9e307bbfc2184a9274130f027edfceac,
        type_description_1,
        par_ax,
        par_args,
        par_kwargs,
        var_matplotlib,
        var_tri,
        var_x,
        var_y,
        var_edges,
        var_fmt,
        var_linestyle,
        var_marker,
        var_color,
        var_kw,
        var_key,
        var_val,
        var_kw_lines,
        var_tri_lines_x,
        var_tri_lines_y,
        var_tri_lines,
        var_kw_markers,
        var_tri_markers
    );


    // Release cached frame.
    if ( frame_9e307bbfc2184a9274130f027edfceac == cache_frame_9e307bbfc2184a9274130f027edfceac )
    {
        Py_DECREF( frame_9e307bbfc2184a9274130f027edfceac );
    }
    cache_frame_9e307bbfc2184a9274130f027edfceac = NULL;

    assertFrameObject( frame_9e307bbfc2184a9274130f027edfceac );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( matplotlib$tri$triplot$$$function_1_triplot );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ax );
    Py_DECREF( par_ax );
    par_ax = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_matplotlib );
    Py_DECREF( var_matplotlib );
    var_matplotlib = NULL;

    CHECK_OBJECT( (PyObject *)var_tri );
    Py_DECREF( var_tri );
    var_tri = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    CHECK_OBJECT( (PyObject *)var_edges );
    Py_DECREF( var_edges );
    var_edges = NULL;

    CHECK_OBJECT( (PyObject *)var_fmt );
    Py_DECREF( var_fmt );
    var_fmt = NULL;

    CHECK_OBJECT( (PyObject *)var_linestyle );
    Py_DECREF( var_linestyle );
    var_linestyle = NULL;

    CHECK_OBJECT( (PyObject *)var_marker );
    Py_DECREF( var_marker );
    var_marker = NULL;

    CHECK_OBJECT( (PyObject *)var_color );
    Py_DECREF( var_color );
    var_color = NULL;

    CHECK_OBJECT( (PyObject *)var_kw );
    Py_DECREF( var_kw );
    var_kw = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    CHECK_OBJECT( (PyObject *)var_kw_lines );
    Py_DECREF( var_kw_lines );
    var_kw_lines = NULL;

    Py_XDECREF( var_tri_lines_x );
    var_tri_lines_x = NULL;

    Py_XDECREF( var_tri_lines_y );
    var_tri_lines_y = NULL;

    CHECK_OBJECT( (PyObject *)var_tri_lines );
    Py_DECREF( var_tri_lines );
    var_tri_lines = NULL;

    CHECK_OBJECT( (PyObject *)var_kw_markers );
    Py_DECREF( var_kw_markers );
    var_kw_markers = NULL;

    CHECK_OBJECT( (PyObject *)var_tri_markers );
    Py_DECREF( var_tri_markers );
    var_tri_markers = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_ax );
    Py_DECREF( par_ax );
    par_ax = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_matplotlib );
    var_matplotlib = NULL;

    Py_XDECREF( var_tri );
    var_tri = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_edges );
    var_edges = NULL;

    Py_XDECREF( var_fmt );
    var_fmt = NULL;

    Py_XDECREF( var_linestyle );
    var_linestyle = NULL;

    Py_XDECREF( var_marker );
    var_marker = NULL;

    Py_XDECREF( var_color );
    var_color = NULL;

    Py_XDECREF( var_kw );
    var_kw = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_kw_lines );
    var_kw_lines = NULL;

    Py_XDECREF( var_tri_lines_x );
    var_tri_lines_x = NULL;

    Py_XDECREF( var_tri_lines_y );
    var_tri_lines_y = NULL;

    Py_XDECREF( var_tri_lines );
    var_tri_lines = NULL;

    Py_XDECREF( var_kw_markers );
    var_kw_markers = NULL;

    Py_XDECREF( var_tri_markers );
    var_tri_markers = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( matplotlib$tri$triplot$$$function_1_triplot );
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



static PyObject *MAKE_FUNCTION_matplotlib$tri$triplot$$$function_1_triplot(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$tri$triplot$$$function_1_triplot,
        const_str_plain_triplot,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9e307bbfc2184a9274130f027edfceac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_matplotlib$tri$triplot,
        const_str_digest_577834be8bb894f316934bfd2db18e59,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_matplotlib$tri$triplot =
{
    PyModuleDef_HEAD_INIT,
    "matplotlib.tri.triplot",
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

MOD_INIT_DECL( matplotlib$tri$triplot )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_matplotlib$tri$triplot );
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
    puts("matplotlib.tri.triplot: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("matplotlib.tri.triplot: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("matplotlib.tri.triplot: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initmatplotlib$tri$triplot" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_matplotlib$tri$triplot = Py_InitModule4(
        "matplotlib.tri.triplot",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_matplotlib$tri$triplot = PyModule_Create( &mdef_matplotlib$tri$triplot );
#endif

    moduledict_matplotlib$tri$triplot = MODULE_DICT( module_matplotlib$tri$triplot );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_matplotlib$tri$triplot,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_matplotlib$tri$triplot,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_matplotlib$tri$triplot,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_matplotlib$tri$triplot,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_matplotlib$tri$triplot );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_274d0009ebd1d17bb1bfbacfd01d5670, module_matplotlib$tri$triplot );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_fb48f782a90df709fa45686986e27033;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_fb48f782a90df709fa45686986e27033 = MAKE_MODULE_FRAME( codeobj_fb48f782a90df709fa45686986e27033, module_matplotlib$tri$triplot );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_fb48f782a90df709fa45686986e27033 );
    assert( Py_REFCNT( frame_fb48f782a90df709fa45686986e27033 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_numpy;
        tmp_globals_name_1 = (PyObject *)moduledict_matplotlib$tri$triplot;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_fb48f782a90df709fa45686986e27033->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_0771b85ee859c0a4971fcb369a1ddb4d;
        tmp_globals_name_2 = (PyObject *)moduledict_matplotlib$tri$triplot;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_Triangulation_tuple;
        tmp_level_name_2 = const_int_0;
        frame_fb48f782a90df709fa45686986e27033->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Triangulation );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain_Triangulation, tmp_assign_source_5 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb48f782a90df709fa45686986e27033 );
#endif
    popFrameStack();

    assertFrameObject( frame_fb48f782a90df709fa45686986e27033 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb48f782a90df709fa45686986e27033 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fb48f782a90df709fa45686986e27033, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fb48f782a90df709fa45686986e27033->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fb48f782a90df709fa45686986e27033, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_FUNCTION_matplotlib$tri$triplot$$$function_1_triplot(  );



        UPDATE_STRING_DICT1( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain_triplot, tmp_assign_source_6 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_matplotlib$tri$triplot, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_matplotlib$tri$triplot );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
