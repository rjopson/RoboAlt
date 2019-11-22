/* Generated code for Python module 'scipy.optimize._trustregion_krylov'
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

/* The "_module_scipy$optimize$_trustregion_krylov" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_trustregion_krylov;
PyDictObject *moduledict_scipy$optimize$_trustregion_krylov;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_55703756f5bf30261e53c2490fd2503b;
static PyObject *const_str_digest_81aee9bbec729d7f62043a66a221af0c;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain_disp_false_tuple;
extern PyObject *const_float_minus_2_0;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_tol_rel_i;
extern PyObject *const_str_plain__trlib;
extern PyObject *const_str_plain__minimize_trust_region;
extern PyObject *const_str_plain___all__;
static PyObject *const_tuple_4d79acc1d7909a5527df9e03dff23e32_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_subproblem;
extern PyObject *const_str_plain_trust_region_options;
extern PyObject *const_str_plain_args;
static PyObject *const_list_str_plain__minimize_trust_krylov_list;
extern PyObject *const_str_plain_jac;
extern PyObject *const_str_plain__trustregion;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_plain__minimize_trust_region_tuple;
extern PyObject *const_float_1eminus_06;
static PyObject *const_str_digest_b8ac359f6b64d7f51447031254f83731;
extern PyObject *const_str_plain_x0;
static PyObject *const_str_digest_cd705ad986e87f99f5ce55f32e50687f;
extern PyObject *const_str_plain_tol_rel_b;
extern PyObject *const_str_plain_inexact;
extern PyObject *const_str_plain_hess;
extern PyObject *const_str_plain_hessp;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_get_trlib_quadratic_subproblem;
extern PyObject *const_float_1eminus_08;
extern PyObject *const_str_plain_None;
static PyObject *const_tuple_tuple_empty_none_none_none_true_tuple;
static PyObject *const_tuple_str_plain_get_trlib_quadratic_subproblem_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_854d60bca3fe68641468a4a2bec285cd;
extern PyObject *const_str_plain_fun;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_030849e941d353d91a7c651786d52415;
extern PyObject *const_float_minus_3_0;
extern PyObject *const_str_plain_disp;
extern PyObject *const_str_plain__minimize_trust_krylov;
static PyObject *const_str_digest_09a4c662a1bc8be2fec0eca055753b28;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___debug__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_55703756f5bf30261e53c2490fd2503b = UNSTREAM_STRING_ASCII( &constant_bin[ 5116544 ], 38, 0 );
    const_str_digest_81aee9bbec729d7f62043a66a221af0c = UNSTREAM_STRING_ASCII( &constant_bin[ 5117786 ], 34, 0 );
    const_tuple_4d79acc1d7909a5527df9e03dff23e32_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_4d79acc1d7909a5527df9e03dff23e32_tuple, 0, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_4d79acc1d7909a5527df9e03dff23e32_tuple, 1, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    PyTuple_SET_ITEM( const_tuple_4d79acc1d7909a5527df9e03dff23e32_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_4d79acc1d7909a5527df9e03dff23e32_tuple, 3, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_4d79acc1d7909a5527df9e03dff23e32_tuple, 4, const_str_plain_hess ); Py_INCREF( const_str_plain_hess );
    PyTuple_SET_ITEM( const_tuple_4d79acc1d7909a5527df9e03dff23e32_tuple, 5, const_str_plain_hessp ); Py_INCREF( const_str_plain_hessp );
    PyTuple_SET_ITEM( const_tuple_4d79acc1d7909a5527df9e03dff23e32_tuple, 6, const_str_plain_inexact ); Py_INCREF( const_str_plain_inexact );
    PyTuple_SET_ITEM( const_tuple_4d79acc1d7909a5527df9e03dff23e32_tuple, 7, const_str_plain_trust_region_options ); Py_INCREF( const_str_plain_trust_region_options );
    const_list_str_plain__minimize_trust_krylov_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain__minimize_trust_krylov_list, 0, const_str_plain__minimize_trust_krylov ); Py_INCREF( const_str_plain__minimize_trust_krylov );
    const_tuple_str_plain__minimize_trust_region_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__minimize_trust_region_tuple, 0, const_str_plain__minimize_trust_region ); Py_INCREF( const_str_plain__minimize_trust_region );
    const_str_digest_b8ac359f6b64d7f51447031254f83731 = UNSTREAM_STRING_ASCII( &constant_bin[ 5117820 ], 37, 0 );
    const_str_digest_cd705ad986e87f99f5ce55f32e50687f = UNSTREAM_STRING_ASCII( &constant_bin[ 5114404 ], 19, 0 );
    const_tuple_tuple_empty_none_none_none_true_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_none_none_none_true_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_none_none_none_true_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_none_none_none_true_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_none_none_none_true_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_none_none_none_true_tuple, 4, Py_True ); Py_INCREF( Py_True );
    const_tuple_str_plain_get_trlib_quadratic_subproblem_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_trlib_quadratic_subproblem_tuple, 0, const_str_plain_get_trlib_quadratic_subproblem ); Py_INCREF( const_str_plain_get_trlib_quadratic_subproblem );
    const_str_digest_854d60bca3fe68641468a4a2bec285cd = UNSTREAM_STRING_ASCII( &constant_bin[ 5117857 ], 43, 0 );
    const_str_digest_030849e941d353d91a7c651786d52415 = UNSTREAM_STRING_ASCII( &constant_bin[ 5117900 ], 387, 0 );
    const_str_digest_09a4c662a1bc8be2fec0eca055753b28 = UNSTREAM_STRING_ASCII( &constant_bin[ 5118287 ], 97, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_trustregion_krylov( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a9f04af62512f4c6dddb496536180c65;
static PyCodeObject *codeobj_47fcb75b5bbe87b7ee7ebf61c6ea74bd;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_b8ac359f6b64d7f51447031254f83731 );
    codeobj_a9f04af62512f4c6dddb496536180c65 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_854d60bca3fe68641468a4a2bec285cd, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_47fcb75b5bbe87b7ee7ebf61c6ea74bd = MAKE_CODEOBJ( module_filename_obj, const_str_plain__minimize_trust_krylov, 6, const_tuple_4d79acc1d7909a5527df9e03dff23e32_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_krylov$$$function_1__minimize_trust_krylov( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$optimize$_trustregion_krylov$$$function_1__minimize_trust_krylov( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fun = python_pars[ 0 ];
    PyObject *par_x0 = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_jac = python_pars[ 3 ];
    PyObject *par_hess = python_pars[ 4 ];
    PyObject *par_hessp = python_pars[ 5 ];
    PyObject *par_inexact = python_pars[ 6 ];
    PyObject *par_trust_region_options = python_pars[ 7 ];
    struct Nuitka_FrameObject *frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd, codeobj_47fcb75b5bbe87b7ee7ebf61c6ea74bd, module_scipy$optimize$_trustregion_krylov, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd = cache_frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_jac );
        tmp_compexpr_left_1 = par_jac;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_1 = const_str_digest_55703756f5bf30261e53c2490fd2503b;
            tmp_make_exception_arg_2 = const_str_digest_cd705ad986e87f99f5ce55f32e50687f;
            frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd->m_frame.f_lineno = 23;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1, tmp_make_exception_arg_2 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 23;
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
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_hess );
        tmp_compexpr_left_2 = par_hess;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_hessp );
        tmp_compexpr_left_3 = par_hessp;
        tmp_compexpr_right_3 = Py_None;
        tmp_and_right_value_1 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_3;
            tmp_make_exception_arg_3 = const_str_digest_09a4c662a1bc8be2fec0eca055753b28;
            frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd->m_frame.f_lineno = 26;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 26;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_inexact );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_inexact );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_dircall_arg4_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain__minimize_trust_region );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_trust_region );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_trust_region" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 51;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg1_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_fun );
            tmp_tuple_element_1 = par_fun;
            tmp_dircall_arg2_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_x0 );
            tmp_tuple_element_1 = par_x0;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_args;
            CHECK_OBJECT( par_args );
            tmp_dict_value_1 = par_args;
            tmp_dircall_arg3_1 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_jac;
            CHECK_OBJECT( par_jac );
            tmp_dict_value_2 = par_jac;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_hess;
            CHECK_OBJECT( par_hess );
            tmp_dict_value_3 = par_hess;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_4 = const_str_plain_hessp;
            CHECK_OBJECT( par_hessp );
            tmp_dict_value_4 = par_hessp;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_5 = const_str_plain_subproblem;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain_get_trlib_quadratic_subproblem );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_trlib_quadratic_subproblem );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_dircall_arg2_1 );
                Py_DECREF( tmp_dircall_arg3_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_trlib_quadratic_subproblem" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 53;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            tmp_dict_key_6 = const_str_plain_tol_rel_i;
            tmp_dict_value_6 = const_float_minus_2_0;
            tmp_kw_name_1 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_7 = const_str_plain_tol_rel_b;
            tmp_dict_value_7 = const_float_minus_3_0;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_8 = const_str_plain_disp;
            CHECK_OBJECT( par_trust_region_options );
            tmp_called_instance_1 = par_trust_region_options;
            frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd->m_frame.f_lineno = 55;
            tmp_dict_value_8 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_disp_false_tuple, 0 ) );

            if ( tmp_dict_value_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dircall_arg2_1 );
                Py_DECREF( tmp_dircall_arg3_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 55;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
            Py_DECREF( tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd->m_frame.f_lineno = 53;
            tmp_dict_value_5 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_dict_value_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dircall_arg2_1 );
                Py_DECREF( tmp_dircall_arg3_1 );

                exception_lineno = 53;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_5, tmp_dict_value_5 );
            Py_DECREF( tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( par_trust_region_options );
            tmp_dircall_arg4_1 = par_trust_region_options;
            Py_INCREF( tmp_dircall_arg1_1 );
            Py_INCREF( tmp_dircall_arg4_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
            }
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_dircall_arg1_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_dircall_arg2_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_dircall_arg3_2;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_dircall_arg4_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain__minimize_trust_region );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_trust_region );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_trust_region" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 59;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg1_2 = tmp_mvar_value_3;
            CHECK_OBJECT( par_fun );
            tmp_tuple_element_2 = par_fun;
            tmp_dircall_arg2_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_x0 );
            tmp_tuple_element_2 = par_x0;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_2 );
            tmp_dict_key_9 = const_str_plain_args;
            CHECK_OBJECT( par_args );
            tmp_dict_value_9 = par_args;
            tmp_dircall_arg3_2 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_9, tmp_dict_value_9 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_10 = const_str_plain_jac;
            CHECK_OBJECT( par_jac );
            tmp_dict_value_10 = par_jac;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_10, tmp_dict_value_10 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_11 = const_str_plain_hess;
            CHECK_OBJECT( par_hess );
            tmp_dict_value_11 = par_hess;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_11, tmp_dict_value_11 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_12 = const_str_plain_hessp;
            CHECK_OBJECT( par_hessp );
            tmp_dict_value_12 = par_hessp;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_12, tmp_dict_value_12 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_13 = const_str_plain_subproblem;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain_get_trlib_quadratic_subproblem );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_trlib_quadratic_subproblem );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_dircall_arg2_2 );
                Py_DECREF( tmp_dircall_arg3_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_trlib_quadratic_subproblem" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 61;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_4;
            tmp_dict_key_14 = const_str_plain_tol_rel_i;
            tmp_dict_value_14 = const_float_1eminus_08;
            tmp_kw_name_2 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_14, tmp_dict_value_14 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_15 = const_str_plain_tol_rel_b;
            tmp_dict_value_15 = const_float_1eminus_06;
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_15, tmp_dict_value_15 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_16 = const_str_plain_disp;
            CHECK_OBJECT( par_trust_region_options );
            tmp_called_instance_2 = par_trust_region_options;
            frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd->m_frame.f_lineno = 63;
            tmp_dict_value_16 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_disp_false_tuple, 0 ) );

            if ( tmp_dict_value_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dircall_arg2_2 );
                Py_DECREF( tmp_dircall_arg3_2 );
                Py_DECREF( tmp_kw_name_2 );

                exception_lineno = 63;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_16, tmp_dict_value_16 );
            Py_DECREF( tmp_dict_value_16 );
            assert( !(tmp_res != 0) );
            frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd->m_frame.f_lineno = 61;
            tmp_dict_value_13 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_dict_value_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dircall_arg2_2 );
                Py_DECREF( tmp_dircall_arg3_2 );

                exception_lineno = 61;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_13, tmp_dict_value_13 );
            Py_DECREF( tmp_dict_value_13 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( par_trust_region_options );
            tmp_dircall_arg4_2 = par_trust_region_options;
            Py_INCREF( tmp_dircall_arg1_2 );
            Py_INCREF( tmp_dircall_arg4_2 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
                tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
            }
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd,
        type_description_1,
        par_fun,
        par_x0,
        par_args,
        par_jac,
        par_hess,
        par_hessp,
        par_inexact,
        par_trust_region_options
    );


    // Release cached frame.
    if ( frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd == cache_frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd )
    {
        Py_DECREF( frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd );
    }
    cache_frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd = NULL;

    assertFrameObject( frame_47fcb75b5bbe87b7ee7ebf61c6ea74bd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_krylov$$$function_1__minimize_trust_krylov );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_hess );
    Py_DECREF( par_hess );
    par_hess = NULL;

    CHECK_OBJECT( (PyObject *)par_hessp );
    Py_DECREF( par_hessp );
    par_hessp = NULL;

    CHECK_OBJECT( (PyObject *)par_inexact );
    Py_DECREF( par_inexact );
    par_inexact = NULL;

    CHECK_OBJECT( (PyObject *)par_trust_region_options );
    Py_DECREF( par_trust_region_options );
    par_trust_region_options = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_hess );
    Py_DECREF( par_hess );
    par_hess = NULL;

    CHECK_OBJECT( (PyObject *)par_hessp );
    Py_DECREF( par_hessp );
    par_hessp = NULL;

    CHECK_OBJECT( (PyObject *)par_inexact );
    Py_DECREF( par_inexact );
    par_inexact = NULL;

    CHECK_OBJECT( (PyObject *)par_trust_region_options );
    Py_DECREF( par_trust_region_options );
    par_trust_region_options = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_krylov$$$function_1__minimize_trust_krylov );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_krylov$$$function_1__minimize_trust_krylov( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_krylov$$$function_1__minimize_trust_krylov,
        const_str_plain__minimize_trust_krylov,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_47fcb75b5bbe87b7ee7ebf61c6ea74bd,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_krylov,
        const_str_digest_030849e941d353d91a7c651786d52415,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_trustregion_krylov =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._trustregion_krylov",
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

MOD_INIT_DECL( scipy$optimize$_trustregion_krylov )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_trustregion_krylov );
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
    puts("scipy.optimize._trustregion_krylov: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._trustregion_krylov: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._trustregion_krylov: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_trustregion_krylov" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_trustregion_krylov = Py_InitModule4(
        "scipy.optimize._trustregion_krylov",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_trustregion_krylov = PyModule_Create( &mdef_scipy$optimize$_trustregion_krylov );
#endif

    moduledict_scipy$optimize$_trustregion_krylov = MODULE_DICT( module_scipy$optimize$_trustregion_krylov );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_trustregion_krylov,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_trustregion_krylov,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_trustregion_krylov,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_trustregion_krylov,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_trustregion_krylov );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_81aee9bbec729d7f62043a66a221af0c, module_scipy$optimize$_trustregion_krylov );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_a9f04af62512f4c6dddb496536180c65;
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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_a9f04af62512f4c6dddb496536180c65 = MAKE_MODULE_FRAME( codeobj_a9f04af62512f4c6dddb496536180c65, module_scipy$optimize$_trustregion_krylov );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a9f04af62512f4c6dddb496536180c65 );
    assert( Py_REFCNT( frame_a9f04af62512f4c6dddb496536180c65 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain__trustregion;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_trustregion_krylov;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain__minimize_trust_region_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_a9f04af62512f4c6dddb496536180c65->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$optimize$_trustregion_krylov,
                const_str_plain__minimize_trust_region,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain__minimize_trust_region );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain__minimize_trust_region, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain__trlib;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_trustregion_krylov;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_get_trlib_quadratic_subproblem_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_a9f04af62512f4c6dddb496536180c65->m_frame.f_lineno = 2;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_2 ) )
        {
           tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_scipy$optimize$_trustregion_krylov,
                const_str_plain_get_trlib_quadratic_subproblem,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_get_trlib_quadratic_subproblem );
        }

        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain_get_trlib_quadratic_subproblem, tmp_assign_source_5 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9f04af62512f4c6dddb496536180c65 );
#endif
    popFrameStack();

    assertFrameObject( frame_a9f04af62512f4c6dddb496536180c65 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9f04af62512f4c6dddb496536180c65 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a9f04af62512f4c6dddb496536180c65, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a9f04af62512f4c6dddb496536180c65->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a9f04af62512f4c6dddb496536180c65, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = LIST_COPY( const_list_str_plain__minimize_trust_krylov_list );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_tuple_empty_none_none_none_true_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_7 = MAKE_FUNCTION_scipy$optimize$_trustregion_krylov$$$function_1__minimize_trust_krylov( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain__minimize_trust_krylov, tmp_assign_source_7 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_krylov, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_trustregion_krylov );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
