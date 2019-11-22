/* Generated code for Python module 'numpy._distributor_init'
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

/* The "_module_numpy$_distributor_init" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$_distributor_init;
PyDictObject *moduledict_numpy$_distributor_init;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_stacklevel;
extern PyObject *const_str_plain_isdir;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_nt;
extern PyObject *const_str_plain_basedir;
extern PyObject *const_str_plain_filename;
extern PyObject *const_str_digest_24cccd96eb56be45d452be79ede867b1;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_str_plain_WinDLL_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_ctypes;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_path;
static PyObject *const_str_digest_9d7742131105ffa3be8e55e3a9a08e73;
extern PyObject *const_str_newline;
extern PyObject *const_str_plain_abspath;
static PyObject *const_str_digest_0b3fd0d939743b184829cb00c288aa00;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_8fa80cbfe9fb01c3d3710030f0c55769;
static PyObject *const_str_plain_libs_dir;
extern PyObject *const_str_plain_os;
static PyObject *const_str_digest_d2f7521d1810689d2469b77a4bfedb6c;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_WinDLL;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_32c2a1a41455dff40f05256ad9e6d53e;
extern PyObject *const_str_plain_glob;
static PyObject *const_str_digest_ed3626189ab55f4c812e35ee294e57e4;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_DLL_filenames;
static PyObject *const_dict_1603a6b96ae05d982778ce6946fdd985;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___debug__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_WinDLL_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_WinDLL_tuple, 0, const_str_plain_WinDLL ); Py_INCREF( const_str_plain_WinDLL );
    const_str_digest_9d7742131105ffa3be8e55e3a9a08e73 = UNSTREAM_STRING_ASCII( &constant_bin[ 2210487 ], 252, 0 );
    const_str_digest_0b3fd0d939743b184829cb00c288aa00 = UNSTREAM_STRING_ASCII( &constant_bin[ 2210739 ], 37, 0 );
    const_str_digest_8fa80cbfe9fb01c3d3710030f0c55769 = UNSTREAM_STRING_ASCII( &constant_bin[ 2210776 ], 23, 0 );
    const_str_plain_libs_dir = UNSTREAM_STRING_ASCII( &constant_bin[ 2210799 ], 8, 1 );
    const_str_digest_d2f7521d1810689d2469b77a4bfedb6c = UNSTREAM_STRING_ASCII( &constant_bin[ 2210807 ], 32, 0 );
    const_str_digest_32c2a1a41455dff40f05256ad9e6d53e = UNSTREAM_STRING_ASCII( &constant_bin[ 2210839 ], 26, 0 );
    const_str_digest_ed3626189ab55f4c812e35ee294e57e4 = UNSTREAM_STRING_ASCII( &constant_bin[ 2210865 ], 13, 0 );
    const_str_plain_DLL_filenames = UNSTREAM_STRING_ASCII( &constant_bin[ 2210878 ], 13, 1 );
    const_dict_1603a6b96ae05d982778ce6946fdd985 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_1603a6b96ae05d982778ce6946fdd985, const_str_plain_stacklevel, const_int_pos_1 );
    assert( PyDict_Size( const_dict_1603a6b96ae05d982778ce6946fdd985 ) == 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$_distributor_init( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_eb664ca68e7fd46e3cd4215c6d531897;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_32c2a1a41455dff40f05256ad9e6d53e );
    codeobj_eb664ca68e7fd46e3cd4215c6d531897 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_d2f7521d1810689d2469b77a4bfedb6c, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$_distributor_init =
{
    PyModuleDef_HEAD_INIT,
    "numpy._distributor_init",
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

MOD_INIT_DECL( numpy$_distributor_init )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$_distributor_init );
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
    puts("numpy._distributor_init: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy._distributor_init: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy._distributor_init: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$_distributor_init" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$_distributor_init = Py_InitModule4(
        "numpy._distributor_init",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$_distributor_init = PyModule_Create( &mdef_numpy$_distributor_init );
#endif

    moduledict_numpy$_distributor_init = MODULE_DICT( module_numpy$_distributor_init );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$_distributor_init,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$_distributor_init,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_distributor_init,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_distributor_init,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$_distributor_init );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_8fa80cbfe9fb01c3d3710030f0c55769, module_numpy$_distributor_init );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_eb664ca68e7fd46e3cd4215c6d531897;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_9d7742131105ffa3be8e55e3a9a08e73;
        UPDATE_STRING_DICT0( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_eb664ca68e7fd46e3cd4215c6d531897 = MAKE_MODULE_FRAME( codeobj_eb664ca68e7fd46e3cd4215c6d531897, module_numpy$_distributor_init );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_eb664ca68e7fd46e3cd4215c6d531897 );
    assert( Py_REFCNT( frame_eb664ca68e7fd46e3cd4215c6d531897 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_os;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$_distributor_init;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_eb664ca68e7fd46e3cd4215c6d531897->m_frame.f_lineno = 8;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_ctypes;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$_distributor_init;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_WinDLL_tuple;
        tmp_level_name_2 = const_int_0;
        frame_eb664ca68e7fd46e3cd4215c6d531897->m_frame.f_lineno = 9;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_WinDLL );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_WinDLL, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_glob;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$_distributor_init;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_eb664ca68e7fd46e3cd4215c6d531897->m_frame.f_lineno = 10;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_glob, tmp_assign_source_6 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 11;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_nt;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

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
            nuitka_bool tmp_assign_source_7;
            tmp_assign_source_7 = NUITKA_BOOL_TRUE;
            tmp_try_except_1__unhandled_indicator = tmp_assign_source_7;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 15;

                goto try_except_handler_1;
            }

            tmp_source_name_3 = tmp_mvar_value_4;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 15;

                goto try_except_handler_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dirname );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 15;

                goto try_except_handler_1;
            }
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___file__ );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___file__ );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__file__" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 15;

                goto try_except_handler_1;
            }

            tmp_args_element_name_1 = tmp_mvar_value_5;
            frame_eb664ca68e7fd46e3cd4215c6d531897->m_frame.f_lineno = 15;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 15;

                goto try_except_handler_1;
            }
            UPDATE_STRING_DICT1( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_basedir, tmp_assign_source_8 );
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

        {
            nuitka_bool tmp_assign_source_9;
            tmp_assign_source_9 = NUITKA_BOOL_FALSE;
            tmp_try_except_1__unhandled_indicator = tmp_assign_source_9;
        }
        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );
        goto try_end_1;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$_distributor_init );
        return MOD_RETURN_VALUE( NULL );
        // End of try:
        try_end_1:;
        // Tried code:
        {
            nuitka_bool tmp_condition_result_2;
            nuitka_bool tmp_compexpr_left_2;
            nuitka_bool tmp_compexpr_right_2;
            assert( tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
            tmp_compexpr_left_2 = tmp_try_except_1__unhandled_indicator;
            tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
            tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_10;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_4;
                PyObject *tmp_source_name_5;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_6;
                PyObject *tmp_source_name_7;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_mvar_value_8;
                PyObject *tmp_args_element_name_4;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_os );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 19;

                    goto try_except_handler_2;
                }

                tmp_source_name_5 = tmp_mvar_value_6;
                tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
                if ( tmp_source_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 19;

                    goto try_except_handler_2;
                }
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_abspath );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 19;

                    goto try_except_handler_2;
                }
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_os );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
                }

                if ( tmp_mvar_value_7 == NULL )
                {
                    Py_DECREF( tmp_called_name_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 19;

                    goto try_except_handler_2;
                }

                tmp_source_name_7 = tmp_mvar_value_7;
                tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_path );
                if ( tmp_source_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 19;

                    goto try_except_handler_2;
                }
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_join );
                Py_DECREF( tmp_source_name_6 );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 19;

                    goto try_except_handler_2;
                }
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_basedir );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basedir );
                }

                if ( tmp_mvar_value_8 == NULL )
                {
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_called_name_3 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "basedir" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 19;

                    goto try_except_handler_2;
                }

                tmp_args_element_name_3 = tmp_mvar_value_8;
                tmp_args_element_name_4 = const_str_digest_24cccd96eb56be45d452be79ede867b1;
                frame_eb664ca68e7fd46e3cd4215c6d531897->m_frame.f_lineno = 19;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                    tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_called_name_3 );
                if ( tmp_args_element_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 19;

                    goto try_except_handler_2;
                }
                frame_eb664ca68e7fd46e3cd4215c6d531897->m_frame.f_lineno = 19;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_2 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 19;

                    goto try_except_handler_2;
                }
                UPDATE_STRING_DICT1( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_libs_dir, tmp_assign_source_10 );
            }
            {
                PyObject *tmp_assign_source_11;
                tmp_assign_source_11 = PyList_New( 0 );
                UPDATE_STRING_DICT1( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_DLL_filenames, tmp_assign_source_11 );
            }
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_8;
                PyObject *tmp_source_name_9;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_mvar_value_10;
                int tmp_truth_name_1;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_os );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
                }

                if ( tmp_mvar_value_9 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 21;

                    goto try_except_handler_2;
                }

                tmp_source_name_9 = tmp_mvar_value_9;
                tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_path );
                if ( tmp_source_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 21;

                    goto try_except_handler_2;
                }
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_isdir );
                Py_DECREF( tmp_source_name_8 );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 21;

                    goto try_except_handler_2;
                }
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_libs_dir );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_libs_dir );
                }

                if ( tmp_mvar_value_10 == NULL )
                {
                    Py_DECREF( tmp_called_name_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "libs_dir" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 21;

                    goto try_except_handler_2;
                }

                tmp_args_element_name_5 = tmp_mvar_value_10;
                frame_eb664ca68e7fd46e3cd4215c6d531897->m_frame.f_lineno = 21;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5 };
                    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_called_name_4 );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 21;

                    goto try_except_handler_2;
                }
                tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
                if ( tmp_truth_name_1 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_1 );

                    exception_lineno = 21;

                    goto try_except_handler_2;
                }
                tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_1 );
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
                    PyObject *tmp_assign_source_12;
                    PyObject *tmp_iter_arg_1;
                    PyObject *tmp_called_name_5;
                    PyObject *tmp_source_name_10;
                    PyObject *tmp_mvar_value_11;
                    PyObject *tmp_args_element_name_6;
                    PyObject *tmp_called_name_6;
                    PyObject *tmp_source_name_11;
                    PyObject *tmp_source_name_12;
                    PyObject *tmp_mvar_value_12;
                    PyObject *tmp_args_element_name_7;
                    PyObject *tmp_mvar_value_13;
                    PyObject *tmp_args_element_name_8;
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_glob );

                    if (unlikely( tmp_mvar_value_11 == NULL ))
                    {
                        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
                    }

                    if ( tmp_mvar_value_11 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "glob" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 22;

                        goto try_except_handler_2;
                    }

                    tmp_source_name_10 = tmp_mvar_value_11;
                    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_glob );
                    if ( tmp_called_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 22;

                        goto try_except_handler_2;
                    }
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_os );

                    if (unlikely( tmp_mvar_value_12 == NULL ))
                    {
                        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
                    }

                    if ( tmp_mvar_value_12 == NULL )
                    {
                        Py_DECREF( tmp_called_name_5 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 22;

                        goto try_except_handler_2;
                    }

                    tmp_source_name_12 = tmp_mvar_value_12;
                    tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_path );
                    if ( tmp_source_name_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_5 );

                        exception_lineno = 22;

                        goto try_except_handler_2;
                    }
                    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_join );
                    Py_DECREF( tmp_source_name_11 );
                    if ( tmp_called_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_5 );

                        exception_lineno = 22;

                        goto try_except_handler_2;
                    }
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_libs_dir );

                    if (unlikely( tmp_mvar_value_13 == NULL ))
                    {
                        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_libs_dir );
                    }

                    if ( tmp_mvar_value_13 == NULL )
                    {
                        Py_DECREF( tmp_called_name_5 );
                        Py_DECREF( tmp_called_name_6 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "libs_dir" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 22;

                        goto try_except_handler_2;
                    }

                    tmp_args_element_name_7 = tmp_mvar_value_13;
                    tmp_args_element_name_8 = const_str_digest_ed3626189ab55f4c812e35ee294e57e4;
                    frame_eb664ca68e7fd46e3cd4215c6d531897->m_frame.f_lineno = 22;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
                    }

                    Py_DECREF( tmp_called_name_6 );
                    if ( tmp_args_element_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_5 );

                        exception_lineno = 22;

                        goto try_except_handler_2;
                    }
                    frame_eb664ca68e7fd46e3cd4215c6d531897->m_frame.f_lineno = 22;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_6 };
                        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
                    }

                    Py_DECREF( tmp_called_name_5 );
                    Py_DECREF( tmp_args_element_name_6 );
                    if ( tmp_iter_arg_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 22;

                        goto try_except_handler_2;
                    }
                    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_1 );
                    Py_DECREF( tmp_iter_arg_1 );
                    if ( tmp_assign_source_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 22;

                        goto try_except_handler_2;
                    }
                    assert( tmp_for_loop_1__for_iterator == NULL );
                    tmp_for_loop_1__for_iterator = tmp_assign_source_12;
                }
                // Tried code:
                loop_start_1:;
                {
                    PyObject *tmp_next_source_1;
                    PyObject *tmp_assign_source_13;
                    CHECK_OBJECT( tmp_for_loop_1__for_iterator );
                    tmp_next_source_1 = tmp_for_loop_1__for_iterator;
                    tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_1 );
                    if ( tmp_assign_source_13 == NULL )
                    {
                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                        {

                            goto loop_end_1;
                        }
                        else
                        {

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                            exception_lineno = 22;
                            goto try_except_handler_3;
                        }
                    }

                    {
                        PyObject *old = tmp_for_loop_1__iter_value;
                        tmp_for_loop_1__iter_value = tmp_assign_source_13;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_14;
                    CHECK_OBJECT( tmp_for_loop_1__iter_value );
                    tmp_assign_source_14 = tmp_for_loop_1__iter_value;
                    UPDATE_STRING_DICT0( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_filename, tmp_assign_source_14 );
                }
                {
                    PyObject *tmp_called_name_7;
                    PyObject *tmp_mvar_value_14;
                    PyObject *tmp_call_result_2;
                    PyObject *tmp_args_element_name_9;
                    PyObject *tmp_called_name_8;
                    PyObject *tmp_source_name_13;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_mvar_value_15;
                    PyObject *tmp_args_element_name_10;
                    PyObject *tmp_mvar_value_16;
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_WinDLL );

                    if (unlikely( tmp_mvar_value_14 == NULL ))
                    {
                        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WinDLL );
                    }

                    if ( tmp_mvar_value_14 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WinDLL" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 26;

                        goto try_except_handler_3;
                    }

                    tmp_called_name_7 = tmp_mvar_value_14;
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_os );

                    if (unlikely( tmp_mvar_value_15 == NULL ))
                    {
                        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
                    }

                    if ( tmp_mvar_value_15 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 26;

                        goto try_except_handler_3;
                    }

                    tmp_source_name_14 = tmp_mvar_value_15;
                    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_path );
                    if ( tmp_source_name_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 26;

                        goto try_except_handler_3;
                    }
                    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_abspath );
                    Py_DECREF( tmp_source_name_13 );
                    if ( tmp_called_name_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 26;

                        goto try_except_handler_3;
                    }
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_filename );

                    if (unlikely( tmp_mvar_value_16 == NULL ))
                    {
                        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_filename );
                    }

                    if ( tmp_mvar_value_16 == NULL )
                    {
                        Py_DECREF( tmp_called_name_8 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "filename" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 26;

                        goto try_except_handler_3;
                    }

                    tmp_args_element_name_10 = tmp_mvar_value_16;
                    frame_eb664ca68e7fd46e3cd4215c6d531897->m_frame.f_lineno = 26;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_10 };
                        tmp_args_element_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                    }

                    Py_DECREF( tmp_called_name_8 );
                    if ( tmp_args_element_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 26;

                        goto try_except_handler_3;
                    }
                    frame_eb664ca68e7fd46e3cd4215c6d531897->m_frame.f_lineno = 26;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_9 };
                        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_9 );
                    if ( tmp_call_result_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 26;

                        goto try_except_handler_3;
                    }
                    Py_DECREF( tmp_call_result_2 );
                }
                {
                    PyObject *tmp_called_name_9;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_mvar_value_17;
                    PyObject *tmp_call_result_3;
                    PyObject *tmp_args_element_name_11;
                    PyObject *tmp_mvar_value_18;
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_DLL_filenames );

                    if (unlikely( tmp_mvar_value_17 == NULL ))
                    {
                        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DLL_filenames );
                    }

                    if ( tmp_mvar_value_17 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DLL_filenames" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 27;

                        goto try_except_handler_3;
                    }

                    tmp_source_name_15 = tmp_mvar_value_17;
                    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_append );
                    if ( tmp_called_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 27;

                        goto try_except_handler_3;
                    }
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_filename );

                    if (unlikely( tmp_mvar_value_18 == NULL ))
                    {
                        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_filename );
                    }

                    if ( tmp_mvar_value_18 == NULL )
                    {
                        Py_DECREF( tmp_called_name_9 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "filename" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 27;

                        goto try_except_handler_3;
                    }

                    tmp_args_element_name_11 = tmp_mvar_value_18;
                    frame_eb664ca68e7fd46e3cd4215c6d531897->m_frame.f_lineno = 27;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_11 };
                        tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
                    }

                    Py_DECREF( tmp_called_name_9 );
                    if ( tmp_call_result_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 27;

                        goto try_except_handler_3;
                    }
                    Py_DECREF( tmp_call_result_3 );
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 22;

                    goto try_except_handler_3;
                }
                goto loop_start_1;
                loop_end_1:;
                goto try_end_2;
                // Exception handler code:
                try_except_handler_3:;
                exception_keeper_type_2 = exception_type;
                exception_keeper_value_2 = exception_value;
                exception_keeper_tb_2 = exception_tb;
                exception_keeper_lineno_2 = exception_lineno;
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
                exception_type = exception_keeper_type_2;
                exception_value = exception_keeper_value_2;
                exception_tb = exception_keeper_tb_2;
                exception_lineno = exception_keeper_lineno_2;

                goto try_except_handler_2;
                // End of try:
                try_end_2:;
                Py_XDECREF( tmp_for_loop_1__iter_value );
                tmp_for_loop_1__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
                Py_DECREF( tmp_for_loop_1__for_iterator );
                tmp_for_loop_1__for_iterator = NULL;

                branch_no_3:;
            }
            branch_no_2:;
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        try_end_3:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_mvar_value_19;
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_DLL_filenames );

            if (unlikely( tmp_mvar_value_19 == NULL ))
            {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DLL_filenames );
            }

            if ( tmp_mvar_value_19 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DLL_filenames" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 28;

                goto frame_exception_exit_1;
            }

            tmp_len_arg_1 = tmp_mvar_value_19;
            tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            assert( !(tmp_res == -1) );
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
                PyObject *tmp_assign_source_15;
                PyObject *tmp_name_name_4;
                PyObject *tmp_globals_name_4;
                PyObject *tmp_locals_name_4;
                PyObject *tmp_fromlist_name_4;
                PyObject *tmp_level_name_4;
                tmp_name_name_4 = const_str_plain_warnings;
                tmp_globals_name_4 = (PyObject *)moduledict_numpy$_distributor_init;
                tmp_locals_name_4 = Py_None;
                tmp_fromlist_name_4 = Py_None;
                tmp_level_name_4 = const_int_0;
                frame_eb664ca68e7fd46e3cd4215c6d531897->m_frame.f_lineno = 29;
                tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
                if ( tmp_assign_source_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 29;

                    goto frame_exception_exit_1;
                }
                UPDATE_STRING_DICT1( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_15 );
            }
            {
                PyObject *tmp_called_name_10;
                PyObject *tmp_source_name_16;
                PyObject *tmp_mvar_value_20;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_called_name_11;
                PyObject *tmp_source_name_17;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_mvar_value_21;
                PyObject *tmp_kw_name_1;
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_warnings );

                if (unlikely( tmp_mvar_value_20 == NULL ))
                {
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
                }

                CHECK_OBJECT( tmp_mvar_value_20 );
                tmp_source_name_16 = tmp_mvar_value_20;
                tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_warn );
                if ( tmp_called_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 30;

                    goto frame_exception_exit_1;
                }
                tmp_left_name_1 = const_str_digest_0b3fd0d939743b184829cb00c288aa00;
                tmp_source_name_17 = const_str_newline;
                tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_join );
                assert( !(tmp_called_name_11 == NULL) );
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_DLL_filenames );

                if (unlikely( tmp_mvar_value_21 == NULL ))
                {
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DLL_filenames );
                }

                if ( tmp_mvar_value_21 == NULL )
                {
                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_called_name_11 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DLL_filenames" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 31;

                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_12 = tmp_mvar_value_21;
                frame_eb664ca68e7fd46e3cd4215c6d531897->m_frame.f_lineno = 31;
                {
                    PyObject *call_args[] = { tmp_args_element_name_12 };
                    tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
                }

                Py_DECREF( tmp_called_name_11 );
                if ( tmp_right_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_10 );

                    exception_lineno = 31;

                    goto frame_exception_exit_1;
                }
                tmp_tuple_element_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_10 );

                    exception_lineno = 30;

                    goto frame_exception_exit_1;
                }
                tmp_args_name_1 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
                tmp_kw_name_1 = PyDict_Copy( const_dict_1603a6b96ae05d982778ce6946fdd985 );
                frame_eb664ca68e7fd46e3cd4215c6d531897->m_frame.f_lineno = 30;
                tmp_call_result_4 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_called_name_10 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 30;

                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_no_4:;
        }
        branch_no_1:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb664ca68e7fd46e3cd4215c6d531897 );
#endif
    popFrameStack();

    assertFrameObject( frame_eb664ca68e7fd46e3cd4215c6d531897 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb664ca68e7fd46e3cd4215c6d531897 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eb664ca68e7fd46e3cd4215c6d531897, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eb664ca68e7fd46e3cd4215c6d531897->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eb664ca68e7fd46e3cd4215c6d531897, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$_distributor_init );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
