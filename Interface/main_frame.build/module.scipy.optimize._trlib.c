/* Generated code for Python module 'scipy.optimize._trlib'
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

/* The "_module_scipy$optimize$_trlib" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_trlib;
PyDictObject *moduledict_scipy$optimize$_trlib;

/* The declarations of module constants used, if any. */
static PyObject *const_tuple_str_plain_TRLIBQuadraticSubproblem_tuple;
extern PyObject *const_tuple_a0f903686605ac910f391f0708b892cf_tuple;
static PyObject *const_str_plain_NUITKA_PACKAGE_scipy_optimize__trlib;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_float_minus_2_0;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_tol_rel_i;
extern PyObject *const_str_plain__trlib;
extern PyObject *const_str_plain_NUITKA_PACKAGE_scipy;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_dd8dd45248f6c165a897b40284fa605f_tuple;
static PyObject *const_tuple_5dcf393aa65016cfb7fda249386da73a_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_path;
static PyObject *const_str_digest_5f197eb347d57dc15adee1722274d2e0;
static PyObject *const_tuple_float_minus_2_0_float_minus_3_0_false_tuple;
extern PyObject *const_str_plain_jac;
static PyObject *const_str_plain_TRLIBQuadraticSubproblem;
static PyObject *const_list_b9cb32dc825e4ef2f071a0c008f0c6bf_list;
static PyObject *const_str_plain_subproblem_factory;
extern PyObject *const_str_plain_tol_rel_b;
static PyObject *const_tuple_cca160ecd1c016b03dc7a27510eae458_tuple;
extern PyObject *const_str_plain_hess;
extern PyObject *const_str_plain_hessp;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_get_trlib_quadratic_subproblem;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
static PyObject *const_str_digest_0e8aee801823fecf1b35dd4613e3525b;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_c5c8b2f89e87d60fc5e7a527c213efae;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_fun;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_disp;
extern PyObject *const_float_minus_3_0;
extern PyObject *const_str_plain_NUITKA_PACKAGE_scipy_optimize;
extern PyObject *const_str_plain_join;
static PyObject *const_str_digest_3656e9d7d3803ab98d1c627aaef1ec8b;
extern PyObject *const_str_plain_dirname;
static PyObject *const_str_digest_a485ed08679b5219de29c3814c723bcf;
extern PyObject *const_tuple_157b60fbe683cc9d845cc642b3a776ba_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_TRLIBQuadraticSubproblem_tuple = PyTuple_New( 1 );
    const_str_plain_TRLIBQuadraticSubproblem = UNSTREAM_STRING_ASCII( &constant_bin[ 5070045 ], 24, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_TRLIBQuadraticSubproblem_tuple, 0, const_str_plain_TRLIBQuadraticSubproblem ); Py_INCREF( const_str_plain_TRLIBQuadraticSubproblem );
    const_str_plain_NUITKA_PACKAGE_scipy_optimize__trlib = UNSTREAM_STRING_ASCII( &constant_bin[ 5070069 ], 36, 1 );
    const_tuple_dd8dd45248f6c165a897b40284fa605f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_dd8dd45248f6c165a897b40284fa605f_tuple, 0, const_str_plain_tol_rel_i ); Py_INCREF( const_str_plain_tol_rel_i );
    PyTuple_SET_ITEM( const_tuple_dd8dd45248f6c165a897b40284fa605f_tuple, 1, const_str_plain_tol_rel_b ); Py_INCREF( const_str_plain_tol_rel_b );
    PyTuple_SET_ITEM( const_tuple_dd8dd45248f6c165a897b40284fa605f_tuple, 2, const_str_plain_disp ); Py_INCREF( const_str_plain_disp );
    const_str_plain_subproblem_factory = UNSTREAM_STRING_ASCII( &constant_bin[ 5070105 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_dd8dd45248f6c165a897b40284fa605f_tuple, 3, const_str_plain_subproblem_factory ); Py_INCREF( const_str_plain_subproblem_factory );
    const_tuple_5dcf393aa65016cfb7fda249386da73a_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_5dcf393aa65016cfb7fda249386da73a_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_5dcf393aa65016cfb7fda249386da73a_tuple, 1, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_5dcf393aa65016cfb7fda249386da73a_tuple, 2, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_5dcf393aa65016cfb7fda249386da73a_tuple, 3, const_str_plain_hess ); Py_INCREF( const_str_plain_hess );
    PyTuple_SET_ITEM( const_tuple_5dcf393aa65016cfb7fda249386da73a_tuple, 4, const_str_plain_hessp ); Py_INCREF( const_str_plain_hessp );
    PyTuple_SET_ITEM( const_tuple_5dcf393aa65016cfb7fda249386da73a_tuple, 5, const_str_plain_tol_rel_i ); Py_INCREF( const_str_plain_tol_rel_i );
    PyTuple_SET_ITEM( const_tuple_5dcf393aa65016cfb7fda249386da73a_tuple, 6, const_str_plain_tol_rel_b ); Py_INCREF( const_str_plain_tol_rel_b );
    PyTuple_SET_ITEM( const_tuple_5dcf393aa65016cfb7fda249386da73a_tuple, 7, const_str_plain_disp ); Py_INCREF( const_str_plain_disp );
    const_str_digest_5f197eb347d57dc15adee1722274d2e0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5070123 ], 33, 0 );
    const_tuple_float_minus_2_0_float_minus_3_0_false_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_float_minus_2_0_float_minus_3_0_false_tuple, 0, const_float_minus_2_0 ); Py_INCREF( const_float_minus_2_0 );
    PyTuple_SET_ITEM( const_tuple_float_minus_2_0_float_minus_3_0_false_tuple, 1, const_float_minus_3_0 ); Py_INCREF( const_float_minus_3_0 );
    PyTuple_SET_ITEM( const_tuple_float_minus_2_0_float_minus_3_0_false_tuple, 2, Py_False ); Py_INCREF( Py_False );
    const_list_b9cb32dc825e4ef2f071a0c008f0c6bf_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_b9cb32dc825e4ef2f071a0c008f0c6bf_list, 0, const_str_plain_TRLIBQuadraticSubproblem ); Py_INCREF( const_str_plain_TRLIBQuadraticSubproblem );
    PyList_SET_ITEM( const_list_b9cb32dc825e4ef2f071a0c008f0c6bf_list, 1, const_str_plain_get_trlib_quadratic_subproblem ); Py_INCREF( const_str_plain_get_trlib_quadratic_subproblem );
    const_tuple_cca160ecd1c016b03dc7a27510eae458_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_cca160ecd1c016b03dc7a27510eae458_tuple, 0, const_str_plain_NUITKA_PACKAGE_scipy_optimize__trlib ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_scipy_optimize__trlib );
    PyTuple_SET_ITEM( const_tuple_cca160ecd1c016b03dc7a27510eae458_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_str_digest_0e8aee801823fecf1b35dd4613e3525b = UNSTREAM_STRING_ASCII( &constant_bin[ 5070156 ], 58, 0 );
    const_str_digest_c5c8b2f89e87d60fc5e7a527c213efae = UNSTREAM_STRING_ASCII( &constant_bin[ 5070214 ], 30, 0 );
    const_str_digest_3656e9d7d3803ab98d1c627aaef1ec8b = UNSTREAM_STRING_ASCII( &constant_bin[ 5070129 ], 15, 0 );
    const_str_digest_a485ed08679b5219de29c3814c723bcf = UNSTREAM_STRING_ASCII( &constant_bin[ 5070222 ], 21, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_trlib( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_95754366b9e3af62ec85f3c209a63ca6;
static PyCodeObject *codeobj_8009b0ab317277928f875938ba298cca;
static PyCodeObject *codeobj_7eac720c1c43b57f3a5e22902978324e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_5f197eb347d57dc15adee1722274d2e0 );
    codeobj_95754366b9e3af62ec85f3c209a63ca6 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_c5c8b2f89e87d60fc5e7a527c213efae, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_8009b0ab317277928f875938ba298cca = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_trlib_quadratic_subproblem, 6, const_tuple_dd8dd45248f6c165a897b40284fa605f_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7eac720c1c43b57f3a5e22902978324e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_subproblem_factory, 7, const_tuple_5dcf393aa65016cfb7fda249386da73a_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$optimize$_trlib$$$function_1_get_trlib_quadratic_subproblem( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trlib$$$function_1_get_trlib_quadratic_subproblem$$$function_1_subproblem_factory(  );


// The module function definitions.
static PyObject *impl_scipy$optimize$_trlib$$$function_1_get_trlib_quadratic_subproblem( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_tol_rel_i = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_tol_rel_b = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_disp = PyCell_NEW1( python_pars[ 2 ] );
    PyObject *var_subproblem_factory = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_FUNCTION_scipy$optimize$_trlib$$$function_1_get_trlib_quadratic_subproblem$$$function_1_subproblem_factory(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_disp;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[1] = par_tol_rel_b;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[2] = par_tol_rel_i;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[2] );


        assert( var_subproblem_factory == NULL );
        var_subproblem_factory = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT( var_subproblem_factory );
    tmp_return_value = var_subproblem_factory;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trlib$$$function_1_get_trlib_quadratic_subproblem );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_tol_rel_i );
    Py_DECREF( par_tol_rel_i );
    par_tol_rel_i = NULL;

    CHECK_OBJECT( (PyObject *)par_tol_rel_b );
    Py_DECREF( par_tol_rel_b );
    par_tol_rel_b = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)var_subproblem_factory );
    Py_DECREF( var_subproblem_factory );
    var_subproblem_factory = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trlib$$$function_1_get_trlib_quadratic_subproblem );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trlib$$$function_1_get_trlib_quadratic_subproblem$$$function_1_subproblem_factory( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_fun = python_pars[ 1 ];
    PyObject *par_jac = python_pars[ 2 ];
    PyObject *par_hess = python_pars[ 3 ];
    PyObject *par_hessp = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_7eac720c1c43b57f3a5e22902978324e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7eac720c1c43b57f3a5e22902978324e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7eac720c1c43b57f3a5e22902978324e, codeobj_7eac720c1c43b57f3a5e22902978324e, module_scipy$optimize$_trlib, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7eac720c1c43b57f3a5e22902978324e = cache_frame_7eac720c1c43b57f3a5e22902978324e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7eac720c1c43b57f3a5e22902978324e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7eac720c1c43b57f3a5e22902978324e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain_TRLIBQuadraticSubproblem );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TRLIBQuadraticSubproblem );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TRLIBQuadraticSubproblem" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 8;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_args_name_1 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_fun );
        tmp_tuple_element_1 = par_fun;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_jac );
        tmp_tuple_element_1 = par_jac;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( par_hess );
        tmp_tuple_element_1 = par_hess;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 3, tmp_tuple_element_1 );
        CHECK_OBJECT( par_hessp );
        tmp_tuple_element_1 = par_hessp;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 4, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_tol_rel_i;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "tol_rel_i" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 9;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = PyCell_GET( self->m_closure[2] );
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_tol_rel_b;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "tol_rel_b" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 10;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_2 = PyCell_GET( self->m_closure[1] );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_disp;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "disp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 11;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_3 = PyCell_GET( self->m_closure[0] );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_7eac720c1c43b57f3a5e22902978324e->m_frame.f_lineno = 8;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7eac720c1c43b57f3a5e22902978324e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7eac720c1c43b57f3a5e22902978324e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7eac720c1c43b57f3a5e22902978324e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7eac720c1c43b57f3a5e22902978324e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7eac720c1c43b57f3a5e22902978324e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7eac720c1c43b57f3a5e22902978324e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7eac720c1c43b57f3a5e22902978324e,
        type_description_1,
        par_x,
        par_fun,
        par_jac,
        par_hess,
        par_hessp,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_7eac720c1c43b57f3a5e22902978324e == cache_frame_7eac720c1c43b57f3a5e22902978324e )
    {
        Py_DECREF( frame_7eac720c1c43b57f3a5e22902978324e );
    }
    cache_frame_7eac720c1c43b57f3a5e22902978324e = NULL;

    assertFrameObject( frame_7eac720c1c43b57f3a5e22902978324e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trlib$$$function_1_get_trlib_quadratic_subproblem$$$function_1_subproblem_factory );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_hess );
    Py_DECREF( par_hess );
    par_hess = NULL;

    CHECK_OBJECT( (PyObject *)par_hessp );
    Py_DECREF( par_hessp );
    par_hessp = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_hess );
    Py_DECREF( par_hess );
    par_hess = NULL;

    CHECK_OBJECT( (PyObject *)par_hessp );
    Py_DECREF( par_hessp );
    par_hessp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trlib$$$function_1_get_trlib_quadratic_subproblem$$$function_1_subproblem_factory );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_trlib$$$function_1_get_trlib_quadratic_subproblem( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trlib$$$function_1_get_trlib_quadratic_subproblem,
        const_str_plain_get_trlib_quadratic_subproblem,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8009b0ab317277928f875938ba298cca,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trlib,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trlib$$$function_1_get_trlib_quadratic_subproblem$$$function_1_subproblem_factory(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trlib$$$function_1_get_trlib_quadratic_subproblem$$$function_1_subproblem_factory,
        const_str_plain_subproblem_factory,
#if PYTHON_VERSION >= 300
        const_str_digest_0e8aee801823fecf1b35dd4613e3525b,
#endif
        codeobj_7eac720c1c43b57f3a5e22902978324e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trlib,
        NULL,
        3
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_trlib =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._trlib",
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

MOD_INIT_DECL( scipy$optimize$_trlib )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_trlib );
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
    puts("scipy.optimize._trlib: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._trlib: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._trlib: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_trlib" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_trlib = Py_InitModule4(
        "scipy.optimize._trlib",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_trlib = PyModule_Create( &mdef_scipy$optimize$_trlib );
#endif

    moduledict_scipy$optimize$_trlib = MODULE_DICT( module_scipy$optimize$_trlib );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_trlib,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_trlib,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_trlib,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_trlib,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_trlib );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_a485ed08679b5219de29c3814c723bcf, module_scipy$optimize$_trlib );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain___name__ ),
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
#if 1
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_95754366b9e3af62ec85f3c209a63ca6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_95754366b9e3af62ec85f3c209a63ca6 = MAKE_MODULE_FRAME( codeobj_95754366b9e3af62ec85f3c209a63ca6, module_scipy$optimize$_trlib );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_95754366b9e3af62ec85f3c209a63ca6 );
    assert( Py_REFCNT( frame_95754366b9e3af62ec85f3c209a63ca6 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_3;
        frame_95754366b9e3af62ec85f3c209a63ca6->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely( module != NULL ))
            {
                tmp_source_name_1 = PyObject_GetAttr( module, const_str_plain_path );
            }
            else
            {
                tmp_source_name_1 = NULL;
            }
        }

        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dirname );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = module_filename_obj;
        frame_95754366b9e3af62ec85f3c209a63ca6->m_frame.f_lineno = 1;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyList_New( 4 );
        PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
        frame_95754366b9e3af62ec85f3c209a63ca6->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely( module != NULL ))
            {
                tmp_source_name_2 = PyObject_GetAttr( module, const_str_plain_path );
            }
            else
            {
                tmp_source_name_2 = NULL;
            }
        }

        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_95754366b9e3af62ec85f3c209a63ca6->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely( module != NULL ))
            {
                tmp_called_instance_1 = PyObject_GetAttr( module, const_str_plain_environ );
            }
            else
            {
                tmp_called_instance_1 = NULL;
            }
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_95754366b9e3af62ec85f3c209a63ca6->m_frame.f_lineno = 1;
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_a0f903686605ac910f391f0708b892cf_tuple, 0 ) );

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = const_str_digest_3656e9d7d3803ab98d1c627aaef1ec8b;
        frame_95754366b9e3af62ec85f3c209a63ca6->m_frame.f_lineno = 1;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
        frame_95754366b9e3af62ec85f3c209a63ca6->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely( module != NULL ))
            {
                tmp_source_name_3 = PyObject_GetAttr( module, const_str_plain_path );
            }
            else
            {
                tmp_source_name_3 = NULL;
            }
        }

        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_join );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_95754366b9e3af62ec85f3c209a63ca6->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely( module != NULL ))
            {
                tmp_called_instance_2 = PyObject_GetAttr( module, const_str_plain_environ );
            }
            else
            {
                tmp_called_instance_2 = NULL;
            }
        }

        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_95754366b9e3af62ec85f3c209a63ca6->m_frame.f_lineno = 1;
        tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_157b60fbe683cc9d845cc642b3a776ba_tuple, 0 ) );

        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = const_str_plain__trlib;
        frame_95754366b9e3af62ec85f3c209a63ca6->m_frame.f_lineno = 1;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_assign_source_3, 2, tmp_list_element_1 );
        frame_95754366b9e3af62ec85f3c209a63ca6->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely( module != NULL ))
            {
                tmp_called_instance_3 = PyObject_GetAttr( module, const_str_plain_environ );
            }
            else
            {
                tmp_called_instance_3 = NULL;
            }
        }

        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_95754366b9e3af62ec85f3c209a63ca6->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_cca160ecd1c016b03dc7a27510eae458_tuple, 0 ) );

        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_assign_source_3, 3, tmp_list_element_1 );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain__trlib;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_trlib;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_TRLIBQuadraticSubproblem_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_95754366b9e3af62ec85f3c209a63ca6->m_frame.f_lineno = 1;
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
           tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$optimize$_trlib,
                const_str_plain_TRLIBQuadraticSubproblem,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_TRLIBQuadraticSubproblem );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain_TRLIBQuadraticSubproblem, tmp_assign_source_5 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_95754366b9e3af62ec85f3c209a63ca6 );
#endif
    popFrameStack();

    assertFrameObject( frame_95754366b9e3af62ec85f3c209a63ca6 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_95754366b9e3af62ec85f3c209a63ca6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_95754366b9e3af62ec85f3c209a63ca6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_95754366b9e3af62ec85f3c209a63ca6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_95754366b9e3af62ec85f3c209a63ca6, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = LIST_COPY( const_list_b9cb32dc825e4ef2f071a0c008f0c6bf_list );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_float_minus_2_0_float_minus_3_0_false_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_7 = MAKE_FUNCTION_scipy$optimize$_trlib$$$function_1_get_trlib_quadratic_subproblem( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain_get_trlib_quadratic_subproblem, tmp_assign_source_7 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 1 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trlib, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_trlib );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
