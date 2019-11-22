/* Generated code for Python module 'scipy'
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

/* The "_module_scipy" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy;
PyDictObject *moduledict_scipy;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain_version_tuple;
extern PyObject *const_str_plain_test;
extern PyObject *const_tuple_str_plain_PytestTester_tuple;
extern PyObject *const_tuple_str_plain_show_tuple;
extern PyObject *const_str_plain_UserWarning;
extern PyObject *const_str_plain_rand;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_870fc2c777879f90261e5a20709f9ca5;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_digest_6cd9f1ac4783293caff8cedee777621e;
extern PyObject *const_str_plain__distributor_init;
extern PyObject *const_str_chr_42;
static PyObject *const_tuple_str_plain_LowLevelCallable_tuple;
extern PyObject *const_str_digest_f7a7d46a596e4d3ebb7555599bda3d87;
static PyObject *const_tuple_str_plain_scipy_tuple;
static PyObject *const_str_plain___SCIPY_SETUP__;
static PyObject *const_str_digest_7f4ecaec84d78e057f02b414ad99d7f4;
extern PyObject *const_str_plain_ImportError;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_16131809db91192e4fd1a83c9a92e7c1;
extern PyObject *const_str_digest_b53f3811d9d65c912707e9b896ba9934;
extern PyObject *const_str_plain_environ;
static PyObject *const_str_digest_396fc3f666354658b1537b9f4ec0fd54;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_NUITKA_PACKAGE_scipy;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_digest_f0892025aa1e6db47b3d42917d0a6856;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_LowLevelCallable;
extern PyObject *const_tuple_str_plain_linalg_tuple;
extern PyObject *const_str_plain_NumpyVersion;
static PyObject *const_str_digest_9b1dd0bd774d2af97562299d8613cfd7;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain__num;
extern PyObject *const_str_plain_stderr;
extern PyObject *const_tuple_str_plain___version___tuple;
static PyObject *const_tuple_str_digest_0d6774e52d5193bff9a52bbc5039fcba_tuple;
extern PyObject *const_str_plain_show_config;
extern PyObject *const_tuple_str_plain__distributor_init_tuple;
extern PyObject *const_str_digest_7207064fde9a27f8fd2023b200f240c1;
extern PyObject *const_tuple_a0f903686605ac910f391f0708b892cf_tuple;
extern PyObject *const_str_plain_remove;
static PyObject *const_str_plain__NumpyVersion;
extern PyObject *const_str_plain_show;
static PyObject *const_str_digest_487b27d8b0215fe17c9357ebf1680d40;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain___numpy_version__;
extern PyObject *const_str_plain_scipy;
extern PyObject *const_str_plain___version__;
extern PyObject *const_int_0;
static PyObject *const_str_digest_0d6774e52d5193bff9a52bbc5039fcba;
extern PyObject *const_str_plain_msg;
extern PyObject *const_tuple_str_plain_NumpyVersion_tuple;
static PyObject *const_tuple_str_digest_7f4ecaec84d78e057f02b414ad99d7f4_tuple;
static PyObject *const_tuple_str_plain_show_config_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_show_numpy_config;
extern PyObject *const_str_plain_sys;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_09866bc614f933e02483a81bbcbf43e8;
extern PyObject *const_str_digest_a5c076a731f186ec2f35c39c7bdeb1b9;
static PyObject *const_str_digest_d24ae5c030d649475bd0ec6a0b5f0af0;
extern PyObject *const_str_plain_NameError;
extern PyObject *const_str_plain_PytestTester;
extern PyObject *const_str_plain_randn;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_fft;
extern PyObject *const_str_plain_version;
static PyObject *const_tuple_str_plain_rand_str_plain_randn_tuple;
extern PyObject *const_str_plain_ifft;
extern PyObject *const_str_empty;
static PyObject *const_tuple_str_plain_fft_str_plain_ifft_tuple;
static PyObject *const_str_plain__sys;
static PyObject *const_list_str_plain_test_list;
static PyObject *const_list_str_plain_randn_str_plain_rand_str_plain_fft_str_plain_ifft_list;
extern PyObject *const_str_digest_b655365bcea43a244f1fe6b8cbb86166;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_LowLevelCallable_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LowLevelCallable_tuple, 0, const_str_plain_LowLevelCallable ); Py_INCREF( const_str_plain_LowLevelCallable );
    const_tuple_str_plain_scipy_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_scipy_tuple, 0, const_str_plain_scipy ); Py_INCREF( const_str_plain_scipy );
    const_str_plain___SCIPY_SETUP__ = UNSTREAM_STRING_ASCII( &constant_bin[ 4058118 ], 15, 1 );
    const_str_digest_7f4ecaec84d78e057f02b414ad99d7f4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4058133 ], 61, 0 );
    const_str_digest_16131809db91192e4fd1a83c9a92e7c1 = UNSTREAM_STRING_ASCII( &constant_bin[ 4058194 ], 14, 0 );
    const_str_digest_396fc3f666354658b1537b9f4ec0fd54 = UNSTREAM_STRING_ASCII( &constant_bin[ 4058208 ], 6, 0 );
    const_str_digest_9b1dd0bd774d2af97562299d8613cfd7 = UNSTREAM_STRING_ASCII( &constant_bin[ 4058214 ], 2246, 0 );
    const_str_plain__num = UNSTREAM_STRING_ASCII( &constant_bin[ 92301 ], 4, 1 );
    const_tuple_str_digest_0d6774e52d5193bff9a52bbc5039fcba_tuple = PyTuple_New( 1 );
    const_str_digest_0d6774e52d5193bff9a52bbc5039fcba = UNSTREAM_STRING_ASCII( &constant_bin[ 4060460 ], 37, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_0d6774e52d5193bff9a52bbc5039fcba_tuple, 0, const_str_digest_0d6774e52d5193bff9a52bbc5039fcba ); Py_INCREF( const_str_digest_0d6774e52d5193bff9a52bbc5039fcba );
    const_str_plain__NumpyVersion = UNSTREAM_STRING_ASCII( &constant_bin[ 2895931 ], 13, 1 );
    const_str_digest_487b27d8b0215fe17c9357ebf1680d40 = UNSTREAM_STRING_ASCII( &constant_bin[ 4060497 ], 81, 0 );
    const_str_plain___numpy_version__ = UNSTREAM_STRING_ASCII( &constant_bin[ 4060416 ], 17, 1 );
    const_tuple_str_digest_7f4ecaec84d78e057f02b414ad99d7f4_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_7f4ecaec84d78e057f02b414ad99d7f4_tuple, 0, const_str_digest_7f4ecaec84d78e057f02b414ad99d7f4 ); Py_INCREF( const_str_digest_7f4ecaec84d78e057f02b414ad99d7f4 );
    const_tuple_str_plain_show_config_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_show_config_tuple, 0, const_str_plain_show_config ); Py_INCREF( const_str_plain_show_config );
    const_str_plain_show_numpy_config = UNSTREAM_STRING_ASCII( &constant_bin[ 4060318 ], 17, 1 );
    const_str_digest_09866bc614f933e02483a81bbcbf43e8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4060578 ], 180, 0 );
    const_str_digest_d24ae5c030d649475bd0ec6a0b5f0af0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4060758 ], 17, 0 );
    const_tuple_str_plain_rand_str_plain_randn_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_rand_str_plain_randn_tuple, 0, const_str_plain_rand ); Py_INCREF( const_str_plain_rand );
    PyTuple_SET_ITEM( const_tuple_str_plain_rand_str_plain_randn_tuple, 1, const_str_plain_randn ); Py_INCREF( const_str_plain_randn );
    const_tuple_str_plain_fft_str_plain_ifft_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fft_str_plain_ifft_tuple, 0, const_str_plain_fft ); Py_INCREF( const_str_plain_fft );
    PyTuple_SET_ITEM( const_tuple_str_plain_fft_str_plain_ifft_tuple, 1, const_str_plain_ifft ); Py_INCREF( const_str_plain_ifft );
    const_str_plain__sys = UNSTREAM_STRING_ASCII( &constant_bin[ 4060775 ], 4, 1 );
    const_list_str_plain_test_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_test_list, 0, const_str_plain_test ); Py_INCREF( const_str_plain_test );
    const_list_str_plain_randn_str_plain_rand_str_plain_fft_str_plain_ifft_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_str_plain_randn_str_plain_rand_str_plain_fft_str_plain_ifft_list, 0, const_str_plain_randn ); Py_INCREF( const_str_plain_randn );
    PyList_SET_ITEM( const_list_str_plain_randn_str_plain_rand_str_plain_fft_str_plain_ifft_list, 1, const_str_plain_rand ); Py_INCREF( const_str_plain_rand );
    PyList_SET_ITEM( const_list_str_plain_randn_str_plain_rand_str_plain_fft_str_plain_ifft_list, 2, const_str_plain_fft ); Py_INCREF( const_str_plain_fft );
    PyList_SET_ITEM( const_list_str_plain_randn_str_plain_rand_str_plain_fft_str_plain_ifft_list, 3, const_str_plain_ifft ); Py_INCREF( const_str_plain_ifft );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6271bc2485ccd880df734aa8230f3035;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_d24ae5c030d649475bd0ec6a0b5f0af0 );
    codeobj_6271bc2485ccd880df734aa8230f3035 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_16131809db91192e4fd1a83c9a92e7c1, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy =
{
    PyModuleDef_HEAD_INIT,
    "scipy",
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

MOD_INIT_DECL( scipy )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy );
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
    puts("scipy: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy = Py_InitModule4(
        "scipy",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy = PyModule_Create( &mdef_scipy );
#endif

    moduledict_scipy = MODULE_DICT( module_scipy );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_scipy, module_scipy );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_6271bc2485ccd880df734aa8230f3035;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_inplace_orig;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_9b1dd0bd774d2af97562299d8613cfd7;
        UPDATE_STRING_DICT0( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_6271bc2485ccd880df734aa8230f3035 = MAKE_MODULE_FRAME( codeobj_6271bc2485ccd880df734aa8230f3035, module_scipy );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_6271bc2485ccd880df734aa8230f3035 );
    assert( Py_REFCNT( frame_6271bc2485ccd880df734aa8230f3035 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 1;
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
        frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 1;
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
        tmp_assign_source_3 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
        frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 1;
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

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_a0f903686605ac910f391f0708b892cf_tuple, 0 ) );

        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
        UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 58;
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


            exception_lineno = 58;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_8 );
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
        tmp_assign_source_9 = LIST_COPY( const_list_str_plain_test_list );
        UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_numpy;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_show_config_tuple;
        tmp_level_name_1 = const_int_0;
        frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 62;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_show_config );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_show_numpy_config, tmp_assign_source_10 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_show_numpy_config );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_show_numpy_config );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_compexpr_left_1 = tmp_mvar_value_3;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_ImportError );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImportError );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ImportError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 64;

                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_4;
            frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 64;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_7f4ecaec84d78e057f02b414ad99d7f4_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 64;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );

            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_numpy;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain___version___tuple;
        tmp_level_name_2 = const_int_0;
        frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 66;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain___version__ );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___numpy_version__, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_numpy;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 69;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain__num, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_None;
        UPDATE_STRING_DICT0( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_linalg, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_numpy;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy;
        tmp_locals_name_4 = (PyObject *)moduledict_scipy;
        tmp_fromlist_name_4 = const_tuple_str_chr_42_tuple;
        tmp_level_name_4 = const_int_0;
        frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 71;
        tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_star_imported_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy, true, tmp_star_imported_1 );
        Py_DECREF( tmp_star_imported_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_a5c076a731f186ec2f35c39c7bdeb1b9;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_rand_str_plain_randn_tuple;
        tmp_level_name_5 = const_int_0;
        frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 72;
        tmp_assign_source_14 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_rand );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_rand, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_randn );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_randn, tmp_assign_source_16 );
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
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_b53f3811d9d65c912707e9b896ba9934;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_fft_str_plain_ifft_tuple;
        tmp_level_name_6 = const_int_0;
        frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 73;
        tmp_assign_source_17 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_8 = tmp_import_from_3__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_fft );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_fft, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_9 = tmp_import_from_3__module;
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_ifft );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_ifft, tmp_assign_source_19 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    {
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_6cd9f1ac4783293caff8cedee777621e;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy;
        tmp_locals_name_7 = (PyObject *)moduledict_scipy;
        tmp_fromlist_name_7 = const_tuple_str_chr_42_tuple;
        tmp_level_name_7 = const_int_0;
        frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 74;
        tmp_star_imported_2 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_star_imported_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy, true, tmp_star_imported_2 );
        Py_DECREF( tmp_star_imported_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_empty;
        tmp_globals_name_8 = (PyObject *)moduledict_scipy;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain__distributor_init_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 77;
        tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_scipy,
                const_str_plain__distributor_init,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain__distributor_init );
        }

        Py_DECREF( tmp_import_name_from_10 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain__distributor_init, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_name_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___all__ );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__all__" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = tmp_mvar_value_5;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain__num );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__num );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_num" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_6;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___all__ );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_inplace_orig = tmp_left_name_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = tmp_left_name_1;
        if (tmp_inplace_orig != tmp_assign_source_21) {
        UPDATE_STRING_DICT_INPLACE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_21 );
        }
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_2;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___all__ );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
        }

        CHECK_OBJECT( tmp_mvar_value_7 );
        tmp_left_name_2 = tmp_mvar_value_7;
        tmp_right_name_2 = LIST_COPY( const_list_str_plain_randn_str_plain_rand_str_plain_fft_str_plain_ifft_list );
        tmp_inplace_orig = tmp_left_name_2;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LIST_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = tmp_left_name_2;
        if (tmp_inplace_orig != tmp_assign_source_22) {
        UPDATE_STRING_DICT_INPLACE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_22 );
        }
    }
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy, const_str_plain__num );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_num" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy, const_str_plain_linalg );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "linalg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___all__ );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__all__" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_8;
        frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 86;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_remove, &PyTuple_GET_ITEM( const_tuple_str_plain_linalg_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    // Tried code:
    {
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___SCIPY_SETUP__ );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___SCIPY_SETUP__ );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__SCIPY_SETUP__" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 91;

            goto try_except_handler_4;
        }

    }
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_6271bc2485ccd880df734aa8230f3035, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_6271bc2485ccd880df734aa8230f3035, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_mvar_value_10;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_NameError );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameError );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 92;

            goto try_except_handler_5;
        }

        tmp_compexpr_right_2 = tmp_mvar_value_10;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto try_except_handler_5;
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
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = Py_False;
            UPDATE_STRING_DICT0( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___SCIPY_SETUP__, tmp_assign_source_23 );
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 90;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_6271bc2485ccd880df734aa8230f3035->m_frame) frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_5;
        branch_end_2:;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_4:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_mvar_value_11;
        int tmp_truth_name_1;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___SCIPY_SETUP__ );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___SCIPY_SETUP__ );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__SCIPY_SETUP__" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_mvar_value_11 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

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
            PyObject *tmp_assign_source_24;
            PyObject *tmp_name_name_9;
            PyObject *tmp_globals_name_9;
            PyObject *tmp_locals_name_9;
            PyObject *tmp_fromlist_name_9;
            PyObject *tmp_level_name_9;
            tmp_name_name_9 = const_str_plain_sys;
            tmp_globals_name_9 = (PyObject *)moduledict_scipy;
            tmp_locals_name_9 = Py_None;
            tmp_fromlist_name_9 = Py_None;
            tmp_level_name_9 = const_int_0;
            frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 97;
            tmp_assign_source_24 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
            assert( !(tmp_assign_source_24 == NULL) );
            UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain__sys, tmp_assign_source_24 );
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_call_result_2;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain__sys );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sys );
            }

            CHECK_OBJECT( tmp_mvar_value_12 );
            tmp_source_name_3 = tmp_mvar_value_12;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_stderr );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;

                goto frame_exception_exit_1;
            }
            frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 98;
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_str_digest_0d6774e52d5193bff9a52bbc5039fcba_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;

                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy, const_str_plain__sys );
        tmp_result = tmp_res != -1;
        if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

        if ( tmp_result == false )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }

        goto branch_end_3;
        branch_no_3:;
        // Tried code:
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_import_name_from_11;
            PyObject *tmp_name_name_10;
            PyObject *tmp_globals_name_10;
            PyObject *tmp_locals_name_10;
            PyObject *tmp_fromlist_name_10;
            PyObject *tmp_level_name_10;
            tmp_name_name_10 = const_str_digest_7207064fde9a27f8fd2023b200f240c1;
            tmp_globals_name_10 = (PyObject *)moduledict_scipy;
            tmp_locals_name_10 = Py_None;
            tmp_fromlist_name_10 = const_tuple_str_plain_show_tuple;
            tmp_level_name_10 = const_int_0;
            frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 102;
            tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
            if ( tmp_import_name_from_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;

                goto try_except_handler_6;
            }
            tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_show );
            Py_DECREF( tmp_import_name_from_11 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;

                goto try_except_handler_6;
            }
            UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_show_config, tmp_assign_source_25 );
        }
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

        // Preserve existing published exception.
        exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_2 );
        exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_2 );
        exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_2 );

        if ( exception_keeper_tb_6 == NULL )
        {
            exception_keeper_tb_6 = MAKE_TRACEBACK( frame_6271bc2485ccd880df734aa8230f3035, exception_keeper_lineno_6 );
        }
        else if ( exception_keeper_lineno_6 != 0 )
        {
            exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_6271bc2485ccd880df734aa8230f3035, exception_keeper_lineno_6 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
        PyException_SetTraceback( exception_keeper_value_6, (PyObject *)exception_keeper_tb_6 );
        PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_mvar_value_13;
            tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_ImportError );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImportError );
            }

            if ( tmp_mvar_value_13 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ImportError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 103;

                goto try_except_handler_7;
            }

            tmp_compexpr_right_3 = tmp_mvar_value_13;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;

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
                PyObject *tmp_assign_source_26;
                tmp_assign_source_26 = const_str_digest_09866bc614f933e02483a81bbcbf43e8;
                UPDATE_STRING_DICT0( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_msg, tmp_assign_source_26 );
            }
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_14;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_mvar_value_15;
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_ImportError );

                if (unlikely( tmp_mvar_value_14 == NULL ))
                {
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImportError );
                }

                if ( tmp_mvar_value_14 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ImportError" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 107;

                    goto try_except_handler_7;
                }

                tmp_called_name_3 = tmp_mvar_value_14;
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_msg );

                if (unlikely( tmp_mvar_value_15 == NULL ))
                {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_msg );
                }

                CHECK_OBJECT( tmp_mvar_value_15 );
                tmp_args_element_name_2 = tmp_mvar_value_15;
                frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 107;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                if ( tmp_raise_type_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 107;

                    goto try_except_handler_7;
                }
                exception_type = tmp_raise_type_2;
                exception_lineno = 107;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_7;
            }
            goto branch_end_4;
            branch_no_4:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 101;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_6271bc2485ccd880df734aa8230f3035->m_frame) frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = exception_tb->tb_lineno;

            goto try_except_handler_7;
            branch_end_4:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_1;
        // End of try:
        // End of try:
        try_end_6:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_import_name_from_12;
            PyObject *tmp_name_name_11;
            PyObject *tmp_globals_name_11;
            PyObject *tmp_locals_name_11;
            PyObject *tmp_fromlist_name_11;
            PyObject *tmp_level_name_11;
            tmp_name_name_11 = const_str_digest_870fc2c777879f90261e5a20709f9ca5;
            tmp_globals_name_11 = (PyObject *)moduledict_scipy;
            tmp_locals_name_11 = Py_None;
            tmp_fromlist_name_11 = const_tuple_str_plain_version_tuple;
            tmp_level_name_11 = const_int_0;
            frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 109;
            tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
            if ( tmp_import_name_from_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 109;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_version );
            Py_DECREF( tmp_import_name_from_12 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 109;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_27 );
        }
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_import_name_from_13;
            PyObject *tmp_name_name_12;
            PyObject *tmp_globals_name_12;
            PyObject *tmp_locals_name_12;
            PyObject *tmp_fromlist_name_12;
            PyObject *tmp_level_name_12;
            tmp_name_name_12 = const_str_digest_f0892025aa1e6db47b3d42917d0a6856;
            tmp_globals_name_12 = (PyObject *)moduledict_scipy;
            tmp_locals_name_12 = Py_None;
            tmp_fromlist_name_12 = const_tuple_str_plain_NumpyVersion_tuple;
            tmp_level_name_12 = const_int_0;
            frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 110;
            tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
            if ( tmp_import_name_from_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_NumpyVersion );
            Py_DECREF( tmp_import_name_from_13 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain__NumpyVersion, tmp_assign_source_28 );
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_mvar_value_17;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain__NumpyVersion );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__NumpyVersion );
            }

            CHECK_OBJECT( tmp_mvar_value_16 );
            tmp_called_name_4 = tmp_mvar_value_16;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___numpy_version__ );

            if (unlikely( tmp_mvar_value_17 == NULL ))
            {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___numpy_version__ );
            }

            if ( tmp_mvar_value_17 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__numpy_version__" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 111;

                goto frame_exception_exit_1;
            }

            tmp_args_element_name_3 = tmp_mvar_value_17;
            frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 111;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_compexpr_left_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 111;

                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_4 = const_str_digest_396fc3f666354658b1537b9f4ec0fd54;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 111;

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
                PyObject *tmp_assign_source_29;
                PyObject *tmp_name_name_13;
                PyObject *tmp_globals_name_13;
                PyObject *tmp_locals_name_13;
                PyObject *tmp_fromlist_name_13;
                PyObject *tmp_level_name_13;
                tmp_name_name_13 = const_str_plain_warnings;
                tmp_globals_name_13 = (PyObject *)moduledict_scipy;
                tmp_locals_name_13 = Py_None;
                tmp_fromlist_name_13 = Py_None;
                tmp_level_name_13 = const_int_0;
                frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 112;
                tmp_assign_source_29 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
                if ( tmp_assign_source_29 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 112;

                    goto frame_exception_exit_1;
                }
                UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_29 );
            }
            {
                PyObject *tmp_called_name_5;
                PyObject *tmp_source_name_4;
                PyObject *tmp_mvar_value_18;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_mvar_value_19;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_mvar_value_20;
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_warnings );

                if (unlikely( tmp_mvar_value_18 == NULL ))
                {
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
                }

                CHECK_OBJECT( tmp_mvar_value_18 );
                tmp_source_name_4 = tmp_mvar_value_18;
                tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_warn );
                if ( tmp_called_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 113;

                    goto frame_exception_exit_1;
                }
                tmp_left_name_3 = const_str_digest_487b27d8b0215fe17c9357ebf1680d40;
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___numpy_version__ );

                if (unlikely( tmp_mvar_value_19 == NULL ))
                {
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___numpy_version__ );
                }

                if ( tmp_mvar_value_19 == NULL )
                {
                    Py_DECREF( tmp_called_name_5 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__numpy_version__" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 114;

                    goto frame_exception_exit_1;
                }

                tmp_right_name_3 = tmp_mvar_value_19;
                tmp_args_element_name_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                if ( tmp_args_element_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_5 );

                    exception_lineno = 113;

                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_UserWarning );

                if (unlikely( tmp_mvar_value_20 == NULL ))
                {
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UserWarning );
                }

                if ( tmp_mvar_value_20 == NULL )
                {
                    Py_DECREF( tmp_called_name_5 );
                    Py_DECREF( tmp_args_element_name_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UserWarning" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 115;

                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_5 = tmp_mvar_value_20;
                frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 113;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
                }

                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_args_element_name_4 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 113;

                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            branch_no_5:;
        }
        tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy, const_str_plain__NumpyVersion );
        tmp_result = tmp_res != -1;
        if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

        if ( tmp_result == false )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_NumpyVersion" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }

        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_import_name_from_14;
            PyObject *tmp_name_name_14;
            PyObject *tmp_globals_name_14;
            PyObject *tmp_locals_name_14;
            PyObject *tmp_fromlist_name_14;
            PyObject *tmp_level_name_14;
            tmp_name_name_14 = const_str_digest_b655365bcea43a244f1fe6b8cbb86166;
            tmp_globals_name_14 = (PyObject *)moduledict_scipy;
            tmp_locals_name_14 = Py_None;
            tmp_fromlist_name_14 = const_tuple_str_plain_LowLevelCallable_tuple;
            tmp_level_name_14 = const_int_0;
            frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 119;
            tmp_import_name_from_14 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
            if ( tmp_import_name_from_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_LowLevelCallable );
            Py_DECREF( tmp_import_name_from_14 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_LowLevelCallable, tmp_assign_source_30 );
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_import_name_from_15;
            PyObject *tmp_name_name_15;
            PyObject *tmp_globals_name_15;
            PyObject *tmp_locals_name_15;
            PyObject *tmp_fromlist_name_15;
            PyObject *tmp_level_name_15;
            tmp_name_name_15 = const_str_digest_f7a7d46a596e4d3ebb7555599bda3d87;
            tmp_globals_name_15 = (PyObject *)moduledict_scipy;
            tmp_locals_name_15 = Py_None;
            tmp_fromlist_name_15 = const_tuple_str_plain_PytestTester_tuple;
            tmp_level_name_15 = const_int_0;
            frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 121;
            tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
            if ( tmp_import_name_from_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_PytestTester );
            Py_DECREF( tmp_import_name_from_15 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_PytestTester, tmp_assign_source_31 );
        }
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_21;
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_PytestTester );

            if (unlikely( tmp_mvar_value_21 == NULL ))
            {
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PytestTester );
            }

            CHECK_OBJECT( tmp_mvar_value_21 );
            tmp_called_name_6 = tmp_mvar_value_21;
            frame_6271bc2485ccd880df734aa8230f3035->m_frame.f_lineno = 122;
            tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_plain_scipy_tuple, 0 ) );

            if ( tmp_assign_source_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 122;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_32 );
        }
        tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy, const_str_plain_PytestTester );
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

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }

        branch_end_3:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6271bc2485ccd880df734aa8230f3035 );
#endif
    popFrameStack();

    assertFrameObject( frame_6271bc2485ccd880df734aa8230f3035 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6271bc2485ccd880df734aa8230f3035 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6271bc2485ccd880df734aa8230f3035, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6271bc2485ccd880df734aa8230f3035->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6271bc2485ccd880df734aa8230f3035, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 1 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
