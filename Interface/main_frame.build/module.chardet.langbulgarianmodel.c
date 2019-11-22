/* Generated code for Python module 'chardet.langbulgarianmodel'
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

/* The "_module_chardet$langbulgarianmodel" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$langbulgarianmodel;
PyDictObject *moduledict_chardet$langbulgarianmodel;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_d12d0d38133deb374cda3f2e99175f9b_tuple;
extern PyObject *const_str_plain_precedence_matrix;
extern PyObject *const_str_plain_charset_name;
extern PyObject *const_str_plain_keep_english_letter;
static PyObject *const_str_plain_Latin5_BulgarianCharToOrderMap;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_language;
static PyObject *const_str_plain_win1251BulgarianCharToOrderMap;
static PyObject *const_str_digest_d5ffc5d3d4577ce00b154e8a3a81f139;
static PyObject *const_str_plain_BulgarianLangModel;
static PyObject *const_str_digest_f162f0e48afd9bd30970a540cb56b630;
extern PyObject *const_str_plain_char_to_order_map;
extern PyObject *const_str_digest_79273f970a414aa39a32d8f0b259063b;
static PyObject *const_float_0_969392;
extern PyObject *const_str_plain_Latin5BulgarianModel;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_Bulgairan;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_Bulgarian;
static PyObject *const_tuple_36b7ecdab49c9829602e64b169986871_tuple;
extern PyObject *const_str_plain_Win1251BulgarianModel;
static PyObject *const_tuple_33562c24091b0ac3cbee9a55801943b1_tuple;
extern PyObject *const_str_digest_aada818c73a52b8f999cbecf8cef2e77;
extern PyObject *const_str_plain_typical_positive_ratio;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_ad282e6fb1d834749d7f838b496e3813;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_d12d0d38133deb374cda3f2e99175f9b_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 268553 ], 1285 );
    const_str_plain_Latin5_BulgarianCharToOrderMap = UNSTREAM_STRING_ASCII( &constant_bin[ 269838 ], 30, 1 );
    const_str_plain_win1251BulgarianCharToOrderMap = UNSTREAM_STRING_ASCII( &constant_bin[ 269868 ], 30, 1 );
    const_str_digest_d5ffc5d3d4577ce00b154e8a3a81f139 = UNSTREAM_STRING_ASCII( &constant_bin[ 269898 ], 26, 0 );
    const_str_plain_BulgarianLangModel = UNSTREAM_STRING_ASCII( &constant_bin[ 269924 ], 18, 1 );
    const_str_digest_f162f0e48afd9bd30970a540cb56b630 = UNSTREAM_STRING_ASCII( &constant_bin[ 269942 ], 35, 0 );
    const_float_0_969392 = UNSTREAM_FLOAT( &constant_bin[ 269977 ] );
    const_str_plain_Bulgairan = UNSTREAM_STRING_ASCII( &constant_bin[ 269985 ], 9, 1 );
    const_str_plain_Bulgarian = UNSTREAM_STRING_ASCII( &constant_bin[ 269845 ], 9, 1 );
    const_tuple_36b7ecdab49c9829602e64b169986871_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 269994 ], 20485 );
    const_tuple_33562c24091b0ac3cbee9a55801943b1_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 290479 ], 1285 );
    const_str_digest_ad282e6fb1d834749d7f838b496e3813 = UNSTREAM_STRING_ASCII( &constant_bin[ 291764 ], 29, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$langbulgarianmodel( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b55cf82b4b20be07bd1cc5e2a3846497;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_ad282e6fb1d834749d7f838b496e3813 );
    codeobj_b55cf82b4b20be07bd1cc5e2a3846497 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_f162f0e48afd9bd30970a540cb56b630, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$langbulgarianmodel =
{
    PyModuleDef_HEAD_INIT,
    "chardet.langbulgarianmodel",
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

MOD_INIT_DECL( chardet$langbulgarianmodel )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$langbulgarianmodel );
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
    puts("chardet.langbulgarianmodel: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.langbulgarianmodel: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.langbulgarianmodel: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initchardet$langbulgarianmodel" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$langbulgarianmodel = Py_InitModule4(
        "chardet.langbulgarianmodel",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_chardet$langbulgarianmodel = PyModule_Create( &mdef_chardet$langbulgarianmodel );
#endif

    moduledict_chardet$langbulgarianmodel = MODULE_DICT( module_chardet$langbulgarianmodel );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_chardet$langbulgarianmodel,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_chardet$langbulgarianmodel,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$langbulgarianmodel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$langbulgarianmodel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_chardet$langbulgarianmodel );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_d5ffc5d3d4577ce00b154e8a3a81f139, module_chardet$langbulgarianmodel );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_b55cf82b4b20be07bd1cc5e2a3846497;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_b55cf82b4b20be07bd1cc5e2a3846497 = MAKE_MODULE_FRAME( codeobj_b55cf82b4b20be07bd1cc5e2a3846497, module_chardet$langbulgarianmodel );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_b55cf82b4b20be07bd1cc5e2a3846497 );
    assert( Py_REFCNT( frame_b55cf82b4b20be07bd1cc5e2a3846497 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___spec__ );

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
    RESTORE_FRAME_EXCEPTION( frame_b55cf82b4b20be07bd1cc5e2a3846497 );
#endif
    popFrameStack();

    assertFrameObject( frame_b55cf82b4b20be07bd1cc5e2a3846497 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b55cf82b4b20be07bd1cc5e2a3846497 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b55cf82b4b20be07bd1cc5e2a3846497, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b55cf82b4b20be07bd1cc5e2a3846497->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b55cf82b4b20be07bd1cc5e2a3846497, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_tuple_33562c24091b0ac3cbee9a55801943b1_tuple;
        UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_Latin5_BulgarianCharToOrderMap, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_tuple_d12d0d38133deb374cda3f2e99175f9b_tuple;
        UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_win1251BulgarianCharToOrderMap, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_tuple_36b7ecdab49c9829602e64b169986871_tuple;
        UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_BulgarianLangModel, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_dict_key_1 = const_str_plain_char_to_order_map;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_Latin5_BulgarianCharToOrderMap );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin5_BulgarianCharToOrderMap );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_dict_value_1 = tmp_mvar_value_3;
        tmp_assign_source_7 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem( tmp_assign_source_7, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_precedence_matrix;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_BulgarianLangModel );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BulgarianLangModel );
        }

        CHECK_OBJECT( tmp_mvar_value_4 );
        tmp_dict_value_2 = tmp_mvar_value_4;
        tmp_res = PyDict_SetItem( tmp_assign_source_7, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_typical_positive_ratio;
        tmp_dict_value_3 = const_float_0_969392;
        tmp_res = PyDict_SetItem( tmp_assign_source_7, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_keep_english_letter;
        tmp_dict_value_4 = Py_False;
        tmp_res = PyDict_SetItem( tmp_assign_source_7, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_charset_name;
        tmp_dict_value_5 = const_str_digest_aada818c73a52b8f999cbecf8cef2e77;
        tmp_res = PyDict_SetItem( tmp_assign_source_7, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_language;
        tmp_dict_value_6 = const_str_plain_Bulgairan;
        tmp_res = PyDict_SetItem( tmp_assign_source_7, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        UPDATE_STRING_DICT1( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_Latin5BulgarianModel, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        tmp_dict_key_7 = const_str_plain_char_to_order_map;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_win1251BulgarianCharToOrderMap );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win1251BulgarianCharToOrderMap );
        }

        CHECK_OBJECT( tmp_mvar_value_5 );
        tmp_dict_value_7 = tmp_mvar_value_5;
        tmp_assign_source_8 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_precedence_matrix;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_BulgarianLangModel );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BulgarianLangModel );
        }

        CHECK_OBJECT( tmp_mvar_value_6 );
        tmp_dict_value_8 = tmp_mvar_value_6;
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_str_plain_typical_positive_ratio;
        tmp_dict_value_9 = const_float_0_969392;
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_10 = const_str_plain_keep_english_letter;
        tmp_dict_value_10 = Py_False;
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_10, tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_11 = const_str_plain_charset_name;
        tmp_dict_value_11 = const_str_digest_79273f970a414aa39a32d8f0b259063b;
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_11, tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_12 = const_str_plain_language;
        tmp_dict_value_12 = const_str_plain_Bulgarian;
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_12, tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        UPDATE_STRING_DICT1( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_Win1251BulgarianModel, tmp_assign_source_8 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_chardet$langbulgarianmodel );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
