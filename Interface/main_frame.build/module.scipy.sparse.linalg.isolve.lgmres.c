/* Generated code for Python module 'scipy.sparse.linalg.isolve.lgmres'
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

/* The "_module_scipy$sparse$linalg$isolve$lgmres" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$sparse$linalg$isolve$lgmres;
PyDictObject *moduledict_scipy$sparse$linalg$isolve$lgmres;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain_xrange_tuple;
extern PyObject *const_float_1_5;
extern PyObject *const_str_plain_isfinite;
extern PyObject *const_str_plain_zip;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_division;
static PyObject *const_tuple_ea6fcd1d40a8fb8e302dc424ec1ca351_tuple;
extern PyObject *const_str_plain_atol;
extern PyObject *const_str_plain__gcrotmk;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_prepend_outer_v;
extern PyObject *const_float_0_25;
extern PyObject *const_str_plain_category;
extern PyObject *const_str_plain_astype;
static PyObject *const_str_digest_3581b25711d700e3b4947e3e7fe5fd02;
extern PyObject *const_str_plain_utils;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_int_pos_30;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_float_1eminus_16;
extern PyObject *const_tuple_str_plain_LinAlgError_tuple;
extern PyObject *const_str_plain_warnings;
static PyObject *const_tuple_str_plain__fgmres_tuple;
extern PyObject *const_str_digest_c88389693d9d476899c1c6e170568469;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_digest_2dd0f9dbf76d05bb371f917d7b80aebe;
extern PyObject *const_str_plain_min;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_DeprecationWarning;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_outer_v;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
extern PyObject *const_str_plain_append;
static PyObject *const_tuple_str_digest_3581b25711d700e3b4947e3e7fe5fd02_tuple;
extern PyObject *const_str_plain_axpy;
extern PyObject *const_str_plain_scal;
extern PyObject *const_str_plain_matvec;
extern PyObject *const_str_plain_stacklevel;
extern PyObject *const_str_plain_xrange;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain_lpsolve;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_LinAlgError;
extern PyObject *const_float_1eminus_05;
extern PyObject *const_int_0;
static PyObject *const_str_digest_6e2a85a80c4598030c4e17cf71f14755;
extern PyObject *const_int_pos_1000;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_shape;
static PyObject *const_list_str_plain_lgmres_list;
extern PyObject *const_list_str_plain_axpy_str_plain_dot_str_plain_scal_str_plain_nrm2_list;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_make_system;
static PyObject *const_tuple_str_plain_get_blas_funcs_str_plain_get_lapack_funcs_tuple;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_dot;
static PyObject *const_str_digest_04fb1e1ec206711de89547f74194c7e0;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_get_lapack_funcs;
extern PyObject *const_str_plain_lgmres;
extern PyObject *const_str_plain_iscomplexobj;
static PyObject *const_tuple_1bc75cc061743bf959b18462471f9c9e_tuple;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain__fgmres;
static PyObject *const_str_digest_cbd4d30ce176b6407885ea4ad16fac93;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_get_blas_funcs;
static PyObject *const_str_digest_957b156af3487313ed61826fa2188ee1;
static PyObject *const_str_digest_0c995df8066d704c46754a07d57e5e5d;
extern PyObject *const_str_plain_nrm2;
extern PyObject *const_tuple_str_plain_make_system_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_ea6fcd1d40a8fb8e302dc424ec1ca351_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5495805 ], 296 );
    const_str_digest_3581b25711d700e3b4947e3e7fe5fd02 = UNSTREAM_STRING_ASCII( &constant_bin[ 5496101 ], 153, 0 );
    const_tuple_str_plain__fgmres_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__fgmres_tuple, 0, const_str_plain__fgmres ); Py_INCREF( const_str_plain__fgmres );
    const_tuple_str_digest_3581b25711d700e3b4947e3e7fe5fd02_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_3581b25711d700e3b4947e3e7fe5fd02_tuple, 0, const_str_digest_3581b25711d700e3b4947e3e7fe5fd02 ); Py_INCREF( const_str_digest_3581b25711d700e3b4947e3e7fe5fd02 );
    const_str_plain_lpsolve = UNSTREAM_STRING_ASCII( &constant_bin[ 5483819 ], 7, 1 );
    const_str_digest_6e2a85a80c4598030c4e17cf71f14755 = UNSTREAM_STRING_ASCII( &constant_bin[ 5496254 ], 36, 0 );
    const_list_str_plain_lgmres_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_lgmres_list, 0, const_str_plain_lgmres ); Py_INCREF( const_str_plain_lgmres );
    const_tuple_str_plain_get_blas_funcs_str_plain_get_lapack_funcs_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_blas_funcs_str_plain_get_lapack_funcs_tuple, 0, const_str_plain_get_blas_funcs ); Py_INCREF( const_str_plain_get_blas_funcs );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_blas_funcs_str_plain_get_lapack_funcs_tuple, 1, const_str_plain_get_lapack_funcs ); Py_INCREF( const_str_plain_get_lapack_funcs );
    const_str_digest_04fb1e1ec206711de89547f74194c7e0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5496290 ], 33, 0 );
    const_tuple_1bc75cc061743bf959b18462471f9c9e_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_1bc75cc061743bf959b18462471f9c9e_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_1bc75cc061743bf959b18462471f9c9e_tuple, 1, const_float_1eminus_05 ); Py_INCREF( const_float_1eminus_05 );
    PyTuple_SET_ITEM( const_tuple_1bc75cc061743bf959b18462471f9c9e_tuple, 2, const_int_pos_1000 ); Py_INCREF( const_int_pos_1000 );
    PyTuple_SET_ITEM( const_tuple_1bc75cc061743bf959b18462471f9c9e_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_1bc75cc061743bf959b18462471f9c9e_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_1bc75cc061743bf959b18462471f9c9e_tuple, 5, const_int_pos_30 ); Py_INCREF( const_int_pos_30 );
    PyTuple_SET_ITEM( const_tuple_1bc75cc061743bf959b18462471f9c9e_tuple, 6, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    PyTuple_SET_ITEM( const_tuple_1bc75cc061743bf959b18462471f9c9e_tuple, 7, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_1bc75cc061743bf959b18462471f9c9e_tuple, 8, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_1bc75cc061743bf959b18462471f9c9e_tuple, 9, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_1bc75cc061743bf959b18462471f9c9e_tuple, 10, Py_None ); Py_INCREF( Py_None );
    const_str_digest_cbd4d30ce176b6407885ea4ad16fac93 = UNSTREAM_STRING_ASCII( &constant_bin[ 5496323 ], 4737, 0 );
    const_str_digest_957b156af3487313ed61826fa2188ee1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5501060 ], 42, 0 );
    const_str_digest_0c995df8066d704c46754a07d57e5e5d = UNSTREAM_STRING_ASCII( &constant_bin[ 5501102 ], 60, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$sparse$linalg$isolve$lgmres( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_95634da92233b1727dc82c1a31d888fd;
static PyCodeObject *codeobj_9cbfec6434f0609595327515806fc99b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_6e2a85a80c4598030c4e17cf71f14755 );
    codeobj_95634da92233b1727dc82c1a31d888fd = MAKE_CODEOBJ( module_filename_obj, const_str_digest_957b156af3487313ed61826fa2188ee1, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_9cbfec6434f0609595327515806fc99b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_lgmres, 18, const_tuple_ea6fcd1d40a8fb8e302dc424ec1ca351_tuple, 13, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$lgmres$$$function_1_lgmres( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$sparse$linalg$isolve$lgmres$$$function_1_lgmres( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *par_x0 = python_pars[ 2 ];
    PyObject *par_tol = python_pars[ 3 ];
    PyObject *par_maxiter = python_pars[ 4 ];
    PyObject *par_M = python_pars[ 5 ];
    PyObject *par_callback = python_pars[ 6 ];
    PyObject *par_inner_m = python_pars[ 7 ];
    PyObject *par_outer_k = python_pars[ 8 ];
    PyObject *par_outer_v = python_pars[ 9 ];
    PyObject *par_store_outer_Av = python_pars[ 10 ];
    PyObject *par_prepend_outer_v = python_pars[ 11 ];
    PyObject *par_atol = python_pars[ 12 ];
    PyObject *var_x = NULL;
    PyObject *var_postprocess = NULL;
    PyObject *var_matvec = NULL;
    PyObject *var_psolve = NULL;
    PyObject *var_axpy = NULL;
    PyObject *var_dot = NULL;
    PyObject *var_scal = NULL;
    PyObject *var_nrm2 = NULL;
    PyObject *var_b_norm = NULL;
    PyObject *var_ptol_max_factor = NULL;
    PyObject *var_k_outer = NULL;
    PyObject *var_r_outer = NULL;
    PyObject *var_r_norm = NULL;
    PyObject *var_v0 = NULL;
    PyObject *var_inner_res_0 = NULL;
    PyObject *var_rnorm = NULL;
    PyObject *var_ptol = NULL;
    PyObject *var_Q = NULL;
    PyObject *var_R = NULL;
    PyObject *var_B = NULL;
    PyObject *var_vs = NULL;
    PyObject *var_zs = NULL;
    PyObject *var_y = NULL;
    PyObject *var_pres = NULL;
    PyObject *var_dx = NULL;
    PyObject *var_w = NULL;
    PyObject *var_yc = NULL;
    PyObject *var_nx = NULL;
    PyObject *var_q = NULL;
    PyObject *var_ax = NULL;
    PyObject *var_v = NULL;
    PyObject *var_qc = NULL;
    nuitka_bool tmp_for_loop_1__break_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__element_4 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__element_3 = NULL;
    PyObject *tmp_tuple_unpack_4__element_4 = NULL;
    PyObject *tmp_tuple_unpack_4__element_5 = NULL;
    PyObject *tmp_tuple_unpack_4__element_6 = NULL;
    PyObject *tmp_tuple_unpack_4__element_7 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9cbfec6434f0609595327515806fc99b;
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
    int tmp_res;
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
    bool tmp_result;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    static struct Nuitka_FrameObject *cache_frame_9cbfec6434f0609595327515806fc99b = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9cbfec6434f0609595327515806fc99b, codeobj_9cbfec6434f0609595327515806fc99b, module_scipy$sparse$linalg$isolve$lgmres, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9cbfec6434f0609595327515806fc99b = cache_frame_9cbfec6434f0609595327515806fc99b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9cbfec6434f0609595327515806fc99b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9cbfec6434f0609595327515806fc99b ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_make_system );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_make_system );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "make_system" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 128;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        CHECK_OBJECT( par_M );
        tmp_args_element_name_2 = par_M;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_3 = par_x0;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_4 = par_b;
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 5 );
        if ( tmp_assign_source_2 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 128;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 5 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 128;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 5 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 128;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_4, 3, 5 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 128;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_4 == NULL );
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_5, 4, 5 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 128;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_5 == NULL );
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_6;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 128;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 128;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

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
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_7;
            Py_INCREF( par_A );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_M;
            assert( old != NULL );
            par_M = tmp_assign_source_8;
            Py_INCREF( par_M );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        assert( var_x == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_x = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = par_b;
            assert( old != NULL );
            par_b = tmp_assign_source_10;
            Py_INCREF( par_b );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_5 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_5;
        assert( var_postprocess == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_postprocess = tmp_assign_source_11;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_5 = par_b;
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_called_instance_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_isfinite, call_args );
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 130;
        tmp_operand_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_all );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
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
            tmp_make_exception_arg_1 = const_str_digest_2dd0f9dbf76d05bb371f917d7b80aebe;
            frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 131;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 131;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_atol );
        tmp_compexpr_left_1 = par_atol;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 134;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 134;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = const_tuple_str_digest_3581b25711d700e3b4947e3e7fe5fd02_tuple;
            tmp_dict_key_1 = const_str_plain_category;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 137;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_1 = tmp_mvar_value_4;
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_stacklevel;
            tmp_dict_value_2 = const_int_pos_2;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 134;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 134;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( par_tol );
            tmp_assign_source_12 = par_tol;
            {
                PyObject *old = par_atol;
                assert( old != NULL );
                par_atol = tmp_assign_source_12;
                Py_INCREF( par_atol );
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_A );
        tmp_source_name_2 = par_A;
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_matvec );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_matvec == NULL );
        var_matvec = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_M );
        tmp_source_name_3 = par_M;
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_matvec );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_psolve == NULL );
        var_psolve = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_outer_v );
        tmp_compexpr_left_2 = par_outer_v;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            tmp_assign_source_15 = PyList_New( 0 );
            {
                PyObject *old = par_outer_v;
                assert( old != NULL );
                par_outer_v = tmp_assign_source_15;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = const_tuple_none_none_none_tuple;
        tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_2 );
        assert( !(tmp_assign_source_16 == NULL) );
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_16;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_6, 0, 3 );
        if ( tmp_assign_source_17 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 146;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_7, 1, 3 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 146;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_8, 2, 3 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 146;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_3 == NULL );
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_19;
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
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_20 = tmp_tuple_unpack_2__element_1;
        assert( var_axpy == NULL );
        Py_INCREF( tmp_assign_source_20 );
        var_axpy = tmp_assign_source_20;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_21 = tmp_tuple_unpack_2__element_2;
        assert( var_dot == NULL );
        Py_INCREF( tmp_assign_source_21 );
        var_dot = tmp_assign_source_21;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
        tmp_assign_source_22 = tmp_tuple_unpack_2__element_3;
        assert( var_scal == NULL );
        Py_INCREF( tmp_assign_source_22 );
        var_scal = tmp_assign_source_22;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_get_blas_funcs );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_blas_funcs );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_blas_funcs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_5;
        tmp_args_element_name_6 = const_str_plain_nrm2;
        CHECK_OBJECT( par_b );
        tmp_list_element_1 = par_b;
        tmp_args_element_name_7 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_7, 0, tmp_list_element_1 );
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_nrm2 == NULL );
        var_nrm2 = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( var_nrm2 );
        tmp_called_name_4 = var_nrm2;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_8 = par_b;
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_b_norm == NULL );
        var_b_norm = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = const_float_1_0;
        assert( var_ptol_max_factor == NULL );
        Py_INCREF( tmp_assign_source_25 );
        var_ptol_max_factor = tmp_assign_source_25;
    }
    {
        nuitka_bool tmp_assign_source_26;
        tmp_assign_source_26 = NUITKA_BOOL_FALSE;
        tmp_for_loop_1__break_indicator = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_xrange );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "xrange" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_name_5 = tmp_mvar_value_6;
        CHECK_OBJECT( par_maxiter );
        tmp_args_element_name_9 = par_maxiter;
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_27;
    }
    // Tried code:
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_value_name_1;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_value_name_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_28 = ITERATOR_NEXT( tmp_value_name_1 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 152;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_28;
            Py_XDECREF( old );
        }

    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = exception_keeper_type_5;
        tmp_compexpr_right_3 = PyExc_StopIteration;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_5 );
            Py_XDECREF( exception_keeper_value_5 );
            Py_XDECREF( exception_keeper_tb_5 );

            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
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
            nuitka_bool tmp_assign_source_29;
            tmp_assign_source_29 = NUITKA_BOOL_TRUE;
            tmp_for_loop_1__break_indicator = tmp_assign_source_29;
        }
        Py_DECREF( exception_keeper_type_5 );
        Py_XDECREF( exception_keeper_value_5 );
        Py_XDECREF( exception_keeper_tb_5 );
        goto loop_end_1;
        goto branch_end_4;
        branch_no_4:;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_7;
        branch_end_4:;
    }
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_30 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_k_outer;
            var_k_outer = tmp_assign_source_30;
            Py_INCREF( var_k_outer );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_matvec );
        tmp_called_name_6 = var_matvec;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_10 = var_x;
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( par_b );
        tmp_right_name_1 = par_b;
        tmp_assign_source_31 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_r_outer;
            var_r_outer = tmp_assign_source_31;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_callback );
        tmp_compexpr_left_4 = par_callback;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_5 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_7;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_11;
            CHECK_OBJECT( par_callback );
            tmp_called_name_7 = par_callback;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_11 = var_x;
            frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 157;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        if ( var_axpy == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "axpy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_compexpr_left_5 = var_axpy;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_6 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_7;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_12;
            int tmp_truth_name_1;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_13;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 161;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }

            tmp_called_instance_3 = tmp_mvar_value_7;
            CHECK_OBJECT( var_r_outer );
            tmp_args_element_name_12 = var_r_outer;
            frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 161;
            {
                PyObject *call_args[] = { tmp_args_element_name_12 };
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_iscomplexobj, call_args );
            }

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_3 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_3 );

                exception_lineno = 161;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_3 );
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
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 161;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }

            tmp_called_instance_4 = tmp_mvar_value_8;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_13 = var_x;
            frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 161;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_operand_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_iscomplexobj, call_args );
            }

            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_7 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_7 = tmp_and_left_value_1;
            and_end_1:;
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
                PyObject *tmp_assign_source_32;
                PyObject *tmp_called_name_8;
                PyObject *tmp_source_name_4;
                PyObject *tmp_args_element_name_14;
                PyObject *tmp_source_name_5;
                CHECK_OBJECT( var_x );
                tmp_source_name_4 = var_x;
                tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_astype );
                if ( tmp_called_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 162;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( var_r_outer );
                tmp_source_name_5 = var_r_outer;
                tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
                if ( tmp_args_element_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_8 );

                    exception_lineno = 162;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 162;
                {
                    PyObject *call_args[] = { tmp_args_element_name_14 };
                    tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                }

                Py_DECREF( tmp_called_name_8 );
                Py_DECREF( tmp_args_element_name_14 );
                if ( tmp_assign_source_32 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 162;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                {
                    PyObject *old = var_x;
                    assert( old != NULL );
                    var_x = tmp_assign_source_32;
                    Py_DECREF( old );
                }

            }
            branch_no_7:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_tuple_element_1;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_get_blas_funcs );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_blas_funcs );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_blas_funcs" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 163;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }

            tmp_called_name_9 = tmp_mvar_value_9;
            tmp_args_element_name_15 = LIST_COPY( const_list_str_plain_axpy_str_plain_dot_str_plain_scal_str_plain_nrm2_list );
            if ( var_x == NULL )
            {
                Py_DECREF( tmp_args_element_name_15 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 164;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }

            tmp_tuple_element_1 = var_x;
            tmp_args_element_name_16 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_16, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_r_outer );
            tmp_tuple_element_1 = var_r_outer;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_16, 1, tmp_tuple_element_1 );
            frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 163;
            {
                PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_args_element_name_15 );
            Py_DECREF( tmp_args_element_name_16 );
            if ( tmp_iter_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            tmp_assign_source_33 = MAKE_ITERATOR( tmp_iter_arg_4 );
            Py_DECREF( tmp_iter_arg_4 );
            if ( tmp_assign_source_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__source_iter;
                tmp_tuple_unpack_3__source_iter = tmp_assign_source_33;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_unpack_9;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_34 = UNPACK_NEXT( tmp_unpack_9, 0, 4 );
            if ( tmp_assign_source_34 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 163;
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__element_1;
                tmp_tuple_unpack_3__element_1 = tmp_assign_source_34;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_unpack_10;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_10 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_35 = UNPACK_NEXT( tmp_unpack_10, 1, 4 );
            if ( tmp_assign_source_35 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 163;
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__element_2;
                tmp_tuple_unpack_3__element_2 = tmp_assign_source_35;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_unpack_11;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_11 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_36 = UNPACK_NEXT( tmp_unpack_11, 2, 4 );
            if ( tmp_assign_source_36 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 163;
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__element_3;
                tmp_tuple_unpack_3__element_3 = tmp_assign_source_36;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_unpack_12;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_12 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_37 = UNPACK_NEXT( tmp_unpack_12, 3, 4 );
            if ( tmp_assign_source_37 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 163;
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__element_4;
                tmp_tuple_unpack_3__element_4 = tmp_assign_source_37;
                Py_XDECREF( old );
            }

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

                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 163;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 163;
                goto try_except_handler_10;
            }
        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_9;
        // End of try:
        try_end_6:;
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

        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_3__element_3 );
        tmp_tuple_unpack_3__element_3 = NULL;

        Py_XDECREF( tmp_tuple_unpack_3__element_4 );
        tmp_tuple_unpack_3__element_4 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_7;
        // End of try:
        try_end_7:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        {
            PyObject *tmp_assign_source_38;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_38 = tmp_tuple_unpack_3__element_1;
            {
                PyObject *old = var_axpy;
                var_axpy = tmp_assign_source_38;
                Py_INCREF( var_axpy );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_39;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_39 = tmp_tuple_unpack_3__element_2;
            {
                PyObject *old = var_dot;
                var_dot = tmp_assign_source_39;
                Py_INCREF( var_dot );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_assign_source_40;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_3 );
            tmp_assign_source_40 = tmp_tuple_unpack_3__element_3;
            {
                PyObject *old = var_scal;
                var_scal = tmp_assign_source_40;
                Py_INCREF( var_scal );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_3 );
        tmp_tuple_unpack_3__element_3 = NULL;

        {
            PyObject *tmp_assign_source_41;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_4 );
            tmp_assign_source_41 = tmp_tuple_unpack_3__element_4;
            {
                PyObject *old = var_nrm2;
                var_nrm2 = tmp_assign_source_41;
                Py_INCREF( var_nrm2 );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_4 );
        tmp_tuple_unpack_3__element_4 = NULL;

        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_17;
        if ( var_nrm2 == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nrm2" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 167;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_name_10 = var_nrm2;
        CHECK_OBJECT( var_r_outer );
        tmp_args_element_name_17 = var_r_outer;
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 167;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_r_norm;
            var_r_norm = tmp_assign_source_42;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_called_name_11;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_r_norm );
        tmp_compexpr_left_6 = var_r_norm;
        tmp_called_name_11 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_11 != NULL );
        CHECK_OBJECT( par_atol );
        tmp_args_element_name_18 = par_atol;
        CHECK_OBJECT( par_tol );
        tmp_left_name_2 = par_tol;
        CHECK_OBJECT( var_b_norm );
        tmp_right_name_2 = var_b_norm;
        tmp_args_element_name_19 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_args_element_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
            tmp_compexpr_right_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
        }

        Py_DECREF( tmp_args_element_name_19 );
        if ( tmp_compexpr_right_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
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
        goto loop_end_1;
        branch_no_8:;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_name_12;
        PyObject *tmp_args_element_name_20;
        CHECK_OBJECT( var_psolve );
        tmp_called_name_12 = var_psolve;
        CHECK_OBJECT( var_r_outer );
        tmp_args_element_name_20 = var_r_outer;
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_operand_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_43 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_v0;
            var_v0 = tmp_assign_source_43;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_21;
        if ( var_nrm2 == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nrm2" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_name_13 = var_nrm2;
        CHECK_OBJECT( var_v0 );
        tmp_args_element_name_21 = var_v0;
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = { tmp_args_element_name_21 };
            tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_inner_res_0;
            var_inner_res_0 = tmp_assign_source_44;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( var_inner_res_0 );
        tmp_compexpr_left_7 = var_inner_res_0;
        tmp_compexpr_right_7 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
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
            PyObject *tmp_assign_source_45;
            PyObject *tmp_called_name_14;
            PyObject *tmp_args_element_name_22;
            if ( var_nrm2 == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nrm2" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 176;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }

            tmp_called_name_14 = var_nrm2;
            CHECK_OBJECT( var_r_outer );
            tmp_args_element_name_22 = var_r_outer;
            frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 176;
            {
                PyObject *call_args[] = { tmp_args_element_name_22 };
                tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
            }

            if ( tmp_assign_source_45 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = var_rnorm;
                var_rnorm = tmp_assign_source_45;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            tmp_left_name_3 = const_str_digest_0c995df8066d704c46754a07d57e5e5d;
            CHECK_OBJECT( var_rnorm );
            tmp_right_name_3 = var_rnorm;
            tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_make_exception_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 177;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_2 );
            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 177;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        branch_no_9:;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_name_15;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_args_element_name_24;
        if ( var_scal == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scal" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 180;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_name_15 = var_scal;
        tmp_left_name_4 = const_float_1_0;
        CHECK_OBJECT( var_inner_res_0 );
        tmp_right_name_4 = var_inner_res_0;
        tmp_args_element_name_23 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_args_element_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( var_v0 );
        tmp_args_element_name_24 = var_v0;
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24 };
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
        }

        Py_DECREF( tmp_args_element_name_23 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_v0;
            assert( old != NULL );
            var_v0 = tmp_assign_source_46;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_name_16;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_left_name_5;
        PyObject *tmp_called_name_17;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        tmp_called_name_16 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_16 != NULL );
        CHECK_OBJECT( var_ptol_max_factor );
        tmp_args_element_name_25 = var_ptol_max_factor;
        tmp_called_name_17 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_17 != NULL );
        CHECK_OBJECT( par_atol );
        tmp_args_element_name_27 = par_atol;
        CHECK_OBJECT( par_tol );
        tmp_left_name_6 = par_tol;
        CHECK_OBJECT( var_b_norm );
        tmp_right_name_5 = var_b_norm;
        tmp_args_element_name_28 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_5 );
        if ( tmp_args_element_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_27, tmp_args_element_name_28 };
            tmp_left_name_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
        }

        Py_DECREF( tmp_args_element_name_28 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( var_r_norm );
        tmp_right_name_6 = var_r_norm;
        tmp_args_element_name_26 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_args_element_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26 };
            tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, call_args );
        }

        Py_DECREF( tmp_args_element_name_26 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_ptol;
            var_ptol = tmp_assign_source_47;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_name_18;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain__fgmres );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fgmres );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fgmres" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_called_name_18 = tmp_mvar_value_10;
        CHECK_OBJECT( var_matvec );
        tmp_tuple_element_2 = var_matvec;
        tmp_args_name_2 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_v0 );
        tmp_tuple_element_2 = var_v0;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( par_inner_m );
        tmp_tuple_element_2 = par_inner_m;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
        tmp_dict_key_3 = const_str_plain_lpsolve;
        CHECK_OBJECT( var_psolve );
        tmp_dict_value_3 = var_psolve;
        tmp_kw_name_2 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_atol;
        CHECK_OBJECT( var_ptol );
        tmp_dict_value_4 = var_ptol;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_outer_v;
        CHECK_OBJECT( par_outer_v );
        tmp_dict_value_5 = par_outer_v;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_prepend_outer_v;
        CHECK_OBJECT( par_prepend_outer_v );
        tmp_dict_value_6 = par_prepend_outer_v;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 185;
        tmp_iter_arg_5 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_iter_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_48 = MAKE_ITERATOR( tmp_iter_arg_5 );
        Py_DECREF( tmp_iter_arg_5 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_48;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_13 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_49 = UNPACK_NEXT( tmp_unpack_13, 0, 7 );
        if ( tmp_assign_source_49 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 185;
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_49;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_14 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_50 = UNPACK_NEXT( tmp_unpack_14, 1, 7 );
        if ( tmp_assign_source_50 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 185;
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_50;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_15 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_51 = UNPACK_NEXT( tmp_unpack_15, 2, 7 );
        if ( tmp_assign_source_51 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 185;
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_3;
            tmp_tuple_unpack_4__element_3 = tmp_assign_source_51;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_16 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_52 = UNPACK_NEXT( tmp_unpack_16, 3, 7 );
        if ( tmp_assign_source_52 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 185;
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_4;
            tmp_tuple_unpack_4__element_4 = tmp_assign_source_52;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_17 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_53 = UNPACK_NEXT( tmp_unpack_17, 4, 7 );
        if ( tmp_assign_source_53 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 185;
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_5;
            tmp_tuple_unpack_4__element_5 = tmp_assign_source_53;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_18 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_54 = UNPACK_NEXT( tmp_unpack_18, 5, 7 );
        if ( tmp_assign_source_54 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 185;
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_6;
            tmp_tuple_unpack_4__element_6 = tmp_assign_source_54;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_unpack_19;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_19 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_55 = UNPACK_NEXT( tmp_unpack_19, 6, 7 );
        if ( tmp_assign_source_55 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 185;
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_7;
            tmp_tuple_unpack_4__element_7 = tmp_assign_source_55;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 185;
                    goto try_except_handler_13;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 7)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 185;
            goto try_except_handler_13;
        }
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_12;
    // End of try:
    try_end_8:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_3 );
    tmp_tuple_unpack_4__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_4 );
    tmp_tuple_unpack_4__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_5 );
    tmp_tuple_unpack_4__element_5 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_6 );
    tmp_tuple_unpack_4__element_6 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_7 );
    tmp_tuple_unpack_4__element_7 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_11;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
        tmp_assign_source_56 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_Q;
            var_Q = tmp_assign_source_56;
            Py_INCREF( var_Q );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
        tmp_assign_source_57 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_R;
            var_R = tmp_assign_source_57;
            Py_INCREF( var_R );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_3 );
        tmp_assign_source_58 = tmp_tuple_unpack_4__element_3;
        {
            PyObject *old = var_B;
            var_B = tmp_assign_source_58;
            Py_INCREF( var_B );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_3 );
    tmp_tuple_unpack_4__element_3 = NULL;

    {
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_4 );
        tmp_assign_source_59 = tmp_tuple_unpack_4__element_4;
        {
            PyObject *old = var_vs;
            var_vs = tmp_assign_source_59;
            Py_INCREF( var_vs );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_4 );
    tmp_tuple_unpack_4__element_4 = NULL;

    {
        PyObject *tmp_assign_source_60;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_5 );
        tmp_assign_source_60 = tmp_tuple_unpack_4__element_5;
        {
            PyObject *old = var_zs;
            var_zs = tmp_assign_source_60;
            Py_INCREF( var_zs );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_5 );
    tmp_tuple_unpack_4__element_5 = NULL;

    {
        PyObject *tmp_assign_source_61;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_6 );
        tmp_assign_source_61 = tmp_tuple_unpack_4__element_6;
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_61;
            Py_INCREF( var_y );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_6 );
    tmp_tuple_unpack_4__element_6 = NULL;

    {
        PyObject *tmp_assign_source_62;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_7 );
        tmp_assign_source_62 = tmp_tuple_unpack_4__element_7;
        {
            PyObject *old = var_pres;
            var_pres = tmp_assign_source_62;
            Py_INCREF( var_pres );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_7 );
    tmp_tuple_unpack_4__element_7 = NULL;

    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_y );
        tmp_left_name_7 = var_y;
        CHECK_OBJECT( var_inner_res_0 );
        tmp_right_name_7 = var_inner_res_0;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_63 = tmp_left_name_7;
        var_y = tmp_assign_source_63;

    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_29;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_called_instance_6 = tmp_mvar_value_11;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_29 = var_y;
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = { tmp_args_element_name_29 };
            tmp_called_instance_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_isfinite, call_args );
        }

        if ( tmp_called_instance_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 193;
        tmp_operand_name_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_all );
        Py_DECREF( tmp_called_instance_5 );
        if ( tmp_operand_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
        Py_DECREF( tmp_operand_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
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
        {
            PyObject *tmp_raise_type_3;
            PyObject *tmp_called_name_19;
            PyObject *tmp_mvar_value_12;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_LinAlgError );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinAlgError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 196;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }

            tmp_called_name_19 = tmp_mvar_value_12;
            frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 196;
            tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_19 );
            if ( tmp_raise_type_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 196;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            exception_type = tmp_raise_type_3;
            exception_lineno = 196;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        branch_no_10:;
    }
    goto try_end_10;
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
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_10 == NULL )
    {
        exception_keeper_tb_10 = MAKE_TRACEBACK( frame_9cbfec6434f0609595327515806fc99b, exception_keeper_lineno_10 );
    }
    else if ( exception_keeper_lineno_10 != 0 )
    {
        exception_keeper_tb_10 = ADD_TRACEBACK( exception_keeper_tb_10, frame_9cbfec6434f0609595327515806fc99b, exception_keeper_lineno_10 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10 );
    PyException_SetTraceback( exception_keeper_value_10, (PyObject *)exception_keeper_tb_10 );
    PUBLISH_EXCEPTION( &exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_mvar_value_13;
        tmp_compexpr_left_8 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_LinAlgError );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinAlgError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_compexpr_right_8 = tmp_mvar_value_13;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
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
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_called_name_20;
            PyObject *tmp_args_element_name_30;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            CHECK_OBJECT( var_postprocess );
            tmp_called_name_20 = var_postprocess;
            if ( var_x == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 200;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }

            tmp_args_element_name_30 = var_x;
            frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 200;
            {
                PyObject *call_args[] = { tmp_args_element_name_30 };
                tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
            }

            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            tmp_return_value = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( var_k_outer );
            tmp_left_name_8 = var_k_outer;
            tmp_right_name_8 = const_int_pos_1;
            tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 200;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
            goto try_return_handler_14;
        }
        goto branch_end_11;
        branch_no_11:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 184;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_9cbfec6434f0609595327515806fc99b->m_frame) frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_14;
        branch_end_11:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$lgmres$$$function_1_lgmres );
    return NULL;
    // Return handler code:
    try_return_handler_14:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_return_handler_7;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_7;
    // End of try:
    // End of try:
    try_end_10:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        CHECK_OBJECT( var_pres );
        tmp_compexpr_left_9 = var_pres;
        CHECK_OBJECT( var_ptol );
        tmp_compexpr_right_9 = var_ptol;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
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
            PyObject *tmp_assign_source_64;
            PyObject *tmp_called_name_21;
            PyObject *tmp_args_element_name_31;
            PyObject *tmp_args_element_name_32;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            tmp_called_name_21 = LOOKUP_BUILTIN( const_str_plain_min );
            assert( tmp_called_name_21 != NULL );
            tmp_args_element_name_31 = const_float_1_0;
            tmp_left_name_9 = const_float_1_5;
            CHECK_OBJECT( var_ptol_max_factor );
            tmp_right_name_9 = var_ptol_max_factor;
            tmp_args_element_name_32 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
            if ( tmp_args_element_name_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 204;
            {
                PyObject *call_args[] = { tmp_args_element_name_31, tmp_args_element_name_32 };
                tmp_assign_source_64 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_21, call_args );
            }

            Py_DECREF( tmp_args_element_name_32 );
            if ( tmp_assign_source_64 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = var_ptol_max_factor;
                assert( old != NULL );
                var_ptol_max_factor = tmp_assign_source_64;
                Py_DECREF( old );
            }

        }
        goto branch_end_12;
        branch_no_12:;
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_called_name_22;
            PyObject *tmp_args_element_name_33;
            PyObject *tmp_args_element_name_34;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            tmp_called_name_22 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_22 != NULL );
            tmp_args_element_name_33 = const_float_1eminus_16;
            tmp_left_name_10 = const_float_0_25;
            CHECK_OBJECT( var_ptol_max_factor );
            tmp_right_name_10 = var_ptol_max_factor;
            tmp_args_element_name_34 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
            if ( tmp_args_element_name_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 206;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 206;
            {
                PyObject *call_args[] = { tmp_args_element_name_33, tmp_args_element_name_34 };
                tmp_assign_source_65 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_22, call_args );
            }

            Py_DECREF( tmp_args_element_name_34 );
            if ( tmp_assign_source_65 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 206;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = var_ptol_max_factor;
                assert( old != NULL );
                var_ptol_max_factor = tmp_assign_source_65;
                Py_DECREF( old );
            }

        }
        branch_end_12:;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_left_name_11;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_11;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_zs );
        tmp_subscribed_name_1 = var_zs;
        tmp_subscript_name_1 = const_int_0;
        tmp_left_name_11 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( var_y );
        tmp_subscribed_name_2 = var_y;
        tmp_subscript_name_2 = const_int_0;
        tmp_right_name_11 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 209;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_66 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
        Py_DECREF( tmp_left_name_11 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_assign_source_66 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_dx;
            var_dx = tmp_assign_source_66;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_name_23;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        tmp_called_name_23 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT( var_zs );
        tmp_subscribed_name_3 = var_zs;
        tmp_subscript_name_3 = const_slice_int_pos_1_none_none;
        tmp_args_element_name_35 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_args_element_name_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( var_y );
        tmp_subscribed_name_4 = var_y;
        tmp_subscript_name_4 = const_slice_int_pos_1_none_none;
        tmp_args_element_name_36 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_args_element_name_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_35 );

            exception_lineno = 210;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = { tmp_args_element_name_35, tmp_args_element_name_36 };
            tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_23, call_args );
        }

        Py_DECREF( tmp_args_element_name_35 );
        Py_DECREF( tmp_args_element_name_36 );
        if ( tmp_iter_arg_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_67 = MAKE_ITERATOR( tmp_iter_arg_6 );
        Py_DECREF( tmp_iter_arg_6 );
        if ( tmp_assign_source_67 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_67;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_68;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_1 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_68 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_68 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 210;
                goto try_except_handler_15;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_68;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_iter_arg_7;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_iter_arg_7 = tmp_for_loop_2__iter_value;
        tmp_assign_source_69 = MAKE_ITERATOR( tmp_iter_arg_7 );
        if ( tmp_assign_source_69 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__source_iter;
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_69;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_unpack_20;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_20 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_70 = UNPACK_NEXT( tmp_unpack_20, 0, 2 );
        if ( tmp_assign_source_70 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 210;
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_1;
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_70;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_unpack_21;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_21 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_71 = UNPACK_NEXT( tmp_unpack_21, 1, 2 );
        if ( tmp_assign_source_71 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 210;
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_2;
            tmp_tuple_unpack_5__element_2 = tmp_assign_source_71;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_iterator_name_4 = tmp_tuple_unpack_5__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_4 ); assert( HAS_ITERNEXT( tmp_iterator_name_4 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_4 )->tp_iternext)( tmp_iterator_name_4 );

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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 210;
                    goto try_except_handler_17;
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

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 210;
            goto try_except_handler_17;
        }
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
    Py_DECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_16;
    // End of try:
    try_end_11:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_15;
    // End of try:
    try_end_12:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
    Py_DECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    {
        PyObject *tmp_assign_source_72;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
        tmp_assign_source_72 = tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = var_w;
            var_w = tmp_assign_source_72;
            Py_INCREF( var_w );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_73;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
        tmp_assign_source_73 = tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = var_yc;
            var_yc = tmp_assign_source_73;
            Py_INCREF( var_yc );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_name_24;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_args_element_name_39;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_args_element_name_40;
        if ( var_axpy == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "axpy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_called_name_24 = var_axpy;
        CHECK_OBJECT( var_w );
        tmp_args_element_name_37 = var_w;
        CHECK_OBJECT( var_dx );
        tmp_args_element_name_38 = var_dx;
        CHECK_OBJECT( var_dx );
        tmp_source_name_6 = var_dx;
        tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_subscript_name_5 = const_int_0;
        tmp_args_element_name_39 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
        Py_DECREF( tmp_subscribed_name_5 );
        if ( tmp_args_element_name_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT( var_yc );
        tmp_args_element_name_40 = var_yc;
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = { tmp_args_element_name_37, tmp_args_element_name_38, tmp_args_element_name_39, tmp_args_element_name_40 };
            tmp_assign_source_74 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_24, call_args );
        }

        Py_DECREF( tmp_args_element_name_39 );
        if ( tmp_assign_source_74 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = var_dx;
            assert( old != NULL );
            var_dx = tmp_assign_source_74;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_15;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
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
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_7;
    // End of try:
    try_end_13:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_name_25;
        PyObject *tmp_args_element_name_41;
        if ( var_nrm2 == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nrm2" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_name_25 = var_nrm2;
        CHECK_OBJECT( var_dx );
        tmp_args_element_name_41 = var_dx;
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = { tmp_args_element_name_41 };
            tmp_assign_source_75 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
        }

        if ( tmp_assign_source_75 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_nx;
            var_nx = tmp_assign_source_75;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        CHECK_OBJECT( var_nx );
        tmp_compexpr_left_10 = var_nx;
        tmp_compexpr_right_10 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
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
            nuitka_bool tmp_condition_result_14;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_store_outer_Av );
            tmp_truth_name_2 = CHECK_IF_TRUE( par_store_outer_Av );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 216;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            tmp_condition_result_14 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_76;
                PyObject *tmp_called_name_26;
                PyObject *tmp_source_name_7;
                PyObject *tmp_args_element_name_42;
                PyObject *tmp_called_instance_7;
                PyObject *tmp_args_element_name_43;
                CHECK_OBJECT( var_Q );
                tmp_source_name_7 = var_Q;
                tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_dot );
                if ( tmp_called_name_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 217;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( var_R );
                tmp_called_instance_7 = var_R;
                CHECK_OBJECT( var_y );
                tmp_args_element_name_43 = var_y;
                frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 217;
                {
                    PyObject *call_args[] = { tmp_args_element_name_43 };
                    tmp_args_element_name_42 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_dot, call_args );
                }

                if ( tmp_args_element_name_42 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_26 );

                    exception_lineno = 217;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 217;
                {
                    PyObject *call_args[] = { tmp_args_element_name_42 };
                    tmp_assign_source_76 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
                }

                Py_DECREF( tmp_called_name_26 );
                Py_DECREF( tmp_args_element_name_42 );
                if ( tmp_assign_source_76 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 217;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                {
                    PyObject *old = var_q;
                    var_q = tmp_assign_source_76;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_77;
                PyObject *tmp_left_name_12;
                PyObject *tmp_subscribed_name_6;
                PyObject *tmp_subscript_name_6;
                PyObject *tmp_right_name_12;
                PyObject *tmp_subscribed_name_7;
                PyObject *tmp_subscript_name_7;
                CHECK_OBJECT( var_vs );
                tmp_subscribed_name_6 = var_vs;
                tmp_subscript_name_6 = const_int_0;
                tmp_left_name_12 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
                if ( tmp_left_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 218;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( var_q );
                tmp_subscribed_name_7 = var_q;
                tmp_subscript_name_7 = const_int_0;
                tmp_right_name_12 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 0 );
                if ( tmp_right_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_12 );

                    exception_lineno = 218;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                tmp_assign_source_77 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
                Py_DECREF( tmp_left_name_12 );
                Py_DECREF( tmp_right_name_12 );
                if ( tmp_assign_source_77 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 218;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                {
                    PyObject *old = var_ax;
                    var_ax = tmp_assign_source_77;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_78;
                PyObject *tmp_iter_arg_8;
                PyObject *tmp_called_name_27;
                PyObject *tmp_args_element_name_44;
                PyObject *tmp_subscribed_name_8;
                PyObject *tmp_subscript_name_8;
                PyObject *tmp_args_element_name_45;
                PyObject *tmp_subscribed_name_9;
                PyObject *tmp_subscript_name_9;
                tmp_called_name_27 = (PyObject *)&PyZip_Type;
                CHECK_OBJECT( var_vs );
                tmp_subscribed_name_8 = var_vs;
                tmp_subscript_name_8 = const_slice_int_pos_1_none_none;
                tmp_args_element_name_44 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
                if ( tmp_args_element_name_44 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 219;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( var_q );
                tmp_subscribed_name_9 = var_q;
                tmp_subscript_name_9 = const_slice_int_pos_1_none_none;
                tmp_args_element_name_45 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
                if ( tmp_args_element_name_45 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_44 );

                    exception_lineno = 219;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 219;
                {
                    PyObject *call_args[] = { tmp_args_element_name_44, tmp_args_element_name_45 };
                    tmp_iter_arg_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_27, call_args );
                }

                Py_DECREF( tmp_args_element_name_44 );
                Py_DECREF( tmp_args_element_name_45 );
                if ( tmp_iter_arg_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 219;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                tmp_assign_source_78 = MAKE_ITERATOR( tmp_iter_arg_8 );
                Py_DECREF( tmp_iter_arg_8 );
                if ( tmp_assign_source_78 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 219;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                {
                    PyObject *old = tmp_for_loop_3__for_iterator;
                    tmp_for_loop_3__for_iterator = tmp_assign_source_78;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            loop_start_3:;
            {
                PyObject *tmp_next_source_2;
                PyObject *tmp_assign_source_79;
                CHECK_OBJECT( tmp_for_loop_3__for_iterator );
                tmp_next_source_2 = tmp_for_loop_3__for_iterator;
                tmp_assign_source_79 = ITERATOR_NEXT( tmp_next_source_2 );
                if ( tmp_assign_source_79 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_3;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 219;
                        goto try_except_handler_18;
                    }
                }

                {
                    PyObject *old = tmp_for_loop_3__iter_value;
                    tmp_for_loop_3__iter_value = tmp_assign_source_79;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_80;
                PyObject *tmp_iter_arg_9;
                CHECK_OBJECT( tmp_for_loop_3__iter_value );
                tmp_iter_arg_9 = tmp_for_loop_3__iter_value;
                tmp_assign_source_80 = MAKE_ITERATOR( tmp_iter_arg_9 );
                if ( tmp_assign_source_80 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 219;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_19;
                }
                {
                    PyObject *old = tmp_tuple_unpack_6__source_iter;
                    tmp_tuple_unpack_6__source_iter = tmp_assign_source_80;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_81;
                PyObject *tmp_unpack_22;
                CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
                tmp_unpack_22 = tmp_tuple_unpack_6__source_iter;
                tmp_assign_source_81 = UNPACK_NEXT( tmp_unpack_22, 0, 2 );
                if ( tmp_assign_source_81 == NULL )
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


                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 219;
                    goto try_except_handler_20;
                }
                {
                    PyObject *old = tmp_tuple_unpack_6__element_1;
                    tmp_tuple_unpack_6__element_1 = tmp_assign_source_81;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_82;
                PyObject *tmp_unpack_23;
                CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
                tmp_unpack_23 = tmp_tuple_unpack_6__source_iter;
                tmp_assign_source_82 = UNPACK_NEXT( tmp_unpack_23, 1, 2 );
                if ( tmp_assign_source_82 == NULL )
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


                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 219;
                    goto try_except_handler_20;
                }
                {
                    PyObject *old = tmp_tuple_unpack_6__element_2;
                    tmp_tuple_unpack_6__element_2 = tmp_assign_source_82;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_iterator_name_5;
                CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
                tmp_iterator_name_5 = tmp_tuple_unpack_6__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT( tmp_iterator_name_5 ); assert( HAS_ITERNEXT( tmp_iterator_name_5 ) );

                tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_5 )->tp_iternext)( tmp_iterator_name_5 );

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

                            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                            exception_lineno = 219;
                            goto try_except_handler_20;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 219;
                    goto try_except_handler_20;
                }
            }
            goto try_end_14;
            // Exception handler code:
            try_except_handler_20:;
            exception_keeper_type_15 = exception_type;
            exception_keeper_value_15 = exception_value;
            exception_keeper_tb_15 = exception_tb;
            exception_keeper_lineno_15 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
            Py_DECREF( tmp_tuple_unpack_6__source_iter );
            tmp_tuple_unpack_6__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_15;
            exception_value = exception_keeper_value_15;
            exception_tb = exception_keeper_tb_15;
            exception_lineno = exception_keeper_lineno_15;

            goto try_except_handler_19;
            // End of try:
            try_end_14:;
            goto try_end_15;
            // Exception handler code:
            try_except_handler_19:;
            exception_keeper_type_16 = exception_type;
            exception_keeper_value_16 = exception_value;
            exception_keeper_tb_16 = exception_tb;
            exception_keeper_lineno_16 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_tuple_unpack_6__element_1 );
            tmp_tuple_unpack_6__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_6__element_2 );
            tmp_tuple_unpack_6__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_16;
            exception_value = exception_keeper_value_16;
            exception_tb = exception_keeper_tb_16;
            exception_lineno = exception_keeper_lineno_16;

            goto try_except_handler_18;
            // End of try:
            try_end_15:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
            Py_DECREF( tmp_tuple_unpack_6__source_iter );
            tmp_tuple_unpack_6__source_iter = NULL;

            {
                PyObject *tmp_assign_source_83;
                CHECK_OBJECT( tmp_tuple_unpack_6__element_1 );
                tmp_assign_source_83 = tmp_tuple_unpack_6__element_1;
                {
                    PyObject *old = var_v;
                    var_v = tmp_assign_source_83;
                    Py_INCREF( var_v );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_6__element_1 );
            tmp_tuple_unpack_6__element_1 = NULL;

            {
                PyObject *tmp_assign_source_84;
                CHECK_OBJECT( tmp_tuple_unpack_6__element_2 );
                tmp_assign_source_84 = tmp_tuple_unpack_6__element_2;
                {
                    PyObject *old = var_qc;
                    var_qc = tmp_assign_source_84;
                    Py_INCREF( var_qc );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_6__element_2 );
            tmp_tuple_unpack_6__element_2 = NULL;

            {
                PyObject *tmp_assign_source_85;
                PyObject *tmp_called_name_28;
                PyObject *tmp_args_element_name_46;
                PyObject *tmp_args_element_name_47;
                PyObject *tmp_args_element_name_48;
                PyObject *tmp_subscribed_name_10;
                PyObject *tmp_source_name_8;
                PyObject *tmp_subscript_name_10;
                PyObject *tmp_args_element_name_49;
                if ( var_axpy == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "axpy" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 220;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_18;
                }

                tmp_called_name_28 = var_axpy;
                CHECK_OBJECT( var_v );
                tmp_args_element_name_46 = var_v;
                CHECK_OBJECT( var_ax );
                tmp_args_element_name_47 = var_ax;
                CHECK_OBJECT( var_ax );
                tmp_source_name_8 = var_ax;
                tmp_subscribed_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
                if ( tmp_subscribed_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 220;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_18;
                }
                tmp_subscript_name_10 = const_int_0;
                tmp_args_element_name_48 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_10, tmp_subscript_name_10, 0 );
                Py_DECREF( tmp_subscribed_name_10 );
                if ( tmp_args_element_name_48 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 220;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_18;
                }
                CHECK_OBJECT( var_qc );
                tmp_args_element_name_49 = var_qc;
                frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 220;
                {
                    PyObject *call_args[] = { tmp_args_element_name_46, tmp_args_element_name_47, tmp_args_element_name_48, tmp_args_element_name_49 };
                    tmp_assign_source_85 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_28, call_args );
                }

                Py_DECREF( tmp_args_element_name_48 );
                if ( tmp_assign_source_85 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 220;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_18;
                }
                {
                    PyObject *old = var_ax;
                    assert( old != NULL );
                    var_ax = tmp_assign_source_85;
                    Py_DECREF( old );
                }

            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 219;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }
            goto loop_start_3;
            loop_end_3:;
            goto try_end_16;
            // Exception handler code:
            try_except_handler_18:;
            exception_keeper_type_17 = exception_type;
            exception_keeper_value_17 = exception_value;
            exception_keeper_tb_17 = exception_tb;
            exception_keeper_lineno_17 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_for_loop_3__iter_value );
            tmp_for_loop_3__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
            Py_DECREF( tmp_for_loop_3__for_iterator );
            tmp_for_loop_3__for_iterator = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_17;
            exception_value = exception_keeper_value_17;
            exception_tb = exception_keeper_tb_17;
            exception_lineno = exception_keeper_lineno_17;

            goto try_except_handler_7;
            // End of try:
            try_end_16:;
            Py_XDECREF( tmp_for_loop_3__iter_value );
            tmp_for_loop_3__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
            Py_DECREF( tmp_for_loop_3__for_iterator );
            tmp_for_loop_3__for_iterator = NULL;

            {
                PyObject *tmp_called_name_29;
                PyObject *tmp_source_name_9;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_50;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_left_name_13;
                PyObject *tmp_right_name_13;
                PyObject *tmp_left_name_14;
                PyObject *tmp_right_name_14;
                CHECK_OBJECT( par_outer_v );
                tmp_source_name_9 = par_outer_v;
                tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_append );
                if ( tmp_called_name_29 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 221;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( var_dx );
                tmp_left_name_13 = var_dx;
                CHECK_OBJECT( var_nx );
                tmp_right_name_13 = var_nx;
                tmp_tuple_element_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
                if ( tmp_tuple_element_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_29 );

                    exception_lineno = 221;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                tmp_args_element_name_50 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_args_element_name_50, 0, tmp_tuple_element_4 );
                CHECK_OBJECT( var_ax );
                tmp_left_name_14 = var_ax;
                CHECK_OBJECT( var_nx );
                tmp_right_name_14 = var_nx;
                tmp_tuple_element_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
                if ( tmp_tuple_element_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_29 );
                    Py_DECREF( tmp_args_element_name_50 );

                    exception_lineno = 221;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                PyTuple_SET_ITEM( tmp_args_element_name_50, 1, tmp_tuple_element_4 );
                frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 221;
                {
                    PyObject *call_args[] = { tmp_args_element_name_50 };
                    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, call_args );
                }

                Py_DECREF( tmp_called_name_29 );
                Py_DECREF( tmp_args_element_name_50 );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 221;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            goto branch_end_14;
            branch_no_14:;
            {
                PyObject *tmp_called_name_30;
                PyObject *tmp_source_name_10;
                PyObject *tmp_call_result_5;
                PyObject *tmp_args_element_name_51;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_left_name_15;
                PyObject *tmp_right_name_15;
                CHECK_OBJECT( par_outer_v );
                tmp_source_name_10 = par_outer_v;
                tmp_called_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_append );
                if ( tmp_called_name_30 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 223;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( var_dx );
                tmp_left_name_15 = var_dx;
                CHECK_OBJECT( var_nx );
                tmp_right_name_15 = var_nx;
                tmp_tuple_element_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_30 );

                    exception_lineno = 223;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                tmp_args_element_name_51 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_args_element_name_51, 0, tmp_tuple_element_5 );
                tmp_tuple_element_5 = Py_None;
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_args_element_name_51, 1, tmp_tuple_element_5 );
                frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 223;
                {
                    PyObject *call_args[] = { tmp_args_element_name_51 };
                    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
                }

                Py_DECREF( tmp_called_name_30 );
                Py_DECREF( tmp_args_element_name_51 );
                if ( tmp_call_result_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 223;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                Py_DECREF( tmp_call_result_5 );
            }
            branch_end_14:;
        }
        branch_no_13:;
    }
    loop_start_4:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_outer_v );
        tmp_len_arg_1 = par_outer_v;
        tmp_compexpr_left_11 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( par_outer_k );
        tmp_compexpr_right_11 = par_outer_k;
        tmp_operand_name_5 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        Py_DECREF( tmp_compexpr_left_11 );
        if ( tmp_operand_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
        Py_DECREF( tmp_operand_name_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_15 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_15;
        }
        else
        {
            goto branch_no_15;
        }
        branch_yes_15:;
        goto loop_end_4;
        branch_no_15:;
    }
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_delsubscr_subscript_1;
        CHECK_OBJECT( par_outer_v );
        tmp_delsubscr_target_1 = par_outer_v;
        tmp_delsubscr_subscript_1 = const_int_0;
        tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_4;
    loop_end_4:;
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 230;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_left_name_16 = var_x;
        CHECK_OBJECT( var_dx );
        tmp_right_name_16 = var_dx;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_16, tmp_right_name_16 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_86 = tmp_left_name_16;
        var_x = tmp_assign_source_86;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_17;
    // Return handler code:
    try_return_handler_7:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto try_return_handler_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
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
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_6;
    // End of try:
    try_end_17:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_16;
        nuitka_bool tmp_compexpr_left_12;
        nuitka_bool tmp_compexpr_right_12;
        assert( tmp_for_loop_1__break_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_12 = tmp_for_loop_1__break_indicator;
        tmp_compexpr_right_12 = NUITKA_BOOL_TRUE;
        tmp_condition_result_16 = ( tmp_compexpr_left_12 == tmp_compexpr_right_12 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_called_name_31;
            PyObject *tmp_args_element_name_52;
            CHECK_OBJECT( var_postprocess );
            tmp_called_name_31 = var_postprocess;
            if ( var_x == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 233;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_args_element_name_52 = var_x;
            frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 233;
            {
                PyObject *call_args[] = { tmp_args_element_name_52 };
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, call_args );
            }

            if ( tmp_tuple_element_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 233;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_return_value = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( par_maxiter );
            tmp_tuple_element_6 = par_maxiter;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_6 );
            goto try_return_handler_6;
        }
        branch_no_16:;
    }
    goto try_end_18;
    // Return handler code:
    try_return_handler_6:;
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    {
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_called_name_32;
        PyObject *tmp_args_element_name_53;
        CHECK_OBJECT( var_postprocess );
        tmp_called_name_32 = var_postprocess;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_53 = var_x;
        frame_9cbfec6434f0609595327515806fc99b->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = { tmp_args_element_name_53 };
            tmp_tuple_element_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_32, call_args );
        }

        if ( tmp_tuple_element_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_7 );
        tmp_tuple_element_7 = const_int_0;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_7 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9cbfec6434f0609595327515806fc99b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9cbfec6434f0609595327515806fc99b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9cbfec6434f0609595327515806fc99b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9cbfec6434f0609595327515806fc99b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9cbfec6434f0609595327515806fc99b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9cbfec6434f0609595327515806fc99b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9cbfec6434f0609595327515806fc99b,
        type_description_1,
        par_A,
        par_b,
        par_x0,
        par_tol,
        par_maxiter,
        par_M,
        par_callback,
        par_inner_m,
        par_outer_k,
        par_outer_v,
        par_store_outer_Av,
        par_prepend_outer_v,
        par_atol,
        var_x,
        var_postprocess,
        var_matvec,
        var_psolve,
        var_axpy,
        var_dot,
        var_scal,
        var_nrm2,
        var_b_norm,
        var_ptol_max_factor,
        var_k_outer,
        var_r_outer,
        var_r_norm,
        var_v0,
        var_inner_res_0,
        var_rnorm,
        var_ptol,
        var_Q,
        var_R,
        var_B,
        var_vs,
        var_zs,
        var_y,
        var_pres,
        var_dx,
        var_w,
        var_yc,
        var_nx,
        var_q,
        var_ax,
        var_v,
        var_qc
    );


    // Release cached frame.
    if ( frame_9cbfec6434f0609595327515806fc99b == cache_frame_9cbfec6434f0609595327515806fc99b )
    {
        Py_DECREF( frame_9cbfec6434f0609595327515806fc99b );
    }
    cache_frame_9cbfec6434f0609595327515806fc99b = NULL;

    assertFrameObject( frame_9cbfec6434f0609595327515806fc99b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$lgmres$$$function_1_lgmres );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_inner_m );
    Py_DECREF( par_inner_m );
    par_inner_m = NULL;

    CHECK_OBJECT( (PyObject *)par_outer_k );
    Py_DECREF( par_outer_k );
    par_outer_k = NULL;

    CHECK_OBJECT( (PyObject *)par_outer_v );
    Py_DECREF( par_outer_v );
    par_outer_v = NULL;

    CHECK_OBJECT( (PyObject *)par_store_outer_Av );
    Py_DECREF( par_store_outer_Av );
    par_store_outer_Av = NULL;

    CHECK_OBJECT( (PyObject *)par_prepend_outer_v );
    Py_DECREF( par_prepend_outer_v );
    par_prepend_outer_v = NULL;

    CHECK_OBJECT( (PyObject *)par_atol );
    Py_DECREF( par_atol );
    par_atol = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_postprocess );
    Py_DECREF( var_postprocess );
    var_postprocess = NULL;

    CHECK_OBJECT( (PyObject *)var_matvec );
    Py_DECREF( var_matvec );
    var_matvec = NULL;

    CHECK_OBJECT( (PyObject *)var_psolve );
    Py_DECREF( var_psolve );
    var_psolve = NULL;

    Py_XDECREF( var_axpy );
    var_axpy = NULL;

    Py_XDECREF( var_dot );
    var_dot = NULL;

    Py_XDECREF( var_scal );
    var_scal = NULL;

    Py_XDECREF( var_nrm2 );
    var_nrm2 = NULL;

    CHECK_OBJECT( (PyObject *)var_b_norm );
    Py_DECREF( var_b_norm );
    var_b_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_ptol_max_factor );
    Py_DECREF( var_ptol_max_factor );
    var_ptol_max_factor = NULL;

    Py_XDECREF( var_k_outer );
    var_k_outer = NULL;

    Py_XDECREF( var_r_outer );
    var_r_outer = NULL;

    Py_XDECREF( var_r_norm );
    var_r_norm = NULL;

    Py_XDECREF( var_v0 );
    var_v0 = NULL;

    Py_XDECREF( var_inner_res_0 );
    var_inner_res_0 = NULL;

    Py_XDECREF( var_rnorm );
    var_rnorm = NULL;

    Py_XDECREF( var_ptol );
    var_ptol = NULL;

    Py_XDECREF( var_Q );
    var_Q = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_vs );
    var_vs = NULL;

    Py_XDECREF( var_zs );
    var_zs = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_pres );
    var_pres = NULL;

    Py_XDECREF( var_dx );
    var_dx = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_yc );
    var_yc = NULL;

    Py_XDECREF( var_nx );
    var_nx = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    Py_XDECREF( var_ax );
    var_ax = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_qc );
    var_qc = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_inner_m );
    Py_DECREF( par_inner_m );
    par_inner_m = NULL;

    CHECK_OBJECT( (PyObject *)par_outer_k );
    Py_DECREF( par_outer_k );
    par_outer_k = NULL;

    Py_XDECREF( par_outer_v );
    par_outer_v = NULL;

    CHECK_OBJECT( (PyObject *)par_store_outer_Av );
    Py_DECREF( par_store_outer_Av );
    par_store_outer_Av = NULL;

    CHECK_OBJECT( (PyObject *)par_prepend_outer_v );
    Py_DECREF( par_prepend_outer_v );
    par_prepend_outer_v = NULL;

    Py_XDECREF( par_atol );
    par_atol = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_postprocess );
    var_postprocess = NULL;

    Py_XDECREF( var_matvec );
    var_matvec = NULL;

    Py_XDECREF( var_psolve );
    var_psolve = NULL;

    Py_XDECREF( var_axpy );
    var_axpy = NULL;

    Py_XDECREF( var_dot );
    var_dot = NULL;

    Py_XDECREF( var_scal );
    var_scal = NULL;

    Py_XDECREF( var_nrm2 );
    var_nrm2 = NULL;

    Py_XDECREF( var_b_norm );
    var_b_norm = NULL;

    Py_XDECREF( var_ptol_max_factor );
    var_ptol_max_factor = NULL;

    Py_XDECREF( var_k_outer );
    var_k_outer = NULL;

    Py_XDECREF( var_r_outer );
    var_r_outer = NULL;

    Py_XDECREF( var_r_norm );
    var_r_norm = NULL;

    Py_XDECREF( var_v0 );
    var_v0 = NULL;

    Py_XDECREF( var_inner_res_0 );
    var_inner_res_0 = NULL;

    Py_XDECREF( var_rnorm );
    var_rnorm = NULL;

    Py_XDECREF( var_ptol );
    var_ptol = NULL;

    Py_XDECREF( var_Q );
    var_Q = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_vs );
    var_vs = NULL;

    Py_XDECREF( var_zs );
    var_zs = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_pres );
    var_pres = NULL;

    Py_XDECREF( var_dx );
    var_dx = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_yc );
    var_yc = NULL;

    Py_XDECREF( var_nx );
    var_nx = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    Py_XDECREF( var_ax );
    var_ax = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_qc );
    var_qc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$lgmres$$$function_1_lgmres );
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



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$lgmres$$$function_1_lgmres( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$isolve$lgmres$$$function_1_lgmres,
        const_str_plain_lgmres,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9cbfec6434f0609595327515806fc99b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$isolve$lgmres,
        const_str_digest_cbd4d30ce176b6407885ea4ad16fac93,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$linalg$isolve$lgmres =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.linalg.isolve.lgmres",
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

MOD_INIT_DECL( scipy$sparse$linalg$isolve$lgmres )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$linalg$isolve$lgmres );
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
    puts("scipy.sparse.linalg.isolve.lgmres: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.linalg.isolve.lgmres: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.linalg.isolve.lgmres: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$sparse$linalg$isolve$lgmres" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$linalg$isolve$lgmres = Py_InitModule4(
        "scipy.sparse.linalg.isolve.lgmres",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$sparse$linalg$isolve$lgmres = PyModule_Create( &mdef_scipy$sparse$linalg$isolve$lgmres );
#endif

    moduledict_scipy$sparse$linalg$isolve$lgmres = MODULE_DICT( module_scipy$sparse$linalg$isolve$lgmres );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$sparse$linalg$isolve$lgmres,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$sparse$linalg$isolve$lgmres,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$linalg$isolve$lgmres,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$linalg$isolve$lgmres,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$sparse$linalg$isolve$lgmres );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_04fb1e1ec206711de89547f74194c7e0, module_scipy$sparse$linalg$isolve$lgmres );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_95634da92233b1727dc82c1a31d888fd;
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
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_95634da92233b1727dc82c1a31d888fd = MAKE_MODULE_FRAME( codeobj_95634da92233b1727dc82c1a31d888fd, module_scipy$sparse$linalg$isolve$lgmres );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_95634da92233b1727dc82c1a31d888fd );
    assert( Py_REFCNT( frame_95634da92233b1727dc82c1a31d888fd ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_95634da92233b1727dc82c1a31d888fd->m_frame.f_lineno = 4;
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_name_name_1 = const_str_plain_warnings;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$sparse$linalg$isolve$lgmres;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_95634da92233b1727dc82c1a31d888fd->m_frame.f_lineno = 6;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_numpy;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$sparse$linalg$isolve$lgmres;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_95634da92233b1727dc82c1a31d888fd->m_frame.f_lineno = 7;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$sparse$linalg$isolve$lgmres;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_LinAlgError_tuple;
        tmp_level_name_3 = const_int_0;
        frame_95634da92233b1727dc82c1a31d888fd->m_frame.f_lineno = 8;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_LinAlgError );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_LinAlgError, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_c88389693d9d476899c1c6e170568469;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$sparse$linalg$isolve$lgmres;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_xrange_tuple;
        tmp_level_name_4 = const_int_0;
        frame_95634da92233b1727dc82c1a31d888fd->m_frame.f_lineno = 9;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_xrange );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_xrange, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$sparse$linalg$isolve$lgmres;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_get_blas_funcs_str_plain_get_lapack_funcs_tuple;
        tmp_level_name_5 = const_int_0;
        frame_95634da92233b1727dc82c1a31d888fd->m_frame.f_lineno = 10;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_get_blas_funcs );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_get_blas_funcs, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_get_lapack_funcs );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs, tmp_assign_source_14 );
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
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_utils;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$sparse$linalg$isolve$lgmres;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_make_system_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_95634da92233b1727dc82c1a31d888fd->m_frame.f_lineno = 11;
        tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_scipy$sparse$linalg$isolve$lgmres,
                const_str_plain_make_system,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_make_system );
        }

        Py_DECREF( tmp_import_name_from_8 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_make_system, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain__gcrotmk;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy$sparse$linalg$isolve$lgmres;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain__fgmres_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_95634da92233b1727dc82c1a31d888fd->m_frame.f_lineno = 13;
        tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_scipy$sparse$linalg$isolve$lgmres,
                const_str_plain__fgmres,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain__fgmres );
        }

        Py_DECREF( tmp_import_name_from_9 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain__fgmres, tmp_assign_source_16 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_95634da92233b1727dc82c1a31d888fd );
#endif
    popFrameStack();

    assertFrameObject( frame_95634da92233b1727dc82c1a31d888fd );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_95634da92233b1727dc82c1a31d888fd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_95634da92233b1727dc82c1a31d888fd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_95634da92233b1727dc82c1a31d888fd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_95634da92233b1727dc82c1a31d888fd, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = LIST_COPY( const_list_str_plain_lgmres_list );
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_1bc75cc061743bf959b18462471f9c9e_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_18 = MAKE_FUNCTION_scipy$sparse$linalg$isolve$lgmres$$$function_1_lgmres( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain_lgmres, tmp_assign_source_18 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lgmres, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$linalg$isolve$lgmres );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
