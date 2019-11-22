/* Generated code for Python module 'numpy.core._asarray'
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

/* The "_module_numpy$core$_asarray" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core$_asarray;
PyDictObject *moduledict_numpy$core$_asarray;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_require;
extern PyObject *const_str_plain_flags;
extern PyObject *const_str_plain_remove;
extern PyObject *const_str_plain_subok;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_813b4c0f5ee7ed0050a1df4133c52d5c;
static PyObject *const_tuple_str_plain_x_str_plain_possible_flags_tuple;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_c51f6a82d2075abf89f515aec61a27fb;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_tuple_str_plain_C_tuple;
extern PyObject *const_str_plain___all__;
static PyObject *const_dict_c3137c555040ada2ff375633dcce79e6;
static PyObject *const_list_f481b4ea616c8821e83f9eb29bf89d53_list;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_f9f89c3f77924130eb3dd6936723cac6;
static PyObject *const_dict_2096f157ae49250e3f4281e9d4f73ff2;
extern PyObject *const_tuple_str_plain_numpy_tuple;
extern PyObject *const_str_plain_ndmin;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_copy;
extern PyObject *const_tuple_str_plain_F_tuple;
extern PyObject *const_str_plain_overrides;
extern PyObject *const_str_plain_upper;
static PyObject *const_str_digest_068fe55c19d4c417463821c0fe6fb9b4;
extern PyObject *const_str_plain_asanyarray;
extern PyObject *const_str_plain_a;
static PyObject *const_str_digest_d5791532c3877899dfa2c8ced1a510db;
static PyObject *const_set_db6a28b89a726ba35ec1b92879dad839;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_multiarray;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_F;
static PyObject *const_str_plain_possible_flags;
extern PyObject *const_tuple_str_plain_a_str_plain_dtype_str_plain_order_tuple;
static PyObject *const_str_plain_requirements;
extern PyObject *const_str_plain_prop;
extern PyObject *const_str_plain_origin;
extern PyObject *const_tuple_str_plain_E_tuple;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_56f8d9cddd51fea70f5dcc173311514f;
extern PyObject *const_str_plain_ascontiguousarray;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_C;
static PyObject *const_str_digest_4ec747bdfc752fc1c59d6bbb5e27f269;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_angle_setcontraction;
extern PyObject *const_str_plain_arr;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_digest_438a8d9ba1582b1ebf08e55dfd20d322;
extern PyObject *const_str_plain_A;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_E;
static PyObject *const_tuple_d8acc74619c29fee9de4ab42a267b386_tuple;
extern PyObject *const_tuple_str_plain_a_str_plain_dtype_tuple;
extern PyObject *const_str_plain_asfortranarray;
extern PyObject *const_tuple_str_plain_set_module_tuple;
static PyObject *const_str_digest_173e7e2fb79de10d65cd4ca014ea9c98;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_tuple_str_plain_array_tuple;
extern PyObject *const_str_plain_set_module;
static PyObject *const_dict_3603d2fb8f6a0ddcb572a5ba3520646a;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_b51d4c467b640cf940e634f1bf6a5588;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_order;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_813b4c0f5ee7ed0050a1df4133c52d5c = UNSTREAM_STRING_ASCII( &constant_bin[ 2387106 ], 150, 0 );
    const_tuple_str_plain_x_str_plain_possible_flags_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_possible_flags_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_possible_flags = UNSTREAM_STRING_ASCII( &constant_bin[ 2387256 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_possible_flags_tuple, 1, const_str_plain_possible_flags ); Py_INCREF( const_str_plain_possible_flags );
    const_str_digest_c51f6a82d2075abf89f515aec61a27fb = UNSTREAM_STRING_ASCII( &constant_bin[ 2387270 ], 22, 0 );
    const_dict_c3137c555040ada2ff375633dcce79e6 = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_c3137c555040ada2ff375633dcce79e6, const_str_plain_copy, Py_False );
    PyDict_SetItem( const_dict_c3137c555040ada2ff375633dcce79e6, const_str_plain_order, const_str_plain_C );
    PyDict_SetItem( const_dict_c3137c555040ada2ff375633dcce79e6, const_str_plain_ndmin, const_int_pos_1 );
    assert( PyDict_Size( const_dict_c3137c555040ada2ff375633dcce79e6 ) == 3 );
    const_list_f481b4ea616c8821e83f9eb29bf89d53_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_f481b4ea616c8821e83f9eb29bf89d53_list, 0, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyList_SET_ITEM( const_list_f481b4ea616c8821e83f9eb29bf89d53_list, 1, const_str_plain_asanyarray ); Py_INCREF( const_str_plain_asanyarray );
    PyList_SET_ITEM( const_list_f481b4ea616c8821e83f9eb29bf89d53_list, 2, const_str_plain_ascontiguousarray ); Py_INCREF( const_str_plain_ascontiguousarray );
    PyList_SET_ITEM( const_list_f481b4ea616c8821e83f9eb29bf89d53_list, 3, const_str_plain_asfortranarray ); Py_INCREF( const_str_plain_asfortranarray );
    PyList_SET_ITEM( const_list_f481b4ea616c8821e83f9eb29bf89d53_list, 4, const_str_plain_require ); Py_INCREF( const_str_plain_require );
    const_str_digest_f9f89c3f77924130eb3dd6936723cac6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2387292 ], 37, 0 );
    const_dict_2096f157ae49250e3f4281e9d4f73ff2 = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_2096f157ae49250e3f4281e9d4f73ff2, const_str_plain_copy, Py_False );
    PyDict_SetItem( const_dict_2096f157ae49250e3f4281e9d4f73ff2, const_str_plain_order, const_str_plain_F );
    PyDict_SetItem( const_dict_2096f157ae49250e3f4281e9d4f73ff2, const_str_plain_ndmin, const_int_pos_1 );
    assert( PyDict_Size( const_dict_2096f157ae49250e3f4281e9d4f73ff2 ) == 3 );
    const_str_digest_068fe55c19d4c417463821c0fe6fb9b4 = UNSTREAM_STRING_ASCII( &constant_bin[ 2387329 ], 1642, 0 );
    const_str_digest_d5791532c3877899dfa2c8ced1a510db = UNSTREAM_STRING_ASCII( &constant_bin[ 2388971 ], 2222, 0 );
    const_set_db6a28b89a726ba35ec1b92879dad839 = PySet_New( NULL );
    PySet_Add( const_set_db6a28b89a726ba35ec1b92879dad839, const_str_plain_C );
    PySet_Add( const_set_db6a28b89a726ba35ec1b92879dad839, const_str_plain_F );
    assert( PySet_Size( const_set_db6a28b89a726ba35ec1b92879dad839 ) == 2 );
    const_str_plain_requirements = UNSTREAM_STRING_ASCII( &constant_bin[ 546040 ], 12, 1 );
    const_str_digest_56f8d9cddd51fea70f5dcc173311514f = UNSTREAM_STRING_ASCII( &constant_bin[ 2391193 ], 962, 0 );
    const_str_digest_4ec747bdfc752fc1c59d6bbb5e27f269 = UNSTREAM_STRING_ASCII( &constant_bin[ 2392155 ], 984, 0 );
    const_tuple_d8acc74619c29fee9de4ab42a267b386_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_d8acc74619c29fee9de4ab42a267b386_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_d8acc74619c29fee9de4ab42a267b386_tuple, 1, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_d8acc74619c29fee9de4ab42a267b386_tuple, 2, const_str_plain_requirements ); Py_INCREF( const_str_plain_requirements );
    PyTuple_SET_ITEM( const_tuple_d8acc74619c29fee9de4ab42a267b386_tuple, 3, const_str_plain_possible_flags ); Py_INCREF( const_str_plain_possible_flags );
    PyTuple_SET_ITEM( const_tuple_d8acc74619c29fee9de4ab42a267b386_tuple, 4, const_str_plain_subok ); Py_INCREF( const_str_plain_subok );
    PyTuple_SET_ITEM( const_tuple_d8acc74619c29fee9de4ab42a267b386_tuple, 5, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    PyTuple_SET_ITEM( const_tuple_d8acc74619c29fee9de4ab42a267b386_tuple, 6, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_d8acc74619c29fee9de4ab42a267b386_tuple, 7, const_str_plain_prop ); Py_INCREF( const_str_plain_prop );
    const_str_digest_173e7e2fb79de10d65cd4ca014ea9c98 = UNSTREAM_STRING_ASCII( &constant_bin[ 2393139 ], 28, 0 );
    const_dict_3603d2fb8f6a0ddcb572a5ba3520646a = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2393167 ], 181 );
    const_str_digest_b51d4c467b640cf940e634f1bf6a5588 = UNSTREAM_STRING_ASCII( &constant_bin[ 2393348 ], 2053, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$core$_asarray( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e777b3c7ae1cb6b6fbe136e45d5b8fcb;
static PyCodeObject *codeobj_04d19958886684a83fac68ea9c4a1259;
static PyCodeObject *codeobj_9ac90a71883fb428aa4614fc6653794a;
static PyCodeObject *codeobj_6b4ef2ccce9dd9720a5e7184a2646a8b;
static PyCodeObject *codeobj_88c3018a2e3ecb5043db8394fc05c0df;
static PyCodeObject *codeobj_ae8b4ca6ec3b66210be8313b123ff11d;
static PyCodeObject *codeobj_eb6f068954eab48b29bed6b7c95159d6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_c51f6a82d2075abf89f515aec61a27fb );
    codeobj_e777b3c7ae1cb6b6fbe136e45d5b8fcb = MAKE_CODEOBJ( module_filename_obj, const_str_digest_173e7e2fb79de10d65cd4ca014ea9c98, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_04d19958886684a83fac68ea9c4a1259 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_setcontraction, 300, const_tuple_str_plain_x_str_plain_possible_flags_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9ac90a71883fb428aa4614fc6653794a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asanyarray, 88, const_tuple_str_plain_a_str_plain_dtype_str_plain_order_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6b4ef2ccce9dd9720a5e7184a2646a8b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asarray, 16, const_tuple_str_plain_a_str_plain_dtype_str_plain_order_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_88c3018a2e3ecb5043db8394fc05c0df = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ascontiguousarray, 141, const_tuple_str_plain_a_str_plain_dtype_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ae8b4ca6ec3b66210be8313b123ff11d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asfortranarray, 182, const_tuple_str_plain_a_str_plain_dtype_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_eb6f068954eab48b29bed6b7c95159d6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_require, 223, const_tuple_d8acc74619c29fee9de4ab42a267b386_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$core$_asarray$$$function_1_asarray( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_asarray$$$function_2_asanyarray( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_asarray$$$function_3_ascontiguousarray( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_asarray$$$function_4_asfortranarray( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_asarray$$$function_5_require( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$core$_asarray$$$function_1_asarray( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_dtype = python_pars[ 1 ];
    PyObject *par_order = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_6b4ef2ccce9dd9720a5e7184a2646a8b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_6b4ef2ccce9dd9720a5e7184a2646a8b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6b4ef2ccce9dd9720a5e7184a2646a8b, codeobj_6b4ef2ccce9dd9720a5e7184a2646a8b, module_numpy$core$_asarray, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6b4ef2ccce9dd9720a5e7184a2646a8b = cache_frame_6b4ef2ccce9dd9720a5e7184a2646a8b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6b4ef2ccce9dd9720a5e7184a2646a8b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6b4ef2ccce9dd9720a5e7184a2646a8b ) == 2 ); // Frame stack

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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_dtype );
        tmp_tuple_element_1 = par_dtype;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_copy;
        tmp_dict_value_1 = Py_False;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_order;
        CHECK_OBJECT( par_order );
        tmp_dict_value_2 = par_order;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_6b4ef2ccce9dd9720a5e7184a2646a8b->m_frame.f_lineno = 85;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b4ef2ccce9dd9720a5e7184a2646a8b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b4ef2ccce9dd9720a5e7184a2646a8b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b4ef2ccce9dd9720a5e7184a2646a8b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6b4ef2ccce9dd9720a5e7184a2646a8b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6b4ef2ccce9dd9720a5e7184a2646a8b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6b4ef2ccce9dd9720a5e7184a2646a8b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6b4ef2ccce9dd9720a5e7184a2646a8b,
        type_description_1,
        par_a,
        par_dtype,
        par_order
    );


    // Release cached frame.
    if ( frame_6b4ef2ccce9dd9720a5e7184a2646a8b == cache_frame_6b4ef2ccce9dd9720a5e7184a2646a8b )
    {
        Py_DECREF( frame_6b4ef2ccce9dd9720a5e7184a2646a8b );
    }
    cache_frame_6b4ef2ccce9dd9720a5e7184a2646a8b = NULL;

    assertFrameObject( frame_6b4ef2ccce9dd9720a5e7184a2646a8b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_asarray$$$function_1_asarray );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_asarray$$$function_1_asarray );
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


static PyObject *impl_numpy$core$_asarray$$$function_2_asanyarray( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_dtype = python_pars[ 1 ];
    PyObject *par_order = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_9ac90a71883fb428aa4614fc6653794a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9ac90a71883fb428aa4614fc6653794a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9ac90a71883fb428aa4614fc6653794a, codeobj_9ac90a71883fb428aa4614fc6653794a, module_numpy$core$_asarray, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9ac90a71883fb428aa4614fc6653794a = cache_frame_9ac90a71883fb428aa4614fc6653794a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9ac90a71883fb428aa4614fc6653794a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9ac90a71883fb428aa4614fc6653794a ) == 2 ); // Frame stack

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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 138;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_dtype );
        tmp_tuple_element_1 = par_dtype;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_copy;
        tmp_dict_value_1 = Py_False;
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_order;
        CHECK_OBJECT( par_order );
        tmp_dict_value_2 = par_order;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_subok;
        tmp_dict_value_3 = Py_True;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_9ac90a71883fb428aa4614fc6653794a->m_frame.f_lineno = 138;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ac90a71883fb428aa4614fc6653794a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ac90a71883fb428aa4614fc6653794a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ac90a71883fb428aa4614fc6653794a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9ac90a71883fb428aa4614fc6653794a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9ac90a71883fb428aa4614fc6653794a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9ac90a71883fb428aa4614fc6653794a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9ac90a71883fb428aa4614fc6653794a,
        type_description_1,
        par_a,
        par_dtype,
        par_order
    );


    // Release cached frame.
    if ( frame_9ac90a71883fb428aa4614fc6653794a == cache_frame_9ac90a71883fb428aa4614fc6653794a )
    {
        Py_DECREF( frame_9ac90a71883fb428aa4614fc6653794a );
    }
    cache_frame_9ac90a71883fb428aa4614fc6653794a = NULL;

    assertFrameObject( frame_9ac90a71883fb428aa4614fc6653794a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_asarray$$$function_2_asanyarray );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_asarray$$$function_2_asanyarray );
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


static PyObject *impl_numpy$core$_asarray$$$function_3_ascontiguousarray( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_dtype = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_88c3018a2e3ecb5043db8394fc05c0df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_88c3018a2e3ecb5043db8394fc05c0df = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_88c3018a2e3ecb5043db8394fc05c0df, codeobj_88c3018a2e3ecb5043db8394fc05c0df, module_numpy$core$_asarray, sizeof(void *)+sizeof(void *) );
    frame_88c3018a2e3ecb5043db8394fc05c0df = cache_frame_88c3018a2e3ecb5043db8394fc05c0df;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_88c3018a2e3ecb5043db8394fc05c0df );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_88c3018a2e3ecb5043db8394fc05c0df ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_dtype );
        tmp_tuple_element_1 = par_dtype;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_c3137c555040ada2ff375633dcce79e6 );
        frame_88c3018a2e3ecb5043db8394fc05c0df->m_frame.f_lineno = 179;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_88c3018a2e3ecb5043db8394fc05c0df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_88c3018a2e3ecb5043db8394fc05c0df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_88c3018a2e3ecb5043db8394fc05c0df );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_88c3018a2e3ecb5043db8394fc05c0df, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_88c3018a2e3ecb5043db8394fc05c0df->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_88c3018a2e3ecb5043db8394fc05c0df, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_88c3018a2e3ecb5043db8394fc05c0df,
        type_description_1,
        par_a,
        par_dtype
    );


    // Release cached frame.
    if ( frame_88c3018a2e3ecb5043db8394fc05c0df == cache_frame_88c3018a2e3ecb5043db8394fc05c0df )
    {
        Py_DECREF( frame_88c3018a2e3ecb5043db8394fc05c0df );
    }
    cache_frame_88c3018a2e3ecb5043db8394fc05c0df = NULL;

    assertFrameObject( frame_88c3018a2e3ecb5043db8394fc05c0df );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_asarray$$$function_3_ascontiguousarray );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$core$_asarray$$$function_3_ascontiguousarray );
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


static PyObject *impl_numpy$core$_asarray$$$function_4_asfortranarray( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_dtype = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_ae8b4ca6ec3b66210be8313b123ff11d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae8b4ca6ec3b66210be8313b123ff11d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ae8b4ca6ec3b66210be8313b123ff11d, codeobj_ae8b4ca6ec3b66210be8313b123ff11d, module_numpy$core$_asarray, sizeof(void *)+sizeof(void *) );
    frame_ae8b4ca6ec3b66210be8313b123ff11d = cache_frame_ae8b4ca6ec3b66210be8313b123ff11d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ae8b4ca6ec3b66210be8313b123ff11d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ae8b4ca6ec3b66210be8313b123ff11d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 220;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_dtype );
        tmp_tuple_element_1 = par_dtype;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_2096f157ae49250e3f4281e9d4f73ff2 );
        frame_ae8b4ca6ec3b66210be8313b123ff11d->m_frame.f_lineno = 220;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ae8b4ca6ec3b66210be8313b123ff11d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ae8b4ca6ec3b66210be8313b123ff11d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ae8b4ca6ec3b66210be8313b123ff11d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ae8b4ca6ec3b66210be8313b123ff11d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ae8b4ca6ec3b66210be8313b123ff11d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ae8b4ca6ec3b66210be8313b123ff11d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ae8b4ca6ec3b66210be8313b123ff11d,
        type_description_1,
        par_a,
        par_dtype
    );


    // Release cached frame.
    if ( frame_ae8b4ca6ec3b66210be8313b123ff11d == cache_frame_ae8b4ca6ec3b66210be8313b123ff11d )
    {
        Py_DECREF( frame_ae8b4ca6ec3b66210be8313b123ff11d );
    }
    cache_frame_ae8b4ca6ec3b66210be8313b123ff11d = NULL;

    assertFrameObject( frame_ae8b4ca6ec3b66210be8313b123ff11d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_asarray$$$function_4_asfortranarray );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$core$_asarray$$$function_4_asfortranarray );
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


static PyObject *impl_numpy$core$_asarray$$$function_5_require( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_dtype = python_pars[ 1 ];
    PyObject *par_requirements = python_pars[ 2 ];
    PyObject *var_possible_flags = NULL;
    nuitka_bool var_subok = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_order = NULL;
    PyObject *var_arr = NULL;
    PyObject *var_prop = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_setcontraction_1__$0 = NULL;
    PyObject *tmp_setcontraction_1__contraction = NULL;
    PyObject *tmp_setcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_eb6f068954eab48b29bed6b7c95159d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_04d19958886684a83fac68ea9c4a1259_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_04d19958886684a83fac68ea9c4a1259_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_eb6f068954eab48b29bed6b7c95159d6 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_Copy( const_dict_3603d2fb8f6a0ddcb572a5ba3520646a );
        assert( var_possible_flags == NULL );
        var_possible_flags = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eb6f068954eab48b29bed6b7c95159d6, codeobj_eb6f068954eab48b29bed6b7c95159d6, module_numpy$core$_asarray, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_eb6f068954eab48b29bed6b7c95159d6 = cache_frame_eb6f068954eab48b29bed6b7c95159d6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eb6f068954eab48b29bed6b7c95159d6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eb6f068954eab48b29bed6b7c95159d6 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_requirements );
        tmp_operand_name_1 = par_requirements;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;
            type_description_1 = "oooobooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_asanyarray );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asanyarray" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 298;
                type_description_1 = "oooobooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_a );
            tmp_tuple_element_1 = par_a;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_dtype;
            CHECK_OBJECT( par_dtype );
            tmp_dict_value_1 = par_dtype;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_eb6f068954eab48b29bed6b7c95159d6->m_frame.f_lineno = 298;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 298;
                type_description_1 = "oooobooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            // Tried code:
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_iter_arg_1;
                CHECK_OBJECT( par_requirements );
                tmp_iter_arg_1 = par_requirements;
                tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 300;
                    type_description_1 = "oooobooo";
                    goto try_except_handler_2;
                }
                assert( tmp_setcontraction_1__$0 == NULL );
                tmp_setcontraction_1__$0 = tmp_assign_source_3;
            }
            {
                PyObject *tmp_assign_source_4;
                tmp_assign_source_4 = PySet_New( NULL );
                assert( tmp_setcontraction_1__contraction == NULL );
                tmp_setcontraction_1__contraction = tmp_assign_source_4;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_04d19958886684a83fac68ea9c4a1259_2, codeobj_04d19958886684a83fac68ea9c4a1259, module_numpy$core$_asarray, sizeof(void *)+sizeof(void *) );
            frame_04d19958886684a83fac68ea9c4a1259_2 = cache_frame_04d19958886684a83fac68ea9c4a1259_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_04d19958886684a83fac68ea9c4a1259_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_04d19958886684a83fac68ea9c4a1259_2 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_5;
                CHECK_OBJECT( tmp_setcontraction_1__$0 );
                tmp_next_source_1 = tmp_setcontraction_1__$0;
                tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
                if ( tmp_assign_source_5 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_1;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_2 = "oo";
                        exception_lineno = 300;
                        goto try_except_handler_3;
                    }
                }

                {
                    PyObject *old = tmp_setcontraction_1__iter_value_0;
                    tmp_setcontraction_1__iter_value_0 = tmp_assign_source_5;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_6;
                CHECK_OBJECT( tmp_setcontraction_1__iter_value_0 );
                tmp_assign_source_6 = tmp_setcontraction_1__iter_value_0;
                {
                    PyObject *old = outline_0_var_x;
                    outline_0_var_x = tmp_assign_source_6;
                    Py_INCREF( outline_0_var_x );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_dict_name_1;
                PyObject *tmp_key_name_1;
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT( tmp_setcontraction_1__contraction );
                tmp_append_list_1 = tmp_setcontraction_1__contraction;
                CHECK_OBJECT( var_possible_flags );
                tmp_dict_name_1 = var_possible_flags;
                CHECK_OBJECT( outline_0_var_x );
                tmp_called_instance_1 = outline_0_var_x;
                frame_04d19958886684a83fac68ea9c4a1259_2->m_frame.f_lineno = 300;
                tmp_key_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_upper );
                if ( tmp_key_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 300;
                    type_description_2 = "oo";
                    goto try_except_handler_3;
                }
                tmp_append_value_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
                Py_DECREF( tmp_key_name_1 );
                if ( tmp_append_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 300;
                    type_description_2 = "oo";
                    goto try_except_handler_3;
                }
                assert( PySet_Check( tmp_append_list_1 ) );
                tmp_res = PySet_Add( tmp_append_list_1, tmp_append_value_1 );
                Py_DECREF( tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 300;
                    type_description_2 = "oo";
                    goto try_except_handler_3;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 300;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT( tmp_setcontraction_1__contraction );
            tmp_assign_source_2 = tmp_setcontraction_1__contraction;
            Py_INCREF( tmp_assign_source_2 );
            goto try_return_handler_3;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$core$_asarray$$$function_5_require );
            return NULL;
            // Return handler code:
            try_return_handler_3:;
            CHECK_OBJECT( (PyObject *)tmp_setcontraction_1__$0 );
            Py_DECREF( tmp_setcontraction_1__$0 );
            tmp_setcontraction_1__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_setcontraction_1__contraction );
            Py_DECREF( tmp_setcontraction_1__contraction );
            tmp_setcontraction_1__contraction = NULL;

            Py_XDECREF( tmp_setcontraction_1__iter_value_0 );
            tmp_setcontraction_1__iter_value_0 = NULL;

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

            CHECK_OBJECT( (PyObject *)tmp_setcontraction_1__$0 );
            Py_DECREF( tmp_setcontraction_1__$0 );
            tmp_setcontraction_1__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_setcontraction_1__contraction );
            Py_DECREF( tmp_setcontraction_1__contraction );
            tmp_setcontraction_1__contraction = NULL;

            Py_XDECREF( tmp_setcontraction_1__iter_value_0 );
            tmp_setcontraction_1__iter_value_0 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto frame_exception_exit_2;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION( frame_04d19958886684a83fac68ea9c4a1259_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_2:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_04d19958886684a83fac68ea9c4a1259_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_2;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_04d19958886684a83fac68ea9c4a1259_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_04d19958886684a83fac68ea9c4a1259_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_04d19958886684a83fac68ea9c4a1259_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_04d19958886684a83fac68ea9c4a1259_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_04d19958886684a83fac68ea9c4a1259_2,
                type_description_2,
                outline_0_var_x,
                var_possible_flags
            );


            // Release cached frame.
            if ( frame_04d19958886684a83fac68ea9c4a1259_2 == cache_frame_04d19958886684a83fac68ea9c4a1259_2 )
            {
                Py_DECREF( frame_04d19958886684a83fac68ea9c4a1259_2 );
            }
            cache_frame_04d19958886684a83fac68ea9c4a1259_2 = NULL;

            assertFrameObject( frame_04d19958886684a83fac68ea9c4a1259_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "oooobooo";
            goto try_except_handler_2;
            skip_nested_handling_1:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$core$_asarray$$$function_5_require );
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            Py_XDECREF( outline_0_var_x );
            outline_0_var_x = NULL;

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

            Py_XDECREF( outline_0_var_x );
            outline_0_var_x = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( numpy$core$_asarray$$$function_5_require );
            return NULL;
            outline_exception_1:;
            exception_lineno = 300;
            goto frame_exception_exit_1;
            outline_result_1:;
            {
                PyObject *old = par_requirements;
                assert( old != NULL );
                par_requirements = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = const_str_plain_E;
        CHECK_OBJECT( par_requirements );
        tmp_compexpr_right_1 = par_requirements;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "oooobooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_requirements );
            tmp_called_instance_2 = par_requirements;
            frame_eb6f068954eab48b29bed6b7c95159d6->m_frame.f_lineno = 303;
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_remove, &PyTuple_GET_ITEM( const_tuple_str_plain_E_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 303;
                type_description_1 = "oooobooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            nuitka_bool tmp_assign_source_7;
            tmp_assign_source_7 = NUITKA_BOOL_FALSE;
            var_subok = tmp_assign_source_7;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_assign_source_8;
            tmp_assign_source_8 = NUITKA_BOOL_TRUE;
            var_subok = tmp_assign_source_8;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_str_plain_A;
        assert( var_order == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_order = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_requirements );
        tmp_compexpr_left_2 = par_requirements;
        tmp_compexpr_right_2 = PySet_New( const_set_db6a28b89a726ba35ec1b92879dad839 );
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 309;
            type_description_1 = "oooobooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_f9f89c3f77924130eb3dd6936723cac6;
            frame_eb6f068954eab48b29bed6b7c95159d6->m_frame.f_lineno = 310;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 310;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooobooo";
            goto frame_exception_exit_1;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            tmp_compexpr_left_3 = const_str_plain_F;
            CHECK_OBJECT( par_requirements );
            tmp_compexpr_right_3 = par_requirements;
            tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 311;
                type_description_1 = "oooobooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_10;
                tmp_assign_source_10 = const_str_plain_F;
                {
                    PyObject *old = var_order;
                    assert( old != NULL );
                    var_order = tmp_assign_source_10;
                    Py_INCREF( var_order );
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_called_instance_3;
                PyObject *tmp_call_result_2;
                CHECK_OBJECT( par_requirements );
                tmp_called_instance_3 = par_requirements;
                frame_eb6f068954eab48b29bed6b7c95159d6->m_frame.f_lineno = 313;
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_remove, &PyTuple_GET_ITEM( const_tuple_str_plain_F_tuple, 0 ) );

                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 313;
                    type_description_1 = "oooobooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                tmp_compexpr_left_4 = const_str_plain_C;
                CHECK_OBJECT( par_requirements );
                tmp_compexpr_right_4 = par_requirements;
                tmp_res = PySequence_Contains( tmp_compexpr_right_4, tmp_compexpr_left_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 314;
                    type_description_1 = "oooobooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_5 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    tmp_assign_source_11 = const_str_plain_C;
                    {
                        PyObject *old = var_order;
                        assert( old != NULL );
                        var_order = tmp_assign_source_11;
                        Py_INCREF( var_order );
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_called_instance_4;
                    PyObject *tmp_call_result_3;
                    CHECK_OBJECT( par_requirements );
                    tmp_called_instance_4 = par_requirements;
                    frame_eb6f068954eab48b29bed6b7c95159d6->m_frame.f_lineno = 316;
                    tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_remove, &PyTuple_GET_ITEM( const_tuple_str_plain_C_tuple, 0 ) );

                    if ( tmp_call_result_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 316;
                        type_description_1 = "oooobooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_3 );
                }
                branch_no_5:;
            }
            branch_end_4:;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 318;
            type_description_1 = "oooobooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_2 = par_a;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_dict_key_2 = const_str_plain_dtype;
        CHECK_OBJECT( par_dtype );
        tmp_dict_value_2 = par_dtype;
        tmp_kw_name_2 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_order;
        if ( var_order == NULL )
        {
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "order" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 318;
            type_description_1 = "oooobooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_3 = var_order;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_copy;
        tmp_dict_value_4 = Py_False;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_subok;
        assert( var_subok != NUITKA_BOOL_UNASSIGNED);
        tmp_dict_value_5 = ( var_subok == NUITKA_BOOL_TRUE ) ? Py_True : Py_False;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        frame_eb6f068954eab48b29bed6b7c95159d6->m_frame.f_lineno = 318;
        tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 318;
            type_description_1 = "oooobooo";
            goto frame_exception_exit_1;
        }
        assert( var_arr == NULL );
        var_arr = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( par_requirements );
        tmp_iter_arg_2 = par_requirements;
        tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "oooobooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_13;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_14 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooobooo";
                exception_lineno = 320;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_14;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_15 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_prop;
            var_prop = tmp_assign_source_15;
            Py_INCREF( var_prop );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_arr );
        tmp_source_name_1 = var_arr;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flags );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;
            type_description_1 = "oooobooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_prop );
        tmp_subscript_name_1 = var_prop;
        tmp_operand_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;
            type_description_1 = "oooobooo";
            goto try_except_handler_4;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;
            type_description_1 = "oooobooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( var_arr );
            tmp_source_name_2 = var_arr;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_copy );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 322;
                type_description_1 = "oooobooo";
                goto try_except_handler_4;
            }
            if ( var_order == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "order" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 322;
                type_description_1 = "oooobooo";
                goto try_except_handler_4;
            }

            tmp_args_element_name_1 = var_order;
            frame_eb6f068954eab48b29bed6b7c95159d6->m_frame.f_lineno = 322;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 322;
                type_description_1 = "oooobooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = var_arr;
                assert( old != NULL );
                var_arr = tmp_assign_source_16;
                Py_DECREF( old );
            }

        }
        goto loop_end_2;
        branch_no_6:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        type_description_1 = "oooobooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    if ( var_arr == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "arr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 324;
        type_description_1 = "oooobooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_arr;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb6f068954eab48b29bed6b7c95159d6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb6f068954eab48b29bed6b7c95159d6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb6f068954eab48b29bed6b7c95159d6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eb6f068954eab48b29bed6b7c95159d6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eb6f068954eab48b29bed6b7c95159d6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eb6f068954eab48b29bed6b7c95159d6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eb6f068954eab48b29bed6b7c95159d6,
        type_description_1,
        par_a,
        par_dtype,
        par_requirements,
        var_possible_flags,
        (int)var_subok,
        var_order,
        var_arr,
        var_prop
    );


    // Release cached frame.
    if ( frame_eb6f068954eab48b29bed6b7c95159d6 == cache_frame_eb6f068954eab48b29bed6b7c95159d6 )
    {
        Py_DECREF( frame_eb6f068954eab48b29bed6b7c95159d6 );
    }
    cache_frame_eb6f068954eab48b29bed6b7c95159d6 = NULL;

    assertFrameObject( frame_eb6f068954eab48b29bed6b7c95159d6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_asarray$$$function_5_require );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    Py_XDECREF( par_requirements );
    par_requirements = NULL;

    CHECK_OBJECT( (PyObject *)var_possible_flags );
    Py_DECREF( var_possible_flags );
    var_possible_flags = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

    Py_XDECREF( var_arr );
    var_arr = NULL;

    Py_XDECREF( var_prop );
    var_prop = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    Py_XDECREF( par_requirements );
    par_requirements = NULL;

    CHECK_OBJECT( (PyObject *)var_possible_flags );
    Py_DECREF( var_possible_flags );
    var_possible_flags = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

    Py_XDECREF( var_arr );
    var_arr = NULL;

    Py_XDECREF( var_prop );
    var_prop = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_asarray$$$function_5_require );
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



static PyObject *MAKE_FUNCTION_numpy$core$_asarray$$$function_1_asarray( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_asarray$$$function_1_asarray,
        const_str_plain_asarray,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6b4ef2ccce9dd9720a5e7184a2646a8b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_asarray,
        const_str_digest_b51d4c467b640cf940e634f1bf6a5588,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_asarray$$$function_2_asanyarray( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_asarray$$$function_2_asanyarray,
        const_str_plain_asanyarray,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9ac90a71883fb428aa4614fc6653794a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_asarray,
        const_str_digest_068fe55c19d4c417463821c0fe6fb9b4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_asarray$$$function_3_ascontiguousarray( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_asarray$$$function_3_ascontiguousarray,
        const_str_plain_ascontiguousarray,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_88c3018a2e3ecb5043db8394fc05c0df,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_asarray,
        const_str_digest_56f8d9cddd51fea70f5dcc173311514f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_asarray$$$function_4_asfortranarray( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_asarray$$$function_4_asfortranarray,
        const_str_plain_asfortranarray,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ae8b4ca6ec3b66210be8313b123ff11d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_asarray,
        const_str_digest_4ec747bdfc752fc1c59d6bbb5e27f269,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_asarray$$$function_5_require( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_asarray$$$function_5_require,
        const_str_plain_require,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eb6f068954eab48b29bed6b7c95159d6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_asarray,
        const_str_digest_d5791532c3877899dfa2c8ced1a510db,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$core$_asarray =
{
    PyModuleDef_HEAD_INIT,
    "numpy.core._asarray",
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

MOD_INIT_DECL( numpy$core$_asarray )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$core$_asarray );
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
    puts("numpy.core._asarray: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.core._asarray: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.core._asarray: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$core$_asarray" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$core$_asarray = Py_InitModule4(
        "numpy.core._asarray",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$core$_asarray = PyModule_Create( &mdef_numpy$core$_asarray );
#endif

    moduledict_numpy$core$_asarray = MODULE_DICT( module_numpy$core$_asarray );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$core$_asarray,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$core$_asarray,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$_asarray,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$_asarray,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$core$_asarray );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_438a8d9ba1582b1ebf08e55dfd20d322, module_numpy$core$_asarray );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb;
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
        tmp_assign_source_1 = const_str_digest_813b4c0f5ee7ed0050a1df4133c52d5c;
        UPDATE_STRING_DICT0( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb = MAKE_MODULE_FRAME( codeobj_e777b3c7ae1cb6b6fbe136e45d5b8fcb, module_numpy$core$_asarray );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb );
    assert( Py_REFCNT( frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb->m_frame.f_lineno = 6;
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
        UPDATE_STRING_DICT1( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_overrides;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$core$_asarray;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_set_module_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb->m_frame.f_lineno = 8;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_numpy$core$_asarray,
                const_str_plain_set_module,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_set_module );
        }

        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_set_module, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_multiarray;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$core$_asarray;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_array_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb->m_frame.f_lineno = 9;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_numpy$core$_asarray,
                const_str_plain_array,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_array );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = LIST_COPY( const_list_f481b4ea616c8821e83f9eb29bf89d53_list );
        UPDATE_STRING_DICT1( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_defaults_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_set_module );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set_module );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "set_module" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb->m_frame.f_lineno = 16;
        tmp_called_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_plain_numpy_tuple, 0 ) );

        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_args_element_name_1 = MAKE_FUNCTION_numpy$core$_asarray$$$function_1_asarray( tmp_defaults_1 );



        frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb->m_frame.f_lineno = 16;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_defaults_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_set_module );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set_module );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "set_module" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 88;

            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb->m_frame.f_lineno = 88;
        tmp_called_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_plain_numpy_tuple, 0 ) );

        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_args_element_name_2 = MAKE_FUNCTION_numpy$core$_asarray$$$function_2_asanyarray( tmp_defaults_2 );



        frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_asanyarray, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_defaults_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_set_module );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set_module );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "set_module" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_5;
        frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb->m_frame.f_lineno = 141;
        tmp_called_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_plain_numpy_tuple, 0 ) );

        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_args_element_name_3 = MAKE_FUNCTION_numpy$core$_asarray$$$function_3_ascontiguousarray( tmp_defaults_3 );



        frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb->m_frame.f_lineno = 141;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_ascontiguousarray, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_7;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_defaults_4;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_set_module );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set_module );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "set_module" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_6;
        frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb->m_frame.f_lineno = 182;
        tmp_called_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_str_plain_numpy_tuple, 0 ) );

        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_defaults_4 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_args_element_name_4 = MAKE_FUNCTION_numpy$core$_asarray$$$function_4_asfortranarray( tmp_defaults_4 );



        frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_asfortranarray, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_9;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_defaults_5;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_set_module );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set_module );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "set_module" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_7;
        frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb->m_frame.f_lineno = 223;
        tmp_called_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_str_plain_numpy_tuple, 0 ) );

        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_defaults_5 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_args_element_name_5 = MAKE_FUNCTION_numpy$core$_asarray$$$function_5_require( tmp_defaults_5 );



        frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain_require, tmp_assign_source_15 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb );
#endif
    popFrameStack();

    assertFrameObject( frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e777b3c7ae1cb6b6fbe136e45d5b8fcb, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$core$_asarray, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$core$_asarray );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
