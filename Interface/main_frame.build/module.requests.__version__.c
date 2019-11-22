/* Generated code for Python module 'requests.__version__'
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

/* The "_module_requests$__version__" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$__version__;
PyDictObject *moduledict_requests$__version__;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___copyright__;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_c732b0001bd9466f3f59e4e065102217;
static PyObject *const_str_digest_b0b40594a48ef757787421cf2d82910a;
extern PyObject *const_str_plain_requests;
static PyObject *const_str_digest_f924d4e9bded95196120a23f5588dcb3;
static PyObject *const_str_digest_3e2093e591751aa28d709af1b89d3ffc;
extern PyObject *const_str_plain___build__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___cake__;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_digest_2e2aaa12f999383a6746e9b7fa7f2d01;
static PyObject *const_str_digest_dac880088c76a67146081efa1b2911e5;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain___author_email__;
extern PyObject *const_str_plain___license__;
extern PyObject *const_str_plain___url__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___title__;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_c8df0594e01e4ba717a6fe865ce1ddef;
static PyObject *const_str_digest_6cdfef70e7012bff1e9ace07e7174bd8;
static PyObject *const_str_digest_4b66185fba40f207a567bf87be4d87f7;
static PyObject *const_str_digest_e1f5c84b9e767a5638aa03d199586242;
static PyObject *const_int_pos_139776;
extern PyObject *const_str_plain___description__;
static PyObject *const_str_digest_f45d7c3ad4be7ff6c8635dcc1dd81887;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_c732b0001bd9466f3f59e4e065102217 = UNSTREAM_STRING_ASCII( &constant_bin[ 3999846 ], 10, 0 );
    const_str_digest_b0b40594a48ef757787421cf2d82910a = UNSTREAM_STRING_ASCII( &constant_bin[ 3999942 ], 19, 0 );
    const_str_digest_f924d4e9bded95196120a23f5588dcb3 = UNSTREAM_STRING_ASCII( &constant_bin[ 3999961 ], 23, 0 );
    const_str_digest_3e2093e591751aa28d709af1b89d3ffc = UNSTREAM_STRING_ASCII( &constant_bin[ 3999767 ], 26, 0 );
    const_str_digest_2e2aaa12f999383a6746e9b7fa7f2d01 = UNSTREAM_STRING_ASCII( &constant_bin[ 3999984 ], 6, 0 );
    const_str_digest_dac880088c76a67146081efa1b2911e5 = UNSTREAM_STRING_ASCII( &constant_bin[ 3999990 ], 20, 0 );
    const_str_digest_c8df0594e01e4ba717a6fe865ce1ddef = UNSTREAM_STRING_ASCII( &constant_bin[ 4000010 ], 28, 0 );
    const_str_digest_6cdfef70e7012bff1e9ace07e7174bd8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4000038 ], 29, 0 );
    const_str_digest_4b66185fba40f207a567bf87be4d87f7 = UNSTREAM_STRING( &constant_bin[ 4000067 ], 12, 0 );
    const_str_digest_e1f5c84b9e767a5638aa03d199586242 = UNSTREAM_STRING_ASCII( &constant_bin[ 4000079 ], 23, 0 );
    const_int_pos_139776 = PyLong_FromUnsignedLong( 139776ul );
    const_str_digest_f45d7c3ad4be7ff6c8635dcc1dd81887 = UNSTREAM_STRING_ASCII( &constant_bin[ 3999821 ], 13, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$__version__( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_224beed51afeb7a828727f6e3a90955f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_e1f5c84b9e767a5638aa03d199586242 );
    codeobj_224beed51afeb7a828727f6e3a90955f = MAKE_CODEOBJ( module_filename_obj, const_str_digest_6cdfef70e7012bff1e9ace07e7174bd8, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$__version__ =
{
    PyModuleDef_HEAD_INIT,
    "requests.__version__",
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

MOD_INIT_DECL( requests$__version__ )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$__version__ );
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
    puts("requests.__version__: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.__version__: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.__version__: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$__version__" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$__version__ = Py_InitModule4(
        "requests.__version__",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_requests$__version__ = PyModule_Create( &mdef_requests$__version__ );
#endif

    moduledict_requests$__version__ = MODULE_DICT( module_requests$__version__ );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_requests$__version__,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_requests$__version__,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$__version__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$__version__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_requests$__version__ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_dac880088c76a67146081efa1b2911e5, module_requests$__version__ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_224beed51afeb7a828727f6e3a90955f;
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
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_224beed51afeb7a828727f6e3a90955f = MAKE_MODULE_FRAME( codeobj_224beed51afeb7a828727f6e3a90955f, module_requests$__version__ );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_224beed51afeb7a828727f6e3a90955f );
    assert( Py_REFCNT( frame_224beed51afeb7a828727f6e3a90955f ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___spec__ );

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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_224beed51afeb7a828727f6e3a90955f );
#endif
    popFrameStack();

    assertFrameObject( frame_224beed51afeb7a828727f6e3a90955f );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_224beed51afeb7a828727f6e3a90955f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_224beed51afeb7a828727f6e3a90955f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_224beed51afeb7a828727f6e3a90955f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_224beed51afeb7a828727f6e3a90955f, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_str_plain_requests;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___title__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_str_digest_f924d4e9bded95196120a23f5588dcb3;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___description__, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_str_digest_3e2093e591751aa28d709af1b89d3ffc;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___url__, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_str_digest_2e2aaa12f999383a6746e9b7fa7f2d01;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_int_pos_139776;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___build__, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_str_digest_f45d7c3ad4be7ff6c8635dcc1dd81887;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_str_digest_b0b40594a48ef757787421cf2d82910a;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___author_email__, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_str_digest_c732b0001bd9466f3f59e4e065102217;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = const_str_digest_c8df0594e01e4ba717a6fe865ce1ddef;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___copyright__, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = const_str_digest_4b66185fba40f207a567bf87be4d87f7;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___cake__, tmp_assign_source_13 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_requests$__version__ );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
