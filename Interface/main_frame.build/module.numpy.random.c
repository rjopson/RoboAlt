/* Generated code for Python module 'numpy.random'
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

/* The "_module_numpy$random" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$random;
PyDictObject *moduledict_numpy$random;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_NUITKA_PACKAGE_numpy;
extern PyObject *const_tuple_str_plain_MT19937_tuple;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain_PCG64_tuple;
extern PyObject *const_str_plain_bit_generator;
extern PyObject *const_str_plain_test;
static PyObject *const_str_plain___RandomState_ctor;
extern PyObject *const_str_plain_False;
extern PyObject *const_tuple_2b9cc2df7326cb5b3530dc8b9d46eedf_tuple;
extern PyObject *const_tuple_str_plain_PytestTester_tuple;
static PyObject *const_str_digest_6baf62e0a9fcd03283ca6c3cc6f0b502;
extern PyObject *const_str_plain___all__;
static PyObject *const_tuple_str_digest_a5c076a731f186ec2f35c39c7bdeb1b9_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_default_rng;
static PyObject *const_str_plain_NUITKA_PACKAGE_numpy_random;
static PyObject *const_tuple_653148a45af61bc7f3794d50bed61361_tuple;
static PyObject *const_tuple_str_plain_Generator_str_plain_default_rng_tuple;
extern PyObject *const_str_plain_path;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_Philox;
static PyObject *const_str_digest_0a5f1f4bf4814b601c9e34627e6cc716;
static PyObject *const_tuple_str_plain__pickle_tuple;
extern PyObject *const_str_plain_pcg64;
extern PyObject *const_str_plain_Generator;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_bounded_integers_tuple;
extern PyObject *const_str_digest_a5c076a731f186ec2f35c39c7bdeb1b9;
extern PyObject *const_str_plain_division;
static PyObject *const_list_c72d69dc2e3a5bd0af00abb6ca020d55_list;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_entropy;
static PyObject *const_str_plain_SeedSequence;
extern PyObject *const_str_plain_PytestTester;
extern PyObject *const_str_plain_random;
extern PyObject *const_str_plain_sfc64;
static PyObject *const_tuple_str_plain_entropy_tuple;
extern PyObject *const_str_plain_RandomState;
static PyObject *const_tuple_str_plain_SeedSequence_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_mtrand;
extern PyObject *const_str_chr_42;
static PyObject *const_tuple_str_plain_common_tuple;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_tuple_str_plain_Philox_tuple;
extern PyObject *const_str_plain_seed;
extern PyObject *const_str_plain_SFC64;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_generator;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_digest_f74a7c6ee6aee8f36dfe16199595cbff;
static PyObject *const_str_plain_bounded_integers;
extern PyObject *const_str_plain_mt19937;
extern PyObject *const_str_plain_MT19937;
extern PyObject *const_tuple_str_plain_SFC64_tuple;
extern PyObject *const_str_plain_join;
static PyObject *const_list_d041bf64239670d2cced2b667bef20fc_list;
extern PyObject *const_str_empty;
static PyObject *const_dict_6b5bbdc21112008ac8ee861022c8f276;
static PyObject *const_str_plain__pickle;
static PyObject *const_str_digest_1ed7c7af96cf1623432d9982f1500297;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_common;
extern PyObject *const_str_plain_PCG64;
extern PyObject *const_tuple_str_plain_RandomState_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_fe098bbd3b27465618ac1720da009cd8;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_philox;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain___RandomState_ctor = UNSTREAM_STRING_ASCII( &constant_bin[ 3876239 ], 18, 1 );
    const_str_digest_6baf62e0a9fcd03283ca6c3cc6f0b502 = UNSTREAM_STRING_ASCII( &constant_bin[ 3876257 ], 21, 0 );
    const_tuple_str_digest_a5c076a731f186ec2f35c39c7bdeb1b9_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a5c076a731f186ec2f35c39c7bdeb1b9_tuple, 0, const_str_digest_a5c076a731f186ec2f35c39c7bdeb1b9 ); Py_INCREF( const_str_digest_a5c076a731f186ec2f35c39c7bdeb1b9 );
    const_str_plain_default_rng = UNSTREAM_STRING_ASCII( &constant_bin[ 3876278 ], 11, 1 );
    const_str_plain_NUITKA_PACKAGE_numpy_random = UNSTREAM_STRING_ASCII( &constant_bin[ 3876289 ], 27, 1 );
    const_tuple_653148a45af61bc7f3794d50bed61361_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_653148a45af61bc7f3794d50bed61361_tuple, 0, const_str_plain_NUITKA_PACKAGE_numpy_random ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_numpy_random );
    PyTuple_SET_ITEM( const_tuple_653148a45af61bc7f3794d50bed61361_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_tuple_str_plain_Generator_str_plain_default_rng_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Generator_str_plain_default_rng_tuple, 0, const_str_plain_Generator ); Py_INCREF( const_str_plain_Generator );
    PyTuple_SET_ITEM( const_tuple_str_plain_Generator_str_plain_default_rng_tuple, 1, const_str_plain_default_rng ); Py_INCREF( const_str_plain_default_rng );
    const_str_digest_0a5f1f4bf4814b601c9e34627e6cc716 = UNSTREAM_STRING_ASCII( &constant_bin[ 3876316 ], 460, 0 );
    const_tuple_str_plain__pickle_tuple = PyTuple_New( 1 );
    const_str_plain__pickle = UNSTREAM_STRING_ASCII( &constant_bin[ 2953299 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__pickle_tuple, 0, const_str_plain__pickle ); Py_INCREF( const_str_plain__pickle );
    const_tuple_str_plain_bounded_integers_tuple = PyTuple_New( 1 );
    const_str_plain_bounded_integers = UNSTREAM_STRING_ASCII( &constant_bin[ 3876776 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_bounded_integers_tuple, 0, const_str_plain_bounded_integers ); Py_INCREF( const_str_plain_bounded_integers );
    const_list_c72d69dc2e3a5bd0af00abb6ca020d55_list = PyList_New( 8 );
    PyList_SET_ITEM( const_list_c72d69dc2e3a5bd0af00abb6ca020d55_list, 0, const_str_plain_Generator ); Py_INCREF( const_str_plain_Generator );
    PyList_SET_ITEM( const_list_c72d69dc2e3a5bd0af00abb6ca020d55_list, 1, const_str_plain_RandomState ); Py_INCREF( const_str_plain_RandomState );
    const_str_plain_SeedSequence = UNSTREAM_STRING_ASCII( &constant_bin[ 3876792 ], 12, 1 );
    PyList_SET_ITEM( const_list_c72d69dc2e3a5bd0af00abb6ca020d55_list, 2, const_str_plain_SeedSequence ); Py_INCREF( const_str_plain_SeedSequence );
    PyList_SET_ITEM( const_list_c72d69dc2e3a5bd0af00abb6ca020d55_list, 3, const_str_plain_MT19937 ); Py_INCREF( const_str_plain_MT19937 );
    PyList_SET_ITEM( const_list_c72d69dc2e3a5bd0af00abb6ca020d55_list, 4, const_str_plain_Philox ); Py_INCREF( const_str_plain_Philox );
    PyList_SET_ITEM( const_list_c72d69dc2e3a5bd0af00abb6ca020d55_list, 5, const_str_plain_PCG64 ); Py_INCREF( const_str_plain_PCG64 );
    PyList_SET_ITEM( const_list_c72d69dc2e3a5bd0af00abb6ca020d55_list, 6, const_str_plain_SFC64 ); Py_INCREF( const_str_plain_SFC64 );
    PyList_SET_ITEM( const_list_c72d69dc2e3a5bd0af00abb6ca020d55_list, 7, const_str_plain_default_rng ); Py_INCREF( const_str_plain_default_rng );
    const_tuple_str_plain_entropy_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_entropy_tuple, 0, const_str_plain_entropy ); Py_INCREF( const_str_plain_entropy );
    const_tuple_str_plain_SeedSequence_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SeedSequence_tuple, 0, const_str_plain_SeedSequence ); Py_INCREF( const_str_plain_SeedSequence );
    const_tuple_str_plain_common_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_common_tuple, 0, const_str_plain_common ); Py_INCREF( const_str_plain_common );
    const_list_d041bf64239670d2cced2b667bef20fc_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 3876804 ], 550 );
    const_dict_6b5bbdc21112008ac8ee861022c8f276 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_6b5bbdc21112008ac8ee861022c8f276, const_str_plain_seed, const_int_0 );
    assert( PyDict_Size( const_dict_6b5bbdc21112008ac8ee861022c8f276 ) == 1 );
    const_str_digest_1ed7c7af96cf1623432d9982f1500297 = UNSTREAM_STRING_ASCII( &constant_bin[ 3877354 ], 5461, 0 );
    const_str_digest_fe098bbd3b27465618ac1720da009cd8 = UNSTREAM_STRING_ASCII( &constant_bin[ 3882815 ], 24, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$random( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0faeb2ff6374646d03d4e895e26dfe6a;
static PyCodeObject *codeobj_7cb7e2fec555ba09f8df7acd1cb03a64;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_fe098bbd3b27465618ac1720da009cd8 );
    codeobj_0faeb2ff6374646d03d4e895e26dfe6a = MAKE_CODEOBJ( module_filename_obj, const_str_digest_6baf62e0a9fcd03283ca6c3cc6f0b502, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_7cb7e2fec555ba09f8df7acd1cb03a64 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___RandomState_ctor, 199, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$random$$$function_1___RandomState_ctor(  );


// The module function definitions.
static PyObject *impl_numpy$random$$$function_1___RandomState_ctor( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_7cb7e2fec555ba09f8df7acd1cb03a64;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7cb7e2fec555ba09f8df7acd1cb03a64 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_7cb7e2fec555ba09f8df7acd1cb03a64, codeobj_7cb7e2fec555ba09f8df7acd1cb03a64, module_numpy$random, 0 );
    frame_7cb7e2fec555ba09f8df7acd1cb03a64 = cache_frame_7cb7e2fec555ba09f8df7acd1cb03a64;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7cb7e2fec555ba09f8df7acd1cb03a64 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7cb7e2fec555ba09f8df7acd1cb03a64 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_RandomState );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RandomState );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RandomState" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_kw_name_1 = PyDict_Copy( const_dict_6b5bbdc21112008ac8ee861022c8f276 );
        frame_7cb7e2fec555ba09f8df7acd1cb03a64->m_frame.f_lineno = 212;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7cb7e2fec555ba09f8df7acd1cb03a64 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7cb7e2fec555ba09f8df7acd1cb03a64 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7cb7e2fec555ba09f8df7acd1cb03a64 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7cb7e2fec555ba09f8df7acd1cb03a64, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7cb7e2fec555ba09f8df7acd1cb03a64->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7cb7e2fec555ba09f8df7acd1cb03a64, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7cb7e2fec555ba09f8df7acd1cb03a64,
        type_description_1
    );


    // Release cached frame.
    if ( frame_7cb7e2fec555ba09f8df7acd1cb03a64 == cache_frame_7cb7e2fec555ba09f8df7acd1cb03a64 )
    {
        Py_DECREF( frame_7cb7e2fec555ba09f8df7acd1cb03a64 );
    }
    cache_frame_7cb7e2fec555ba09f8df7acd1cb03a64 = NULL;

    assertFrameObject( frame_7cb7e2fec555ba09f8df7acd1cb03a64 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$random$$$function_1___RandomState_ctor );
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



static PyObject *MAKE_FUNCTION_numpy$random$$$function_1___RandomState_ctor(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$random$$$function_1___RandomState_ctor,
        const_str_plain___RandomState_ctor,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7cb7e2fec555ba09f8df7acd1cb03a64,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$random,
        const_str_digest_0a5f1f4bf4814b601c9e34627e6cc716,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$random =
{
    PyModuleDef_HEAD_INIT,
    "numpy.random",
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

MOD_INIT_DECL( numpy$random )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$random );
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
    puts("numpy.random: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.random: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.random: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$random" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$random = Py_InitModule4(
        "numpy.random",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$random = PyModule_Create( &mdef_numpy$random );
#endif

    moduledict_numpy$random = MODULE_DICT( module_numpy$random );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$random,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$random,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$random,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$random,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$random );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_a5c076a731f186ec2f35c39c7bdeb1b9, module_numpy$random );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_0faeb2ff6374646d03d4e895e26dfe6a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_inplace_orig;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_1ed7c7af96cf1623432d9982f1500297;
        UPDATE_STRING_DICT0( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_0faeb2ff6374646d03d4e895e26dfe6a = MAKE_MODULE_FRAME( codeobj_0faeb2ff6374646d03d4e895e26dfe6a, module_numpy$random );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_0faeb2ff6374646d03d4e895e26dfe6a );
    assert( Py_REFCNT( frame_0faeb2ff6374646d03d4e895e26dfe6a ) == 2 );

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
        PyObject *tmp_called_instance_2;
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 1;
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
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 1;
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
        tmp_assign_source_3 = PyList_New( 3 );
        PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 1;
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
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 1;
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
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 1;
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_2b9cc2df7326cb5b3530dc8b9d46eedf_tuple, 0 ) );

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = const_str_plain_random;
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 1;
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
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 1;
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

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_653148a45af61bc7f3794d50bed61361_tuple, 0 ) );

        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_assign_source_3, 2, tmp_list_element_1 );
        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 125;
        tmp_assign_source_5 = PyImport_ImportModule("__future__");
        assert( !(tmp_assign_source_5 == NULL) );
        assert( tmp_import_from_1__module == NULL );
        Py_INCREF( tmp_assign_source_5 );
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_8 );
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
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = LIST_COPY( const_list_d041bf64239670d2cced2b667bef20fc_list );
        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_empty;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$random;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain__pickle_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 181;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_numpy$random,
                const_str_plain__pickle,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain__pickle );
        }

        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain__pickle, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_empty;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$random;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_common_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 182;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_numpy$random,
                const_str_plain_common,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_common );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_common, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_empty;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$random;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_bounded_integers_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 183;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_numpy$random,
                const_str_plain_bounded_integers,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_bounded_integers );
        }

        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_bounded_integers, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_empty;
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$random;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_entropy_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 184;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_numpy$random,
                const_str_plain_entropy,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_entropy );
        }

        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_entropy, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_mtrand;
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$random;
        tmp_locals_name_5 = (PyObject *)moduledict_numpy$random;
        tmp_fromlist_name_5 = const_tuple_str_chr_42_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 186;
        tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_star_imported_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_numpy$random, true, tmp_star_imported_1 );
        Py_DECREF( tmp_star_imported_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_generator;
        tmp_globals_name_6 = (PyObject *)moduledict_numpy$random;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_Generator_str_plain_default_rng_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 187;
        tmp_assign_source_14 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_numpy$random,
                const_str_plain_Generator,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Generator );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_Generator, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_numpy$random,
                const_str_plain_default_rng,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_default_rng );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_default_rng, tmp_assign_source_16 );
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_bit_generator;
        tmp_globals_name_7 = (PyObject *)moduledict_numpy$random;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_SeedSequence_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 188;
        tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_numpy$random,
                const_str_plain_SeedSequence,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_SeedSequence );
        }

        Py_DECREF( tmp_import_name_from_10 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_SeedSequence, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_mt19937;
        tmp_globals_name_8 = (PyObject *)moduledict_numpy$random;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_MT19937_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 189;
        tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_11 ) )
        {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_numpy$random,
                const_str_plain_MT19937,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_MT19937 );
        }

        Py_DECREF( tmp_import_name_from_11 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_MT19937, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain_pcg64;
        tmp_globals_name_9 = (PyObject *)moduledict_numpy$random;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_PCG64_tuple;
        tmp_level_name_9 = const_int_pos_1;
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 190;
        tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_import_name_from_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_12 ) )
        {
           tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_numpy$random,
                const_str_plain_PCG64,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_PCG64 );
        }

        Py_DECREF( tmp_import_name_from_12 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_PCG64, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_plain_philox;
        tmp_globals_name_10 = (PyObject *)moduledict_numpy$random;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain_Philox_tuple;
        tmp_level_name_10 = const_int_pos_1;
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 191;
        tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_import_name_from_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_13 ) )
        {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_numpy$random,
                const_str_plain_Philox,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_Philox );
        }

        Py_DECREF( tmp_import_name_from_13 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_Philox, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_plain_sfc64;
        tmp_globals_name_11 = (PyObject *)moduledict_numpy$random;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_str_plain_SFC64_tuple;
        tmp_level_name_11 = const_int_pos_1;
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 192;
        tmp_import_name_from_14 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
        if ( tmp_import_name_from_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_14 ) )
        {
           tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_numpy$random,
                const_str_plain_SFC64,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_SFC64 );
        }

        Py_DECREF( tmp_import_name_from_14 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_SFC64, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_12;
        PyObject *tmp_locals_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = const_str_plain_mtrand;
        tmp_globals_name_12 = (PyObject *)moduledict_numpy$random;
        tmp_locals_name_12 = Py_None;
        tmp_fromlist_name_12 = const_tuple_str_plain_RandomState_tuple;
        tmp_level_name_12 = const_int_pos_1;
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 193;
        tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
        if ( tmp_import_name_from_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_15 ) )
        {
           tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_numpy$random,
                const_str_plain_RandomState,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_RandomState );
        }

        Py_DECREF( tmp_import_name_from_15 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_RandomState, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_left_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___all__ );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__all__" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = tmp_mvar_value_3;
        tmp_right_name_1 = LIST_COPY( const_list_c72d69dc2e3a5bd0af00abb6ca020d55_list );
        tmp_inplace_orig = tmp_left_name_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LIST_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = tmp_left_name_1;
        if (tmp_inplace_orig != tmp_assign_source_23) {
        UPDATE_STRING_DICT_INPLACE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_23 );
        }
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_FUNCTION_numpy$random$$$function_1___RandomState_ctor(  );



        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___RandomState_ctor, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_name_13;
        PyObject *tmp_locals_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = const_str_digest_f74a7c6ee6aee8f36dfe16199595cbff;
        tmp_globals_name_13 = (PyObject *)moduledict_numpy$random;
        tmp_locals_name_13 = Py_None;
        tmp_fromlist_name_13 = const_tuple_str_plain_PytestTester_tuple;
        tmp_level_name_13 = const_int_0;
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 215;
        tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
        if ( tmp_import_name_from_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_PytestTester );
        Py_DECREF( tmp_import_name_from_16 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_PytestTester, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_PytestTester );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PytestTester );
        }

        CHECK_OBJECT( tmp_mvar_value_4 );
        tmp_called_name_3 = tmp_mvar_value_4;
        frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame.f_lineno = 216;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_a5c076a731f186ec2f35c39c7bdeb1b9_tuple, 0 ) );

        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_26 );
    }
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$random, const_str_plain_PytestTester );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PytestTester" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;

        goto frame_exception_exit_1;
    }


    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0faeb2ff6374646d03d4e895e26dfe6a );
#endif
    popFrameStack();

    assertFrameObject( frame_0faeb2ff6374646d03d4e895e26dfe6a );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0faeb2ff6374646d03d4e895e26dfe6a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0faeb2ff6374646d03d4e895e26dfe6a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0faeb2ff6374646d03d4e895e26dfe6a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0faeb2ff6374646d03d4e895e26dfe6a, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 1 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$random );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
