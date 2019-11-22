/* Generated code for Python module 'urllib3.packages.rfc3986'
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

/* The "_module_urllib3$packages$rfc3986" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$packages$rfc3986;
PyDictObject *moduledict_urllib3$packages$rfc3986;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___copyright__;
extern PyObject *const_str_plain_IRIReference;
static PyObject *const_str_digest_e0046b9f77f0dda0e492b9513cba2853;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_uri_reference;
static PyObject *const_tuple_str_plain_is_valid_uri_tuple;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_api;
extern PyObject *const_str_plain_urlparse;
static PyObject *const_str_digest_b9cf5922a0c32eb3446c9142b54153da;
static PyObject *const_tuple_str_plain_normalize_uri_tuple;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_1;
extern PyObject *const_tuple_dc727193c75a686e3dee81df5ccbb9c8_tuple;
static PyObject *const_str_digest_5c9ec126c1c5bc16e95f6cfc9235637a;
static PyObject *const_tuple_c5165e6d89d73adec9aae04733cfeda3_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_URIReference;
static PyObject *const_str_digest_496f279d8b54b75e01e957b06f50d923;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_path;
extern PyObject *const_tuple_str_plain_URIReference_tuple;
extern PyObject *const_str_plain_rfc3986;
static PyObject *const_tuple_str_plain_uri_reference_tuple;
extern PyObject *const_tuple_str_plain_urlparse_tuple;
extern PyObject *const_str_plain_parseresult;
extern PyObject *const_str_plain_ParseResult;
static PyObject *const_str_digest_16eefc4b7d85525e2e579f83e40b173d;
extern PyObject *const_str_plain_NUITKA_PACKAGE_urllib3_packages;
static PyObject *const_str_digest_7d68df733d8590675c07460fb9899949;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain___author_email__;
extern PyObject *const_str_plain_normalize_uri;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain___license__;
extern PyObject *const_tuple_str_plain_ParseResult_tuple;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_iri_reference;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain___title__;
static PyObject *const_str_digest_f65b717430b20bc0f6413dd63c82e5dc;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_str_plain_iri_reference_tuple;
static PyObject *const_tuple_51c8653ab0951ebbfd18e28e963ccd28_tuple;
static PyObject *const_str_plain_NUITKA_PACKAGE_urllib3_packages_rfc3986;
static PyObject *const_str_digest_2ec6def2ec27a59ec2c2b8eb77ec7e51;
extern PyObject *const_str_plain_join;
extern PyObject *const_tuple_dcc299994d383eb1f20ad058df2da2c2_tuple;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_tuple_str_plain_IRIReference_tuple;
static PyObject *const_str_digest_375ae925cf542e77d499bb0f39fa45d3;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_NUITKA_PACKAGE_urllib3;
static PyObject *const_str_digest_7a0455b9f2e12bf21fc600d8a00c289f;
extern PyObject *const_str_plain_is_valid_uri;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_e0046b9f77f0dda0e492b9513cba2853 = UNSTREAM_STRING_ASCII( &constant_bin[ 5866126 ], 24, 0 );
    const_tuple_str_plain_is_valid_uri_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_is_valid_uri_tuple, 0, const_str_plain_is_valid_uri ); Py_INCREF( const_str_plain_is_valid_uri );
    const_str_digest_b9cf5922a0c32eb3446c9142b54153da = UNSTREAM_STRING_ASCII( &constant_bin[ 5866150 ], 26, 0 );
    const_tuple_str_plain_normalize_uri_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_normalize_uri_tuple, 0, const_str_plain_normalize_uri ); Py_INCREF( const_str_plain_normalize_uri );
    const_str_digest_5c9ec126c1c5bc16e95f6cfc9235637a = UNSTREAM_STRING_ASCII( &constant_bin[ 5866176 ], 11, 0 );
    const_tuple_c5165e6d89d73adec9aae04733cfeda3_tuple = PyTuple_New( 2 );
    const_str_plain_NUITKA_PACKAGE_urllib3_packages_rfc3986 = UNSTREAM_STRING_ASCII( &constant_bin[ 5866187 ], 39, 1 );
    PyTuple_SET_ITEM( const_tuple_c5165e6d89d73adec9aae04733cfeda3_tuple, 0, const_str_plain_NUITKA_PACKAGE_urllib3_packages_rfc3986 ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_urllib3_packages_rfc3986 );
    PyTuple_SET_ITEM( const_tuple_c5165e6d89d73adec9aae04733cfeda3_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_str_digest_496f279d8b54b75e01e957b06f50d923 = UNSTREAM_STRING_ASCII( &constant_bin[ 5866226 ], 214, 0 );
    const_tuple_str_plain_uri_reference_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_uri_reference_tuple, 0, const_str_plain_uri_reference ); Py_INCREF( const_str_plain_uri_reference );
    const_str_digest_16eefc4b7d85525e2e579f83e40b173d = UNSTREAM_STRING_ASCII( &constant_bin[ 5866440 ], 24, 0 );
    const_str_digest_7d68df733d8590675c07460fb9899949 = UNSTREAM_STRING_ASCII( &constant_bin[ 5866464 ], 33, 0 );
    const_str_digest_f65b717430b20bc0f6413dd63c82e5dc = UNSTREAM_STRING_ASCII( &constant_bin[ 5866497 ], 22, 0 );
    const_tuple_str_plain_iri_reference_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_iri_reference_tuple, 0, const_str_plain_iri_reference ); Py_INCREF( const_str_plain_iri_reference );
    const_tuple_51c8653ab0951ebbfd18e28e963ccd28_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_51c8653ab0951ebbfd18e28e963ccd28_tuple, 0, const_str_plain_ParseResult ); Py_INCREF( const_str_plain_ParseResult );
    PyTuple_SET_ITEM( const_tuple_51c8653ab0951ebbfd18e28e963ccd28_tuple, 1, const_str_plain_URIReference ); Py_INCREF( const_str_plain_URIReference );
    PyTuple_SET_ITEM( const_tuple_51c8653ab0951ebbfd18e28e963ccd28_tuple, 2, const_str_plain_IRIReference ); Py_INCREF( const_str_plain_IRIReference );
    PyTuple_SET_ITEM( const_tuple_51c8653ab0951ebbfd18e28e963ccd28_tuple, 3, const_str_plain_is_valid_uri ); Py_INCREF( const_str_plain_is_valid_uri );
    PyTuple_SET_ITEM( const_tuple_51c8653ab0951ebbfd18e28e963ccd28_tuple, 4, const_str_plain_normalize_uri ); Py_INCREF( const_str_plain_normalize_uri );
    PyTuple_SET_ITEM( const_tuple_51c8653ab0951ebbfd18e28e963ccd28_tuple, 5, const_str_plain_uri_reference ); Py_INCREF( const_str_plain_uri_reference );
    PyTuple_SET_ITEM( const_tuple_51c8653ab0951ebbfd18e28e963ccd28_tuple, 6, const_str_plain_iri_reference ); Py_INCREF( const_str_plain_iri_reference );
    PyTuple_SET_ITEM( const_tuple_51c8653ab0951ebbfd18e28e963ccd28_tuple, 7, const_str_plain_urlparse ); Py_INCREF( const_str_plain_urlparse );
    PyTuple_SET_ITEM( const_tuple_51c8653ab0951ebbfd18e28e963ccd28_tuple, 8, const_str_plain___title__ ); Py_INCREF( const_str_plain___title__ );
    PyTuple_SET_ITEM( const_tuple_51c8653ab0951ebbfd18e28e963ccd28_tuple, 9, const_str_plain___author__ ); Py_INCREF( const_str_plain___author__ );
    PyTuple_SET_ITEM( const_tuple_51c8653ab0951ebbfd18e28e963ccd28_tuple, 10, const_str_plain___author_email__ ); Py_INCREF( const_str_plain___author_email__ );
    PyTuple_SET_ITEM( const_tuple_51c8653ab0951ebbfd18e28e963ccd28_tuple, 11, const_str_plain___license__ ); Py_INCREF( const_str_plain___license__ );
    PyTuple_SET_ITEM( const_tuple_51c8653ab0951ebbfd18e28e963ccd28_tuple, 12, const_str_plain___copyright__ ); Py_INCREF( const_str_plain___copyright__ );
    PyTuple_SET_ITEM( const_tuple_51c8653ab0951ebbfd18e28e963ccd28_tuple, 13, const_str_plain___version__ ); Py_INCREF( const_str_plain___version__ );
    const_str_digest_2ec6def2ec27a59ec2c2b8eb77ec7e51 = UNSTREAM_STRING_ASCII( &constant_bin[ 5866519 ], 16, 0 );
    const_str_digest_375ae925cf542e77d499bb0f39fa45d3 = UNSTREAM_STRING_ASCII( &constant_bin[ 5866535 ], 5, 0 );
    const_str_digest_7a0455b9f2e12bf21fc600d8a00c289f = UNSTREAM_STRING_ASCII( &constant_bin[ 5866540 ], 36, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$packages$rfc3986( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_5a7805fa45e6b72eee2fd47ab06a2193;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_7a0455b9f2e12bf21fc600d8a00c289f );
    codeobj_5a7805fa45e6b72eee2fd47ab06a2193 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_7d68df733d8590675c07460fb9899949, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$packages$rfc3986 =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.packages.rfc3986",
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

MOD_INIT_DECL( urllib3$packages$rfc3986 )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$packages$rfc3986 );
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
    puts("urllib3.packages.rfc3986: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.packages.rfc3986: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.packages.rfc3986: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$packages$rfc3986" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$packages$rfc3986 = Py_InitModule4(
        "urllib3.packages.rfc3986",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$packages$rfc3986 = PyModule_Create( &mdef_urllib3$packages$rfc3986 );
#endif

    moduledict_urllib3$packages$rfc3986 = MODULE_DICT( module_urllib3$packages$rfc3986 );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_urllib3$packages$rfc3986,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$packages$rfc3986,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$packages$rfc3986,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$packages$rfc3986,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$packages$rfc3986 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_16eefc4b7d85525e2e579f83e40b173d, module_urllib3$packages$rfc3986 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_5a7805fa45e6b72eee2fd47ab06a2193;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_496f279d8b54b75e01e957b06f50d923;
        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_5a7805fa45e6b72eee2fd47ab06a2193 = MAKE_MODULE_FRAME( codeobj_5a7805fa45e6b72eee2fd47ab06a2193, module_urllib3$packages$rfc3986 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_5a7805fa45e6b72eee2fd47ab06a2193 );
    assert( Py_REFCNT( frame_5a7805fa45e6b72eee2fd47ab06a2193 ) == 2 );

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
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 1;
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
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 1;
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
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 1;
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
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 1;
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
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 1;
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_dc727193c75a686e3dee81df5ccbb9c8_tuple, 0 ) );

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = const_str_digest_2ec6def2ec27a59ec2c2b8eb77ec7e51;
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 1;
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
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 1;
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
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 1;
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
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 1;
        tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_dcc299994d383eb1f20ad058df2da2c2_tuple, 0 ) );

        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = const_str_plain_rfc3986;
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 1;
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
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 1;
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
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_c5165e6d89d73adec9aae04733cfeda3_tuple, 0 ) );

        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_assign_source_3, 3, tmp_list_element_1 );
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_api;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$packages$rfc3986;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_iri_reference_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 25;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_urllib3$packages$rfc3986,
                const_str_plain_iri_reference,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_iri_reference );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain_iri_reference, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_api;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$packages$rfc3986;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_IRIReference_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 26;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_2 ) )
        {
           tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_urllib3$packages$rfc3986,
                const_str_plain_IRIReference,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_IRIReference );
        }

        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain_IRIReference, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_api;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$packages$rfc3986;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_is_valid_uri_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 27;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_3 ) )
        {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_urllib3$packages$rfc3986,
                const_str_plain_is_valid_uri,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_is_valid_uri );
        }

        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain_is_valid_uri, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_api;
        tmp_globals_name_4 = (PyObject *)moduledict_urllib3$packages$rfc3986;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_normalize_uri_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 28;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_urllib3$packages$rfc3986,
                const_str_plain_normalize_uri,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_normalize_uri );
        }

        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain_normalize_uri, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_api;
        tmp_globals_name_5 = (PyObject *)moduledict_urllib3$packages$rfc3986;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_uri_reference_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 29;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_urllib3$packages$rfc3986,
                const_str_plain_uri_reference,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_uri_reference );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain_uri_reference, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_api;
        tmp_globals_name_6 = (PyObject *)moduledict_urllib3$packages$rfc3986;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_URIReference_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 30;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_urllib3$packages$rfc3986,
                const_str_plain_URIReference,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_URIReference );
        }

        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain_URIReference, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_api;
        tmp_globals_name_7 = (PyObject *)moduledict_urllib3$packages$rfc3986;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_urlparse_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 31;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_urllib3$packages$rfc3986,
                const_str_plain_urlparse,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_urlparse );
        }

        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain_urlparse, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_parseresult;
        tmp_globals_name_8 = (PyObject *)moduledict_urllib3$packages$rfc3986;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_ParseResult_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame.f_lineno = 32;
        tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_urllib3$packages$rfc3986,
                const_str_plain_ParseResult,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_ParseResult );
        }

        Py_DECREF( tmp_import_name_from_8 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain_ParseResult, tmp_assign_source_12 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a7805fa45e6b72eee2fd47ab06a2193 );
#endif
    popFrameStack();

    assertFrameObject( frame_5a7805fa45e6b72eee2fd47ab06a2193 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a7805fa45e6b72eee2fd47ab06a2193 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5a7805fa45e6b72eee2fd47ab06a2193, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5a7805fa45e6b72eee2fd47ab06a2193->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5a7805fa45e6b72eee2fd47ab06a2193, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = const_str_plain_rfc3986;
        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___title__, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = const_str_digest_f65b717430b20bc0f6413dd63c82e5dc;
        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = const_str_digest_b9cf5922a0c32eb3446c9142b54153da;
        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___author_email__, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = const_str_digest_5c9ec126c1c5bc16e95f6cfc9235637a;
        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = const_str_digest_e0046b9f77f0dda0e492b9513cba2853;
        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___copyright__, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = const_str_digest_375ae925cf542e77d499bb0f39fa45d3;
        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = const_tuple_51c8653ab0951ebbfd18e28e963ccd28_tuple;
        UPDATE_STRING_DICT0( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_19 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 1 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$rfc3986, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_urllib3$packages$rfc3986 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
