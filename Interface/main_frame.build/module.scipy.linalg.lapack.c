/* Generated code for Python module 'scipy.linalg.lapack'
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

/* The "_module_scipy$linalg$lapack" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$linalg$lapack;
PyDictObject *moduledict_scipy$linalg$lapack;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_sgegv;
extern PyObject *const_str_plain_int32;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_array;
static PyObject *const_str_digest_fd73cbde26edf37c2e35a8ce32f7454c;
extern PyObject *const_str_plain_ValueError;
static PyObject *const_tuple_str_plain_DeprecatedImport_tuple;
extern PyObject *const_str_plain_empty_module;
static PyObject *const_str_plain_clapack;
extern PyObject *const_str_plain_inf;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_args;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_digest_c23cba68ee312f453aab0e197a73d1ae;
static PyObject *const_str_plain_flapack;
extern PyObject *const_str_plain_any;
static PyObject *const_str_plain__flapack;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_find_best_blas_type;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_1c2eb6b6064e1d90f767f25e6a969602;
static PyObject *const_str_plain_dgegv;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_None;
static PyObject *const_tuple_str_plain_find_best_blas_type_tuple;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain_astype;
static PyObject *const_str_digest_1e42f2c86adf1a065fb911493ab849c2;
static PyObject *const_str_digest_d0d59beb7168f2376a1c0e692e24a491;
extern PyObject *const_str_plain_names;
static PyObject *const_str_plain__dep_message;
static PyObject *const_tuple_str_digest_c23cba68ee312f453aab0e197a73d1ae_tuple;
static PyObject *const_str_plain_LAPACK;
extern PyObject *const_str_plain_ImportError;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain__get_funcs;
extern PyObject *const_str_plain_complex64;
extern PyObject *const_str_plain_len;
extern PyObject *const_str_plain_numpy;
static PyObject *const_tuple_df3f388b522acc1f221ddf9b185e370f_tuple;
extern PyObject *const_str_plain_blas;
extern PyObject *const_str_plain__np;
extern PyObject *const_str_plain_w;
static PyObject *const_str_plain_find_best_lapack_type;
static PyObject *const_str_plain__clapack;
extern PyObject *const_str_plain__compute_lwork;
static PyObject *const_str_digest_cefd78b415cb9b239bb4271b87172f41;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_old_name;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_DeprecatedImport;
static PyObject *const_str_plain_cgegv;
extern PyObject *const_str_plain_int64;
extern PyObject *const_str_plain_lwork;
static PyObject *const_str_digest_9cf45123cdeefadbab7460194cab2453;
static PyObject *const_str_digest_ecf9c31673289f00419eb4f7409b7ad2;
extern PyObject *const_tuple_str_empty_tuple;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_digest_dbc049f94600503bfbd8944e5239d7ae;
static PyObject *const_str_plain_zgegv;
static PyObject *const_tuple_5eedca3de45183b6732fc89540967401_tuple;
extern PyObject *const_str_plain_arrays;
static PyObject *const_tuple_1ed670f5bc87e8210f2ab38d22b6738d_tuple;
static PyObject *const_tuple_str_plain__get_funcs_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_logical_or;
static PyObject *const_tuple_str_plain__clapack_tuple;
extern PyObject *const_str_plain_origin;
static PyObject *const_list_str_plain_get_lapack_funcs_list;
extern PyObject *const_str_angle_listcomp;
static PyObject *const_str_plain_routine;
extern PyObject *const_str_plain_iinfo;
static PyObject *const_tuple_str_plain__flapack_tuple;
extern PyObject *const_tuple_str_plain_names_str_plain_arrays_str_plain_dtype_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain__lapack_alias;
extern PyObject *const_str_plain_deprecate;
extern PyObject *const_str_plain_nextafter;
static PyObject *const_str_plain__DeprecatedImport;
extern PyObject *const_str_plain_getattr;
extern PyObject *const_slice_none_int_neg_1_none;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_get_lapack_funcs;
extern PyObject *const_tuple_str_plain_w_tuple;
extern PyObject *const_str_plain_wi;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_float32;
static PyObject *const_str_digest_fdecf45ca80ac48be024018236919ca2;
static PyObject *const_str_digest_2deeca068c3f37fdaeb1e9c4ef7924c3;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_dict_17156676f7b26d62d1b4ba46d11faf3e;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_tuple_tuple_empty_none_tuple;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_42edbe41a7f1035fb563f98116fd8a41;
static PyObject *const_str_digest_71d22ff3adde3ec550692b5183e0af42;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_sgegv = UNSTREAM_STRING_ASCII( &constant_bin[ 4643717 ], 5, 1 );
    const_str_digest_fd73cbde26edf37c2e35a8ce32f7454c = UNSTREAM_STRING_ASCII( &constant_bin[ 4643722 ], 2437, 0 );
    const_tuple_str_plain_DeprecatedImport_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_DeprecatedImport_tuple, 0, const_str_plain_DeprecatedImport ); Py_INCREF( const_str_plain_DeprecatedImport );
    const_str_plain_clapack = UNSTREAM_STRING_ASCII( &constant_bin[ 4646159 ], 7, 1 );
    const_str_digest_c23cba68ee312f453aab0e197a73d1ae = UNSTREAM_STRING_ASCII( &constant_bin[ 4646166 ], 93, 0 );
    const_str_plain_flapack = UNSTREAM_STRING_ASCII( &constant_bin[ 4646259 ], 7, 1 );
    const_str_plain__flapack = UNSTREAM_STRING_ASCII( &constant_bin[ 4646266 ], 8, 1 );
    const_str_digest_1c2eb6b6064e1d90f767f25e6a969602 = UNSTREAM_STRING_ASCII( &constant_bin[ 4646274 ], 21, 0 );
    const_str_plain_dgegv = UNSTREAM_STRING_ASCII( &constant_bin[ 4646295 ], 5, 1 );
    const_tuple_str_plain_find_best_blas_type_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_find_best_blas_type_tuple, 0, const_str_plain_find_best_blas_type ); Py_INCREF( const_str_plain_find_best_blas_type );
    const_str_digest_1e42f2c86adf1a065fb911493ab849c2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4646300 ], 22, 0 );
    const_str_digest_d0d59beb7168f2376a1c0e692e24a491 = UNSTREAM_STRING_ASCII( &constant_bin[ 4646322 ], 185, 0 );
    const_str_plain__dep_message = UNSTREAM_STRING_ASCII( &constant_bin[ 4646507 ], 12, 1 );
    const_tuple_str_digest_c23cba68ee312f453aab0e197a73d1ae_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c23cba68ee312f453aab0e197a73d1ae_tuple, 0, const_str_digest_c23cba68ee312f453aab0e197a73d1ae ); Py_INCREF( const_str_digest_c23cba68ee312f453aab0e197a73d1ae );
    const_str_plain_LAPACK = UNSTREAM_STRING_ASCII( &constant_bin[ 3335929 ], 6, 1 );
    const_tuple_df3f388b522acc1f221ddf9b185e370f_tuple = PyTuple_New( 2 );
    const_str_digest_9cf45123cdeefadbab7460194cab2453 = UNSTREAM_STRING_ASCII( &constant_bin[ 4646519 ], 25, 0 );
    PyTuple_SET_ITEM( const_tuple_df3f388b522acc1f221ddf9b185e370f_tuple, 0, const_str_digest_9cf45123cdeefadbab7460194cab2453 ); Py_INCREF( const_str_digest_9cf45123cdeefadbab7460194cab2453 );
    const_str_digest_fdecf45ca80ac48be024018236919ca2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4467376 ], 19, 0 );
    PyTuple_SET_ITEM( const_tuple_df3f388b522acc1f221ddf9b185e370f_tuple, 1, const_str_digest_fdecf45ca80ac48be024018236919ca2 ); Py_INCREF( const_str_digest_fdecf45ca80ac48be024018236919ca2 );
    const_str_plain_find_best_lapack_type = UNSTREAM_STRING_ASCII( &constant_bin[ 4646544 ], 21, 1 );
    const_str_plain__clapack = UNSTREAM_STRING_ASCII( &constant_bin[ 4646565 ], 8, 1 );
    const_str_digest_cefd78b415cb9b239bb4271b87172f41 = UNSTREAM_STRING_ASCII( &constant_bin[ 4646573 ], 47, 0 );
    const_str_plain_cgegv = UNSTREAM_STRING_ASCII( &constant_bin[ 4646620 ], 5, 1 );
    const_str_digest_ecf9c31673289f00419eb4f7409b7ad2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4646625 ], 6263, 0 );
    const_str_plain_zgegv = UNSTREAM_STRING_ASCII( &constant_bin[ 4648527 ], 5, 1 );
    const_tuple_5eedca3de45183b6732fc89540967401_tuple = PyTuple_New( 7 );
    const_str_plain_routine = UNSTREAM_STRING_ASCII( &constant_bin[ 563497 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_5eedca3de45183b6732fc89540967401_tuple, 0, const_str_plain_routine ); Py_INCREF( const_str_plain_routine );
    PyTuple_SET_ITEM( const_tuple_5eedca3de45183b6732fc89540967401_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_5eedca3de45183b6732fc89540967401_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_5eedca3de45183b6732fc89540967401_tuple, 3, const_str_plain_wi ); Py_INCREF( const_str_plain_wi );
    PyTuple_SET_ITEM( const_tuple_5eedca3de45183b6732fc89540967401_tuple, 4, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    PyTuple_SET_ITEM( const_tuple_5eedca3de45183b6732fc89540967401_tuple, 5, const_str_plain_lwork ); Py_INCREF( const_str_plain_lwork );
    PyTuple_SET_ITEM( const_tuple_5eedca3de45183b6732fc89540967401_tuple, 6, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    const_tuple_1ed670f5bc87e8210f2ab38d22b6738d_tuple = PyTuple_New( 2 );
    const_str_digest_42edbe41a7f1035fb563f98116fd8a41 = UNSTREAM_STRING_ASCII( &constant_bin[ 4652888 ], 25, 0 );
    PyTuple_SET_ITEM( const_tuple_1ed670f5bc87e8210f2ab38d22b6738d_tuple, 0, const_str_digest_42edbe41a7f1035fb563f98116fd8a41 ); Py_INCREF( const_str_digest_42edbe41a7f1035fb563f98116fd8a41 );
    PyTuple_SET_ITEM( const_tuple_1ed670f5bc87e8210f2ab38d22b6738d_tuple, 1, const_str_digest_fdecf45ca80ac48be024018236919ca2 ); Py_INCREF( const_str_digest_fdecf45ca80ac48be024018236919ca2 );
    const_tuple_str_plain__get_funcs_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__get_funcs_tuple, 0, const_str_plain__get_funcs ); Py_INCREF( const_str_plain__get_funcs );
    const_tuple_str_plain__clapack_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__clapack_tuple, 0, const_str_plain__clapack ); Py_INCREF( const_str_plain__clapack );
    const_list_str_plain_get_lapack_funcs_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_get_lapack_funcs_list, 0, const_str_plain_get_lapack_funcs ); Py_INCREF( const_str_plain_get_lapack_funcs );
    const_tuple_str_plain__flapack_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__flapack_tuple, 0, const_str_plain__flapack ); Py_INCREF( const_str_plain__flapack );
    const_str_plain__lapack_alias = UNSTREAM_STRING_ASCII( &constant_bin[ 4652913 ], 13, 1 );
    const_str_plain__DeprecatedImport = UNSTREAM_STRING_ASCII( &constant_bin[ 4652926 ], 17, 1 );
    const_str_digest_2deeca068c3f37fdaeb1e9c4ef7924c3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4652943 ], 28, 0 );
    const_dict_17156676f7b26d62d1b4ba46d11faf3e = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4652971 ], 186 );
    const_str_digest_71d22ff3adde3ec550692b5183e0af42 = UNSTREAM_STRING_ASCII( &constant_bin[ 4653157 ], 692, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$linalg$lapack( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_7281db47663c726fc8f64befb3d41b16;
static PyCodeObject *codeobj_3943c82d1d9210dd70373e2fc0afc43b;
static PyCodeObject *codeobj_21db153afa1cf1ff607cc645d6a6a576;
static PyCodeObject *codeobj_f12364cde28ab10a0297e4b0fd58c44a;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_1e42f2c86adf1a065fb911493ab849c2 );
    codeobj_7281db47663c726fc8f64befb3d41b16 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 761, const_tuple_str_plain_w_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3943c82d1d9210dd70373e2fc0afc43b = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2deeca068c3f37fdaeb1e9c4ef7924c3, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_21db153afa1cf1ff607cc645d6a6a576 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__compute_lwork, 732, const_tuple_5eedca3de45183b6732fc89540967401_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_f12364cde28ab10a0297e4b0fd58c44a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_lapack_funcs, 662, const_tuple_str_plain_names_str_plain_arrays_str_plain_dtype_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$linalg$lapack$$$function_1_get_lapack_funcs( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$linalg$lapack$$$function_2__compute_lwork(  );


// The module function definitions.
static PyObject *impl_scipy$linalg$lapack$$$function_1_get_lapack_funcs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_names = python_pars[ 0 ];
    PyObject *par_arrays = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_f12364cde28ab10a0297e4b0fd58c44a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f12364cde28ab10a0297e4b0fd58c44a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f12364cde28ab10a0297e4b0fd58c44a, codeobj_f12364cde28ab10a0297e4b0fd58c44a, module_scipy$linalg$lapack, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f12364cde28ab10a0297e4b0fd58c44a = cache_frame_f12364cde28ab10a0297e4b0fd58c44a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f12364cde28ab10a0297e4b0fd58c44a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f12364cde28ab10a0297e4b0fd58c44a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__get_funcs );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_funcs );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_funcs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 727;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_names );
        tmp_args_element_name_1 = par_names;
        CHECK_OBJECT( par_arrays );
        tmp_args_element_name_2 = par_arrays;
        CHECK_OBJECT( par_dtype );
        tmp_args_element_name_3 = par_dtype;
        tmp_args_element_name_4 = const_str_plain_LAPACK;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__flapack );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__flapack );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_flapack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 728;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__clapack );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__clapack );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_clapack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 728;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = tmp_mvar_value_3;
        tmp_args_element_name_7 = const_str_plain_flapack;
        tmp_args_element_name_8 = const_str_plain_clapack;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__lapack_alias );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__lapack_alias );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_lapack_alias" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 729;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = tmp_mvar_value_4;
        frame_f12364cde28ab10a0297e4b0fd58c44a->m_frame.f_lineno = 727;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS9( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 727;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f12364cde28ab10a0297e4b0fd58c44a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f12364cde28ab10a0297e4b0fd58c44a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f12364cde28ab10a0297e4b0fd58c44a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f12364cde28ab10a0297e4b0fd58c44a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f12364cde28ab10a0297e4b0fd58c44a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f12364cde28ab10a0297e4b0fd58c44a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f12364cde28ab10a0297e4b0fd58c44a,
        type_description_1,
        par_names,
        par_arrays,
        par_dtype
    );


    // Release cached frame.
    if ( frame_f12364cde28ab10a0297e4b0fd58c44a == cache_frame_f12364cde28ab10a0297e4b0fd58c44a )
    {
        Py_DECREF( frame_f12364cde28ab10a0297e4b0fd58c44a );
    }
    cache_frame_f12364cde28ab10a0297e4b0fd58c44a = NULL;

    assertFrameObject( frame_f12364cde28ab10a0297e4b0fd58c44a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$lapack$$$function_1_get_lapack_funcs );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_names );
    Py_DECREF( par_names );
    par_names = NULL;

    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

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

    CHECK_OBJECT( (PyObject *)par_names );
    Py_DECREF( par_names );
    par_names = NULL;

    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$lapack$$$function_1_get_lapack_funcs );
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


static PyObject *impl_scipy$linalg$lapack$$$function_2__compute_lwork( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_routine = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_wi = NULL;
    PyObject *var_info = NULL;
    PyObject *var_lwork = NULL;
    PyObject *var_dtype = NULL;
    PyObject *outline_0_var_w = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_21db153afa1cf1ff607cc645d6a6a576;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_7281db47663c726fc8f64befb3d41b16_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_7281db47663c726fc8f64befb3d41b16_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_21db153afa1cf1ff607cc645d6a6a576 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_21db153afa1cf1ff607cc645d6a6a576, codeobj_21db153afa1cf1ff607cc645d6a6a576, module_scipy$linalg$lapack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_21db153afa1cf1ff607cc645d6a6a576 = cache_frame_21db153afa1cf1ff607cc645d6a6a576;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_21db153afa1cf1ff607cc645d6a6a576 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_21db153afa1cf1ff607cc645d6a6a576 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_routine );
        tmp_dircall_arg1_1 = par_routine;
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 753;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_wi == NULL );
        var_wi = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_len );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "len" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 754;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_wi );
        tmp_args_element_name_1 = var_wi;
        frame_21db153afa1cf1ff607cc645d6a6a576->m_frame.f_lineno = 754;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 754;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 754;
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
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_ValueError );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValueError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 755;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            frame_21db153afa1cf1ff607cc645d6a6a576->m_frame.f_lineno = 755;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 755;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 755;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_wi );
        tmp_subscribed_name_1 = var_wi;
        tmp_subscript_name_1 = const_int_neg_1;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, -1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 756;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_info == NULL );
        var_info = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_info );
        tmp_compexpr_left_2 = var_info;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 757;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_ValueError );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValueError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 758;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            tmp_left_name_1 = const_str_digest_cefd78b415cb9b239bb4271b87172f41;
            CHECK_OBJECT( var_info );
            tmp_tuple_element_1 = var_info;
            tmp_right_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
            tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 758;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_21db153afa1cf1ff607cc645d6a6a576->m_frame.f_lineno = 758;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_raise_type_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 758;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 758;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_3;
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( var_wi );
            tmp_subscribed_name_2 = var_wi;
            tmp_subscript_name_2 = const_slice_none_int_neg_1_none;
            tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 761;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 761;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_5;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_7281db47663c726fc8f64befb3d41b16_2, codeobj_7281db47663c726fc8f64befb3d41b16, module_scipy$linalg$lapack, sizeof(void *) );
        frame_7281db47663c726fc8f64befb3d41b16_2 = cache_frame_7281db47663c726fc8f64befb3d41b16_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_7281db47663c726fc8f64befb3d41b16_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_7281db47663c726fc8f64befb3d41b16_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 761;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_6;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_7 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_w;
                outline_0_var_w = tmp_assign_source_7;
                Py_INCREF( outline_0_var_w );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT( outline_0_var_w );
            tmp_source_name_1 = outline_0_var_w;
            tmp_append_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_real );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 761;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 761;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 761;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_assign_source_3 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_assign_source_3 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$linalg$lapack$$$function_2__compute_lwork );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
        Py_DECREF( tmp_listcomp_1__$0 );
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
        Py_DECREF( tmp_listcomp_1__contraction );
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp_1__iter_value_0 );
        tmp_listcomp_1__iter_value_0 = NULL;

        goto frame_return_exit_2;
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

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
        Py_DECREF( tmp_listcomp_1__$0 );
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
        Py_DECREF( tmp_listcomp_1__contraction );
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp_1__iter_value_0 );
        tmp_listcomp_1__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_7281db47663c726fc8f64befb3d41b16_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_7281db47663c726fc8f64befb3d41b16_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_7281db47663c726fc8f64befb3d41b16_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_7281db47663c726fc8f64befb3d41b16_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_7281db47663c726fc8f64befb3d41b16_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_7281db47663c726fc8f64befb3d41b16_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_7281db47663c726fc8f64befb3d41b16_2,
            type_description_2,
            outline_0_var_w
        );


        // Release cached frame.
        if ( frame_7281db47663c726fc8f64befb3d41b16_2 == cache_frame_7281db47663c726fc8f64befb3d41b16_2 )
        {
            Py_DECREF( frame_7281db47663c726fc8f64befb3d41b16_2 );
        }
        cache_frame_7281db47663c726fc8f64befb3d41b16_2 = NULL;

        assertFrameObject( frame_7281db47663c726fc8f64befb3d41b16_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$linalg$lapack$$$function_2__compute_lwork );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_w );
        outline_0_var_w = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var_w );
        outline_0_var_w = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$linalg$lapack$$$function_2__compute_lwork );
        return NULL;
        outline_exception_1:;
        exception_lineno = 761;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert( var_lwork == NULL );
        var_lwork = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_getattr );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getattr );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getattr" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 763;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_routine );
        tmp_args_element_name_3 = par_routine;
        tmp_args_element_name_4 = const_str_plain_dtype;
        tmp_args_element_name_5 = Py_None;
        frame_21db153afa1cf1ff607cc645d6a6a576->m_frame.f_lineno = 763;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 763;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dtype == NULL );
        var_dtype = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_6;
        CHECK_OBJECT( var_dtype );
        tmp_compexpr_left_3 = var_dtype;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 764;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_5;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_float32 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 764;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 764;
            type_description_1 = "ooooooo";
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
        CHECK_OBJECT( var_dtype );
        tmp_compexpr_left_4 = var_dtype;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 764;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_6;
        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_complex64 );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 764;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 764;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_3 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_9;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__np );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__np );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 767;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_7;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_nextafter );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 767;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_lwork );
            tmp_tuple_element_2 = var_lwork;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__np );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__np );
            }

            if ( tmp_mvar_value_8 == NULL )
            {
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 767;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_8;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_inf );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 767;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            tmp_dict_key_1 = const_str_plain_dtype;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__np );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__np );
            }

            if ( tmp_mvar_value_9 == NULL )
            {
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 767;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_9;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_float32 );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 767;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_21db153afa1cf1ff607cc645d6a6a576->m_frame.f_lineno = 767;
            tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 767;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_lwork;
                assert( old != NULL );
                var_lwork = tmp_assign_source_9;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__np );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__np );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 769;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_10;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_array );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 769;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_lwork );
        tmp_args_element_name_6 = var_lwork;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__np );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__np );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 769;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_11;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_int64 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 769;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_21db153afa1cf1ff607cc645d6a6a576->m_frame.f_lineno = 769;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 769;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_lwork;
            assert( old != NULL );
            var_lwork = tmp_assign_source_10;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_source_name_11;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_15;
        int tmp_truth_name_1;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__np );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__np );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 770;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_12;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_any );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 770;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__np );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__np );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 770;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_13;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_logical_or );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 770;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_lwork );
        tmp_compexpr_left_5 = var_lwork;
        tmp_compexpr_right_5 = const_int_0;
        tmp_args_element_name_9 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 770;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_lwork );
        tmp_compexpr_left_6 = var_lwork;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__np );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__np );
        }

        if ( tmp_mvar_value_14 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 770;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_14;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_iinfo );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_9 );

            exception_lineno = 770;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__np );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__np );
        }

        if ( tmp_mvar_value_15 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_9 );
            Py_DECREF( tmp_called_name_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 770;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_15;
        tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_int32 );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_9 );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 770;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_21db153afa1cf1ff607cc645d6a6a576->m_frame.f_lineno = 770;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_source_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_source_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_9 );

            exception_lineno = 770;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_max );
        Py_DECREF( tmp_source_name_11 );
        if ( tmp_compexpr_right_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_9 );

            exception_lineno = 770;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_10 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_right_6 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_9 );

            exception_lineno = 770;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_21db153afa1cf1ff607cc645d6a6a576->m_frame.f_lineno = 770;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_9 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 770;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_21db153afa1cf1ff607cc645d6a6a576->m_frame.f_lineno = 770;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 770;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 770;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_called_name_10;
            PyObject *tmp_mvar_value_16;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_ValueError );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValueError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 771;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_10 = tmp_mvar_value_16;
            frame_21db153afa1cf1ff607cc645d6a6a576->m_frame.f_lineno = 771;
            tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_str_digest_c23cba68ee312f453aab0e197a73d1ae_tuple, 0 ) );

            if ( tmp_raise_type_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 771;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_3;
            exception_lineno = 771;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_11;
        PyObject *tmp_source_name_14;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_17;
        CHECK_OBJECT( var_lwork );
        tmp_source_name_14 = var_lwork;
        tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_astype );
        if ( tmp_called_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 773;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__np );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__np );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_called_name_11 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 773;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_15 = tmp_mvar_value_17;
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_int32 );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_11 );

            exception_lineno = 773;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_21db153afa1cf1ff607cc645d6a6a576->m_frame.f_lineno = 773;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 773;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_lwork;
            assert( old != NULL );
            var_lwork = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_source_name_16;
        CHECK_OBJECT( var_lwork );
        tmp_source_name_16 = var_lwork;
        tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_size );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 774;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_7 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_left_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 774;
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
        {
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( var_lwork );
            tmp_subscribed_name_3 = var_lwork;
            tmp_subscript_name_3 = const_int_0;
            tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 775;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_5:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_21db153afa1cf1ff607cc645d6a6a576 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_21db153afa1cf1ff607cc645d6a6a576 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_21db153afa1cf1ff607cc645d6a6a576 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_21db153afa1cf1ff607cc645d6a6a576, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_21db153afa1cf1ff607cc645d6a6a576->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_21db153afa1cf1ff607cc645d6a6a576, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_21db153afa1cf1ff607cc645d6a6a576,
        type_description_1,
        par_routine,
        par_args,
        par_kwargs,
        var_wi,
        var_info,
        var_lwork,
        var_dtype
    );


    // Release cached frame.
    if ( frame_21db153afa1cf1ff607cc645d6a6a576 == cache_frame_21db153afa1cf1ff607cc645d6a6a576 )
    {
        Py_DECREF( frame_21db153afa1cf1ff607cc645d6a6a576 );
    }
    cache_frame_21db153afa1cf1ff607cc645d6a6a576 = NULL;

    assertFrameObject( frame_21db153afa1cf1ff607cc645d6a6a576 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    CHECK_OBJECT( var_lwork );
    tmp_return_value = var_lwork;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$lapack$$$function_2__compute_lwork );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_routine );
    Py_DECREF( par_routine );
    par_routine = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_wi );
    Py_DECREF( var_wi );
    var_wi = NULL;

    CHECK_OBJECT( (PyObject *)var_info );
    Py_DECREF( var_info );
    var_info = NULL;

    CHECK_OBJECT( (PyObject *)var_lwork );
    Py_DECREF( var_lwork );
    var_lwork = NULL;

    CHECK_OBJECT( (PyObject *)var_dtype );
    Py_DECREF( var_dtype );
    var_dtype = NULL;

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

    CHECK_OBJECT( (PyObject *)par_routine );
    Py_DECREF( par_routine );
    par_routine = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_wi );
    var_wi = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_lwork );
    var_lwork = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$lapack$$$function_2__compute_lwork );
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



static PyObject *MAKE_FUNCTION_scipy$linalg$lapack$$$function_1_get_lapack_funcs( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$lapack$$$function_1_get_lapack_funcs,
        const_str_plain_get_lapack_funcs,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f12364cde28ab10a0297e4b0fd58c44a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$lapack,
        const_str_digest_fd73cbde26edf37c2e35a8ce32f7454c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$lapack$$$function_2__compute_lwork(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$lapack$$$function_2__compute_lwork,
        const_str_plain__compute_lwork,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_21db153afa1cf1ff607cc645d6a6a576,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$lapack,
        const_str_digest_71d22ff3adde3ec550692b5183e0af42,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$linalg$lapack =
{
    PyModuleDef_HEAD_INIT,
    "scipy.linalg.lapack",
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

MOD_INIT_DECL( scipy$linalg$lapack )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$linalg$lapack );
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
    puts("scipy.linalg.lapack: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.linalg.lapack: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.linalg.lapack: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$linalg$lapack" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$linalg$lapack = Py_InitModule4(
        "scipy.linalg.lapack",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$linalg$lapack = PyModule_Create( &mdef_scipy$linalg$lapack );
#endif

    moduledict_scipy$linalg$lapack = MODULE_DICT( module_scipy$linalg$lapack );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$linalg$lapack,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$linalg$lapack,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg$lapack,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg$lapack,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$linalg$lapack );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_fdecf45ca80ac48be024018236919ca2, module_scipy$linalg$lapack );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_3943c82d1d9210dd70373e2fc0afc43b;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_ecf9c31673289f00419eb4f7409b7ad2;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_3943c82d1d9210dd70373e2fc0afc43b = MAKE_MODULE_FRAME( codeobj_3943c82d1d9210dd70373e2fc0afc43b, module_scipy$linalg$lapack );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_3943c82d1d9210dd70373e2fc0afc43b );
    assert( Py_REFCNT( frame_3943c82d1d9210dd70373e2fc0afc43b ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_3943c82d1d9210dd70373e2fc0afc43b->m_frame.f_lineno = 613;
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


            exception_lineno = 613;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 613;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 613;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$linalg$lapack;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_3943c82d1d9210dd70373e2fc0afc43b->m_frame.f_lineno = 614;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 614;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_blas;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$linalg$lapack;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain__get_funcs_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_3943c82d1d9210dd70373e2fc0afc43b->m_frame.f_lineno = 615;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 615;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_scipy$linalg$lapack,
                const_str_plain__get_funcs,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain__get_funcs );
        }

        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 615;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__get_funcs, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$linalg$lapack;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain__flapack_tuple;
        tmp_level_name_3 = const_int_0;
        frame_3943c82d1d9210dd70373e2fc0afc43b->m_frame.f_lineno = 616;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 616;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain__flapack );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 616;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__flapack, tmp_assign_source_10 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$linalg$lapack;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain__clapack_tuple;
        tmp_level_name_4 = const_int_0;
        frame_3943c82d1d9210dd70373e2fc0afc43b->m_frame.f_lineno = 618;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 618;

            goto try_except_handler_2;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain__clapack );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 618;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__clapack, tmp_assign_source_11 );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_3943c82d1d9210dd70373e2fc0afc43b, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_3943c82d1d9210dd70373e2fc0afc43b, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_3;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_ImportError );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImportError );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ImportError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 619;

            goto try_except_handler_3;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_3;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 619;

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
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = Py_None;
            UPDATE_STRING_DICT0( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__clapack, tmp_assign_source_12 );
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 617;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_3943c82d1d9210dd70373e2fc0afc43b->m_frame) frame_3943c82d1d9210dd70373e2fc0afc43b->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_3;
        branch_end_1:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$lapack );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_blas;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$linalg$lapack;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_find_best_blas_type_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_3943c82d1d9210dd70373e2fc0afc43b->m_frame.f_lineno = 623;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 623;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_scipy$linalg$lapack,
                const_str_plain_find_best_blas_type,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_find_best_blas_type );
        }

        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 623;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_find_best_lapack_type, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_dbc049f94600503bfbd8944e5239d7ae;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$linalg$lapack;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_DeprecatedImport_tuple;
        tmp_level_name_6 = const_int_0;
        frame_3943c82d1d9210dd70373e2fc0afc43b->m_frame.f_lineno = 624;
        tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 624;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_DeprecatedImport );
        Py_DECREF( tmp_import_name_from_8 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 624;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__DeprecatedImport, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__DeprecatedImport );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__DeprecatedImport );
        }

        CHECK_OBJECT( tmp_mvar_value_4 );
        tmp_called_name_1 = tmp_mvar_value_4;
        frame_3943c82d1d9210dd70373e2fc0afc43b->m_frame.f_lineno = 625;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_1ed670f5bc87e8210f2ab38d22b6738d_tuple, 0 ) );

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 625;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_clapack, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__DeprecatedImport );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__DeprecatedImport );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_DeprecatedImport" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 626;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_5;
        frame_3943c82d1d9210dd70373e2fc0afc43b->m_frame.f_lineno = 626;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_df3f388b522acc1f221ddf9b185e370f_tuple, 0 ) );

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 626;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_flapack, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = Py_None;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_empty_module, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_1c2eb6b6064e1d90f767f25e6a969602;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy$linalg$lapack;
        tmp_locals_name_7 = (PyObject *)moduledict_scipy$linalg$lapack;
        tmp_fromlist_name_7 = const_tuple_str_chr_42_tuple;
        tmp_level_name_7 = const_int_0;
        frame_3943c82d1d9210dd70373e2fc0afc43b->m_frame.f_lineno = 630;
        tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_star_imported_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 630;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg$lapack, true, tmp_star_imported_1 );
        Py_DECREF( tmp_star_imported_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 630;

            goto frame_exception_exit_1;
        }
    }
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy$linalg$lapack, const_str_plain_empty_module );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "empty_module" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 631;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = LIST_COPY( const_list_str_plain_get_lapack_funcs_list );
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = const_str_digest_d0d59beb7168f2376a1c0e692e24a491;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__dep_message, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 640;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_6;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_deprecate );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 640;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_cgegv );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cgegv );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cgegv" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 640;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_7;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_old_name;
        tmp_dict_value_1 = const_str_plain_cgegv;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_message;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__dep_message );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dep_message );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_dep_message" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 640;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_2 = tmp_mvar_value_8;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_3943c82d1d9210dd70373e2fc0afc43b->m_frame.f_lineno = 640;
        tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 640;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_cgegv, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 641;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_9;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_deprecate );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 641;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_dgegv );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dgegv );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dgegv" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 641;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_10;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_dict_key_3 = const_str_plain_old_name;
        tmp_dict_value_3 = const_str_plain_dgegv;
        tmp_kw_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_message;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__dep_message );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dep_message );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_dep_message" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 641;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_4 = tmp_mvar_value_11;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        frame_3943c82d1d9210dd70373e2fc0afc43b->m_frame.f_lineno = 641;
        tmp_assign_source_21 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 641;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_dgegv, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_mvar_value_14;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__np );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__np );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 642;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_12;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_deprecate );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 642;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_sgegv );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sgegv );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sgegv" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 642;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = tmp_mvar_value_13;
        tmp_args_name_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
        tmp_dict_key_5 = const_str_plain_old_name;
        tmp_dict_value_5 = const_str_plain_sgegv;
        tmp_kw_name_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_message;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__dep_message );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dep_message );
        }

        if ( tmp_mvar_value_14 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_dep_message" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 642;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_6 = tmp_mvar_value_14;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        frame_3943c82d1d9210dd70373e2fc0afc43b->m_frame.f_lineno = 642;
        tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 642;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_sgegv, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_mvar_value_17;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__np );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__np );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 643;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_15;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_deprecate );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 643;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_zgegv );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zgegv );
        }

        if ( tmp_mvar_value_16 == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zgegv" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 643;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_4 = tmp_mvar_value_16;
        tmp_args_name_4 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
        tmp_dict_key_7 = const_str_plain_old_name;
        tmp_dict_value_7 = const_str_plain_zgegv;
        tmp_kw_name_4 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_message;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__dep_message );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dep_message );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_name_4 );
            Py_DECREF( tmp_kw_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_dep_message" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 643;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_8 = tmp_mvar_value_17;
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        frame_3943c82d1d9210dd70373e2fc0afc43b->m_frame.f_lineno = 643;
        tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_4, tmp_kw_name_4 );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 643;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_zgegv, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_mvar_value_19;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_cgegv );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cgegv );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cgegv" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 647;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_3 = tmp_mvar_value_18;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__flapack );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__flapack );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_flapack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 647;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = tmp_mvar_value_19;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_cgegv, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 647;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_mvar_value_21;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_dgegv );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dgegv );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dgegv" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 648;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_4 = tmp_mvar_value_20;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__flapack );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__flapack );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_flapack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 648;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = tmp_mvar_value_21;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_dgegv, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 648;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_mvar_value_23;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_sgegv );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sgegv );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sgegv" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 649;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_5 = tmp_mvar_value_22;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__flapack );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__flapack );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_flapack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 649;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = tmp_mvar_value_23;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_sgegv, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 649;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_mvar_value_25;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_zgegv );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zgegv );
        }

        if ( tmp_mvar_value_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zgegv" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 650;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_6 = tmp_mvar_value_24;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__flapack );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__flapack );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_flapack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 650;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = tmp_mvar_value_25;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_zgegv, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 650;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3943c82d1d9210dd70373e2fc0afc43b );
#endif
    popFrameStack();

    assertFrameObject( frame_3943c82d1d9210dd70373e2fc0afc43b );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3943c82d1d9210dd70373e2fc0afc43b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3943c82d1d9210dd70373e2fc0afc43b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3943c82d1d9210dd70373e2fc0afc43b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3943c82d1d9210dd70373e2fc0afc43b, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = PyDict_Copy( const_dict_17156676f7b26d62d1b4ba46d11faf3e );
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__lapack_alias, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_tuple_empty_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_25 = MAKE_FUNCTION_scipy$linalg$lapack$$$function_1_get_lapack_funcs( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_FUNCTION_scipy$linalg$lapack$$$function_2__compute_lwork(  );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__compute_lwork, tmp_assign_source_26 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$linalg$lapack );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
